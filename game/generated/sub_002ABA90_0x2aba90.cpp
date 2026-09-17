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

// Function: sub_002ABA90
// Address: 0x2aba90 - 0x2ac9c8
void sub_002ABA90_0x2aba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA90_0x2aba90");
#endif

    switch (ctx->pc) {
        case 0x2abae4u: goto label_2abae4;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb7cu: goto label_2abb7c;
        case 0x2abc30u: goto label_2abc30;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abda8u: goto label_2abda8;
        case 0x2abe5cu: goto label_2abe5c;
        case 0x2abf0cu: goto label_2abf0c;
        case 0x2abfccu: goto label_2abfcc;
        case 0x2ac080u: goto label_2ac080;
        case 0x2ac130u: goto label_2ac130;
        case 0x2ac1f8u: goto label_2ac1f8;
        case 0x2ac2acu: goto label_2ac2ac;
        case 0x2ac35cu: goto label_2ac35c;
        case 0x2ac41cu: goto label_2ac41c;
        case 0x2ac4d0u: goto label_2ac4d0;
        case 0x2ac580u: goto label_2ac580;
        case 0x2ac648u: goto label_2ac648;
        case 0x2ac6fcu: goto label_2ac6fc;
        case 0x2ac7acu: goto label_2ac7ac;
        case 0x2ac8d0u: goto label_2ac8d0;
        case 0x2ac8e0u: goto label_2ac8e0;
        case 0x2ac8f0u: goto label_2ac8f0;
        case 0x2ac900u: goto label_2ac900;
        case 0x2ac978u: goto label_2ac978;
        case 0x2ac990u: goto label_2ac990;
        case 0x2ac9a8u: goto label_2ac9a8;
        default: break;
    }

    ctx->pc = 0x2aba90u;

label_2aba90:
    // 0x2aba90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aba94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aba98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aba98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2abaa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abaa4: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2abaa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2abaa8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2abaa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2abaac: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2abaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2abab0: 0x584003be  blezl       $v0, . + 4 + (0x3BE << 2)
    ctx->pc = 0x2ABAB0u;
    {
        const bool branch_taken_0x2abab0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2abab0) {
            ctx->pc = 0x2ABAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAB0u;
            // 0x2abab4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC9ACu;
            goto label_2ac9ac;
        }
    }
    ctx->pc = 0x2ABAB8u;
    // 0x2abab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2abab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ababc: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2ababcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2abac0: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2abac0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2abac4: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2abac4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2abac8: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2abac8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2abacc: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2abaccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2abad0: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2abad0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2abad4: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2abad4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2abad8: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2abad8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2abadc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABADCu;
    SET_GPR_U32(ctx, 31, 0x2ABAE4u);
    ctx->pc = 0x2ABAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABADCu;
    // 0x2abae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABADCu, 0x2ABAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAE4u;
label_2abae4:
    // 0x2abae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2abae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abaec: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABAECu;
    SET_GPR_U32(ctx, 31, 0x2ABAF4u);
    ctx->pc = 0x2ABAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABAECu;
    // 0x2abaf0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABAECu, 0x2ABAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAF4u;
label_2abaf4:
    // 0x2abaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abaf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2abaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2abafc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABAFCu;
    SET_GPR_U32(ctx, 31, 0x2ABB04u);
    ctx->pc = 0x2ABB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABAFCu;
    // 0x2abb00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABAFCu, 0x2ABB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB04u;
label_2abb04:
    // 0x2abb04: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2abb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2abb08: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2abb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2abb0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2abb0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2abb10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2abb10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abb14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2abb14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2abb18: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2abb18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2abb1c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2abb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb20: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2abb20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb24: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2abb24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb28: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2abb28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2abb2c: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2abb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abb30: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2abb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abb34: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2abb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abb38: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2abb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2abb3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2abb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2abb40: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2abb40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2abb44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2abb44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abb48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2abb48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2abb4c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2abb4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2abb50: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2abb50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb54: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2abb54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb58: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2abb58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abb5c: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2abb5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2abb60: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2abb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2abb64: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x2abb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x2abb68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2abb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2abb6c: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2ABB6Cu;
    {
        const bool branch_taken_0x2abb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB6Cu;
        // 0x2abb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb6c) {
            ctx->pc = 0x2ABD90u;
            goto label_2abd90;
        }
    }
    ctx->pc = 0x2ABB74u;
    // 0x2abb74: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABB74u;
    SET_GPR_U32(ctx, 31, 0x2ABB7Cu);
    ctx->pc = 0x2ABB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB74u;
    // 0x2abb78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABB74u, 0x2ABB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB7Cu;
label_2abb7c:
    // 0x2abb7c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abb80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abb84: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abb88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abb8c: 0x0  nop
    ctx->pc = 0x2abb8cu;
    // NOP
    // 0x2abb90: 0x0  nop
    ctx->pc = 0x2abb90u;
    // NOP
    // 0x2abb94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abb94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abb98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abb9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abba0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2abba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2abba4: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2abba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2abba8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abbac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABBACu;
    {
        const bool branch_taken_0x2abbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBACu;
        // 0x2abbb0: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbac) {
            ctx->pc = 0x2ABBBCu;
            goto label_2abbbc;
        }
    }
    ctx->pc = 0x2ABBB4u;
    // 0x2abbb4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abbb8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abbbc:
    // 0x2abbbc: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2abbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2abbc0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abbc4: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2abbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abbc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abbcc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2abbd0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abbd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abbd8: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2abbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2abbdc: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2abbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2abbe0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABBE0u;
    {
        const bool branch_taken_0x2abbe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBE0u;
        // 0x2abbe4: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbe0) {
            ctx->pc = 0x2ABBF0u;
            goto label_2abbf0;
        }
    }
    ctx->pc = 0x2ABBE8u;
    // 0x2abbe8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abbec: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2abbecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2abbf0:
    // 0x2abbf0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2abbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2abbf4: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2abbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2abbf8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2abbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2abbfc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abc00: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abc04: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abc08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abc08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abc0c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2abc0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2abc10: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2abc10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abc14: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2abc14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abc18: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2abc18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abc1c: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2abc1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2abc20: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2abc20u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc28: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABC28u;
    SET_GPR_U32(ctx, 31, 0x2ABC30u);
    ctx->pc = 0x2ABC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC28u;
    // 0x2abc2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABC28u, 0x2ABC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC30u;
