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

// Function: sub_002431C0
// Address: 0x2431c0 - 0x243578
void sub_002431C0_0x2431c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002431C0_0x2431c0");
#endif

    switch (ctx->pc) {
        case 0x2431e0u: goto label_2431e0;
        case 0x243350u: goto label_243350;
        default: break;
    }

    ctx->pc = 0x2431c0u;

    // 0x2431c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2431c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2431c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2431c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2431c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2431c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431cc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2431ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2431d0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2431d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2431d4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2431d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2431d8: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2431D8u;
    SET_GPR_U32(ctx, 31, 0x2431E0u);
    ctx->pc = 0x2431DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431D8u;
    // 0x2431dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2431D8u, 0x2431E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431E0u;
label_2431e0:
    // 0x2431e0: 0x120000cb  beqz        $s0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2431E0u;
    {
        const bool branch_taken_0x2431e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431E0u;
        // 0x2431e4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431e0) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x2431E8u;
    // 0x2431e8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2431ec: 0x248488d0  addiu       $a0, $a0, -0x7730
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x2431f0: 0x24635e30  addiu       $v1, $v1, 0x5E30
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24112));
    // 0x2431f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2431f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2431f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2431f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243204: 0x2466ff80  addiu       $a2, $v1, -0x80
    ctx->pc = 0x243204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x243208: 0x78a20750  lq          $v0, 0x750($a1)
    ctx->pc = 0x243208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 1872)));
    // 0x24320c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24320cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243210: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x243214: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x243214u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E30u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E30u, _value); } while (0);
    // 0x243218: 0xe4c0008c  swc1        $f0, 0x8C($a2)
    ctx->pc = 0x243218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x165E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E3Cu, _value); } while (0); }
    // 0x24321c: 0x78a20750  lq          $v0, 0x750($a1)
    ctx->pc = 0x24321cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 1872)));
    // 0x243220: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x243220u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E40u, _value); } while (0);
    // 0x243224: 0xe4c0009c  swc1        $f0, 0x9C($a2)
    ctx->pc = 0x243224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x165E4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E4Cu, _value); } while (0); }
    // 0x243228: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x243228u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x165E30u));
    // 0x24322c: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x24322cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x243230: 0xd9050010  lqc2        $vf5, 0x10($t0)
    ctx->pc = 0x243230u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x243234: 0xd9060020  lqc2        $vf6, 0x20($t0)
    ctx->pc = 0x243234u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x243238: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x243238u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x24323c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x24323cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243240: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x243240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243244: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x243244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243248: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x243248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24324c: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x24324cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x243250: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x243254: 0x24425e40  addiu       $v0, $v0, 0x5E40
    ctx->pc = 0x243254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24128));
    // 0x243258: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x243258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24325c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24325cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x165E40u));
    // 0x243260: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x243260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x243264: 0xd9050010  lqc2        $vf5, 0x10($t0)
    ctx->pc = 0x243264u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x243268: 0xd9060020  lqc2        $vf6, 0x20($t0)
    ctx->pc = 0x243268u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x24326c: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x24326cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x243270: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x243270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243274: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x243274u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243278: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x243278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24327c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x24327cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x243280: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x243280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x243284: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x243284u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x243288: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x243288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24328c: 0x79040010  lq          $a0, 0x10($t0)
    ctx->pc = 0x24328cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x243290: 0x79060020  lq          $a2, 0x20($t0)
    ctx->pc = 0x243290u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x243294: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x243294u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x243298: 0x70872c88  pextlw      $a1, $a0, $a3
    ctx->pc = 0x243298u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x24329c: 0x708724a8  pextuw      $a0, $a0, $a3
    ctx->pc = 0x24329cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x2432a0: 0x70661488  pextlw      $v0, $v1, $a2
    ctx->pc = 0x2432a0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x2432a4: 0x70661ca8  pextuw      $v1, $v1, $a2
    ctx->pc = 0x2432a4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x2432a8: 0x70453b89  pcpyld      $a3, $v0, $a1
    ctx->pc = 0x2432a8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x2432ac: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x2432acu;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2432b0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2432b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2432b4: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x2432b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2432b8: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x2432b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2432bc: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x2432bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2432c0: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x2432c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2432c4: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2432c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2432c8: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2432c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2432cc: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2432ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2432d0: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2432d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2432d4: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x2432d4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
    // 0x2432d8: 0x7d250010  sq          $a1, 0x10($t1)
    ctx->pc = 0x2432d8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
    // 0x2432dc: 0x7d230020  sq          $v1, 0x20($t1)
    ctx->pc = 0x2432dcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 3));
    // 0x2432e0: 0xf9270030  sqc2        $vf7, 0x30($t1)
    ctx->pc = 0x2432e0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2432e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2432e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2432e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2432e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2432ec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2432ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2432f0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2432f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2432f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2432f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2432f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2432f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2432fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2432fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x243300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243308: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x243308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x24330c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x24330cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x243310: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x243310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x243314: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x243314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x243318: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x243318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24331c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24331cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243320: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x243320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243324: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x243324u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x243328: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x243328u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24332c: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x24332cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x243330: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x243330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243334: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x243334u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x243338: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x243338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24333c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x24333cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x243340: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x243340u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x243344: 0x3c120016  lui         $s2, 0x16
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22 << 16));
    // 0x243348: 0xc090b9e  jal         func_242E78
    ctx->pc = 0x243348u;
    SET_GPR_U32(ctx, 31, 0x243350u);
    ctx->pc = 0x24334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243348u;
    // 0x24334c: 0x26515db0  addiu       $s1, $s2, 0x5DB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 23984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E78u, 0x243348u, 0x243350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243350u;
