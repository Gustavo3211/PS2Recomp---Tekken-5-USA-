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

// Function: sub_0050A868
// Address: 0x50a868 - 0x50a890
void sub_0050A868_0x50a868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A868_0x50a868");
#endif

    switch (ctx->pc) {
        case 0x50a878u: goto label_50a878;
        default: break;
    }

    ctx->pc = 0x50a868u;

    // 0x50a868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a870: 0xc1427fa  jal         func_509FE8
    ctx->pc = 0x50A870u;
    SET_GPR_U32(ctx, 31, 0x50A878u);
    ctx->pc = 0x50A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A870u;
    // 0x50a874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509FE8u, 0x50A870u, 0x50A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A878u;
label_50a878:
    // 0x50a878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a87c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x50a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x50a880: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x50a880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50a884: 0x8144c5a  j           func_513168
    ctx->pc = 0x50A884u;
    ctx->pc = 0x50A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A884u;
    // 0x50a888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50A88Cu;
    // 0x50a88c: 0x0  nop
    ctx->pc = 0x50a88cu;
    // NOP
    ctx->pc = 0x50a890u;
}
