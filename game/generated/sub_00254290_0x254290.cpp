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

// Function: sub_00254290
// Address: 0x254290 - 0x254a28
void sub_00254290_0x254290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254290_0x254290");
#endif

    switch (ctx->pc) {
        case 0x2542e0u: goto label_2542e0;
        case 0x2548c8u: goto label_2548c8;
        case 0x2548e4u: goto label_2548e4;
        case 0x2548f8u: goto label_2548f8;
        case 0x254918u: goto label_254918;
        case 0x254928u: goto label_254928;
        case 0x254938u: goto label_254938;
        case 0x254940u: goto label_254940;
        case 0x254964u: goto label_254964;
        default: break;
    }

    ctx->pc = 0x254290u;

    // 0x254290: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x254290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x254294: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x254294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x254298: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x254298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25429c: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x25429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2542a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2542a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2542a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542a8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2542a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542ac: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2542acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2542b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2542b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542b4: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2542b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2542b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2542b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542bc: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2542bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x2542c0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2542c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542c4: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2542c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x2542c8: 0xe7b401a8  swc1        $f20, 0x1A8($sp)
    ctx->pc = 0x2542c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2542cc: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2542ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x2542d0: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x2542d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x2542d4: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x2542d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2542d8: 0xc08f3fe  jal         func_23CFF8
    ctx->pc = 0x2542D8u;
    SET_GPR_U32(ctx, 31, 0x2542E0u);
    ctx->pc = 0x2542DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542D8u;
    // 0x2542dc: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CFF8u, 0x2542D8u, 0x2542E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542E0u;
label_2542e0:
    // 0x2542e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2542e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2542e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2542e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2542e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2542e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542ec: 0x108001c2  beqz        $a0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x2542ECu;
    {
        const bool branch_taken_0x2542ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542ECu;
        // 0x2542f0: 0x4600a186  mov.s       $f6, $f20 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542ec) {
            ctx->pc = 0x2549F8u;
            goto label_2549f8;
        }
    }
    ctx->pc = 0x2542F4u;
    // 0x2542f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2542f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2542f8: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x2542f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2542fc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2542fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254304: 0xc7808a08  lwc1        $f0, -0x75F8($gp)
    ctx->pc = 0x254304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254308: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x254308u;
    {
        const bool branch_taken_0x254308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254308u;
        // 0x25430c: 0x8c97000c  lw          $s7, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254308) {
            ctx->pc = 0x254320u;
            goto label_254320;
        }
    }
    ctx->pc = 0x254310u;
    // 0x254310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x254310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x254314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254314u;
    {
        const bool branch_taken_0x254314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254314u;
        // 0x254318: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254314) {
            ctx->pc = 0x254328u;
            goto label_254328;
        }
    }
    ctx->pc = 0x25431Cu;
    // 0x25431c: 0x0  nop
    ctx->pc = 0x25431cu;
    // NOP
label_254320:
    // 0x254320: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x254320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x254324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x254324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254328:
    // 0x254328: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x254328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25432c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25432cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x254330: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x254330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x254334: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x254334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x254338: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x254338u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25433c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25433cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x254340: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x254340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254344: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x254344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x254348: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x254348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25434c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25434cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254350: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x254350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254354: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x254354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254358: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x254358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25435c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25435cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254360: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x254360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254364: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x254364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254368: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x254368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25436c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25436cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x254370: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x254370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254374: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254374u;
    {
        const bool branch_taken_0x254374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254374u;
        // 0x254378: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254374) {
            ctx->pc = 0x254388u;
            goto label_254388;
        }
    }
    ctx->pc = 0x25437Cu;
    // 0x25437c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25437cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x254380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254380u;
    {
        const bool branch_taken_0x254380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254380u;
        // 0x254384: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254380) {
            ctx->pc = 0x254390u;
            goto label_254390;
        }
    }
    ctx->pc = 0x254388u;
