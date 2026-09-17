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

// Function: sub_00126AC0
// Address: 0x126ac0 - 0x126af8
void sub_00126AC0_0x126ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126AC0_0x126ac0");
#endif

    switch (ctx->pc) {
        case 0x126ad0u: goto label_126ad0;
        default: break;
    }

    ctx->pc = 0x126ac0u;

    // 0x126ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126ac8: 0xc048762  jal         func_121D88
    ctx->pc = 0x126AC8u;
    SET_GPR_U32(ctx, 31, 0x126AD0u);
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126AC8u, 0x126AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AD0u;
label_126ad0:
    // 0x126ad0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126adc: 0xdc850020  ld          $a1, 0x20($a0)
    ctx->pc = 0x126adcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x126ae0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x126ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ae4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x126ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x126ae8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x126ae8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x126aec: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x126aecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x126af0: 0x3e00008  jr          $ra
    ctx->pc = 0x126AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF0u;
        // 0x126af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126AF8u;
}
