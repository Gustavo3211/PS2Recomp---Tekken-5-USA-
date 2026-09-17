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

// Function: sub_0023D998
// Address: 0x23d998 - 0x23da80
void sub_0023D998_0x23d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D998_0x23d998");
#endif

    switch (ctx->pc) {
        case 0x23d9c8u: goto label_23d9c8;
        case 0x23da64u: goto label_23da64;
        default: break;
    }

    ctx->pc = 0x23d998u;

    // 0x23d998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d99c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x23d9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23d9a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a8: 0x2444d868  addiu       $a0, $v0, -0x2798
    ctx->pc = 0x23d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957160));
    // 0x23d9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d9b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d9b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23d9bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23d9c0: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x23D9C0u;
    SET_GPR_U32(ctx, 31, 0x23D9C8u);
    ctx->pc = 0x23D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9C0u;
    // 0x23d9c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x23D9C0u, 0x23D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9C8u;
label_23d9c8:
    // 0x23d9c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9cc: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x23D9CCu;
    {
        const bool branch_taken_0x23d9cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d9cc) {
            ctx->pc = 0x23D9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D9CCu;
            // 0x23d9d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA70u;
            goto label_23da70;
        }
    }
    ctx->pc = 0x23D9D4u;
    // 0x23d9d4: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x23d9d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D9D8u;
    {
        const bool branch_taken_0x23d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D8u;
        // 0x23d9dc: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9d8) {
            ctx->pc = 0x23D9E4u;
            goto label_23d9e4;
        }
    }
    ctx->pc = 0x23D9E0u;
    // 0x23d9e0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_23d9e4:
    // 0x23d9e4: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x23d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x23d9e8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x23d9e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23d9ec: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x23d9ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23d9f0: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x23d9f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23d9f4: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x23d9f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23d9f8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23d9fc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x23d9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da00: 0x2442b510  addiu       $v0, $v0, -0x4AF0
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948112));
    // 0x23da04: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23da04u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x46B510u));
    // 0x23da08: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x23da08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da0c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x23da0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da10: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x23da10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da14: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x23da14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23da18: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23da18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23da1c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23da20: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x23da20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x23da24: 0x2442b520  addiu       $v0, $v0, -0x4AE0
    ctx->pc = 0x23da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948128));
    // 0x23da28: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23da28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x46B520u));
    // 0x23da2c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x23da2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da30: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x23da30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da34: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x23da34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23da38: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x23da38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23da3c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23da40: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x23da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x23da44: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x23da44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da48: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23da48u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da4c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x23da4cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23da50: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23da50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23da54: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23da54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23da58: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x23da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x23da5c: 0xc08481e  jal         func_212078
    ctx->pc = 0x23DA5Cu;
    SET_GPR_U32(ctx, 31, 0x23DA64u);
    ctx->pc = 0x23DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA5Cu;
    // 0x23da60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212078u, 0x23DA5Cu, 0x23DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA64u;
label_23da64:
    // 0x23da64: 0xa6200064  sh          $zero, 0x64($s1)
    ctx->pc = 0x23da64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x23da68: 0xa6330066  sh          $s3, 0x66($s1)
    ctx->pc = 0x23da68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 19));
    // 0x23da6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23da6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23da70:
    // 0x23da70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23da70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23da74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23da74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23da78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23da7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23da7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23da80u;
}