label_254388:
    // 0x254388: 0x4a0003bf  vwaitq
    ctx->pc = 0x254388u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25438c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25438cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254390:
    // 0x254390: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x254390u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x254394: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x254394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x254398: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x254398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25439c: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x25439cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2543a0: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x2543a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2543a4: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x2543a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543a8: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x2543a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2543ac: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2543acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2543b0: 0xc7828a0c  lwc1        $f2, -0x75F4($gp)
    ctx->pc = 0x2543b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2543b4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2543b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2543b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2543b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2543bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2543bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2543c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2543C0u;
    {
        const bool branch_taken_0x2543c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2543c0) {
            ctx->pc = 0x2543C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543C0u;
            // 0x2543c4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543D8u;
            goto label_2543d8;
        }
    }
    ctx->pc = 0x2543C8u;
    // 0x2543c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2543c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2543cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2543CCu;
    {
        const bool branch_taken_0x2543cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543CCu;
        // 0x2543d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543cc) {
            ctx->pc = 0x2543DCu;
            goto label_2543dc;
        }
    }
    ctx->pc = 0x2543D4u;
    // 0x2543d4: 0x0  nop
    ctx->pc = 0x2543d4u;
    // NOP
label_2543d8:
    // 0x2543d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2543d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2543dc:
    // 0x2543dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2543dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2543e0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2543e0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2543e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2543e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2543e8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2543e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2543ec: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2543ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2543f0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2543f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2543f4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2543f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2543f8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2543f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2543fc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2543fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254400: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x254400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254404: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x254404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254408: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x254408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25440c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25440cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254410: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x254410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254414: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x254414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254418: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x254418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25441c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25441cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254420: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x254420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x254424: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x254424u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254428: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254428u;
    {
        const bool branch_taken_0x254428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254428u;
        // 0x25442c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254428) {
            ctx->pc = 0x254440u;
            goto label_254440;
        }
    }
    ctx->pc = 0x254430u;
    // 0x254430: 0x4a0003bf  vwaitq
    ctx->pc = 0x254430u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x254434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254434u;
    {
        const bool branch_taken_0x254434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254434u;
        // 0x254438: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254434) {
            ctx->pc = 0x254448u;
            goto label_254448;
        }
    }
    ctx->pc = 0x25443Cu;
    // 0x25443c: 0x0  nop
    ctx->pc = 0x25443cu;
    // NOP
label_254440:
    // 0x254440: 0x4a0003bf  vwaitq
    ctx->pc = 0x254440u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x254444: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x254444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254448:
    // 0x254448: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x254448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25444c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25444cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254450: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x254450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254454: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x254454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x254458: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x254458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25445c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25445cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x254460: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x254460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x254464: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x254464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x254468: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x254468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25446c: 0xc7828a10  lwc1        $f2, -0x75F0($gp)
    ctx->pc = 0x25446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254470: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x254470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25447c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25447Cu;
    {
        const bool branch_taken_0x25447c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25447c) {
            ctx->pc = 0x254480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25447Cu;
            // 0x254480: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x254490u;
            goto label_254490;
        }
    }
    ctx->pc = 0x254484u;
    // 0x254484: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x254484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x254488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254488u;
    {
        const bool branch_taken_0x254488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254488u;
        // 0x25448c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254488) {
            ctx->pc = 0x254494u;
            goto label_254494;
        }
    }
    ctx->pc = 0x254490u;
label_254490:
    // 0x254490: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x254490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254494:
    // 0x254494: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x254494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x254498: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x254498u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25449c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2544a0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2544a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2544a4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2544a4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2544a8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2544a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2544ac: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2544acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2544b0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2544b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2544b4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2544b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544b8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2544b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544bc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2544bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544c0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2544c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2544c4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2544c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544c8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2544c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2544cc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2544ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544d0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2544d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2544d4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2544d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2544d8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2544d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2544dc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2544dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2544e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2544E0u;
    {
        const bool branch_taken_0x2544e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544E0u;
        // 0x2544e4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544e0) {
            ctx->pc = 0x2544F8u;
            goto label_2544f8;
        }
    }
    ctx->pc = 0x2544E8u;
    // 0x2544e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2544e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2544ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2544ECu;
    {
        const bool branch_taken_0x2544ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544ECu;
        // 0x2544f0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544ec) {
            ctx->pc = 0x254500u;
            goto label_254500;
        }
    }
    ctx->pc = 0x2544F4u;
    // 0x2544f4: 0x0  nop
    ctx->pc = 0x2544f4u;
    // NOP
