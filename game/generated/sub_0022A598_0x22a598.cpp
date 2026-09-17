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

// Function: sub_0022A598
// Address: 0x22a598 - 0x22a5d0
void sub_0022A598_0x22a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A598_0x22a598");
#endif

    switch (ctx->pc) {
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5bcu: goto label_22a5bc;
        default: break;
    }

    ctx->pc = 0x22a598u;

    // 0x22a598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a5a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22a5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22a5ac: 0xc08f3da  jal         func_23CF68
    ctx->pc = 0x22A5ACu;
    SET_GPR_U32(ctx, 31, 0x22A5B4u);
    ctx->pc = 0x22A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5ACu;
    // 0x22a5b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF68u, 0x22A5ACu, 0x22A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5B4u;
label_22a5b4:
    // 0x22a5b4: 0xc090a58  jal         func_242960
    ctx->pc = 0x22A5B4u;
    SET_GPR_U32(ctx, 31, 0x22A5BCu);
    ctx->pc = 0x22A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5B4u;
    // 0x22a5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242960u, 0x22A5B4u, 0x22A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5BCu;
label_22a5bc:
    // 0x22a5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a5c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C4u;
        // 0x22a5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A5CCu;
    // 0x22a5cc: 0x0  nop
    ctx->pc = 0x22a5ccu;
    // NOP
    ctx->pc = 0x22a5d0u;
}
