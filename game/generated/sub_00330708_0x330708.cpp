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

// Function: sub_00330708
// Address: 0x330708 - 0x330818
void sub_00330708_0x330708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330708_0x330708");
#endif

    ctx->pc = 0x330708u;

    // 0x330708: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x330708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33070c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x33070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x330710: 0xd8580140  lqc2        $vf24, 0x140($v0)
    ctx->pc = 0x330710u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x4005C0u));
    // 0x330714: 0xd8590150  lqc2        $vf25, 0x150($v0)
    ctx->pc = 0x330714u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x4005D0u));
    // 0x330718: 0xd85a0160  lqc2        $vf26, 0x160($v0)
    ctx->pc = 0x330718u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4005E0u));
    // 0x33071c: 0xd85b0170  lqc2        $vf27, 0x170($v0)
    ctx->pc = 0x33071cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4005F0u));
    // 0x330720: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x330720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x330724: 0xf8990010  sqc2        $vf25, 0x10($a0)
    ctx->pc = 0x330724u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x330728: 0xf89a0020  sqc2        $vf26, 0x20($a0)
    ctx->pc = 0x330728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x33072c: 0xf89b0030  sqc2        $vf27, 0x30($a0)
    ctx->pc = 0x33072cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x330730: 0x3e00008  jr          $ra
    ctx->pc = 0x330730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330738u;
    // 0x330738: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x330738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33073c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33073cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330740: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x330740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x330744: 0xd85803c0  lqc2        $vf24, 0x3C0($v0)
    ctx->pc = 0x330744u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400840u));
    // 0x330748: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x330748u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x33074c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x330750: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x330750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x330754: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x330754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x330758: 0xd85803e0  lqc2        $vf24, 0x3E0($v0)
    ctx->pc = 0x330758u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400860u));
    // 0x33075c: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x33075cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x330760: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x330760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x330764: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330768: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x330768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x33076c: 0xd8580340  lqc2        $vf24, 0x340($v0)
    ctx->pc = 0x33076cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x4007C0u));
    // 0x330770: 0xd8590350  lqc2        $vf25, 0x350($v0)
    ctx->pc = 0x330770u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x4007D0u));
    // 0x330774: 0xd85a0360  lqc2        $vf26, 0x360($v0)
    ctx->pc = 0x330774u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4007E0u));
    // 0x330778: 0xd85b0370  lqc2        $vf27, 0x370($v0)
    ctx->pc = 0x330778u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4007F0u));
    // 0x33077c: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x33077cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x330780: 0xf8790010  sqc2        $vf25, 0x10($v1)
    ctx->pc = 0x330780u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x330784: 0xf87a0020  sqc2        $vf26, 0x20($v1)
    ctx->pc = 0x330784u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x330788: 0xf87b0030  sqc2        $vf27, 0x30($v1)
    ctx->pc = 0x330788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x33078c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x33078cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x330790: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x330790u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x330794: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x330794u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330798: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x330798u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33079c: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x33079cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3307a0: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x3307a0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3307a4: 0x4be1e33d  vmr32.xyzw  $vf1, $vf28
    ctx->pc = 0x3307a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3307a8: 0x4be2eb3d  vmr32.xyzw  $vf2, $vf29
    ctx->pc = 0x3307a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3307ac: 0x4be3f33d  vmr32.xyzw  $vf3, $vf30
    ctx->pc = 0x3307acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3307b0: 0x4be4fb3d  vmr32.xyzw  $vf4, $vf31
    ctx->pc = 0x3307b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3307b4: 0x4b1d0b3c  vmove.x     $vf29, $vf1
    ctx->pc = 0x3307b4u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x3307b8: 0x4a9e133c  vmove.y     $vf30, $vf2
    ctx->pc = 0x3307b8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x3307bc: 0x4a5f1b3c  vmove.z     $vf31, $vf3
    ctx->pc = 0x3307bcu;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x3307c0: 0x4a3c233c  vmove.w     $vf28, $vf4
    ctx->pc = 0x3307c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x3307c4: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x3307c4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3307c8: 0x4be2133d  vmr32.xyzw  $vf2, $vf2
    ctx->pc = 0x3307c8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3307cc: 0x4be31b3d  vmr32.xyzw  $vf3, $vf3
    ctx->pc = 0x3307ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3307d0: 0x4be4233d  vmr32.xyzw  $vf4, $vf4
    ctx->pc = 0x3307d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3307d4: 0x4b1e0b3c  vmove.x     $vf30, $vf1
    ctx->pc = 0x3307d4u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x3307d8: 0x4a9f133c  vmove.y     $vf31, $vf2
    ctx->pc = 0x3307d8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x3307dc: 0x4a5c1b3c  vmove.z     $vf28, $vf3
    ctx->pc = 0x3307dcu;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x3307e0: 0x4a3d233c  vmove.w     $vf29, $vf4
    ctx->pc = 0x3307e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x3307e4: 0x4b1f0b3d  vmr32.x     $vf31, $vf1
    ctx->pc = 0x3307e4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3307e8: 0x4a9c133d  vmr32.y     $vf28, $vf2
    ctx->pc = 0x3307e8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3307ec: 0x4a5d1b3d  vmr32.z     $vf29, $vf3
    ctx->pc = 0x3307ecu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3307f0: 0x4a3e233d  vmr32.w     $vf30, $vf4
    ctx->pc = 0x3307f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3307f4: 0xf89c0020  sqc2        $vf28, 0x20($a0)
    ctx->pc = 0x3307f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3307f8: 0xf89d0030  sqc2        $vf29, 0x30($a0)
    ctx->pc = 0x3307f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3307fc: 0xf89e0040  sqc2        $vf30, 0x40($a0)
    ctx->pc = 0x3307fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x330800: 0xf89f0050  sqc2        $vf31, 0x50($a0)
    ctx->pc = 0x330800u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x330804: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x330804u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x330808: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x330808u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33080c: 0x3e00008  jr          $ra
    ctx->pc = 0x33080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33080Cu;
        // 0x330810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330814u;
    // 0x330814: 0x0  nop
    ctx->pc = 0x330814u;
    // NOP
    ctx->pc = 0x330818u;
}
