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

// Function: sub_003227B0
// Address: 0x3227b0 - 0x322818
void sub_003227B0_0x3227b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003227B0_0x3227b0");
#endif

    ctx->pc = 0x3227b0u;

    // 0x3227b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3227b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3227b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3227b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3227b8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x3227b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x3227bc: 0x3403d808  ori         $v1, $zero, 0xD808
    ctx->pc = 0x3227bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55304);
    // 0x3227c0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x3227c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x3227c4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3227c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3227c8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3227c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3227cc: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x3227ccu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x3227d0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3227d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3227d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3227d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3227d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3227d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3227dc: 0xd8780100  lqc2        $vf24, 0x100($v1)
    ctx->pc = 0x3227dcu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400580u));
    // 0x3227e0: 0xd8790110  lqc2        $vf25, 0x110($v1)
    ctx->pc = 0x3227e0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400590u));
    // 0x3227e4: 0xd87a0120  lqc2        $vf26, 0x120($v1)
    ctx->pc = 0x3227e4u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4005A0u));
    // 0x3227e8: 0xd87b0130  lqc2        $vf27, 0x130($v1)
    ctx->pc = 0x3227e8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4005B0u));
    // 0x3227ec: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x3227ecu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x3227f0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3227f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3227f4: 0xf85c0010  sqc2        $vf28, 0x10($v0)
    ctx->pc = 0x3227f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3227f8: 0xf85d0020  sqc2        $vf29, 0x20($v0)
    ctx->pc = 0x3227f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3227fc: 0xf85e0030  sqc2        $vf30, 0x30($v0)
    ctx->pc = 0x3227fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x322800: 0xf85f0040  sqc2        $vf31, 0x40($v0)
    ctx->pc = 0x322800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322804: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x322804u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x322808: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322808u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32280c: 0x3e00008  jr          $ra
    ctx->pc = 0x32280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32280Cu;
        // 0x322810: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322814u;
    // 0x322814: 0x0  nop
    ctx->pc = 0x322814u;
    // NOP
    ctx->pc = 0x322818u;
}