label_2544f8:
    // 0x2544f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2544f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2544fc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2544fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254500:
    // 0x254500: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x254500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254504: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x254504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254508: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x254508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25450c: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x25450cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254510: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x254510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x254514: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x254514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254518: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x254518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25451c: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x25451cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254520: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x254520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x254524: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x254524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x254528: 0x7ec20030  sq          $v0, 0x30($s6)
    ctx->pc = 0x254528u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), GPR_VEC(ctx, 2));
    // 0x25452c: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x25452cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x254530: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x254530u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x254534: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x254534u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x254538: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x254538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25453c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x25453cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254540: 0xaec3003c  sw          $v1, 0x3C($s6)
    ctx->pc = 0x254540u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 3));
    // 0x254544: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x254544u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x254548: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x254548u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x25454c: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x25454cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x254550: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x254550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x254554: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x254554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x254558: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25455c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x25455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x254560: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x254560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254564: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x254564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x254568: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x254568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25456c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x25456cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254570: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x254570u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254574: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x254574u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254578: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x254578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25457c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25457cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254580: 0xc7828a14  lwc1        $f2, -0x75EC($gp)
    ctx->pc = 0x254580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254588: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x254588u;
    {
        const bool branch_taken_0x254588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254588) {
            ctx->pc = 0x25458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254588u;
            // 0x25458c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545A0u;
            goto label_2545a0;
        }
    }
    ctx->pc = 0x254590u;
    // 0x254590: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x254590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x254594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254594u;
    {
        const bool branch_taken_0x254594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254594u;
        // 0x254598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254594) {
            ctx->pc = 0x2545A4u;
            goto label_2545a4;
        }
    }
    ctx->pc = 0x25459Cu;
    // 0x25459c: 0x0  nop
    ctx->pc = 0x25459cu;
    // NOP
label_2545a0:
    // 0x2545a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2545a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2545a4:
    // 0x2545a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2545a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2545a8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2545a8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2545ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2545acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2545b0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2545b4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2545b4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2545b8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2545b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2545bc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2545bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2545c0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2545c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2545c4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2545c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545c8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2545c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545cc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2545ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545d0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2545d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2545d4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2545d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545d8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2545d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2545dc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2545dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545e0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2545e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2545e4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2545e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2545e8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2545e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2545ec: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2545ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2545f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2545F0u;
    {
        const bool branch_taken_0x2545f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545F0u;
        // 0x2545f4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545f0) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x2545F8u;
    // 0x2545f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2545f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2545fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2545FCu;
    {
        const bool branch_taken_0x2545fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545FCu;
        // 0x254600: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545fc) {
            ctx->pc = 0x254610u;
            goto label_254610;
        }
    }
    ctx->pc = 0x254604u;
    // 0x254604: 0x0  nop
    ctx->pc = 0x254604u;
    // NOP
label_254608:
    // 0x254608: 0x4a0003bf  vwaitq
    ctx->pc = 0x254608u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25460c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25460cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254610:
    // 0x254610: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x254610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254614: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x254614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254618: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x254618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25461c: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x25461cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254620: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x254620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x254624: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x254624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254628: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x254628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25462c: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x25462cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254630: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x254630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x254634: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x254634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x254638: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x254638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25463c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x25463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254644: 0xc7828a18  lwc1        $f2, -0x75E8($gp)
    ctx->pc = 0x254644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25464c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25464Cu;
    {
        const bool branch_taken_0x25464c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25464c) {
            ctx->pc = 0x254650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25464Cu;
            // 0x254650: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x254660u;
            goto label_254660;
        }
    }
    ctx->pc = 0x254654u;
    // 0x254654: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x254654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x254658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254658u;
    {
        const bool branch_taken_0x254658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254658u;
        // 0x25465c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254658) {
            ctx->pc = 0x254664u;
            goto label_254664;
        }
    }
    ctx->pc = 0x254660u;
