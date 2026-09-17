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

// Function: sub_0032BF38
// Address: 0x32bf38 - 0x32bff8
void sub_0032BF38_0x32bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BF38_0x32bf38");
#endif

    ctx->pc = 0x32bf38u;

    // 0x32bf38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32bf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bf3c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32bf3cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32bf40: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32bf40u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32bf44: 0xd8dc0000  lqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32bf44u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32bf48: 0xd8dd0010  lqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32bf48u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32bf4c: 0xd8de0020  lqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32bf4cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32bf50: 0xd8df0030  lqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32bf50u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x32bf54: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32bf58: 0x52823  negu        $a1, $a1
    ctx->pc = 0x32bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x32bf5c: 0x244a0340  addiu       $t2, $v0, 0x340
    ctx->pc = 0x32bf5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32bf60: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32bf64: 0x24a24000  addiu       $v0, $a1, 0x4000
    ctx->pc = 0x32bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32bf68: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x32bf68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32bf6c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x32bf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32bf70: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x32bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x32bf74: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x32bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32bf78: 0x30a84000  andi        $t0, $a1, 0x4000
    ctx->pc = 0x32bf78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32bf7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BF7Cu;
    {
        const bool branch_taken_0x32bf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF7Cu;
        // 0x32bf80: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf7c) {
            ctx->pc = 0x32BF8Cu;
            goto label_32bf8c;
        }
    }
    ctx->pc = 0x32BF84u;
    // 0x32bf84: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32bf88: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32bf8c:
    // 0x32bf8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32bf90: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x32bf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32bf94: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32bf98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32bf9c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BF9Cu;
    {
        const bool branch_taken_0x32bf9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF9Cu;
        // 0x32bfa0: 0x643825  or          $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf9c) {
            ctx->pc = 0x32BFACu;
            goto label_32bfac;
        }
    }
    ctx->pc = 0x32BFA4u;
    // 0x32bfa4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32bfa8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x32bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_32bfac:
    // 0x32bfac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32bfb0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32bfb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32bfb8: 0x891825  or          $v1, $a0, $t1
    ctx->pc = 0x32bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x32bfbc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32bfbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32bfc0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x32bfc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32bfc4: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x32bfc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bfc8: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x32bfc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32bfcc: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x32bfccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bfd0: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x32bfd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x32bfd4: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x32bfd4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x32bfd8: 0xf8dc0000  sqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32bfdc: 0xf8dd0010  sqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32bfe0: 0xf8de0020  sqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32bfe4: 0xf8df0030  sqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32bfe8: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32bfe8u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32bfec: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32bfecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x32BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BFF8u;
}
