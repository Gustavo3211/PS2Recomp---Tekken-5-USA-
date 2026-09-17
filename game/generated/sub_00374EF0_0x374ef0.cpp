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

// Function: sub_00374EF0
// Address: 0x374ef0 - 0x374f10
void sub_00374EF0_0x374ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374EF0_0x374ef0");
#endif

    switch (ctx->pc) {
        case 0x374f00u: goto label_374f00;
        default: break;
    }

    ctx->pc = 0x374ef0u;

    // 0x374ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374ef8: 0xc0d0320  jal         func_340C80
    ctx->pc = 0x374EF8u;
    SET_GPR_U32(ctx, 31, 0x374F00u);
    ctx->pc = 0x374EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374EF8u;
    // 0x374efc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340C80u, 0x374EF8u, 0x374F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F00u;
label_374f00:
    // 0x374f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374f04: 0x3e00008  jr          $ra
    ctx->pc = 0x374F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F04u;
        // 0x374f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374F0Cu;
    // 0x374f0c: 0x0  nop
    ctx->pc = 0x374f0cu;
    // NOP
    ctx->pc = 0x374f10u;
}
