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

// Function: sub_003306D8
// Address: 0x3306d8 - 0x330708
void sub_003306D8_0x3306d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003306D8_0x3306d8");
#endif

    ctx->pc = 0x3306d8u;

    // 0x3306d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3306dc: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x3306dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x3306e0: 0xd8580100  lqc2        $vf24, 0x100($v0)
    ctx->pc = 0x3306e0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400580u));
    // 0x3306e4: 0xd8590110  lqc2        $vf25, 0x110($v0)
    ctx->pc = 0x3306e4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400590u));
    // 0x3306e8: 0xd85a0120  lqc2        $vf26, 0x120($v0)
    ctx->pc = 0x3306e8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4005A0u));
    // 0x3306ec: 0xd85b0130  lqc2        $vf27, 0x130($v0)
    ctx->pc = 0x3306ecu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4005B0u));
    // 0x3306f0: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x3306f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3306f4: 0xf8990010  sqc2        $vf25, 0x10($a0)
    ctx->pc = 0x3306f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x3306f8: 0xf89a0020  sqc2        $vf26, 0x20($a0)
    ctx->pc = 0x3306f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x3306fc: 0xf89b0030  sqc2        $vf27, 0x30($a0)
    ctx->pc = 0x3306fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x330700: 0x3e00008  jr          $ra
    ctx->pc = 0x330700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330708u;
}
