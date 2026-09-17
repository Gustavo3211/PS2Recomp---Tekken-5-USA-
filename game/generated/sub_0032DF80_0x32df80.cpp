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

// Function: sub_0032DF80
// Address: 0x32df80 - 0x32dfb0
void sub_0032DF80_0x32df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF80_0x32df80");
#endif

    ctx->pc = 0x32df80u;

    // 0x32df80: 0x8f83c5f8  lw          $v1, -0x3A08($gp)
    ctx->pc = 0x32df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952440)));
    // 0x32df84: 0x8f82c5f0  lw          $v0, -0x3A10($gp)
    ctx->pc = 0x32df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952432)));
    // 0x32df88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32df8c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x32df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x32df90: 0xaf83c5f8  sw          $v1, -0x3A08($gp)
    ctx->pc = 0x32df90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952440), GPR_U32(ctx, 3));
    // 0x32df94: 0xaf82c5f0  sw          $v0, -0x3A10($gp)
    ctx->pc = 0x32df94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952432), GPR_U32(ctx, 2));
    // 0x32df98: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x32df98u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32df9c: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x32df9cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32dfa0: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x32dfa0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32dfa4: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x32dfa4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32dfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x32DFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DFB0u;
}
