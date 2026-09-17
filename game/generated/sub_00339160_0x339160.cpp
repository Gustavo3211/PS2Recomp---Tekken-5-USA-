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

// Function: sub_00339160
// Address: 0x339160 - 0x3391f0
void sub_00339160_0x339160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339160_0x339160");
#endif

    ctx->pc = 0x339160u;

    // 0x339160: 0x2482fc80  addiu       $v0, $a0, -0x380
    ctx->pc = 0x339160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966400));
    // 0x339164: 0xd898ffc0  lqc2        $vf24, -0x40($a0)
    ctx->pc = 0x339164u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967232)));
    // 0x339168: 0xd899ffd0  lqc2        $vf25, -0x30($a0)
    ctx->pc = 0x339168u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967248)));
    // 0x33916c: 0xd89affe0  lqc2        $vf26, -0x20($a0)
    ctx->pc = 0x33916cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x339170: 0xd89bfff0  lqc2        $vf27, -0x10($a0)
    ctx->pc = 0x339170u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x339174: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x339174u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x339178: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x339178u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33917c: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x33917cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339180: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x339180u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x339184: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x339184u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x339188: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x339188u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x33918c: 0x4bfcc1bc  vmulax.xyzw $ACC, $vf24, $vf28x
    ctx->pc = 0x33918cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x339190: 0x4bfcc8bd  vmadday.xyzw $ACC, $vf25, $vf28y
    ctx->pc = 0x339190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x339194: 0x4bfcd04a  vmaddz.xyzw $vf1, $vf26, $vf28z
    ctx->pc = 0x339194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339198: 0x4bfdc1bc  vmulax.xyzw $ACC, $vf24, $vf29x
    ctx->pc = 0x339198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33919c: 0x4bfdc8bd  vmadday.xyzw $ACC, $vf25, $vf29y
    ctx->pc = 0x33919cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391a0: 0x4bfdd08a  vmaddz.xyzw $vf2, $vf26, $vf29z
    ctx->pc = 0x3391a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3391a4: 0x4bfec1bc  vmulax.xyzw $ACC, $vf24, $vf30x
    ctx->pc = 0x3391a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391a8: 0x4bfec8bd  vmadday.xyzw $ACC, $vf25, $vf30y
    ctx->pc = 0x3391a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391ac: 0x4bfed0ca  vmaddz.xyzw $vf3, $vf26, $vf30z
    ctx->pc = 0x3391acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3391b0: 0x4bffc1bc  vmulax.xyzw $ACC, $vf24, $vf31x
    ctx->pc = 0x3391b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391b4: 0x4bffc8bd  vmadday.xyzw $ACC, $vf25, $vf31y
    ctx->pc = 0x3391b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391b8: 0x4bffd0be  vmaddaz.xyzw $ACC, $vf26, $vf31z
    ctx->pc = 0x3391b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3391bc: 0x4bffdecb  vmaddw.xyzw $vf27, $vf27, $vf31w
    ctx->pc = 0x3391bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x3391c0: 0x4bf80b3c  vmove.xyzw  $vf24, $vf1
    ctx->pc = 0x3391c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x3391c4: 0x4bf9133c  vmove.xyzw  $vf25, $vf2
    ctx->pc = 0x3391c4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x3391c8: 0x4bfa1b3c  vmove.xyzw  $vf26, $vf3
    ctx->pc = 0x3391c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x3391cc: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x3391ccu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x3391d0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3391d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3391d4: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x3391d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3391d8: 0xf8990010  sqc2        $vf25, 0x10($a0)
    ctx->pc = 0x3391d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x3391dc: 0xf89a0020  sqc2        $vf26, 0x20($a0)
    ctx->pc = 0x3391dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x3391e0: 0xf89b0030  sqc2        $vf27, 0x30($a0)
    ctx->pc = 0x3391e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x3391e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3391E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3391E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3391ECu;
    // 0x3391ec: 0x0  nop
    ctx->pc = 0x3391ecu;
    // NOP
    ctx->pc = 0x3391f0u;
}
