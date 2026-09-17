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

// Function: sub_0032BC80
// Address: 0x32bc80 - 0x32bcb0
void sub_0032BC80_0x32bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BC80_0x32bc80");
#endif

    ctx->pc = 0x32bc80u;

    // 0x32bc80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32bc84: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32bc88: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x32bc88u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400480u));
    // 0x32bc8c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x32bc8cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400490u));
    // 0x32bc90: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x32bc90u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4004A0u));
    // 0x32bc94: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x32bc94u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4004B0u));
    // 0x32bc98: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x32bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x32bc9c: 0xf8990010  sqc2        $vf25, 0x10($a0)
    ctx->pc = 0x32bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x32bca0: 0xf89a0020  sqc2        $vf26, 0x20($a0)
    ctx->pc = 0x32bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x32bca4: 0xf89b0030  sqc2        $vf27, 0x30($a0)
    ctx->pc = 0x32bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x32bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x32BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BCB0u;
}