label_254660:
    // 0x254660: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x254660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254664:
    // 0x254664: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x254664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x254668: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x254668u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25466c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x254670: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x254674: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x254674u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x254678: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x254678u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25467c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25467cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254680: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x254680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x254684: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x254684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254688: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x254688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25468c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25468cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254690: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x254690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254694: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x254694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254698: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x254698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25469c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25469cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2546a0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2546a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2546a4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2546a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2546a8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2546a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2546ac: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2546acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2546b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2546B0u;
    {
        const bool branch_taken_0x2546b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B0u;
        // 0x2546b4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546b0) {
            ctx->pc = 0x2546C8u;
            goto label_2546c8;
        }
    }
    ctx->pc = 0x2546B8u;
    // 0x2546b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2546b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2546bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2546BCu;
    {
        const bool branch_taken_0x2546bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546BCu;
        // 0x2546c0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546bc) {
            ctx->pc = 0x2546D0u;
            goto label_2546d0;
        }
    }
    ctx->pc = 0x2546C4u;
    // 0x2546c4: 0x0  nop
    ctx->pc = 0x2546c4u;
    // NOP
label_2546c8:
    // 0x2546c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2546c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2546cc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2546ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2546d0:
    // 0x2546d0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2546d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2546d4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2546d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2546d8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2546d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2546dc: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2546dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2546e0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2546e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2546e4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2546e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2546e8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2546e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2546ec: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2546ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2546f0: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2546f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2546f4: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2546f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2546f8: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2546f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2546fc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2546fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254704: 0xc7828a1c  lwc1        $f2, -0x75E4($gp)
    ctx->pc = 0x254704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25470c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25470Cu;
    {
        const bool branch_taken_0x25470c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25470c) {
            ctx->pc = 0x254710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25470Cu;
            // 0x254710: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x254720u;
            goto label_254720;
        }
    }
    ctx->pc = 0x254714u;
    // 0x254714: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x254714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x254718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254718u;
    {
        const bool branch_taken_0x254718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254718u;
        // 0x25471c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254718) {
            ctx->pc = 0x254724u;
            goto label_254724;
        }
    }
    ctx->pc = 0x254720u;
label_254720:
    // 0x254720: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x254720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254724:
    // 0x254724: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x254724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x254728: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x254728u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25472c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x254730: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x254730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x254734: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x254734u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x254738: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x254738u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25473c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25473cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254740: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x254740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x254744: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x254744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254748: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x254748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25474c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25474cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254750: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x254750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254754: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x254754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254758: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x254758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25475c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25475cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254760: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x254760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254764: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x254764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x254768: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x254768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25476c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25476cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254770: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254770u;
    {
        const bool branch_taken_0x254770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254770u;
        // 0x254774: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254770) {
            ctx->pc = 0x254788u;
            goto label_254788;
        }
    }
    ctx->pc = 0x254778u;
    // 0x254778: 0x4a0003bf  vwaitq
    ctx->pc = 0x254778u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25477c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25477Cu;
    {
        const bool branch_taken_0x25477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25477Cu;
        // 0x254780: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25477c) {
            ctx->pc = 0x254790u;
            goto label_254790;
        }
    }
    ctx->pc = 0x254784u;
    // 0x254784: 0x0  nop
    ctx->pc = 0x254784u;
    // NOP
