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

// Function: sub_00328688
// Address: 0x328688 - 0x3286a0
void sub_00328688_0x328688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328688_0x328688");
#endif

    ctx->pc = 0x328688u;

    // 0x328688: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x328688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32868c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32868cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x328690: 0x4bc1bde8  vadd.xyz    $vf23, $vf23, $vf1
    ctx->pc = 0x328690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x328694: 0x3e00008  jr          $ra
    ctx->pc = 0x328694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32869Cu;
    // 0x32869c: 0x0  nop
    ctx->pc = 0x32869cu;
    // NOP
    ctx->pc = 0x3286a0u;
}