label_2abc30:
    // 0x2abc30: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abc34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abc38: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abc3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abc40: 0x0  nop
    ctx->pc = 0x2abc40u;
    // NOP
    // 0x2abc44: 0x0  nop
    ctx->pc = 0x2abc44u;
    // NOP
    // 0x2abc48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abc48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abc4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abc50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abc50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abc54: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2abc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abc58: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2abc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2abc5c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abc60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABC60u;
    {
        const bool branch_taken_0x2abc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC60u;
        // 0x2abc64: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc60) {
            ctx->pc = 0x2ABC70u;
            goto label_2abc70;
        }
    }
    ctx->pc = 0x2ABC68u;
    // 0x2abc68: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abc6c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abc70:
    // 0x2abc70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abc74: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abc78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abc7c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abc80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abc84: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2abc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2abc88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abc8c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2abc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2abc90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABC90u;
    {
        const bool branch_taken_0x2abc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC90u;
        // 0x2abc94: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc90) {
            ctx->pc = 0x2ABCA0u;
            goto label_2abca0;
        }
    }
    ctx->pc = 0x2ABC98u;
    // 0x2abc98: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abc9c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2abc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2abca0:
    // 0x2abca0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2abca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2abca4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2abca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2abca8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2abca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2abcac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abcb0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abcb4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abcb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abcb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abcbc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2abcbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2abcc0: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2abcc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abcc4: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2abcc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abcc8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2abcc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abccc: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2abcccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2abcd0: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2abcd0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abcd8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABCD8u;
    SET_GPR_U32(ctx, 31, 0x2ABCE0u);
    ctx->pc = 0x2ABCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCD8u;
    // 0x2abcdc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABCD8u, 0x2ABCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCE0u;
label_2abce0:
    // 0x2abce0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abce8: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abcec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abcf0: 0x0  nop
    ctx->pc = 0x2abcf0u;
    // NOP
    // 0x2abcf4: 0x0  nop
    ctx->pc = 0x2abcf4u;
    // NOP
    // 0x2abcf8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abcf8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abcfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abcfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abd00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abd00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abd04: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2abd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abd08: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2abd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2abd0c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abd10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD10u;
    {
        const bool branch_taken_0x2abd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD10u;
        // 0x2abd14: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd10) {
            ctx->pc = 0x2ABD20u;
            goto label_2abd20;
        }
    }
    ctx->pc = 0x2ABD18u;
    // 0x2abd18: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abd1c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abd20:
    // 0x2abd20: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abd24: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2abd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abd28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abd2c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abd30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abd34: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2abd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2abd38: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abd3c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2abd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2abd40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD40u;
    {
        const bool branch_taken_0x2abd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD40u;
        // 0x2abd44: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd40) {
            ctx->pc = 0x2ABD50u;
            goto label_2abd50;
        }
    }
    ctx->pc = 0x2ABD48u;
    // 0x2abd48: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abd4c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2abd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2abd50:
    // 0x2abd50: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2abd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2abd54: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2abd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2abd58: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2abd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2abd5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abd60: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abd64: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abd68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abd68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abd6c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2abd6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2abd70: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2abd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abd74: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2abd74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abd78: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2abd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abd7c: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2abd7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2abd80: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2abd80u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abd84: 0x100002b3  b           . + 4 + (0x2B3 << 2)
    ctx->pc = 0x2ABD84u;
    {
        const bool branch_taken_0x2abd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD84u;
        // 0x2abd88: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd84) {
            ctx->pc = 0x2AC854u;
            goto label_2ac854;
        }
    }
    ctx->pc = 0x2ABD8Cu;
    // 0x2abd8c: 0x0  nop
    ctx->pc = 0x2abd8cu;
    // NOP
label_2abd90:
    // 0x2abd90: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2abd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2abd94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2abd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2abd98: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x2ABD98u;
    {
        const bool branch_taken_0x2abd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abd98) {
            ctx->pc = 0x2ABD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABD98u;
            // 0x2abd9c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABFB8u;
            goto label_2abfb8;
        }
    }
    ctx->pc = 0x2ABDA0u;
    // 0x2abda0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABDA0u;
    SET_GPR_U32(ctx, 31, 0x2ABDA8u);
    ctx->pc = 0x2ABDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDA0u;
    // 0x2abda4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABDA0u, 0x2ABDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDA8u;
