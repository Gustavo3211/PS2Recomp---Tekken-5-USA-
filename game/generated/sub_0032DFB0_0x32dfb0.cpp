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

// Function: sub_0032DFB0
// Address: 0x32dfb0 - 0x32e0a8
void sub_0032DFB0_0x32dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DFB0_0x32dfb0");
#endif

    ctx->pc = 0x32dfb0u;

    // 0x32dfb0: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x32dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32dfb4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32dfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfb8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32dfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32dfbc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32dfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32dfc0: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x32dfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32dfc4: 0x25400  sll         $t2, $v0, 16
    ctx->pc = 0x32dfc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32dfc8: 0x45c00  sll         $t3, $a0, 16
    ctx->pc = 0x32dfc8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32dfcc: 0x30a84000  andi        $t0, $a1, 0x4000
    ctx->pc = 0x32dfccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32dfd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DFD0u;
    {
        const bool branch_taken_0x32dfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFD0u;
        // 0x32dfd4: 0x30a63fff  andi        $a2, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfd0) {
            ctx->pc = 0x32DFE0u;
            goto label_32dfe0;
        }
    }
    ctx->pc = 0x32DFD8u;
    // 0x32dfd8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32dfdc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x32dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_32dfe0:
    // 0x32dfe0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32dfe4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32dfe8: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x32dfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32dfec: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x32dfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32dff0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32dff4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32dff8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DFF8u;
    {
        const bool branch_taken_0x32dff8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFF8u;
        // 0x32dffc: 0x4a3025  or          $a2, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dff8) {
            ctx->pc = 0x32E008u;
            goto label_32e008;
        }
    }
    ctx->pc = 0x32E000u;
    // 0x32e000: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32e004: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32e004u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32e008:
    // 0x32e008: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32e008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32e00c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32e010: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32e010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e014: 0xab2025  or          $a0, $a1, $t3
    ctx->pc = 0x32e014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x32e018: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x32e018u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x32e01c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x32e01cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x32e020: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32e024: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x32e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32e028: 0x4a220104  vsubx.w     $vf4, $vf0, $vf2x
    ctx->pc = 0x32e028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32e02c: 0x70621c88  pextlw      $v1, $v1, $v0
    ctx->pc = 0x32e02cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32e030: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x32e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x32e034: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x32e034u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32e038: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x32e038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32e03c: 0x4ac20080  vaddx.yz    $vf2, $vf0, $vf2x
    ctx->pc = 0x32e03cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32e040: 0x4ac300c0  vaddx.yz    $vf3, $vf0, $vf3x
    ctx->pc = 0x32e040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32e044: 0x4bc4091b  vmulw.xyz   $vf4, $vf1, $vf4w
    ctx->pc = 0x32e044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32e048: 0x4bfb033c  vmove.xyzw  $vf27, $vf0
    ctx->pc = 0x32e048u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e04c: 0x4a38033d  vmr32.w     $vf24, $vf0
    ctx->pc = 0x32e04cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x32e050: 0x4a39033d  vmr32.w     $vf25, $vf0
    ctx->pc = 0x32e050u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x32e054: 0x4a3a033d  vmr32.w     $vf26, $vf0
    ctx->pc = 0x32e054u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x32e058: 0x4bc002be  vmula.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x32e058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32e05c: 0x4b0010bf  vmaddaw.x   $ACC, $vf2, $vf0w
    ctx->pc = 0x32e05cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x32e060: 0x4a8118be  vmaddaz.y   $ACC, $vf3, $vf1z
    ctx->pc = 0x32e060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x32e064: 0x4a4118fd  vmsubay.z   $ACC, $vf3, $vf1y
    ctx->pc = 0x32e064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x32e068: 0x4bc40e08  vmaddx.xyz  $vf24, $vf1, $vf4x
    ctx->pc = 0x32e068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x32e06c: 0x4bc002be  vmula.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x32e06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32e070: 0x4b0118fe  vmsubaz.x   $ACC, $vf3, $vf1z
    ctx->pc = 0x32e070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x32e074: 0x4a8010bf  vmaddaw.y   $ACC, $vf2, $vf0w
    ctx->pc = 0x32e074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x32e078: 0x4a4118bc  vmaddax.z   $ACC, $vf3, $vf1x
    ctx->pc = 0x32e078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x32e07c: 0x4bc40e49  vmaddy.xyz  $vf25, $vf1, $vf4y
    ctx->pc = 0x32e07cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x32e080: 0x4bc002be  vmula.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x32e080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32e084: 0x4b0118bd  vmadday.x   $ACC, $vf3, $vf1y
    ctx->pc = 0x32e084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x32e088: 0x4a8118fc  vmsubax.y   $ACC, $vf3, $vf1x
    ctx->pc = 0x32e088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x32e08c: 0x4a4010bf  vmaddaw.z   $ACC, $vf2, $vf0w
    ctx->pc = 0x32e08cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x32e090: 0x4bc40e8a  vmaddz.xyz  $vf26, $vf1, $vf4z
    ctx->pc = 0x32e090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x32e094: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32e094u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32e098: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32e098u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E0A4u;
    // 0x32e0a4: 0x0  nop
    ctx->pc = 0x32e0a4u;
    // NOP
    ctx->pc = 0x32e0a8u;
}
