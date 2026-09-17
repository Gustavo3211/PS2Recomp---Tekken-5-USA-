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

// Function: sub_002E3FC8
// Address: 0x2e3fc8 - 0x2e3ff0
void sub_002E3FC8_0x2e3fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3FC8_0x2e3fc8");
#endif

    switch (ctx->pc) {
        case 0x2e3fe4u: goto label_2e3fe4;
        default: break;
    }

    ctx->pc = 0x2e3fc8u;

    // 0x2e3fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3fd0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2e3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e3fd4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2e3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2e3fd8: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x2e3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e3fdc: 0xc0b8e44  jal         func_2E3910
    ctx->pc = 0x2E3FDCu;
    SET_GPR_U32(ctx, 31, 0x2E3FE4u);
    ctx->pc = 0x2E3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FDCu;
    // 0x2e3fe0: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3910u, 0x2E3FDCu, 0x2E3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FE4u;
label_2e3fe4:
    // 0x2e3fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FE8u;
        // 0x2e3fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3FF0u;
}
