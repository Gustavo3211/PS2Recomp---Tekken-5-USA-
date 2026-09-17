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

// Function: sub_00256688
// Address: 0x256688 - 0x2567e8
void sub_00256688_0x256688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256688_0x256688");
#endif

    switch (ctx->pc) {
        case 0x2566bcu: goto label_2566bc;
        case 0x2567d4u: goto label_2567d4;
        default: break;
    }

    ctx->pc = 0x256688u;

    // 0x256688: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x256688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25668c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25668cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x256690: 0x8c468880  lw          $a2, -0x7780($v0)
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A8880u));
    // 0x256694: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x256694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x256698: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25669c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x25669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2566a0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2566a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2566a4: 0x24b11db0  addiu       $s1, $a1, 0x1DB0
    ctx->pc = 0x2566a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x2566a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2566a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2566ac: 0x14c30049  bne         $a2, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2566ACu;
    {
        const bool branch_taken_0x2566ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2566B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566ACu;
        // 0x2566b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566ac) {
            ctx->pc = 0x2567D4u;
            goto label_2567d4;
        }
    }
    ctx->pc = 0x2566B4u;
    // 0x2566b4: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2566B4u;
    SET_GPR_U32(ctx, 31, 0x2566BCu);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2566B4u, 0x2566BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566BCu;
label_2566bc:
    // 0x2566bc: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x2566BCu;
    {
        const bool branch_taken_0x2566bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566bc) {
            ctx->pc = 0x2566C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2566BCu;
            // 0x2566c0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567D8u;
            goto label_2567d8;
        }
    }
    ctx->pc = 0x2566C4u;
    // 0x2566c4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2566c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2566c8: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2566C8u;
    {
        const bool branch_taken_0x2566c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566c8) {
            ctx->pc = 0x2566CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2566C8u;
            // 0x2566cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567D8u;
            goto label_2567d8;
        }
    }
    ctx->pc = 0x2566D0u;
    // 0x2566d0: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x2566d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2566d4: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x2566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x2566d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2566d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2566dc: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2566DCu;
    {
        const bool branch_taken_0x2566dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566dc) {
            ctx->pc = 0x2566E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2566DCu;
            // 0x2566e0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567D8u;
            goto label_2567d8;
        }
    }
    ctx->pc = 0x2566E4u;
    // 0x2566e4: 0x8e020894  lw          $v0, 0x894($s0)
    ctx->pc = 0x2566e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x2566e8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2566e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2566ec: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2566ECu;
    {
        const bool branch_taken_0x2566ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566ECu;
        // 0x2566f0: 0x246430a0  addiu       $a0, $v1, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566ec) {
            ctx->pc = 0x2567D4u;
            goto label_2567d4;
        }
    }
    ctx->pc = 0x2566F4u;
    // 0x2566f4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2566f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2566f8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2566f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2566fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2566fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256700: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x256700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x256704: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x256704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x256708: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x256708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25670c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25670cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256710: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x256710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x256714: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x256714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256718: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x256718u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25671c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25671cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x256720: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x256720u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x256724: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256728: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x256728u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25672c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x25672cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256730: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x256730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256734: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x256734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256738: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x256738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25673c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25673cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256740: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x256744: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x256744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x256748: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x256748u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25674c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x25674cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256750: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x256750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256754: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x256754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256758: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x256758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25675c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25675cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256760: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x256760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x256764: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x256764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256768: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x256768u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25676c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x25676cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256770: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x256770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x256774: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x256774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256778: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x256778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25677c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x256780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x256780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x256784: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x256784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x256788: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x256788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25678c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x25678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x256790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x256794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256798: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x256798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25679c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x25679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2567a0: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2567a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2567a4: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x2567a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2567a8: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2567a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2567ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2567acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2567b0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2567b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2567b4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2567b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2567b8: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2567b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2567bc: 0xe7a6005c  swc1        $f6, 0x5C($sp)
    ctx->pc = 0x2567bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2567c0: 0xe7a6004c  swc1        $f6, 0x4C($sp)
    ctx->pc = 0x2567c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2567c4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2567c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2567c8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2567c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2567cc: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2567CCu;
    SET_GPR_U32(ctx, 31, 0x2567D4u);
    ctx->pc = 0x2567D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567CCu;
    // 0x2567d0: 0xa7a00068  sh          $zero, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2567CCu, 0x2567D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567D4u;
label_2567d4:
    // 0x2567d4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2567d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2567d8:
    // 0x2567d8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2567d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2567dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2567dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2567e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2567E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567E0u;
        // 0x2567e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2567E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2567E8u;
}