label_254788:
    // 0x254788: 0x4a0003bf  vwaitq
    ctx->pc = 0x254788u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25478c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25478cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254790:
    // 0x254790: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x254790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254794: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x254794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x254798: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x254798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25479c: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x25479cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2547a0: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2547a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2547a4: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2547a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2547a8: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2547a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2547ac: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2547acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2547b0: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2547b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2547b4: 0x4b87e9bc  vmulax.xy   $ACC, $vf29, $vf7x
    ctx->pc = 0x2547b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2547b8: 0x4b87e1c9  vmaddy.xy   $vf7, $vf28, $vf7y
    ctx->pc = 0x2547b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2547bc: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2547bcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2547c0: 0x4bd039e8  vadd.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x2547c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2547c4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2547c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2547c8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2547c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2547cc: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2547ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2547d0: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2547d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2547d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2547d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2547d8: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2547d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2547dc: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2547dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2547e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2547e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2547e4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2547e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2547e8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2547e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2547ec: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2547ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2547f0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2547f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2547f4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2547f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2547f8: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x2547f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2547fc: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x2547fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x254800: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x254800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x254804: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254804u;
    {
        const bool branch_taken_0x254804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x254808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254804u;
        // 0x254808: 0xe7a500c8  swc1        $f5, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254804) {
            ctx->pc = 0x254848u;
            goto label_254848;
        }
    }
    ctx->pc = 0x25480Cu;
    // 0x25480c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x25480cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x254810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254810u;
    {
        const bool branch_taken_0x254810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254810u;
        // 0x254814: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254810) {
            ctx->pc = 0x254830u;
            goto label_254830;
        }
    }
    ctx->pc = 0x254818u;
    // 0x254818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25481c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25481Cu;
    {
        const bool branch_taken_0x25481c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x254820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25481Cu;
        // 0x254820: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25481c) {
            ctx->pc = 0x254840u;
            goto label_254840;
        }
    }
    ctx->pc = 0x254824u;
    // 0x254824: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254824u;
    {
        const bool branch_taken_0x254824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254824) {
            ctx->pc = 0x254858u;
            goto label_254858;
        }
    }
    ctx->pc = 0x25482Cu;
    // 0x25482c: 0x0  nop
    ctx->pc = 0x25482cu;
    // NOP
label_254830:
    // 0x254830: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254830u;
    {
        const bool branch_taken_0x254830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x254834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254830u;
        // 0x254834: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254830) {
            ctx->pc = 0x254850u;
            goto label_254850;
        }
    }
    ctx->pc = 0x254838u;
    // 0x254838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254838u;
    {
        const bool branch_taken_0x254838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254838) {
            ctx->pc = 0x254858u;
            goto label_254858;
        }
    }
    ctx->pc = 0x254840u;
label_254840:
    // 0x254840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254840u;
    {
        const bool branch_taken_0x254840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254840u;
        // 0x254844: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254840) {
            ctx->pc = 0x254854u;
            goto label_254854;
        }
    }
    ctx->pc = 0x254848u;
label_254848:
    // 0x254848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254848u;
    {
        const bool branch_taken_0x254848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254848u;
        // 0x25484c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254848) {
            ctx->pc = 0x254854u;
            goto label_254854;
        }
    }
    ctx->pc = 0x254850u;
label_254850:
    // 0x254850: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_254854:
    // 0x254854: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x254854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_254858:
    // 0x254858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254858u;
    {
        const bool branch_taken_0x254858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254858u;
        // 0x25485c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254858) {
            ctx->pc = 0x254874u;
            goto label_254874;
        }
    }
    ctx->pc = 0x254860u;
    // 0x254860: 0x5a200005  blezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254860u;
    {
        const bool branch_taken_0x254860 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x254860) {
            ctx->pc = 0x254864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254860u;
            // 0x254864: 0xafb100d4  sw          $s1, 0xD4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254878u;
            goto label_254878;
        }
    }
    ctx->pc = 0x254868u;
    // 0x254868: 0xc4940014  lwc1        $f20, 0x14($a0)
    ctx->pc = 0x254868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25486c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x254870: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x254870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_254874:
    // 0x254874: 0xafb100d4  sw          $s1, 0xD4($sp)
    ctx->pc = 0x254874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 17));
