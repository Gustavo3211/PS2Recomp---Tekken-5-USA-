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

// Function: sub_001F38D8
// Address: 0x1f38d8 - 0x1f3908
void sub_001F38D8_0x1f38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F38D8_0x1f38d8");
#endif

    switch (ctx->pc) {
        case 0x1f38f8u: goto label_1f38f8;
        default: break;
    }

    ctx->pc = 0x1f38d8u;

    // 0x1f38d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f38d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f38dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f38e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f38e8: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x1f38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x1f38ec: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1f38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1f38f0: 0xc07ce16  jal         func_1F3858
    ctx->pc = 0x1F38F0u;
    SET_GPR_U32(ctx, 31, 0x1F38F8u);
    ctx->pc = 0x1F38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38F0u;
    // 0x1f38f4: 0xac6200bc  sw          $v0, 0xBC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3858u, 0x1F38F0u, 0x1F38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F38F8u;
label_1f38f8:
    // 0x1f38f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f38f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f38fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38FCu;
        // 0x1f3900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3904u;
    // 0x1f3904: 0x0  nop
    ctx->pc = 0x1f3904u;
    // NOP
    ctx->pc = 0x1f3908u;
}