label_243350:
    // 0x243350: 0xc62200a4  lwc1        $f2, 0xA4($s1)
    ctx->pc = 0x243350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243354: 0xc7848844  lwc1        $f4, -0x77BC($gp)
    ctx->pc = 0x243354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x243358: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x243358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24335c: 0xc7838848  lwc1        $f3, -0x77B8($gp)
    ctx->pc = 0x24335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243360: 0x0  nop
    ctx->pc = 0x243360u;
    // NOP
    // 0x243364: 0x0  nop
    ctx->pc = 0x243364u;
    // NOP
    // 0x243368: 0x46041043  div.s       $f1, $f2, $f4
    ctx->pc = 0x243368u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[4];
    // 0x24336c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24336cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x243370: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x243370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x243374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x243378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24337c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24337cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x243380: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x243380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x243384: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x243384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243388: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x243388u;
    {
        const bool branch_taken_0x243388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243388) {
            ctx->pc = 0x243398u;
            goto label_243398;
        }
    }
    ctx->pc = 0x243390u;
    // 0x243390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x243390u;
    {
        const bool branch_taken_0x243390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243390u;
        // 0x243394: 0x46041081  sub.s       $f2, $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243390) {
            ctx->pc = 0x2433A8u;
            goto label_2433a8;
        }
    }
    ctx->pc = 0x243398u;
label_243398:
    // 0x243398: 0xc780884c  lwc1        $f0, -0x77B4($gp)
    ctx->pc = 0x243398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24339c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24339cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2433a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2433A0u;
    {
        const bool branch_taken_0x2433a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433a0) {
            ctx->pc = 0x2433A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2433A0u;
            // 0x2433a4: 0x46041080  add.s       $f2, $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2433A8u;
            goto label_2433a8;
        }
    }
    ctx->pc = 0x2433A8u;
label_2433a8:
    // 0x2433a8: 0xe62200a4  swc1        $f2, 0xA4($s1)
    ctx->pc = 0x2433a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x2433ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2433acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2433b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2433b4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x2433b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x2433b8: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x2433b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x2433bc: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x2433bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x2433c0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2433c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2433c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2433c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2433c8: 0x26425db0  addiu       $v0, $s2, 0x5DB0
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 23984));
    // 0x2433cc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2433ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2433d0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2433d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2433d4: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2433d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433d8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2433d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2433dc: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2433dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2433e0: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2433e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2433e4: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2433e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2433e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2433e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2433ec: 0xc7828850  lwc1        $f2, -0x77B0($gp)
    ctx->pc = 0x2433ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2433f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2433f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2433f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2433F4u;
    {
        const bool branch_taken_0x2433f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433f4) {
            ctx->pc = 0x2433F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2433F4u;
            // 0x2433f8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243408u;
            goto label_243408;
        }
    }
    ctx->pc = 0x2433FCu;
    // 0x2433fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2433fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x243400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243400u;
    {
        const bool branch_taken_0x243400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243400u;
        // 0x243404: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243400) {
            ctx->pc = 0x24340Cu;
            goto label_24340c;
        }
    }
    ctx->pc = 0x243408u;
