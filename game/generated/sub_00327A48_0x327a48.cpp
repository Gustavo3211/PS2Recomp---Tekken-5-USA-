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

// Function: sub_00327A48
// Address: 0x327a48 - 0x327a60
void sub_00327A48_0x327a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327A48_0x327a48");
#endif

    ctx->pc = 0x327a48u;

    // 0x327a48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x327a48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327a4c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x327a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x327a50: 0x4bc1bde8  vadd.xyz    $vf23, $vf23, $vf1
    ctx->pc = 0x327a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x327a54: 0x3e00008  jr          $ra
    ctx->pc = 0x327A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327A5Cu;
    // 0x327a5c: 0x0  nop
    ctx->pc = 0x327a5cu;
    // NOP
    ctx->pc = 0x327a60u;
}
