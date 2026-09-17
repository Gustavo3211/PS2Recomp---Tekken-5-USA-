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

// Function: sub_0022AB90
// Address: 0x22ab90 - 0x22abb0
void sub_0022AB90_0x22ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AB90_0x22ab90");
#endif

    switch (ctx->pc) {
        case 0x22aba4u: goto label_22aba4;
        default: break;
    }

    ctx->pc = 0x22ab90u;

    // 0x22ab90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ab94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ab9c: 0xc091630  jal         func_2458C0
    ctx->pc = 0x22AB9Cu;
    SET_GPR_U32(ctx, 31, 0x22ABA4u);
    ctx->pc = 0x22ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB9Cu;
    // 0x22aba0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2458C0u, 0x22AB9Cu, 0x22ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABA4u;
label_22aba4:
    // 0x22aba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABA8u;
        // 0x22abac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ABB0u;
}
