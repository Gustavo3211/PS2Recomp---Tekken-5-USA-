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

// Function: sub_002FD398
// Address: 0x2fd398 - 0x2fd540
void sub_002FD398_0x2fd398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD398_0x2fd398");
#endif

    switch (ctx->pc) {
        case 0x2fd3acu: goto label_2fd3ac;
        case 0x2fd400u: goto label_2fd400;
        case 0x2fd408u: goto label_2fd408;
        case 0x2fd41cu: goto label_2fd41c;
        default: break;
    }

    ctx->pc = 0x2fd398u;

label_2fd398:
    // 0x2fd398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd3a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fd3a4: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FD3A4u;
    SET_GPR_U32(ctx, 31, 0x2FD3ACu);
    ctx->pc = 0x2FD3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3A4u;
    // 0x2fd3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FD3A4u, 0x2FD3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3ACu;
label_2fd3ac:
    // 0x2fd3ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fd3b0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2FD3B0u;
    {
        const bool branch_taken_0x2fd3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd3b0) {
            ctx->pc = 0x2FD3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD3B0u;
            // 0x2fd3b4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD3F0u;
            goto label_2fd3f0;
        }
    }
    ctx->pc = 0x2FD3B8u;
    // 0x2fd3b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fd3bc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FD3BCu;
    {
        const bool branch_taken_0x2fd3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd3bc) {
            ctx->pc = 0x2FD3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD3BCu;
            // 0x2fd3c0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD3F0u;
            goto label_2fd3f0;
        }
    }
    ctx->pc = 0x2FD3C4u;
    // 0x2fd3c4: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2fd3c4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd3c8: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2fd3c8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fd3cc: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x2fd3ccu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2fd3d0: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x2fd3d0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2fd3d4: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x2fd3d4u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x2fd3d8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x2fd3d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2fd3dc: 0xf87c0000  sqc2        $vf28, 0x0($v1)
    ctx->pc = 0x2fd3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2fd3e0: 0xf87d0010  sqc2        $vf29, 0x10($v1)
    ctx->pc = 0x2fd3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2fd3e4: 0xf87e0020  sqc2        $vf30, 0x20($v1)
    ctx->pc = 0x2fd3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2fd3e8: 0xf87f0030  sqc2        $vf31, 0x30($v1)
    ctx->pc = 0x2fd3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2fd3ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2fd3f0:
    // 0x2fd3f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD3F0u;
    {
        const bool branch_taken_0x2fd3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3F0u;
        // 0x2fd3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3f0) {
            ctx->pc = 0x2FD400u;
            goto label_2fd400;
        }
    }
    ctx->pc = 0x2FD3F8u;
    // 0x2fd3f8: 0xc0bf4e6  jal         func_2FD398
    ctx->pc = 0x2FD3F8u;
    SET_GPR_U32(ctx, 31, 0x2FD400u);
    ctx->pc = 0x2FD398u;
    goto label_2fd398;
    ctx->pc = 0x2FD400u;
label_2fd400:
    // 0x2fd400: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FD400u;
    SET_GPR_U32(ctx, 31, 0x2FD408u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FD400u, 0x2FD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD408u;
label_2fd408:
    // 0x2fd408: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fd408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fd40c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD40Cu;
    {
        const bool branch_taken_0x2fd40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD40Cu;
        // 0x2fd410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd40c) {
            ctx->pc = 0x2FD41Cu;
            goto label_2fd41c;
        }
    }
    ctx->pc = 0x2FD414u;
    // 0x2fd414: 0xc0bf4e6  jal         func_2FD398
    ctx->pc = 0x2FD414u;
    SET_GPR_U32(ctx, 31, 0x2FD41Cu);
    ctx->pc = 0x2FD398u;
    goto label_2fd398;
    ctx->pc = 0x2FD41Cu;
label_2fd41c:
    // 0x2fd41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd424: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD424u;
        // 0x2fd428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD42Cu;
    // 0x2fd42c: 0x0  nop
    ctx->pc = 0x2fd42cu;
    // NOP
    // 0x2fd430: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2fd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fd434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fd438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd43c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x2fd43cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2fd440: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2fd440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd444: 0xc7819534  lwc1        $f1, -0x6ACC($gp)
    ctx->pc = 0x2fd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd448: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2fd448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2fd44c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2fd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2fd450: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2fd450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2fd454: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2fd454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2fd458: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2fd458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fd45c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD45Cu;
    {
        const bool branch_taken_0x2fd45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD45Cu;
        // 0x2fd460: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd45c) {
            ctx->pc = 0x2FD470u;
            goto label_2fd470;
        }
    }
    ctx->pc = 0x2FD464u;
    // 0x2fd464: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2fd464u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2fd468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD468u;
    {
        const bool branch_taken_0x2fd468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD468u;
        // 0x2fd46c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd468) {
            ctx->pc = 0x2FD478u;
            goto label_2fd478;
        }
    }
    ctx->pc = 0x2FD470u;
label_2fd470:
    // 0x2fd470: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x2fd470u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2fd474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fd474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd478:
    // 0x2fd478: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2fd478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fd47c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2fd47cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fd480: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2fd484: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2fd484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2fd488: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2fd488u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2fd48c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2fd48cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2fd490: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2fd490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd494: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2fd494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2fd498: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2fd498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd49c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2fd49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4a0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2fd4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4a4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2fd4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4a8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2fd4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4ac: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2fd4acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4b0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2fd4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4b4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2fd4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4b8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2fd4b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4bc: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2fd4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2fd4c0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2fd4c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD4C4u;
    {
        const bool branch_taken_0x2fd4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4C4u;
        // 0x2fd4c8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4c4) {
            ctx->pc = 0x2FD4D8u;
            goto label_2fd4d8;
        }
    }
    ctx->pc = 0x2FD4CCu;
    // 0x2fd4cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd4ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fd4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD4D0u;
    {
        const bool branch_taken_0x2fd4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4D0u;
        // 0x2fd4d4: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4d0) {
            ctx->pc = 0x2FD4E0u;
            goto label_2fd4e0;
        }
    }
    ctx->pc = 0x2FD4D8u;
label_2fd4d8:
    // 0x2fd4d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd4d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fd4dc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2fd4dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2fd4e0:
    // 0x2fd4e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2fd4e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd4e4: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2fd4e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fd4e8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2fd4e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2fd4ec: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2fd4ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2fd4f0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2fd4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4f4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2fd4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4f8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2fd4f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fd4fc: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2fd4fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2fd500: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2fd500u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd504: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2fd504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2fd508: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2fd508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2fd50c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2fd50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2fd510: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2fd510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2fd514: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2fd514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2fd518: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2fd518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fd51c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2fd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd520: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2fd520u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2fd524: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2fd524u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2fd528: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2fd528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2fd52c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fd52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd530: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x2fd530u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x2fd534: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD534u;
        // 0x2fd538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD53Cu;
    // 0x2fd53c: 0x0  nop
    ctx->pc = 0x2fd53cu;
    // NOP
    ctx->pc = 0x2fd540u;
}
