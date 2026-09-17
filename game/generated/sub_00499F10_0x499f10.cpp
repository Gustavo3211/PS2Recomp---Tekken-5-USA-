#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499F10
// Address: 0x499f10 - 0x499f30
void sub_00499F10_0x499f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499F10_0x499f10");
#endif

    switch (ctx->pc) {
        case 0x499f20u: goto label_499f20;
        default: break;
    }

    ctx->pc = 0x499f10u;

    // 0x499f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499f18: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x499F18u;
    SET_GPR_U32(ctx, 31, 0x499F20u);
    ctx->pc = 0x499F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F18u;
    // 0x499f1c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x499F18u, 0x499F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F20u;
label_499f20:
    // 0x499f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499f24: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x499f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x499f28: 0x812413e  j           func_4904F8
    ctx->pc = 0x499F28u;
    ctx->pc = 0x499F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F28u;
    // 0x499f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x499F30u;
}
