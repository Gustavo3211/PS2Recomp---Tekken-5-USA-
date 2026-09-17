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

// Function: sub_00339298
// Address: 0x339298 - 0x339350
void sub_00339298_0x339298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339298_0x339298");
#endif

    switch (ctx->pc) {
        case 0x33932cu: goto label_33932c;
        default: break;
    }

    ctx->pc = 0x339298u;

    // 0x339298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33929c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3392a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3392a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3392a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3392a8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3392a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392ac: 0x2602fc30  addiu       $v0, $s0, -0x3D0
    ctx->pc = 0x3392acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966320));
    // 0x3392b0: 0xda18fff0  lqc2        $vf24, -0x10($s0)
    ctx->pc = 0x3392b0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x3392b4: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x3392b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3392b8: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x3392b8u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x3392bc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3392bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3392c0: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x3392c0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3392c4: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x3392c4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3392c8: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x3392c8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3392cc: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x3392ccu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3392d0: 0x4be1e33d  vmr32.xyzw  $vf1, $vf28
    ctx->pc = 0x3392d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3392d4: 0x4be2eb3d  vmr32.xyzw  $vf2, $vf29
    ctx->pc = 0x3392d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3392d8: 0x4be3f33d  vmr32.xyzw  $vf3, $vf30
    ctx->pc = 0x3392d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3392dc: 0x4be4fb3d  vmr32.xyzw  $vf4, $vf31
    ctx->pc = 0x3392dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3392e0: 0x4b1d0b3c  vmove.x     $vf29, $vf1
    ctx->pc = 0x3392e0u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x3392e4: 0x4a9e133c  vmove.y     $vf30, $vf2
    ctx->pc = 0x3392e4u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x3392e8: 0x4a5f1b3c  vmove.z     $vf31, $vf3
    ctx->pc = 0x3392e8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x3392ec: 0x4a3c233c  vmove.w     $vf28, $vf4
    ctx->pc = 0x3392ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x3392f0: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x3392f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3392f4: 0x4be2133d  vmr32.xyzw  $vf2, $vf2
    ctx->pc = 0x3392f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3392f8: 0x4be31b3d  vmr32.xyzw  $vf3, $vf3
    ctx->pc = 0x3392f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3392fc: 0x4be4233d  vmr32.xyzw  $vf4, $vf4
    ctx->pc = 0x3392fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x339300: 0x4b1e0b3c  vmove.x     $vf30, $vf1
    ctx->pc = 0x339300u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x339304: 0x4a9f133c  vmove.y     $vf31, $vf2
    ctx->pc = 0x339304u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x339308: 0x4a5c1b3c  vmove.z     $vf28, $vf3
    ctx->pc = 0x339308u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x33930c: 0x4a3d233c  vmove.w     $vf29, $vf4
    ctx->pc = 0x33930cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x339310: 0x4b1f0b3d  vmr32.x     $vf31, $vf1
    ctx->pc = 0x339310u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x339314: 0x4a9c133d  vmr32.y     $vf28, $vf2
    ctx->pc = 0x339314u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x339318: 0x4a5d1b3d  vmr32.z     $vf29, $vf3
    ctx->pc = 0x339318u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x33931c: 0x4a3e233d  vmr32.w     $vf30, $vf4
    ctx->pc = 0x33931cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x339320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x339320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339324: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x339324u;
    SET_GPR_U32(ctx, 31, 0x33932Cu);
    ctx->pc = 0x339328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339324u;
    // 0x339328: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x339324u, 0x33932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33932Cu;
label_33932c:
    // 0x33932c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x33932cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x339330: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x339330u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x339334: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x339334u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339338: 0xfa180000  sqc2        $vf24, 0x0($s0)
    ctx->pc = 0x339338u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x33933c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33933cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339340: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339344: 0x3e00008  jr          $ra
    ctx->pc = 0x339344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339344u;
        // 0x339348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33934Cu;
    // 0x33934c: 0x0  nop
    ctx->pc = 0x33934cu;
    // NOP
    ctx->pc = 0x339350u;
}