label_2abda8:
    // 0x2abda8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abdac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abdb0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abdb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abdb8: 0x0  nop
    ctx->pc = 0x2abdb8u;
    // NOP
    // 0x2abdbc: 0x0  nop
    ctx->pc = 0x2abdbcu;
    // NOP
    // 0x2abdc0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abdc0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abdc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abdc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abdc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abdcc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2abdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2abdd0: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2abdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2abdd4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abdd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABDD8u;
    {
        const bool branch_taken_0x2abdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDD8u;
        // 0x2abddc: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdd8) {
            ctx->pc = 0x2ABDE8u;
            goto label_2abde8;
        }
    }
    ctx->pc = 0x2ABDE0u;
    // 0x2abde0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abde4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abde8:
    // 0x2abde8: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2abde8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2abdec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abdf0: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abdf4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abdf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2abdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2abdfc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abe00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abe04: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2abe04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2abe08: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2abe08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2abe0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABE0Cu;
    {
        const bool branch_taken_0x2abe0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE0Cu;
        // 0x2abe10: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe0c) {
            ctx->pc = 0x2ABE1Cu;
            goto label_2abe1c;
        }
    }
    ctx->pc = 0x2ABE14u;
    // 0x2abe14: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abe18: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2abe1c:
    // 0x2abe1c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2abe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2abe20: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2abe20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2abe24: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2abe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2abe28: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abe28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abe2c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abe30: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abe34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abe34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abe38: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2abe38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2abe3c: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2abe3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abe40: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2abe40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abe44: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2abe44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abe48: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2abe48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2abe4c: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2abe4cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe54: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABE54u;
    SET_GPR_U32(ctx, 31, 0x2ABE5Cu);
    ctx->pc = 0x2ABE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE54u;
    // 0x2abe58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABE54u, 0x2ABE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE5Cu;
label_2abe5c:
    // 0x2abe5c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abe60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abe60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abe64: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abe68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abe68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abe6c: 0x0  nop
    ctx->pc = 0x2abe6cu;
    // NOP
    // 0x2abe70: 0x0  nop
    ctx->pc = 0x2abe70u;
    // NOP
    // 0x2abe74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abe74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abe78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abe78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abe7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abe7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abe80: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2abe80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abe84: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2abe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2abe88: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abe8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABE8Cu;
    {
        const bool branch_taken_0x2abe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE8Cu;
        // 0x2abe90: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe8c) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABE94u;
    // 0x2abe94: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abe98: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abe9c:
    // 0x2abe9c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abea0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2abea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abea4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abea8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abeac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abeb0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2abeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2abeb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abeb8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2abeb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2abebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABEBCu;
    {
        const bool branch_taken_0x2abebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEBCu;
        // 0x2abec0: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abebc) {
            ctx->pc = 0x2ABECCu;
            goto label_2abecc;
        }
    }
    ctx->pc = 0x2ABEC4u;
    // 0x2abec4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abec8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2abec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2abecc:
    // 0x2abecc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2abed0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2abed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2abed4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2abed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2abed8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abedc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abee0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abee4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abee8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2abee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2abeec: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2abeecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abef0: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2abef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abef4: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2abef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abef8: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2abef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2abefc: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2abefcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf04: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABF04u;
    SET_GPR_U32(ctx, 31, 0x2ABF0Cu);
    ctx->pc = 0x2ABF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABF04u;
    // 0x2abf08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABF04u, 0x2ABF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABF0Cu;
label_2abf0c:
    // 0x2abf0c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abf10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abf14: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abf18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abf1c: 0x0  nop
    ctx->pc = 0x2abf1cu;
    // NOP
    // 0x2abf20: 0x0  nop
    ctx->pc = 0x2abf20u;
    // NOP
    // 0x2abf24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abf24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abf28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abf2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abf2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abf30: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2abf30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abf34: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2abf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2abf38: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abf3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF3Cu;
    {
        const bool branch_taken_0x2abf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF3Cu;
        // 0x2abf40: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf3c) {
            ctx->pc = 0x2ABF4Cu;
            goto label_2abf4c;
        }
    }
    ctx->pc = 0x2ABF44u;
    // 0x2abf44: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abf48: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2abf48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2abf4c:
    // 0x2abf4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2abf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abf50: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2abf54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2abf58: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2abf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2abf5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2abf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abf60: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2abf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2abf64: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2abf68: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2abf68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2abf6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF6Cu;
    {
        const bool branch_taken_0x2abf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF6Cu;
        // 0x2abf70: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf6c) {
            ctx->pc = 0x2ABF7Cu;
            goto label_2abf7c;
        }
    }
    ctx->pc = 0x2ABF74u;
    // 0x2abf74: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2abf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2abf78: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2abf78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2abf7c:
    // 0x2abf7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2abf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2abf80: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2abf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2abf84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2abf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2abf88: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2abf88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2abf8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2abf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abf90: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2abf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2abf94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2abf94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2abf98: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2abf98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2abf9c: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2abf9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abfa0: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2abfa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2abfa4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2abfa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2abfa8: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2abfa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2abfac: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2abfacu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2abfb0: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x2ABFB0u;
    {
        const bool branch_taken_0x2abfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFB0u;
        // 0x2abfb4: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfb0) {
            ctx->pc = 0x2AC854u;
            goto label_2ac854;
        }
    }
    ctx->pc = 0x2ABFB8u;
label_2abfb8:
    // 0x2abfb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2abfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2abfbc: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2ABFBCu;
    {
        const bool branch_taken_0x2abfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFBCu;
        // 0x2abfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfbc) {
            ctx->pc = 0x2AC1E0u;
            goto label_2ac1e0;
        }
    }
    ctx->pc = 0x2ABFC4u;
    // 0x2abfc4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ABFC4u;
    SET_GPR_U32(ctx, 31, 0x2ABFCCu);
    ctx->pc = 0x2ABFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABFC4u;
    // 0x2abfc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ABFC4u, 0x2ABFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABFCCu;
