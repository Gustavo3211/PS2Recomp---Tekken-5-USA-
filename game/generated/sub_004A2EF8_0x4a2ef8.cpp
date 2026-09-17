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

// Function: sub_004A2EF8
// Address: 0x4a2ef8 - 0x4a2f28
void sub_004A2EF8_0x4a2ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2EF8_0x4a2ef8");
#endif

    switch (ctx->pc) {
        case 0x4a2f08u: goto label_4a2f08;
        case 0x4a2f10u: goto label_4a2f10;
        default: break;
    }

    ctx->pc = 0x4a2ef8u;

    // 0x4a2ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a2f00: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x4A2F00u;
    SET_GPR_U32(ctx, 31, 0x4A2F08u);
    ctx->pc = 0x4A2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F00u;
    // 0x4a2f04: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x4A2F00u, 0x4A2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F08u;
label_4a2f08:
    // 0x4a2f08: 0xc124910  jal         func_492440
    ctx->pc = 0x4A2F08u;
    SET_GPR_U32(ctx, 31, 0x4A2F10u);
    ctx->pc = 0x4A2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F08u;
    // 0x4a2f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A2F08u, 0x4A2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F10u;
label_4a2f10:
    // 0x4a2f10: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x4a2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4a2f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f1c: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x4A2F1Cu;
    ctx->pc = 0x4A2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F1Cu;
    // 0x4a2f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A2F24u;
    // 0x4a2f24: 0x0  nop
    ctx->pc = 0x4a2f24u;
    // NOP
    ctx->pc = 0x4a2f28u;
}