label_254878:
    // 0x254878: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x254878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x25487c: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x25487cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x254880: 0xe7b400e8  swc1        $f20, 0xE8($sp)
    ctx->pc = 0x254880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x254884: 0xa7a00060  sh          $zero, 0x60($sp)
    ctx->pc = 0x254884u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x254888: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x254888u;
    {
        const bool branch_taken_0x254888 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254888u;
        // 0x25488c: 0xa7a000e0  sh          $zero, 0xE0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254888) {
            ctx->pc = 0x2548B8u;
            goto label_2548b8;
        }
    }
    ctx->pc = 0x254890u;
    // 0x254890: 0x1e800007  bgtz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x254890u;
    {
        const bool branch_taken_0x254890 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x254894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254890u;
        // 0x254894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254890) {
            ctx->pc = 0x2548B0u;
            goto label_2548b0;
        }
    }
    ctx->pc = 0x254898u;
    // 0x254898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x254898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25489c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25489Cu;
    {
        const bool branch_taken_0x25489c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25489Cu;
        // 0x2548a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25489c) {
            ctx->pc = 0x2548B8u;
            goto label_2548b8;
        }
    }
    ctx->pc = 0x2548A4u;
    // 0x2548a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2548A4u;
    {
        const bool branch_taken_0x2548a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2548a4) {
            ctx->pc = 0x2548C0u;
            goto label_2548c0;
        }
    }
    ctx->pc = 0x2548ACu;
    // 0x2548ac: 0x0  nop
    ctx->pc = 0x2548acu;
    // NOP
label_2548b0:
    // 0x2548b0: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2548B0u;
    {
        const bool branch_taken_0x2548b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2548B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548B0u;
        // 0x2548b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548b0) {
            ctx->pc = 0x2548C0u;
            goto label_2548c0;
        }
    }
    ctx->pc = 0x2548B8u;
label_2548b8:
    // 0x2548b8: 0xa7a000e2  sh          $zero, 0xE2($sp)
    ctx->pc = 0x2548b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 226), (uint16_t)GPR_U32(ctx, 0));
    // 0x2548bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2548bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2548c0:
    // 0x2548c0: 0xc0909d8  jal         func_242760
    ctx->pc = 0x2548C0u;
    SET_GPR_U32(ctx, 31, 0x2548C8u);
    ctx->pc = 0x2548C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548C0u;
    // 0x2548c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242760u, 0x2548C0u, 0x2548C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548C8u;
label_2548c8:
    // 0x2548c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2548c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548cc: 0x1a20004b  blez        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2548CCu;
    {
        const bool branch_taken_0x2548cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2548D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548CCu;
        // 0x2548d0: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548cc) {
            ctx->pc = 0x2549FCu;
            goto label_2549fc;
        }
    }
    ctx->pc = 0x2548D4u;
    // 0x2548d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2548d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2548d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548dc: 0xc0909e4  jal         func_242790
    ctx->pc = 0x2548DCu;
    SET_GPR_U32(ctx, 31, 0x2548E4u);
    ctx->pc = 0x2548E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548DCu;
    // 0x2548e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242790u, 0x2548DCu, 0x2548E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548E4u;
label_2548e4:
    // 0x2548e4: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2548E4u;
    {
        const bool branch_taken_0x2548e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2548E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548E4u;
        // 0x2548e8: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548e4) {
            ctx->pc = 0x2549F8u;
            goto label_2549f8;
        }
    }
    ctx->pc = 0x2548ECu;
    // 0x2548ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2548ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548f0: 0xc0937fa  jal         func_24DFE8
    ctx->pc = 0x2548F0u;
    SET_GPR_U32(ctx, 31, 0x2548F8u);
    ctx->pc = 0x2548F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548F0u;
    // 0x2548f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DFE8u, 0x2548F0u, 0x2548F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548F8u;
label_2548f8:
    // 0x2548f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2548f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2548fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2548fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254900: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254904: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x254904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x254908: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x254908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x25490c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x25490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x254910: 0xc0946de  jal         func_251B78
    ctx->pc = 0x254910u;
    SET_GPR_U32(ctx, 31, 0x254918u);
    ctx->pc = 0x254914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254910u;
    // 0x254914: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251B78u, 0x254910u, 0x254918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254918u;
label_254918:
    // 0x254918: 0x1a200037  blez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x254918u;
    {
        const bool branch_taken_0x254918 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x25491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254918u;
        // 0x25491c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254918) {
            ctx->pc = 0x2549F8u;
            goto label_2549f8;
        }
    }
    ctx->pc = 0x254920u;
    // 0x254920: 0xa7b300be  sh          $s3, 0xBE($sp)
    ctx->pc = 0x254920u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 190), (uint16_t)GPR_U32(ctx, 19));
    // 0x254924: 0x0  nop
    ctx->pc = 0x254924u;
    // NOP