label_2abfcc:
    // 0x2abfcc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2abfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2abfd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abfd4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2abfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2abfd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abfdc: 0x0  nop
    ctx->pc = 0x2abfdcu;
    // NOP
    // 0x2abfe0: 0x0  nop
    ctx->pc = 0x2abfe0u;
    // NOP
    // 0x2abfe4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abfe4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2abfe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2abfe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2abfec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abfecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abff0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2abff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2abff4: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2abff8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2abff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2abffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABFFCu;
    {
        const bool branch_taken_0x2abffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFFCu;
        // 0x2ac000: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abffc) {
            ctx->pc = 0x2AC00Cu;
            goto label_2ac00c;
        }
    }
    ctx->pc = 0x2AC004u;
    // 0x2ac004: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac008: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac00c:
    // 0x2ac00c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2ac00cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2ac010: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac014: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2ac014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac018: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac01c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ac01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ac020: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac024: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac028: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2ac028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2ac02c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2ac02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2ac030: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC030u;
    {
        const bool branch_taken_0x2ac030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC030u;
        // 0x2ac034: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac030) {
            ctx->pc = 0x2AC040u;
            goto label_2ac040;
        }
    }
    ctx->pc = 0x2AC038u;
    // 0x2ac038: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac03c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2ac03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ac040:
    // 0x2ac040: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ac040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac044: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2ac044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2ac048: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ac04c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac050: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac054: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac058: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac05c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2ac05cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ac060: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2ac060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac064: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2ac064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac068: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac06c: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2ac06cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ac070: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2ac070u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac078: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC078u;
    SET_GPR_U32(ctx, 31, 0x2AC080u);
    ctx->pc = 0x2AC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC078u;
    // 0x2ac07c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC078u, 0x2AC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC080u;
label_2ac080:
    // 0x2ac080: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac088: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac08c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac090: 0x0  nop
    ctx->pc = 0x2ac090u;
    // NOP
    // 0x2ac094: 0x0  nop
    ctx->pc = 0x2ac094u;
    // NOP
    // 0x2ac098: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac098u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac09c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac0a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac0a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac0a4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac0a8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac0ac: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac0b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC0B0u;
    {
        const bool branch_taken_0x2ac0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0B0u;
        // 0x2ac0b4: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0b0) {
            ctx->pc = 0x2AC0C0u;
            goto label_2ac0c0;
        }
    }
    ctx->pc = 0x2AC0B8u;
    // 0x2ac0b8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac0bc: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac0c0:
    // 0x2ac0c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac0c4: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac0c8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac0cc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac0d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac0d4: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac0d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac0dc: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac0e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC0E0u;
    {
        const bool branch_taken_0x2ac0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0E0u;
        // 0x2ac0e4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0e0) {
            ctx->pc = 0x2AC0F0u;
            goto label_2ac0f0;
        }
    }
    ctx->pc = 0x2AC0E8u;
    // 0x2ac0e8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac0ec: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac0f0:
    // 0x2ac0f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac0f4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac0f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac0fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac100: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac104: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac108: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac10c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac10cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac110: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2ac110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac114: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2ac114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac118: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2ac118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac11c: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2ac11cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2ac120: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2ac120u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac128: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC128u;
    SET_GPR_U32(ctx, 31, 0x2AC130u);
    ctx->pc = 0x2AC12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC128u;
    // 0x2ac12c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC128u, 0x2AC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC130u;
label_2ac130:
    // 0x2ac130: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac138: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac13c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac140: 0x0  nop
    ctx->pc = 0x2ac140u;
    // NOP
    // 0x2ac144: 0x0  nop
    ctx->pc = 0x2ac144u;
    // NOP
    // 0x2ac148: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac148u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac14c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac150: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac154: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac158: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac15c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac160: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC160u;
    {
        const bool branch_taken_0x2ac160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC160u;
        // 0x2ac164: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac160) {
            ctx->pc = 0x2AC170u;
            goto label_2ac170;
        }
    }
    ctx->pc = 0x2AC168u;
    // 0x2ac168: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac16c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac170:
    // 0x2ac170: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac174: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac178: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac17c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac180: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac184: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac188: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac18c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC190u;
    {
        const bool branch_taken_0x2ac190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC190u;
        // 0x2ac194: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac190) {
            ctx->pc = 0x2AC1A0u;
            goto label_2ac1a0;
        }
    }
    ctx->pc = 0x2AC198u;
    // 0x2ac198: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac19c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac19cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac1a0:
    // 0x2ac1a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac1a4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac1a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac1ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac1b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac1b4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac1b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac1b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac1bc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac1bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac1c0: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac1c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac1c4: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2ac1c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac1c8: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2ac1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac1cc: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2ac1ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ac1d0: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2ac1d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac1d4: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x2AC1D4u;
    {
        const bool branch_taken_0x2ac1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1D4u;
        // 0x2ac1d8: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1d4) {
            ctx->pc = 0x2AC854u;
            goto label_2ac854;
        }
    }
    ctx->pc = 0x2AC1DCu;
    // 0x2ac1dc: 0x0  nop
    ctx->pc = 0x2ac1dcu;
    // NOP
label_2ac1e0:
    // 0x2ac1e0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2ac1e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ac1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ac1e8: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x2AC1E8u;
    {
        const bool branch_taken_0x2ac1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1e8) {
            ctx->pc = 0x2AC1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC1E8u;
            // 0x2ac1ec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC408u;
            goto label_2ac408;
        }
    }
    ctx->pc = 0x2AC1F0u;
    // 0x2ac1f0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC1F0u;
    SET_GPR_U32(ctx, 31, 0x2AC1F8u);
    ctx->pc = 0x2AC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1F0u;
    // 0x2ac1f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC1F0u, 0x2AC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1F8u;
