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

// Function: sub_002FD270
// Address: 0x2fd270 - 0x2fd398
void sub_002FD270_0x2fd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD270_0x2fd270");
#endif

    ctx->pc = 0x2fd270u;

    // 0x2fd270: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fd274: 0x11400046  beqz        $t2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2FD274u;
    {
        const bool branch_taken_0x2fd274 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd274) {
            ctx->pc = 0x2FD390u;
            goto label_2fd390;
        }
    }
    ctx->pc = 0x2FD27Cu;
    // 0x2fd27c: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x2fd27cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fd280: 0x11600043  beqz        $t3, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FD280u;
    {
        const bool branch_taken_0x2fd280 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd280) {
            ctx->pc = 0x2FD390u;
            goto label_2fd390;
        }
    }
    ctx->pc = 0x2FD288u;
    // 0x2fd288: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2fd288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fd28c: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2FD28Cu;
    {
        const bool branch_taken_0x2fd28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD28Cu;
        // 0x2fd290: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd28c) {
            ctx->pc = 0x2FD370u;
            goto label_2fd370;
        }
    }
    ctx->pc = 0x2FD294u;
    // 0x2fd294: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fd298: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FD298u;
    {
        const bool branch_taken_0x2fd298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD298u;
        // 0x2fd29c: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd298) {
            ctx->pc = 0x2FD2FCu;
            goto label_2fd2fc;
        }
    }
    ctx->pc = 0x2FD2A0u;
    // 0x2fd2a0: 0x79820000  lq          $v0, 0x0($t4)
    ctx->pc = 0x2fd2a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2fd2a4: 0x79830010  lq          $v1, 0x10($t4)
    ctx->pc = 0x2fd2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2fd2a8: 0x79840020  lq          $a0, 0x20($t4)
    ctx->pc = 0x2fd2a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2fd2ac: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x2fd2acu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fd2b0: 0x70623488  pextlw      $a2, $v1, $v0
    ctx->pc = 0x2fd2b0u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2fd2b4: 0x70623ca8  pextuw      $a3, $v1, $v0
    ctx->pc = 0x2fd2b4u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2fd2b8: 0x70a44488  pextlw      $t0, $a1, $a0
    ctx->pc = 0x2fd2b8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2fd2bc: 0x70a44ca8  pextuw      $t1, $a1, $a0
    ctx->pc = 0x2fd2bcu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2fd2c0: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x2fd2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x2fd2c4: 0x70c81ba9  pcpyud      $v1, $a2, $t0
    ctx->pc = 0x2fd2c4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2fd2c8: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x2fd2c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x2fd2cc: 0xd9870030  lqc2        $vf7, 0x30($t4)
    ctx->pc = 0x2fd2ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x2fd2d0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x2fd2d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fd2d4: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x2fd2d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2fd2d8: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x2fd2d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2fd2dc: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2fd2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fd2e0: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2fd2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fd2e4: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2fd2e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fd2e8: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2fd2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fd2ec: 0x7da20000  sq          $v0, 0x0($t5)
    ctx->pc = 0x2fd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 2));
    // 0x2fd2f0: 0x7da30010  sq          $v1, 0x10($t5)
    ctx->pc = 0x2fd2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 3));
    // 0x2fd2f4: 0x7da40020  sq          $a0, 0x20($t5)
    ctx->pc = 0x2fd2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 4));
    // 0x2fd2f8: 0xf9a70030  sqc2        $vf7, 0x30($t5)
    ctx->pc = 0x2fd2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_2fd2fc:
    // 0x2fd2fc: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x2fd2fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2fd300: 0xd9650010  lqc2        $vf5, 0x10($t3)
    ctx->pc = 0x2fd300u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2fd304: 0xd9660020  lqc2        $vf6, 0x20($t3)
    ctx->pc = 0x2fd304u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x2fd308: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x2fd308u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2fd30c: 0xd9480000  lqc2        $vf8, 0x0($t2)
    ctx->pc = 0x2fd30cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2fd310: 0xd9490010  lqc2        $vf9, 0x10($t2)
    ctx->pc = 0x2fd310u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2fd314: 0xd94a0020  lqc2        $vf10, 0x20($t2)
    ctx->pc = 0x2fd314u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2fd318: 0xd94b0030  lqc2        $vf11, 0x30($t2)
    ctx->pc = 0x2fd318u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2fd31c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2fd31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd320: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2fd320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd324: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2fd324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd328: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2fd328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd32c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2fd32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd330: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2fd330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd334: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2fd334u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd338: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2fd338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2fd33c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2fd33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd340: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2fd340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd344: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2fd344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd348: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2fd348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2fd34c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2fd34cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd350: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2fd350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd354: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2fd354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fd358: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2fd358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fd35c: 0xf9440000  sqc2        $vf4, 0x0($t2)
    ctx->pc = 0x2fd35cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd360: 0xf9450010  sqc2        $vf5, 0x10($t2)
    ctx->pc = 0x2fd360u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2fd364: 0xf9460020  sqc2        $vf6, 0x20($t2)
    ctx->pc = 0x2fd364u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2fd368: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD368u;
        // 0x2fd36c: 0xf9470030  sqc2        $vf7, 0x30($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 48), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD370u;
label_2fd370:
    // 0x2fd370: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x2fd370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2fd374: 0x79630010  lq          $v1, 0x10($t3)
    ctx->pc = 0x2fd374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2fd378: 0x79640020  lq          $a0, 0x20($t3)
    ctx->pc = 0x2fd378u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x2fd37c: 0x79650030  lq          $a1, 0x30($t3)
    ctx->pc = 0x2fd37cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2fd380: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2fd380u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2fd384: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x2fd384u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x2fd388: 0x7d440020  sq          $a0, 0x20($t2)
    ctx->pc = 0x2fd388u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 4));
    // 0x2fd38c: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x2fd38cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
label_2fd390:
    // 0x2fd390: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD398u;
}
