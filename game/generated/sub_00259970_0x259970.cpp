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

// Function: sub_00259970
// Address: 0x259970 - 0x259bd0
void sub_00259970_0x259970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259970_0x259970");
#endif

    switch (ctx->pc) {
        case 0x259990u: goto label_259990;
        case 0x259a98u: goto label_259a98;
        case 0x259b68u: goto label_259b68;
        case 0x259bb8u: goto label_259bb8;
        default: break;
    }

    ctx->pc = 0x259970u;

    // 0x259970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x259970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x259974: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x259974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x259978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25997c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259980: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x259980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x259984: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x259984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x259988: 0xc08c19c  jal         func_230670
    ctx->pc = 0x259988u;
    SET_GPR_U32(ctx, 31, 0x259990u);
    ctx->pc = 0x25998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259988u;
    // 0x25998c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x259988u, 0x259990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259990u;
label_259990:
    // 0x259990: 0x8e2305a4  lw          $v1, 0x5A4($s1)
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x259994: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x259998: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x259998u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25999c: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x25999cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2599a0: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x2599a0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2599a4: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x2599a4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2599a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2599a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2599ac: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2599acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2599b0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2599b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2599b4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2599b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2599b8: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2599b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599bc: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2599bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599c0: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2599c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599c4: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2599c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2599c8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2599c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599cc: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2599ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599d0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2599d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599d4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2599d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2599d8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2599d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599dc: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2599dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599e0: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2599e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599e4: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2599e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2599e8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2599e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599ec: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2599ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599f0: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2599f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2599f4: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2599f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2599f8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2599f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2599fc: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2599fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x259a00: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x259a00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x259a04: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x259a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x259a08: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x259a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x259a0c: 0x8e2405c4  lw          $a0, 0x5C4($s1)
    ctx->pc = 0x259a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1476)));
    // 0x259a10: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x259a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259a18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x259a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x259a1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a20: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x259a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x259a24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x259a28: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x259a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x259a2c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x259a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x259a30: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x259a34: 0x26101c20  addiu       $s0, $s0, 0x1C20
    ctx->pc = 0x259a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7200));
    // 0x259a38: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x259a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x259a3c: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x259A3Cu;
    {
        const bool branch_taken_0x259a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A3Cu;
        // 0x259a40: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a3c) {
            ctx->pc = 0x259AF0u;
            goto label_259af0;
        }
    }
    ctx->pc = 0x259A44u;
    // 0x259a44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x259a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259a48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x259a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259a4c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x259a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x259a50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x259a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259a58: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x259a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259a5c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x259a60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x259a64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x259a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a6c: 0x0  nop
    ctx->pc = 0x259a6cu;
    // NOP
    // 0x259a70: 0x0  nop
    ctx->pc = 0x259a70u;
    // NOP
    // 0x259a74: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x259a74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x259a78: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x259a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x259a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x259a80: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259a84: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x259a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a88: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259a8c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x259a8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x259a90: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x259a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x259a94: 0x0  nop
    ctx->pc = 0x259a94u;
    // NOP
label_259a98:
    // 0x259a98: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x259a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x259a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259aa4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x259aa8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x259aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x259aac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x259aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259ab4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x259ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x259ab8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x259ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259abc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x259abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259ac0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x259ac4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x259ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x259ac8: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x259ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259acc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x259accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x259ad0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x259ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x259ad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x259ad8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x259ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x259adc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x259adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x259ae0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x259AE0u;
    {
        const bool branch_taken_0x259ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AE0u;
        // 0x259ae4: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ae0) {
            ctx->pc = 0x259A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259a98;
        }
    }
    ctx->pc = 0x259AE8u;
    // 0x259ae8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259AE8u;
    {
        const bool branch_taken_0x259ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AE8u;
        // 0x259aec: 0x8f83aa20  lw          $v1, -0x55E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ae8) {
            ctx->pc = 0x259B14u;
            goto label_259b14;
        }
    }
    ctx->pc = 0x259AF0u;
label_259af0:
    // 0x259af0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x259af4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259af8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259b00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259b04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x259b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x259b08: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x259b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259b0c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x259b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x259b10: 0x8f83aa20  lw          $v1, -0x55E0($gp)
    ctx->pc = 0x259b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945312)));
label_259b14:
    // 0x259b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259b18: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x259B18u;
    {
        const bool branch_taken_0x259b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B18u;
        // 0x259b1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b18) {
            ctx->pc = 0x259BB8u;
            goto label_259bb8;
        }
    }
    ctx->pc = 0x259B20u;
    // 0x259b20: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x259b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b24: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x259b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x259b28: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x259b28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259b2c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x259b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259b30: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x259b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x259b34: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x259b34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x259b38: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x259b38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x259b3c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x259b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b40: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x259b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b44: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x259b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b48: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x259b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x259b4c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x259b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x259b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x259b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b54: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x259b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b5c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259b60: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x259B60u;
    SET_GPR_U32(ctx, 31, 0x259B68u);
    ctx->pc = 0x259B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B60u;
    // 0x259b64: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x259B60u, 0x259B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B68u;
label_259b68:
    // 0x259b68: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x259b6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x259b70: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x259b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b74: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x259b74u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259b78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x259b78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259b7c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x259b7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x259b80: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x259b80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x259b84: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x259b84u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x259b88: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x259b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b8c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x259b8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b90: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x259b90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259b94: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x259b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x259b98: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x259b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x259b9c: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x259b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259ba8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259bac: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x259bacu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x259bb0: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x259BB0u;
    SET_GPR_U32(ctx, 31, 0x259BB8u);
    ctx->pc = 0x259BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BB0u;
    // 0x259bb4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x259BB0u, 0x259BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BB8u;
label_259bb8:
    // 0x259bb8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x259bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259bbc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x259bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x259bc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x259bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x259BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BC4u;
        // 0x259bc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259BCCu;
    // 0x259bcc: 0x0  nop
    ctx->pc = 0x259bccu;
    // NOP
    ctx->pc = 0x259bd0u;
}