label_2ac1f8:
    // 0x2ac1f8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac1fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac200: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac204: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac208: 0x0  nop
    ctx->pc = 0x2ac208u;
    // NOP
    // 0x2ac20c: 0x0  nop
    ctx->pc = 0x2ac20cu;
    // NOP
    // 0x2ac210: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac210u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac214: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac218: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac21c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2ac21cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ac220: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2ac220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2ac224: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC228u;
    {
        const bool branch_taken_0x2ac228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC228u;
        // 0x2ac22c: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac228) {
            ctx->pc = 0x2AC238u;
            goto label_2ac238;
        }
    }
    ctx->pc = 0x2AC230u;
    // 0x2ac230: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac234: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac234u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac238:
    // 0x2ac238: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2ac238u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2ac23c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac240: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac244: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac248: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ac248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ac24c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac250: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac254: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2ac254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2ac258: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2ac258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2ac25c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC25Cu;
    {
        const bool branch_taken_0x2ac25c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC25Cu;
        // 0x2ac260: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac25c) {
            ctx->pc = 0x2AC26Cu;
            goto label_2ac26c;
        }
    }
    ctx->pc = 0x2AC264u;
    // 0x2ac264: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac268: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2ac268u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ac26c:
    // 0x2ac26c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ac26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac270: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2ac270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2ac274: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ac274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ac278: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac27c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac280: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac284: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac288: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2ac288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ac28c: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2ac28cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac290: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2ac290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac294: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac298: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2ac298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ac29c: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2ac29cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2a4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC2A4u;
    SET_GPR_U32(ctx, 31, 0x2AC2ACu);
    ctx->pc = 0x2AC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2A4u;
    // 0x2ac2a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC2A4u, 0x2AC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2ACu;
label_2ac2ac:
    // 0x2ac2ac: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac2b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac2b4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac2b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac2bc: 0x0  nop
    ctx->pc = 0x2ac2bcu;
    // NOP
    // 0x2ac2c0: 0x0  nop
    ctx->pc = 0x2ac2c0u;
    // NOP
    // 0x2ac2c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac2c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac2c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac2cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac2ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac2d0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac2d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac2d4: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac2d8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac2dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC2DCu;
    {
        const bool branch_taken_0x2ac2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2DCu;
        // 0x2ac2e0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2dc) {
            ctx->pc = 0x2AC2ECu;
            goto label_2ac2ec;
        }
    }
    ctx->pc = 0x2AC2E4u;
    // 0x2ac2e4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac2e8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac2ec:
    // 0x2ac2ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac2f0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac2f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac2f8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac2fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac300: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac304: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac308: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac30c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC30Cu;
    {
        const bool branch_taken_0x2ac30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC30Cu;
        // 0x2ac310: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac30c) {
            ctx->pc = 0x2AC31Cu;
            goto label_2ac31c;
        }
    }
    ctx->pc = 0x2AC314u;
    // 0x2ac314: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac318: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac318u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac31c:
    // 0x2ac31c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac320: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac324: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac328: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac32c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac330: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac334: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac338: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac33c: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac340: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2ac340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac344: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2ac344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac348: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2ac348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ac34c: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2ac34cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac354: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC354u;
    SET_GPR_U32(ctx, 31, 0x2AC35Cu);
    ctx->pc = 0x2AC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC354u;
    // 0x2ac358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC354u, 0x2AC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC35Cu;
label_2ac35c:
    // 0x2ac35c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac364: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac36c: 0x0  nop
    ctx->pc = 0x2ac36cu;
    // NOP
    // 0x2ac370: 0x0  nop
    ctx->pc = 0x2ac370u;
    // NOP
    // 0x2ac374: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac374u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac378: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac37c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac380: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac384: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac388: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac38c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC38Cu;
    {
        const bool branch_taken_0x2ac38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC38Cu;
        // 0x2ac390: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac38c) {
            ctx->pc = 0x2AC39Cu;
            goto label_2ac39c;
        }
    }
    ctx->pc = 0x2AC394u;
    // 0x2ac394: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac398: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac398u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac39c:
    // 0x2ac39c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac3a0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac3a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac3a8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac3ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac3b0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac3b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac3b8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC3BCu;
    {
        const bool branch_taken_0x2ac3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3BCu;
        // 0x2ac3c0: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3bc) {
            ctx->pc = 0x2AC3CCu;
            goto label_2ac3cc;
        }
    }
    ctx->pc = 0x2AC3C4u;
    // 0x2ac3c4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac3c8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac3cc:
    // 0x2ac3cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac3d0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac3d4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac3d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac3dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac3e0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac3e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac3e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac3e8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac3e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac3ec: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2ac3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac3f0: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2ac3f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac3f4: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2ac3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac3f8: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2ac3f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2ac3fc: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2ac3fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac400: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x2AC400u;
    {
        const bool branch_taken_0x2ac400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC400u;
        // 0x2ac404: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac400) {
            ctx->pc = 0x2AC854u;
            goto label_2ac854;
        }
    }
    ctx->pc = 0x2AC408u;