label_243408:
    // 0x243408: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x243408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24340c:
    // 0x24340c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24340cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x243410: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x243410u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x243414: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x243414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x243418: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x243418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24341c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x24341cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x243420: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x243420u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x243424: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x243424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x243428: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x243428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x24342c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x24342cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243430: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x243430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243434: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x243434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243438: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x243438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24343c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x24343cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243440: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x243440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x243444: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x243444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243448: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x243448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24344c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x24344cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x243450: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x243450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x243454: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x243454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243458: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x243458u;
    {
        const bool branch_taken_0x243458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243458u;
        // 0x24345c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243458) {
            ctx->pc = 0x243470u;
            goto label_243470;
        }
    }
    ctx->pc = 0x243460u;
    // 0x243460: 0x4a0003bf  vwaitq
    ctx->pc = 0x243460u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x243464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x243464u;
    {
        const bool branch_taken_0x243464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243464u;
        // 0x243468: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243464) {
            ctx->pc = 0x243478u;
            goto label_243478;
        }
    }
    ctx->pc = 0x24346Cu;
    // 0x24346c: 0x0  nop
    ctx->pc = 0x24346cu;
    // NOP
label_243470:
    // 0x243470: 0x4a0003bf  vwaitq
    ctx->pc = 0x243470u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x243474: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x243474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_243478:
    // 0x243478: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x243478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24347c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x24347cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243480: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x243480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x243484: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x243484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x243488: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x243488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24348c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x24348cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x243490: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x243490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x243494: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x243494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x243498: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x243498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x24349c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x24349cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2434a0: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2434a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2434a4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2434a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2434a8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2434a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2434ac: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2434acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2434b0: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2434b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2434b4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2434b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2434b8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2434b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2434bc: 0x24635df0  addiu       $v1, $v1, 0x5DF0
    ctx->pc = 0x2434bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24048));
    // 0x2434c0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2434c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2434c4: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x2434c8: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x2434c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2434cc: 0x7ba90060  lq          $t1, 0x60($sp)
    ctx->pc = 0x2434ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2434d0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2434d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2434d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2434d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2434d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2434d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2434dc: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x2434dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2434e0: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x2434e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2434e4: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x2434e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2434e8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2434e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2434ec: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2434ecu;
    do { __m128i _value = (GPR_VEC(ctx, 8)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DF0u, _value); } while (0);
    // 0x2434f0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2434f0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DE0u, _value); } while (0);
    // 0x2434f4: 0x7c690030  sq          $t1, 0x30($v1)
    ctx->pc = 0x2434f4u;
    do { __m128i _value = (GPR_VEC(ctx, 9)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E20u, _value); } while (0);
    // 0x2434f8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2434f8u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DB0u, _value); } while (0);
    // 0x2434fc: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x2434fcu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DC0u, _value); } while (0);
    // 0x243500: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x243500u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DD0u, _value); } while (0);
    // 0x243504: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x243504u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E00u, _value); } while (0);
    // 0x243508: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x243508u;
    {
        const bool branch_taken_0x243508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243508u;
        // 0x24350c: 0x7c660020  sq          $a2, 0x20($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243508) {
            ctx->pc = 0x24355Cu;
            goto label_24355c;
        }
    }
    ctx->pc = 0x243510u;
label_243510:
    // 0x243510: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x243514: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x243514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x243518: 0x24425db0  addiu       $v0, $v0, 0x5DB0
    ctx->pc = 0x243518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
    // 0x24351c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x24351cu;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DB0u, _value); } while (0);
    // 0x243520: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x243520u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DC0u, _value); } while (0);
    // 0x243524: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x243524u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DD0u, _value); } while (0);
    // 0x243528: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x243528u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DE0u, _value); } while (0);
    // 0x24352c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24352cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165DB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165DB0u, _value); } while (0);
    // 0x243530: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x243534: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x243534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165DC4u, _value); } while (0);
    // 0x243538: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x243538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165DD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165DD8u, _value); } while (0);
    // 0x24353c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x24353cu;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165DF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165DF0u, _value); } while (0);
    // 0x243540: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x243540u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E00u, _value); } while (0);
    // 0x243544: 0x7c600020  sq          $zero, 0x20($v1)
    ctx->pc = 0x243544u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E10u, _value); } while (0);
    // 0x243548: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x243548u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E20u, _value); } while (0);
    // 0x24354c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x24354cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E18u, _value); } while (0);
    // 0x243550: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x243550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x165E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E54u, _value); } while (0);
    // 0x243554: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x243554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165DF0u, _value); } while (0);
    // 0x243558: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x243558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165E04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E04u, _value); } while (0);
label_24355c:
    // 0x24355c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x24355cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243560: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x243560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x243564: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x243564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x243568: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x243568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24356c: 0x3e00008  jr          $ra
    ctx->pc = 0x24356Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24356Cu;
        // 0x243570: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24356Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243574u;
    // 0x243574: 0x0  nop
    ctx->pc = 0x243574u;
    // NOP
    ctx->pc = 0x243578u;
}
