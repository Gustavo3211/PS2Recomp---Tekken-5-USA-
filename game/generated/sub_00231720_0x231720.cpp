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

// Function: sub_00231720
// Address: 0x231720 - 0x231750
void sub_00231720_0x231720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231720_0x231720");
#endif

    ctx->pc = 0x231720u;

    // 0x231720: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x231720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x231724: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x231724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231728: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x231728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8880u));
    // 0x23172c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x231730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231734: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231734u;
    {
        const bool branch_taken_0x231734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x231734) {
            ctx->pc = 0x231744u;
            goto label_231744;
        }
    }
    ctx->pc = 0x23173Cu;
    // 0x23173c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231744:
    // 0x231744: 0x3e00008  jr          $ra
    ctx->pc = 0x231744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23174Cu;
    // 0x23174c: 0x0  nop
    ctx->pc = 0x23174cu;
    // NOP
    ctx->pc = 0x231750u;
}
