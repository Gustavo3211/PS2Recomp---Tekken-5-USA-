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

// Function: sub_0048CF00
// Address: 0x48cf00 - 0x48cf40
void sub_0048CF00_0x48cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CF00_0x48cf00");
#endif

    switch (ctx->pc) {
        case 0x48cf20u: goto label_48cf20;
        case 0x48cf28u: goto label_48cf28;
        default: break;
    }

    ctx->pc = 0x48cf00u;

    // 0x48cf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48cf04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cf08: 0x3c10007e  lui         $s0, 0x7E
    ctx->pc = 0x48cf08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)126 << 16));
    // 0x48cf0c: 0x2610b240  addiu       $s0, $s0, -0x4DC0
    ctx->pc = 0x48cf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947392));
    // 0x48cf10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48cf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48cf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf18: 0xc1233ae  jal         func_48CEB8
    ctx->pc = 0x48CF18u;
    SET_GPR_U32(ctx, 31, 0x48CF20u);
    ctx->pc = 0x48CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CF18u;
    // 0x48cf1c: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CEB8u, 0x48CF18u, 0x48CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CF20u;
label_48cf20:
    // 0x48cf20: 0xc1233ae  jal         func_48CEB8
    ctx->pc = 0x48CF20u;
    SET_GPR_U32(ctx, 31, 0x48CF28u);
    ctx->pc = 0x48CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CF20u;
    // 0x48cf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CEB8u, 0x48CF20u, 0x48CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CF28u;
label_48cf28:
    // 0x48cf28: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x48cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x48cf2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48cf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48cf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cf34: 0x81233ae  j           func_48CEB8
    ctx->pc = 0x48CF34u;
    ctx->pc = 0x48CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CF34u;
    // 0x48cf38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CEB8u;
    sub_0048CEB8_0x48ceb8(rdram, ctx, runtime); return;
    ctx->pc = 0x48CF3Cu;
    // 0x48cf3c: 0x0  nop
    ctx->pc = 0x48cf3cu;
    // NOP
    ctx->pc = 0x48cf40u;
}