label_2ac408:
    // 0x2ac408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ac408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ac40c: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2AC40Cu;
    {
        const bool branch_taken_0x2ac40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC40Cu;
        // 0x2ac410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac40c) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC414u;
    // 0x2ac414: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC414u;
    SET_GPR_U32(ctx, 31, 0x2AC41Cu);
    ctx->pc = 0x2AC418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC414u;
    // 0x2ac418: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC414u, 0x2AC41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC41Cu;
label_2ac41c:
    // 0x2ac41c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac424: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac428: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac42c: 0x0  nop
    ctx->pc = 0x2ac42cu;
    // NOP
    // 0x2ac430: 0x0  nop
    ctx->pc = 0x2ac430u;
    // NOP
    // 0x2ac434: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac434u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac438: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac43c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac440: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2ac440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ac444: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2ac444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2ac448: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC44Cu;
    {
        const bool branch_taken_0x2ac44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC44Cu;
        // 0x2ac450: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac44c) {
            ctx->pc = 0x2AC45Cu;
            goto label_2ac45c;
        }
    }
    ctx->pc = 0x2AC454u;
    // 0x2ac454: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac458: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac458u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac45c:
    // 0x2ac45c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2ac45cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2ac460: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac464: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2ac464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac468: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac46c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ac470: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac474: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac478: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2ac478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2ac47c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2ac47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2ac480: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC480u;
    {
        const bool branch_taken_0x2ac480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC480u;
        // 0x2ac484: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac480) {
            ctx->pc = 0x2AC490u;
            goto label_2ac490;
        }
    }
    ctx->pc = 0x2AC488u;
    // 0x2ac488: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac48c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2ac48cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ac490:
    // 0x2ac490: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ac490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac494: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2ac494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2ac498: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ac498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ac49c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac4a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac4a4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac4a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac4a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac4ac: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2ac4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ac4b0: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac4b4: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2ac4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac4b8: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2ac4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac4bc: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2ac4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ac4c0: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2ac4c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4c8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC4C8u;
    SET_GPR_U32(ctx, 31, 0x2AC4D0u);
    ctx->pc = 0x2AC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4C8u;
    // 0x2ac4cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC4C8u, 0x2AC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4D0u;
label_2ac4d0:
    // 0x2ac4d0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac4d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4d8: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac4dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac4e0: 0x0  nop
    ctx->pc = 0x2ac4e0u;
    // NOP
    // 0x2ac4e4: 0x0  nop
    ctx->pc = 0x2ac4e4u;
    // NOP
    // 0x2ac4e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac4e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac4ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac4f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac4f4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac4f8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac4fc: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC500u;
    {
        const bool branch_taken_0x2ac500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC500u;
        // 0x2ac504: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac500) {
            ctx->pc = 0x2AC510u;
            goto label_2ac510;
        }
    }
    ctx->pc = 0x2AC508u;
    // 0x2ac508: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac50c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac510:
    // 0x2ac510: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac514: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac518: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac51c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac524: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac528: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac52c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC530u;
    {
        const bool branch_taken_0x2ac530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC530u;
        // 0x2ac534: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac530) {
            ctx->pc = 0x2AC540u;
            goto label_2ac540;
        }
    }
    ctx->pc = 0x2AC538u;
    // 0x2ac538: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac53c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac540:
    // 0x2ac540: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac544: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac548: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac54c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac550: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac554: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac558: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac558u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac55c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac560: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2ac560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac564: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2ac564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac568: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2ac568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac56c: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2ac56cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2ac570: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2ac570u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac578: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC578u;
    SET_GPR_U32(ctx, 31, 0x2AC580u);
    ctx->pc = 0x2AC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC578u;
    // 0x2ac57c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC578u, 0x2AC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC580u;
label_2ac580:
    // 0x2ac580: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac584: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac588: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac58c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac590: 0x0  nop
    ctx->pc = 0x2ac590u;
    // NOP
    // 0x2ac594: 0x0  nop
    ctx->pc = 0x2ac594u;
    // NOP
    // 0x2ac598: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac598u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac59c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac5a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac5a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac5a4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac5a8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac5ac: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac5b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC5B0u;
    {
        const bool branch_taken_0x2ac5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5B0u;
        // 0x2ac5b4: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5b0) {
            ctx->pc = 0x2AC5C0u;
            goto label_2ac5c0;
        }
    }
    ctx->pc = 0x2AC5B8u;
    // 0x2ac5b8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac5bc: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac5c0:
    // 0x2ac5c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac5c4: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac5c8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac5cc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac5d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac5d4: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac5d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac5dc: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac5e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC5E0u;
    {
        const bool branch_taken_0x2ac5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5E0u;
        // 0x2ac5e4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5e0) {
            ctx->pc = 0x2AC5F0u;
            goto label_2ac5f0;
        }
    }
    ctx->pc = 0x2AC5E8u;
    // 0x2ac5e8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac5ec: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac5f0:
    // 0x2ac5f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac5f4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac5f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac5fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac600: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac604: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac608: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac60c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac60cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac610: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2ac610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac614: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2ac614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac618: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac61c: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2ac61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ac620: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2ac620u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac624: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2AC624u;
    {
        const bool branch_taken_0x2ac624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC624u;
        // 0x2ac628: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac624) {
            ctx->pc = 0x2AC854u;
            goto label_2ac854;
        }
    }
    ctx->pc = 0x2AC62Cu;
    // 0x2ac62c: 0x0  nop
    ctx->pc = 0x2ac62cu;
    // NOP
label_2ac630:
    // 0x2ac630: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2ac634: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ac634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ac638: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x2AC638u;
    {
        const bool branch_taken_0x2ac638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac638) {
            ctx->pc = 0x2AC63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC638u;
            // 0x2ac63c: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC860u;
            goto label_2ac860;
        }
    }
    ctx->pc = 0x2AC640u;
    // 0x2ac640: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC640u;
    SET_GPR_U32(ctx, 31, 0x2AC648u);
    ctx->pc = 0x2AC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC640u;
    // 0x2ac644: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC640u, 0x2AC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC648u;