label_254928:
    // 0x254928: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x254928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25492c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x25492cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254930: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x254930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x254934: 0x0  nop
    ctx->pc = 0x254934u;
    // NOP
label_254938:
    // 0x254938: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x254938u;
    SET_GPR_U32(ctx, 31, 0x254940u);
    ctx->pc = 0x25493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254938u;
    // 0x25493c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x254938u, 0x254940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254940u;
label_254940:
    // 0x254940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254944: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x254944u;
    {
        const bool branch_taken_0x254944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254944u;
        // 0x254948: 0x97a20140  lhu         $v0, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254944) {
            ctx->pc = 0x2549F8u;
            goto label_2549f8;
        }
    }
    ctx->pc = 0x25494Cu;
    // 0x25494c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25494cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254950: 0xa7b700bc  sh          $s7, 0xBC($sp)
    ctx->pc = 0x254950u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 188), (uint16_t)GPR_U32(ctx, 23));
    // 0x254954: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254958: 0xa7a200cc  sh          $v0, 0xCC($sp)
    ctx->pc = 0x254958u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 2));
    // 0x25495c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x25495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x254960: 0xac950118  sw          $s5, 0x118($a0)
    ctx->pc = 0x254960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 21));
label_254964:
    // 0x254964: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x254964u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x254968: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x254968u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25496c: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x25496cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x254970: 0xdca90018  ld          $t1, 0x18($a1)
    ctx->pc = 0x254970u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x254974: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x254974u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x254978: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x254978u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x25497c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x25497cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x254980: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x254980u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x254984: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x254984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x254988: 0x0  nop
    ctx->pc = 0x254988u;
    // NOP
    // 0x25498c: 0x0  nop
    ctx->pc = 0x25498cu;
    // NOP
    // 0x254990: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x254990u;
    {
        const bool branch_taken_0x254990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x254994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254990u;
        // 0x254994: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254990) {
            ctx->pc = 0x254964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254964;
        }
    }
    ctx->pc = 0x254998u;
    // 0x254998: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x254998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25499c: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x25499cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2549a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2549a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2549a4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2549a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2549a8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2549a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2549ac: 0xac9100dc  sw          $s1, 0xDC($a0)
    ctx->pc = 0x2549acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 17));
    // 0x2549b0: 0xac9300d0  sw          $s3, 0xD0($a0)
    ctx->pc = 0x2549b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 19));
    // 0x2549b4: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2549b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2549b8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2549b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2549bc: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x2549bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2549c0: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x2549c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2549c4: 0xdac70030  lqc2        $vf7, 0x30($s6)
    ctx->pc = 0x2549c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x2549c8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2549c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2549cc: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2549ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2549d0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2549d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2549d4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2549d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2549d8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2549d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2549dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2549dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2549e0: 0x1e00ffd5  bgtz        $s0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2549E0u;
    {
        const bool branch_taken_0x2549e0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2549e0) {
            ctx->pc = 0x254938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254938;
        }
    }
    ctx->pc = 0x2549E8u;
    // 0x2549e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2549e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2549ec: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2549ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2549f0: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2549F0u;
    {
        const bool branch_taken_0x2549f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549f0) {
            ctx->pc = 0x2549F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2549F0u;
            // 0x2549f4: 0xa7b300be  sh          $s3, 0xBE($sp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 29), 190), (uint16_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254928;
        }
    }
    ctx->pc = 0x2549F8u;
label_2549f8:
    // 0x2549f8: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2549f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2549fc:
    // 0x2549fc: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2549fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x254a00: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x254a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x254a04: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x254a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x254a08: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x254a08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x254a0c: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x254a0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x254a10: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x254a14: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x254a14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x254a18: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x254a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x254a1c: 0xc7b401a8  lwc1        $f20, 0x1A8($sp)
    ctx->pc = 0x254a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254a20: 0x3e00008  jr          $ra
    ctx->pc = 0x254A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A20u;
        // 0x254a24: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254A28u;
}
