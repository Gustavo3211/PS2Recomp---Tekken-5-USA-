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

// Function: sub_0032DF50
// Address: 0x32df50 - 0x32df80
void sub_0032DF50_0x32df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF50_0x32df50");
#endif

    ctx->pc = 0x32df50u;

    // 0x32df50: 0x8f82c5f0  lw          $v0, -0x3A10($gp)
    ctx->pc = 0x32df50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952432)));
    // 0x32df54: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x32df54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32df58: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x32df58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32df5c: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x32df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32df60: 0xf85f0030  sqc2        $vf31, 0x30($v0)
    ctx->pc = 0x32df60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32df64: 0x8f83c5f0  lw          $v1, -0x3A10($gp)
    ctx->pc = 0x32df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952432)));
    // 0x32df68: 0x8f82c5f8  lw          $v0, -0x3A08($gp)
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952440)));
    // 0x32df6c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x32df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x32df70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32df74: 0xaf83c5f0  sw          $v1, -0x3A10($gp)
    ctx->pc = 0x32df74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952432), GPR_U32(ctx, 3));
    // 0x32df78: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF78u;
        // 0x32df7c: 0xaf82c5f8  sw          $v0, -0x3A08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF80u;
}