label_2ac648:
    // 0x2ac648: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac64c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac650: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac658: 0x0  nop
    ctx->pc = 0x2ac658u;
    // NOP
    // 0x2ac65c: 0x0  nop
    ctx->pc = 0x2ac65cu;
    // NOP
    // 0x2ac660: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac660u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac664: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac668: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac66c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2ac66cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ac670: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2ac670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2ac674: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac678: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC678u;
    {
        const bool branch_taken_0x2ac678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC678u;
        // 0x2ac67c: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac678) {
            ctx->pc = 0x2AC688u;
            goto label_2ac688;
        }
    }
    ctx->pc = 0x2AC680u;
    // 0x2ac680: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac684: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac684u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac688:
    // 0x2ac688: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2ac688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2ac68c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac690: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2ac690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac694: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac698: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ac698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ac69c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac6a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac6a4: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2ac6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2ac6a8: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2ac6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2ac6ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC6ACu;
    {
        const bool branch_taken_0x2ac6ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6ACu;
        // 0x2ac6b0: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6ac) {
            ctx->pc = 0x2AC6BCu;
            goto label_2ac6bc;
        }
    }
    ctx->pc = 0x2AC6B4u;
    // 0x2ac6b4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac6b8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2ac6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ac6bc:
    // 0x2ac6bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ac6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac6c0: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2ac6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2ac6c4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ac6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ac6c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac6cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac6d0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac6d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac6d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac6d8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2ac6d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ac6dc: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac6dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac6e0: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2ac6e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac6e4: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2ac6e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac6e8: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2ac6e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ac6ec: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2ac6ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6f4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC6F4u;
    SET_GPR_U32(ctx, 31, 0x2AC6FCu);
    ctx->pc = 0x2AC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6F4u;
    // 0x2ac6f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC6F4u, 0x2AC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6FCu;
label_2ac6fc:
    // 0x2ac6fc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac704: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac70c: 0x0  nop
    ctx->pc = 0x2ac70cu;
    // NOP
    // 0x2ac710: 0x0  nop
    ctx->pc = 0x2ac710u;
    // NOP
    // 0x2ac714: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac714u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac718: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac71c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac720: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac724: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac728: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac72c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC72Cu;
    {
        const bool branch_taken_0x2ac72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC72Cu;
        // 0x2ac730: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac72c) {
            ctx->pc = 0x2AC73Cu;
            goto label_2ac73c;
        }
    }
    ctx->pc = 0x2AC734u;
    // 0x2ac734: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac738: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac73c:
    // 0x2ac73c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac740: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac744: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac748: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac74c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac750: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac754: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac758: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac75c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC75Cu;
    {
        const bool branch_taken_0x2ac75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC75Cu;
        // 0x2ac760: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac75c) {
            ctx->pc = 0x2AC76Cu;
            goto label_2ac76c;
        }
    }
    ctx->pc = 0x2AC764u;
    // 0x2ac764: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac768: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac76c:
    // 0x2ac76c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac770: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac774: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac778: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac77c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac780: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac784: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac788: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac78c: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2ac78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac790: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2ac790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac794: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac798: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2ac798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ac79c: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2ac79cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac7a4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC7A4u;
    SET_GPR_U32(ctx, 31, 0x2AC7ACu);
    ctx->pc = 0x2AC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7A4u;
    // 0x2ac7a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC7A4u, 0x2AC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7ACu;
label_2ac7ac:
    // 0x2ac7ac: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ac7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ac7b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac7b4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ac7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ac7b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac7bc: 0x0  nop
    ctx->pc = 0x2ac7bcu;
    // NOP
    // 0x2ac7c0: 0x0  nop
    ctx->pc = 0x2ac7c0u;
    // NOP
    // 0x2ac7c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac7c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac7c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac7cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac7ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac7d0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ac7d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ac7d4: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ac7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ac7d8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ac7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ac7dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC7DCu;
    {
        const bool branch_taken_0x2ac7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7DCu;
        // 0x2ac7e0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7dc) {
            ctx->pc = 0x2AC7ECu;
            goto label_2ac7ec;
        }
    }
    ctx->pc = 0x2AC7E4u;
    // 0x2ac7e4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac7e8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ac7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ac7ec:
    // 0x2ac7ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac7f0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ac7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ac7f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac7f8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ac7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ac7fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac800: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ac800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ac804: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ac804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ac808: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ac808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ac80c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC80Cu;
    {
        const bool branch_taken_0x2ac80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC80Cu;
        // 0x2ac810: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac80c) {
            ctx->pc = 0x2AC81Cu;
            goto label_2ac81c;
        }
    }
    ctx->pc = 0x2AC814u;
    // 0x2ac814: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ac814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ac818: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ac818u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ac81c:
    // 0x2ac81c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac820: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ac820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ac824: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac828: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ac828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ac82c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac830: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ac830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ac834: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ac834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac838: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ac838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ac83c: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2ac83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac840: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2ac840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ac844: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2ac844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac848: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2ac848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2ac84c: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2ac84cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ac850: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2ac850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ac854:
    // 0x2ac854: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2ac854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac858: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2ac858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac85c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ac85cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2ac860:
    // 0x2ac860: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ac860u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ac864: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ac864u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ac868: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ac868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac86c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ac86cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ac870: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac874: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ac874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac878: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ac878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ac87c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2ac87cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ac880: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac884: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac888: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2ac888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac88c: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2ac88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ac890: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x2ac890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac894: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2ac894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac898: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2ac898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac89c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2ac89cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac8a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ac8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ac8a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac8a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ac8a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac8ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ac8acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ac8b0: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2ac8b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ac8b4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac8b8: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac8b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac8bc: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2ac8bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac8c0: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2ac8c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ac8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8c8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC8C8u;
    SET_GPR_U32(ctx, 31, 0x2AC8D0u);
    ctx->pc = 0x2AC8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8C8u;
    // 0x2ac8cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC8C8u, 0x2AC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8D0u;
