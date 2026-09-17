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

// Function: sub_0033C4A0
// Address: 0x33c4a0 - 0x33c4d8
void sub_0033C4A0_0x33c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C4A0_0x33c4a0");
#endif

    switch (ctx->pc) {
        case 0x33c4c0u: goto label_33c4c0;
        default: break;
    }

    ctx->pc = 0x33c4a0u;

    // 0x33c4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c4b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33c4b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33c4b8: 0xc0dd84a  jal         func_376128
    ctx->pc = 0x33C4B8u;
    SET_GPR_U32(ctx, 31, 0x33C4C0u);
    ctx->pc = 0x33C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4B8u;
    // 0x33c4bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376128u, 0x33C4B8u, 0x33C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4C0u;
label_33c4c0:
    // 0x33c4c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c4c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33c4c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33c4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x33C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4D0u;
        // 0x33c4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C4D8u;
}
