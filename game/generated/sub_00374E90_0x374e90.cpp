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

// Function: sub_00374E90
// Address: 0x374e90 - 0x374eb0
void sub_00374E90_0x374e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374E90_0x374e90");
#endif

    switch (ctx->pc) {
        case 0x374ea0u: goto label_374ea0;
        default: break;
    }

    ctx->pc = 0x374e90u;

    // 0x374e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374e98: 0xc0d0280  jal         func_340A00
    ctx->pc = 0x374E98u;
    SET_GPR_U32(ctx, 31, 0x374EA0u);
    ctx->pc = 0x374E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E98u;
    // 0x374e9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A00u, 0x374E98u, 0x374EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EA0u;
label_374ea0:
    // 0x374ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x374EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EA4u;
        // 0x374ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374EACu;
    // 0x374eac: 0x0  nop
    ctx->pc = 0x374eacu;
    // NOP
    ctx->pc = 0x374eb0u;
}