label_2ac8d0:
    // 0x2ac8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ac8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ac8d8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC8D8u;
    SET_GPR_U32(ctx, 31, 0x2AC8E0u);
    ctx->pc = 0x2AC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8D8u;
    // 0x2ac8dc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC8D8u, 0x2AC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8E0u;
label_2ac8e0:
    // 0x2ac8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ac8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac8e8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AC8E8u;
    SET_GPR_U32(ctx, 31, 0x2AC8F0u);
    ctx->pc = 0x2AC8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8E8u;
    // 0x2ac8ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AC8E8u, 0x2AC8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8F0u;
label_2ac8f0:
    // 0x2ac8f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ac8f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2ac8f4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2ac8f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2ac8f8: 0xc0a9d80  jal         func_2A7600
    ctx->pc = 0x2AC8F8u;
    SET_GPR_U32(ctx, 31, 0x2AC900u);
    ctx->pc = 0x2AC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8F8u;
    // 0x2ac8fc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7600u, 0x2AC8F8u, 0x2AC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC900u;
label_2ac900:
    // 0x2ac900: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x2ac900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac904: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2ac904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac908: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2ac908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac90c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ac90cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2ac910: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ac910u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ac914: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ac914u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ac918: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ac918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac91c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ac91cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ac920: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac924: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ac924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ac928: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ac928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ac92c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2ac92cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ac930: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ac930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac934: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ac934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac938: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2ac938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ac93c: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2ac93cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ac940: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x2ac940u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2ac944: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x2ac944u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2ac948: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x2ac948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2ac94c: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x2ac94cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2ac950: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2ac950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2ac954: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2ac954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2ac958: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AC958u;
    {
        const bool branch_taken_0x2ac958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac958) {
            ctx->pc = 0x2AC95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC958u;
            // 0x2ac95c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC9ACu;
            goto label_2ac9ac;
        }
    }
    ctx->pc = 0x2AC960u;
    // 0x2ac960: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x2ac960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x2ac964: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ac964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ac968: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC968u;
    {
        const bool branch_taken_0x2ac968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac968) {
            ctx->pc = 0x2AC96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC968u;
            // 0x2ac96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC980u;
            goto label_2ac980;
        }
    }
    ctx->pc = 0x2AC970u;
    // 0x2ac970: 0xc0aaea4  jal         func_2ABA90
    ctx->pc = 0x2AC970u;
    SET_GPR_U32(ctx, 31, 0x2AC978u);
    ctx->pc = 0x2AC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC970u;
    // 0x2ac974: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA90u;
    goto label_2aba90;
    ctx->pc = 0x2AC978u;
label_2ac978:
    // 0x2ac978: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AC978u;
    {
        const bool branch_taken_0x2ac978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC978u;
        // 0x2ac97c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac978) {
            ctx->pc = 0x2AC9ACu;
            goto label_2ac9ac;
        }
    }
    ctx->pc = 0x2AC980u;
label_2ac980:
    // 0x2ac980: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC980u;
    {
        const bool branch_taken_0x2ac980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac980) {
            ctx->pc = 0x2AC984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC980u;
            // 0x2ac984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC998u;
            goto label_2ac998;
        }
    }
    ctx->pc = 0x2AC988u;
    // 0x2ac988: 0xc0aaea4  jal         func_2ABA90
    ctx->pc = 0x2AC988u;
    SET_GPR_U32(ctx, 31, 0x2AC990u);
    ctx->pc = 0x2AC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC988u;
    // 0x2ac98c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA90u;
    goto label_2aba90;
    ctx->pc = 0x2AC990u;
label_2ac990:
    // 0x2ac990: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC990u;
    {
        const bool branch_taken_0x2ac990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC990u;
        // 0x2ac994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac990) {
            ctx->pc = 0x2AC9ACu;
            goto label_2ac9ac;
        }
    }
    ctx->pc = 0x2AC998u;
label_2ac998:
    // 0x2ac998: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC998u;
    {
        const bool branch_taken_0x2ac998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC998u;
        // 0x2ac99c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac998) {
            ctx->pc = 0x2AC9ACu;
            goto label_2ac9ac;
        }
    }
    ctx->pc = 0x2AC9A0u;
    // 0x2ac9a0: 0xc0aaea4  jal         func_2ABA90
    ctx->pc = 0x2AC9A0u;
    SET_GPR_U32(ctx, 31, 0x2AC9A8u);
    ctx->pc = 0x2AC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9A0u;
    // 0x2ac9a4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA90u;
    goto label_2aba90;
    ctx->pc = 0x2AC9A8u;
label_2ac9a8:
    // 0x2ac9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac9ac:
    // 0x2ac9ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ac9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac9b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac9b4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2ac9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ac9b8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2ac9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9BCu;
        // 0x2ac9c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC9C4u;
    // 0x2ac9c4: 0x0  nop
    ctx->pc = 0x2ac9c4u;
    // NOP
    ctx->pc = 0x2ac9c8u;
}
