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

// Function: sub_00212680
// Address: 0x212680 - 0x2126b8
void sub_00212680_0x212680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212680_0x212680");
#endif

    ctx->pc = 0x212680u;

    // 0x212680: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x212680u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212684: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x212684u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x212688: 0x4bd039e8  vadd.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x212688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x21268c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21268cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212690: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x212690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x212694: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x212694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x212698: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x212698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x21269c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x21269cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2126a0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2126a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2126a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2126A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126A4u;
        // 0x2126a8: 0xf8870030  sqc2        $vf7, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126ACu;
    // 0x2126ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2126ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126B4u;
    // 0x2126b4: 0x0  nop
    ctx->pc = 0x2126b4u;
    // NOP
    ctx->pc = 0x2126b8u;
}
