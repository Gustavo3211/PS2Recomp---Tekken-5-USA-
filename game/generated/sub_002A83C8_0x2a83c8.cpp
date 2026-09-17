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

// Function: sub_002A83C8
// Address: 0x2a83c8 - 0x2a95b8
void sub_002A83C8_0x2a83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A83C8_0x2a83c8");
#endif

    switch (ctx->pc) {
        case 0x2a8498u: goto label_2a8498;
        case 0x2a84c8u: goto label_2a84c8;
        case 0x2a84f8u: goto label_2a84f8;
        case 0x2a8590u: goto label_2a8590;
        case 0x2a8668u: goto label_2a8668;
        case 0x2a873cu: goto label_2a873c;
        case 0x2a8824u: goto label_2a8824;
        case 0x2a88fcu: goto label_2a88fc;
        case 0x2a89d0u: goto label_2a89d0;
        case 0x2a8ab4u: goto label_2a8ab4;
        case 0x2a8b8cu: goto label_2a8b8c;
        case 0x2a8c60u: goto label_2a8c60;
        case 0x2a8d44u: goto label_2a8d44;
        case 0x2a8e1cu: goto label_2a8e1c;
        case 0x2a8ef0u: goto label_2a8ef0;
        case 0x2a8fd4u: goto label_2a8fd4;
        case 0x2a90acu: goto label_2a90ac;
        case 0x2a9180u: goto label_2a9180;
        case 0x2a9260u: goto label_2a9260;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a940cu: goto label_2a940c;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a950cu: goto label_2a950c;
        case 0x2a9518u: goto label_2a9518;
        case 0x2a9590u: goto label_2a9590;
        default: break;
    }

    ctx->pc = 0x2a83c8u;

    // 0x2a83c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a83cc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a83d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a83d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83d4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a83d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a83d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a83dc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2a83dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2a83e0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a83e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a83e4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2a83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2a83e8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2a83e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a83ec: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2a83ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a83f0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2a83f4: 0x18400463  blez        $v0, . + 4 + (0x463 << 2)
    ctx->pc = 0x2A83F4u;
    {
        const bool branch_taken_0x2a83f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83F4u;
        // 0x2a83f8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83f4) {
            ctx->pc = 0x2A9584u;
            goto label_2a9584;
        }
    }
    ctx->pc = 0x2A83FCu;
    // 0x2a83fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a83fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a8404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a840c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2a840cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8410: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x2a8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
    // 0x2a8414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8418: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2a8418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a841c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2a841cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2a8420: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a8420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8424: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a8424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8428: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a8428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a842c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2a842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a8430: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2a8430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2a8434: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2a8434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a8438: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a843c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2a843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a8440: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2a8440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2a8444: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a8444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8448: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2a8448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a844c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2a844cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a8450: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2a8450u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8454: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2a8454u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8458: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2a8458u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a845c: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2a845cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a8460: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2a8460u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a8464: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2a8464u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a8468: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2a8468u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2a846c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2a846cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a8470: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8474: 0x8e22cde0  lw          $v0, -0x3220($s1)
    ctx->pc = 0x2a8474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BCDE0u));
    // 0x2a8478: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a847c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A847Cu;
    {
        const bool branch_taken_0x2a847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a847c) {
            ctx->pc = 0x2A8480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A847Cu;
            // 0x2a8480: 0xc6150064  lwc1        $f21, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A84A0u;
            goto label_2a84a0;
        }
    }
    ctx->pc = 0x2A8484u;
    // 0x2a8484: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8488: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a848c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a848cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8490: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8490u;
    SET_GPR_U32(ctx, 31, 0x2A8498u);
    ctx->pc = 0x2A8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8490u;
    // 0x2a8494: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8490u, 0x2A8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8498u;
label_2a8498:
    // 0x2a8498: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a849c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a849cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2a84a0:
    // 0x2a84a0: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a84a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a84a8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a84a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a84ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A84ACu;
    {
        const bool branch_taken_0x2a84ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a84ac) {
            ctx->pc = 0x2A84B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A84ACu;
            // 0x2a84b0: 0xc6140068  lwc1        $f20, 0x68($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A84D4u;
            goto label_2a84d4;
        }
    }
    ctx->pc = 0x2A84B4u;
    // 0x2a84b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a84b8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a84bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a84bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a84c0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A84C0u;
    SET_GPR_U32(ctx, 31, 0x2A84C8u);
    ctx->pc = 0x2A84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A84C0u;
    // 0x2a84c4: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A84C0u, 0x2A84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84C8u;
label_2a84c8:
    // 0x2a84c8: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a84c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a84cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a84ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2a84d0: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
label_2a84d4:
    // 0x2a84d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a84d8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a84d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a84dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A84DCu;
    {
        const bool branch_taken_0x2a84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a84dc) {
            ctx->pc = 0x2A84E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A84DCu;
            // 0x2a84e0: 0xc600006c  lwc1        $f0, 0x6C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A84F8u;
            goto label_2a84f8;
        }
    }
    ctx->pc = 0x2A84E4u;
    // 0x2a84e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a84e8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a84ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a84ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a84f0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A84F0u;
    SET_GPR_U32(ctx, 31, 0x2A84F8u);
    ctx->pc = 0x2A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A84F0u;
    // 0x2a84f4: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A84F0u, 0x2A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84F8u;
label_2a84f8:
    // 0x2a84f8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2a84f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a84fc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2a84fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8500: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a8500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a8504: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a8504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8508: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a8508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a850c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2a850cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a8510: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8514: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a8514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8518: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2a8518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a851c: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2a851cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2a8520: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2a8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8524: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2a8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8528: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2a8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a852c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a852cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a8530: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a8530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8534: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a8534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a8538: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a8538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a853c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a853cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a8540: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2a8540u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a8544: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8548: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a8548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a854c: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2a854cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8550: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2a8550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2a8554: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a8558: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2a8558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2a855c: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2A855Cu;
    {
        const bool branch_taken_0x2a855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A855Cu;
        // 0x2a8560: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a855c) {
            ctx->pc = 0x2A87F0u;
            goto label_2a87f0;
        }
    }
    ctx->pc = 0x2A8564u;
    // 0x2a8564: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8568: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a856c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8570: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8574: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8574u;
    {
        const bool branch_taken_0x2a8574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8574) {
            ctx->pc = 0x2A8578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8574u;
            // 0x2a8578: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8598u;
            goto label_2a8598;
        }
    }
    ctx->pc = 0x2A857Cu;
    // 0x2a857c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8580: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8584: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8588: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8588u;
    SET_GPR_U32(ctx, 31, 0x2A8590u);
    ctx->pc = 0x2A858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8588u;
    // 0x2a858c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8588u, 0x2A8590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8590u;
label_2a8590:
    // 0x2a8590: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8594: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8594u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8598:
    // 0x2a8598: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a859c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a85a0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a85a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a85a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a85a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a85a8: 0x0  nop
    ctx->pc = 0x2a85a8u;
    // NOP
    // 0x2a85ac: 0x0  nop
    ctx->pc = 0x2a85acu;
    // NOP
    // 0x2a85b0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a85b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a85b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a85b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a85b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a85b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a85bc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a85bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a85c0: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a85c4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a85c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a85c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A85C8u;
    {
        const bool branch_taken_0x2a85c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85C8u;
        // 0x2a85cc: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85c8) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A85D0u;
    // 0x2a85d0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a85d4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a85d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a85d8:
    // 0x2a85d8: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a85d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a85dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a85e0: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a85e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a85e4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a85e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a85e8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a85ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a85f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a85f4: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a85f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a85f8: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a85f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a85fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A85FCu;
    {
        const bool branch_taken_0x2a85fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85FCu;
        // 0x2a8600: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85fc) {
            ctx->pc = 0x2A860Cu;
            goto label_2a860c;
        }
    }
    ctx->pc = 0x2A8604u;
    // 0x2a8604: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8608: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a8608u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a860c:
    // 0x2a860c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a860cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a8610: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a8610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a8614: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a8618: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a861c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a861cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8620: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8624: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8628: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a8628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a862c: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a862cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8630: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a8630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8634: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a8634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8638: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a8638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a863c: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a863cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8640: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8644: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8648: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a864c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A864Cu;
    {
        const bool branch_taken_0x2a864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a864c) {
            ctx->pc = 0x2A8650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A864Cu;
            // 0x2a8650: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8670u;
            goto label_2a8670;
        }
    }
    ctx->pc = 0x2A8654u;
    // 0x2a8654: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8658: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a865c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a865cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8660: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8660u;
    SET_GPR_U32(ctx, 31, 0x2A8668u);
    ctx->pc = 0x2A8664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8660u;
    // 0x2a8664: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8660u, 0x2A8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8668u;
label_2a8668:
    // 0x2a8668: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a866c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a866cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8670:
    // 0x2a8670: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8678: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a867c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a867cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8680: 0x0  nop
    ctx->pc = 0x2a8680u;
    // NOP
    // 0x2a8684: 0x0  nop
    ctx->pc = 0x2a8684u;
    // NOP
    // 0x2a8688: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8688u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a868c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a868cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8690: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8690u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8694: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8698: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a869c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a86a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A86A0u;
    {
        const bool branch_taken_0x2a86a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86A0u;
        // 0x2a86a4: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86a0) {
            ctx->pc = 0x2A86B0u;
            goto label_2a86b0;
        }
    }
    ctx->pc = 0x2A86A8u;
    // 0x2a86a8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a86ac: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a86acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a86b0:
    // 0x2a86b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a86b4: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a86b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a86b8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a86bc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a86bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a86c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a86c4: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a86c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a86c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a86cc: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a86ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a86d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A86D0u;
    {
        const bool branch_taken_0x2a86d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86D0u;
        // 0x2a86d4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86d0) {
            ctx->pc = 0x2A86E0u;
            goto label_2a86e0;
        }
    }
    ctx->pc = 0x2A86D8u;
    // 0x2a86d8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a86dc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a86dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a86e0:
    // 0x2a86e0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a86e4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a86e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a86e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a86ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a86ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a86f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a86f4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a86f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a86f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a86fc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a86fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8700: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a8700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8704: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a8704u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8708: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a870c: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a870cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8710: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a8710u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8714: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8718: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a8718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a871c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8720: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8720u;
    {
        const bool branch_taken_0x2a8720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8720) {
            ctx->pc = 0x2A8724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8720u;
            // 0x2a8724: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8740u;
            goto label_2a8740;
        }
    }
    ctx->pc = 0x2A8728u;
    // 0x2a8728: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a872c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8730: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8734: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8734u;
    SET_GPR_U32(ctx, 31, 0x2A873Cu);
    ctx->pc = 0x2A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8734u;
    // 0x2a8738: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8734u, 0x2A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A873Cu;
label_2a873c:
    // 0x2a873c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a873cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8740:
    // 0x2a8740: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8748: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a874c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a874cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8750: 0x0  nop
    ctx->pc = 0x2a8750u;
    // NOP
    // 0x2a8754: 0x0  nop
    ctx->pc = 0x2a8754u;
    // NOP
    // 0x2a8758: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8758u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a875c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a875cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8760: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8764: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8768: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a876c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8770u;
    {
        const bool branch_taken_0x2a8770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8770u;
        // 0x2a8774: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8770) {
            ctx->pc = 0x2A8780u;
            goto label_2a8780;
        }
    }
    ctx->pc = 0x2A8778u;
    // 0x2a8778: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a877c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a877cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8780:
    // 0x2a8780: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8784: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a8784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8788: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a878c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a878cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8790: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8794: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8798: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a879c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a879cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a87a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A87A0u;
    {
        const bool branch_taken_0x2a87a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87A0u;
        // 0x2a87a4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87a0) {
            ctx->pc = 0x2A87B0u;
            goto label_2a87b0;
        }
    }
    ctx->pc = 0x2A87A8u;
    // 0x2a87a8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a87ac: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a87acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a87b0:
    // 0x2a87b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a87b4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a87b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a87b8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a87bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a87c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a87c4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a87c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a87c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a87cc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a87ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a87d0: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a87d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a87d4: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a87d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a87d8: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a87d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a87dc: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a87dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a87e0: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a87e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a87e4: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x2A87E4u;
    {
        const bool branch_taken_0x2a87e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E4u;
        // 0x2a87e8: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87e4) {
            ctx->pc = 0x2A94B8u;
            goto label_2a94b8;
        }
    }
    ctx->pc = 0x2A87ECu;
    // 0x2a87ec: 0x0  nop
    ctx->pc = 0x2a87ecu;
    // NOP
label_2a87f0:
    // 0x2a87f0: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A87F0u;
    {
        const bool branch_taken_0x2a87f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87F0u;
        // 0x2a87f4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87f0) {
            ctx->pc = 0x2A8A80u;
            goto label_2a8a80;
        }
    }
    ctx->pc = 0x2A87F8u;
    // 0x2a87f8: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a87fc: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a87fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8800: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8804: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8808: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8808u;
    {
        const bool branch_taken_0x2a8808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8808) {
            ctx->pc = 0x2A880Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8808u;
            // 0x2a880c: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A882Cu;
            goto label_2a882c;
        }
    }
    ctx->pc = 0x2A8810u;
    // 0x2a8810: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8814: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8818: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a881c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A881Cu;
    SET_GPR_U32(ctx, 31, 0x2A8824u);
    ctx->pc = 0x2A8820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A881Cu;
    // 0x2a8820: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A881Cu, 0x2A8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8824u;
label_2a8824:
    // 0x2a8824: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8828: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8828u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a882c:
    // 0x2a882c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8834: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a883c: 0x0  nop
    ctx->pc = 0x2a883cu;
    // NOP
    // 0x2a8840: 0x0  nop
    ctx->pc = 0x2a8840u;
    // NOP
    // 0x2a8844: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8844u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a884c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a884cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8850: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a8850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a8854: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a8858: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a885c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A885Cu;
    {
        const bool branch_taken_0x2a885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A885Cu;
        // 0x2a8860: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a885c) {
            ctx->pc = 0x2A886Cu;
            goto label_2a886c;
        }
    }
    ctx->pc = 0x2A8864u;
    // 0x2a8864: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8868: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a886c:
    // 0x2a886c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a886cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a8870: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8874: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a8874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8878: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a887c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8880: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8888: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a888c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a888cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a8890: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8890u;
    {
        const bool branch_taken_0x2a8890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8890u;
        // 0x2a8894: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8890) {
            ctx->pc = 0x2A88A0u;
            goto label_2a88a0;
        }
    }
    ctx->pc = 0x2A8898u;
    // 0x2a8898: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a889c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a889cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a88a0:
    // 0x2a88a0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a88a4: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a88a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a88a8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a88ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a88acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a88b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a88b4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a88b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a88b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a88b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a88bc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a88bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a88c0: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a88c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a88c4: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a88c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a88c8: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a88c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a88cc: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a88ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a88d0: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a88d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a88d4: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a88d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a88dc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a88e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A88E0u;
    {
        const bool branch_taken_0x2a88e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a88e0) {
            ctx->pc = 0x2A88E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A88E0u;
            // 0x2a88e4: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8904u;
            goto label_2a8904;
        }
    }
    ctx->pc = 0x2A88E8u;
    // 0x2a88e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a88ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a88ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a88f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a88f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a88f4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A88F4u;
    SET_GPR_U32(ctx, 31, 0x2A88FCu);
    ctx->pc = 0x2A88F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A88F4u;
    // 0x2a88f8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A88F4u, 0x2A88FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88FCu;
label_2a88fc:
    // 0x2a88fc: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a88fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8900: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8900u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8904:
    // 0x2a8904: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a890c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8914: 0x0  nop
    ctx->pc = 0x2a8914u;
    // NOP
    // 0x2a8918: 0x0  nop
    ctx->pc = 0x2a8918u;
    // NOP
    // 0x2a891c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a891cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8920: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8924: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8928: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a892c: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8930: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8934u;
    {
        const bool branch_taken_0x2a8934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8934u;
        // 0x2a8938: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8934) {
            ctx->pc = 0x2A8944u;
            goto label_2a8944;
        }
    }
    ctx->pc = 0x2A893Cu;
    // 0x2a893c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8940: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8944:
    // 0x2a8944: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8948: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a8948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a894c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a8950: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8954: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8958: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a895c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a895cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8960: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8964u;
    {
        const bool branch_taken_0x2a8964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8964u;
        // 0x2a8968: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8964) {
            ctx->pc = 0x2A8974u;
            goto label_2a8974;
        }
    }
    ctx->pc = 0x2A896Cu;
    // 0x2a896c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8970: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8974:
    // 0x2a8974: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8978: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a897c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a8980: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8984: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8988: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a898c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a898cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8990: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8994: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a8994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8998: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a8998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a899c: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a899cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a89a0: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a89a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a89a4: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a89a4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a89a8: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a89ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a89b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a89b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A89B4u;
    {
        const bool branch_taken_0x2a89b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89b4) {
            ctx->pc = 0x2A89B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A89B4u;
            // 0x2a89b8: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A89D4u;
            goto label_2a89d4;
        }
    }
    ctx->pc = 0x2A89BCu;
    // 0x2a89bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a89c0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a89c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a89c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a89c8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A89C8u;
    SET_GPR_U32(ctx, 31, 0x2A89D0u);
    ctx->pc = 0x2A89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89C8u;
    // 0x2a89cc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A89C8u, 0x2A89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89D0u;
label_2a89d0:
    // 0x2a89d0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a89d0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a89d4:
    // 0x2a89d4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a89d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a89d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a89d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89dc: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a89dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a89e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a89e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a89e4: 0x0  nop
    ctx->pc = 0x2a89e4u;
    // NOP
    // 0x2a89e8: 0x0  nop
    ctx->pc = 0x2a89e8u;
    // NOP
    // 0x2a89ec: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a89ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a89f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a89f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a89f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a89f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a89f8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a89f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a89fc: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8a00: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8A04u;
    {
        const bool branch_taken_0x2a8a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A04u;
        // 0x2a8a08: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a04) {
            ctx->pc = 0x2A8A14u;
            goto label_2a8a14;
        }
    }
    ctx->pc = 0x2A8A0Cu;
    // 0x2a8a0c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8a10: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8a14:
    // 0x2a8a14: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8a18: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a8a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8a1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a8a20: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8a24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8a28: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8a2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8a30: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8A34u;
    {
        const bool branch_taken_0x2a8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A34u;
        // 0x2a8a38: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a34) {
            ctx->pc = 0x2A8A44u;
            goto label_2a8a44;
        }
    }
    ctx->pc = 0x2A8A3Cu;
    // 0x2a8a3c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8a40: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8a44:
    // 0x2a8a44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8a48: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a8a4c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a8a50: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8a54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8a58: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8a5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8a60: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8a64: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a8a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8a68: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a8a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8a6c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8a70: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a8a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8a74: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a8a74u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8a78: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x2A8A78u;
    {
        const bool branch_taken_0x2a8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A78u;
        // 0x2a8a7c: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a78) {
            ctx->pc = 0x2A94B8u;
            goto label_2a94b8;
        }
    }
    ctx->pc = 0x2A8A80u;
label_2a8a80:
    // 0x2a8a80: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A8A80u;
    {
        const bool branch_taken_0x2a8a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A80u;
        // 0x2a8a84: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a80) {
            ctx->pc = 0x2A8D10u;
            goto label_2a8d10;
        }
    }
    ctx->pc = 0x2A8A88u;
    // 0x2a8a88: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8a8c: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8a90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8a94: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8a98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8A98u;
    {
        const bool branch_taken_0x2a8a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8a98) {
            ctx->pc = 0x2A8A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8A98u;
            // 0x2a8a9c: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8ABCu;
            goto label_2a8abc;
        }
    }
    ctx->pc = 0x2A8AA0u;
    // 0x2a8aa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8aa4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8aa8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8aac: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8AACu;
    SET_GPR_U32(ctx, 31, 0x2A8AB4u);
    ctx->pc = 0x2A8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AACu;
    // 0x2a8ab0: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8AACu, 0x2A8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AB4u;
label_2a8ab4:
    // 0x2a8ab4: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8ab8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8ab8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8abc:
    // 0x2a8abc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ac4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8ac8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8acc: 0x0  nop
    ctx->pc = 0x2a8accu;
    // NOP
    // 0x2a8ad0: 0x0  nop
    ctx->pc = 0x2a8ad0u;
    // NOP
    // 0x2a8ad4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8ad4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8ad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8adc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8ae0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a8ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a8ae4: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a8ae8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8aec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8AECu;
    {
        const bool branch_taken_0x2a8aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AECu;
        // 0x2a8af0: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aec) {
            ctx->pc = 0x2A8AFCu;
            goto label_2a8afc;
        }
    }
    ctx->pc = 0x2A8AF4u;
    // 0x2a8af4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8af8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8afc:
    // 0x2a8afc: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a8afcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a8b00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8b04: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a8b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8b08: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8b0c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8b10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8b14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8b18: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a8b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a8b1c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a8b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a8b20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8B20u;
    {
        const bool branch_taken_0x2a8b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B20u;
        // 0x2a8b24: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b20) {
            ctx->pc = 0x2A8B30u;
            goto label_2a8b30;
        }
    }
    ctx->pc = 0x2A8B28u;
    // 0x2a8b28: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8b2c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a8b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a8b30:
    // 0x2a8b30: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a8b34: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a8b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a8b38: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a8b3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8b40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8b44: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8b48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8b48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8b4c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a8b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a8b50: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a8b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8b54: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a8b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8b58: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8b5c: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a8b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8b60: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a8b60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8b64: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8b68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8b6c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8b70: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8B70u;
    {
        const bool branch_taken_0x2a8b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8b70) {
            ctx->pc = 0x2A8B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8B70u;
            // 0x2a8b74: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8B94u;
            goto label_2a8b94;
        }
    }
    ctx->pc = 0x2A8B78u;
    // 0x2a8b78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8b7c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8b80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8b84: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8B84u;
    SET_GPR_U32(ctx, 31, 0x2A8B8Cu);
    ctx->pc = 0x2A8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B84u;
    // 0x2a8b88: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8B84u, 0x2A8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B8Cu;
label_2a8b8c:
    // 0x2a8b8c: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8b90: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8b90u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8b94:
    // 0x2a8b94: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b9c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8ba4: 0x0  nop
    ctx->pc = 0x2a8ba4u;
    // NOP
    // 0x2a8ba8: 0x0  nop
    ctx->pc = 0x2a8ba8u;
    // NOP
    // 0x2a8bac: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8bacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8bb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8bb8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8bbc: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8bc0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8BC4u;
    {
        const bool branch_taken_0x2a8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC4u;
        // 0x2a8bc8: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bc4) {
            ctx->pc = 0x2A8BD4u;
            goto label_2a8bd4;
        }
    }
    ctx->pc = 0x2A8BCCu;
    // 0x2a8bcc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8bd0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8bd4:
    // 0x2a8bd4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8bd8: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a8bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8bdc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a8be0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8be4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8be8: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8bec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8bf0: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8bf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8BF4u;
    {
        const bool branch_taken_0x2a8bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF4u;
        // 0x2a8bf8: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bf4) {
            ctx->pc = 0x2A8C04u;
            goto label_2a8c04;
        }
    }
    ctx->pc = 0x2A8BFCu;
    // 0x2a8bfc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8c00: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8c04:
    // 0x2a8c04: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8c08: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a8c0c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a8c10: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8c14: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8c18: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8c1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8c20: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8c20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8c24: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a8c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8c28: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a8c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8c2c: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a8c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8c30: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a8c30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a8c34: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a8c34u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8c38: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8c3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a8c40: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8c44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8C44u;
    {
        const bool branch_taken_0x2a8c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c44) {
            ctx->pc = 0x2A8C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8C44u;
            // 0x2a8c48: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8C64u;
            goto label_2a8c64;
        }
    }
    ctx->pc = 0x2A8C4Cu;
    // 0x2a8c4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8c50: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8c54: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8c58: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8C58u;
    SET_GPR_U32(ctx, 31, 0x2A8C60u);
    ctx->pc = 0x2A8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C58u;
    // 0x2a8c5c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8C58u, 0x2A8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C60u;
label_2a8c60:
    // 0x2a8c60: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8c60u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8c64:
    // 0x2a8c64: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8c6c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8c70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8c74: 0x0  nop
    ctx->pc = 0x2a8c74u;
    // NOP
    // 0x2a8c78: 0x0  nop
    ctx->pc = 0x2a8c78u;
    // NOP
    // 0x2a8c7c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8c7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8c84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8c88: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8c8c: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8c90: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8C94u;
    {
        const bool branch_taken_0x2a8c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C94u;
        // 0x2a8c98: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c94) {
            ctx->pc = 0x2A8CA4u;
            goto label_2a8ca4;
        }
    }
    ctx->pc = 0x2A8C9Cu;
    // 0x2a8c9c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8ca0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8ca4:
    // 0x2a8ca4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8ca8: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a8ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8cac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a8cb0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8cb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8cb8: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8cbc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8cc0: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8CC4u;
    {
        const bool branch_taken_0x2a8cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CC4u;
        // 0x2a8cc8: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cc4) {
            ctx->pc = 0x2A8CD4u;
            goto label_2a8cd4;
        }
    }
    ctx->pc = 0x2A8CCCu;
    // 0x2a8ccc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8cd0: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8cd4:
    // 0x2a8cd4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8cd8: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a8cdc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a8ce0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8ce4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8ce8: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8cec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8cf0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8cf4: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a8cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8cf8: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a8cf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8cfc: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a8cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8d00: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a8d00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a8d04: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a8d04u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8d08: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x2A8D08u;
    {
        const bool branch_taken_0x2a8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D08u;
        // 0x2a8d0c: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d08) {
            ctx->pc = 0x2A94B8u;
            goto label_2a94b8;
        }
    }
    ctx->pc = 0x2A8D10u;
label_2a8d10:
    // 0x2a8d10: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A8D10u;
    {
        const bool branch_taken_0x2a8d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D10u;
        // 0x2a8d14: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d10) {
            ctx->pc = 0x2A8FA0u;
            goto label_2a8fa0;
        }
    }
    ctx->pc = 0x2A8D18u;
    // 0x2a8d18: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8d1c: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8d20: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8d24: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8d28: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8D28u;
    {
        const bool branch_taken_0x2a8d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8d28) {
            ctx->pc = 0x2A8D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8D28u;
            // 0x2a8d2c: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D4Cu;
            goto label_2a8d4c;
        }
    }
    ctx->pc = 0x2A8D30u;
    // 0x2a8d30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8d34: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8d38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8d3c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D44u);
    ctx->pc = 0x2A8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D3Cu;
    // 0x2a8d40: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8D3Cu, 0x2A8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D44u;
label_2a8d44:
    // 0x2a8d44: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8d44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8d48: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8d48u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8d4c:
    // 0x2a8d4c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d54: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8d5c: 0x0  nop
    ctx->pc = 0x2a8d5cu;
    // NOP
    // 0x2a8d60: 0x0  nop
    ctx->pc = 0x2a8d60u;
    // NOP
    // 0x2a8d64: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8d64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8d68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8d6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8d70: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a8d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a8d74: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a8d78: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8D7Cu;
    {
        const bool branch_taken_0x2a8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D7Cu;
        // 0x2a8d80: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d7c) {
            ctx->pc = 0x2A8D8Cu;
            goto label_2a8d8c;
        }
    }
    ctx->pc = 0x2A8D84u;
    // 0x2a8d84: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8d88: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8d8c:
    // 0x2a8d8c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a8d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a8d90: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8d94: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a8d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8d98: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8d9c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8da0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8da4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8da8: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a8da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a8dac: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a8dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a8db0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8DB0u;
    {
        const bool branch_taken_0x2a8db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DB0u;
        // 0x2a8db4: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8db0) {
            ctx->pc = 0x2A8DC0u;
            goto label_2a8dc0;
        }
    }
    ctx->pc = 0x2A8DB8u;
    // 0x2a8db8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8dbc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a8dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a8dc0:
    // 0x2a8dc0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a8dc4: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a8dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a8dc8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a8dcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8dd0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8dd4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8dd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8ddc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a8ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a8de0: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a8de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8de4: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a8de4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8de8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a8de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8dec: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a8decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a8df0: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a8df0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8df4: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8df8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a8dfc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8e00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8E00u;
    {
        const bool branch_taken_0x2a8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e00) {
            ctx->pc = 0x2A8E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8E00u;
            // 0x2a8e04: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E24u;
            goto label_2a8e24;
        }
    }
    ctx->pc = 0x2A8E08u;
    // 0x2a8e08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8e0c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8e10: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8e14: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8E14u;
    SET_GPR_U32(ctx, 31, 0x2A8E1Cu);
    ctx->pc = 0x2A8E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E14u;
    // 0x2a8e18: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8E14u, 0x2A8E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E1Cu;
label_2a8e1c:
    // 0x2a8e1c: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8e20: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8e20u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8e24:
    // 0x2a8e24: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8e2c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8e30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8e34: 0x0  nop
    ctx->pc = 0x2a8e34u;
    // NOP
    // 0x2a8e38: 0x0  nop
    ctx->pc = 0x2a8e38u;
    // NOP
    // 0x2a8e3c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8e3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8e40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8e48: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8e4c: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8e50: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8e54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8E54u;
    {
        const bool branch_taken_0x2a8e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E54u;
        // 0x2a8e58: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e54) {
            ctx->pc = 0x2A8E64u;
            goto label_2a8e64;
        }
    }
    ctx->pc = 0x2A8E5Cu;
    // 0x2a8e5c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8e60: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8e64:
    // 0x2a8e64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8e68: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a8e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8e6c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a8e70: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8e74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8e78: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8e7c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8e80: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8e84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8E84u;
    {
        const bool branch_taken_0x2a8e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E84u;
        // 0x2a8e88: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e84) {
            ctx->pc = 0x2A8E94u;
            goto label_2a8e94;
        }
    }
    ctx->pc = 0x2A8E8Cu;
    // 0x2a8e8c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8e90: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8e94:
    // 0x2a8e94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8e98: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a8e9c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a8ea0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8ea4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8ea8: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8eac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8eacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8eb0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8eb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8eb4: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a8eb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8eb8: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a8eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8ebc: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a8ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8ec0: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a8ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a8ec4: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a8ec4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8ec8: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8ecc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8ed0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8ed4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8ED4u;
    {
        const bool branch_taken_0x2a8ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ed4) {
            ctx->pc = 0x2A8ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8ED4u;
            // 0x2a8ed8: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8EF4u;
            goto label_2a8ef4;
        }
    }
    ctx->pc = 0x2A8EDCu;
    // 0x2a8edc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8ee0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8ee4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8ee8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8EE8u;
    SET_GPR_U32(ctx, 31, 0x2A8EF0u);
    ctx->pc = 0x2A8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8EE8u;
    // 0x2a8eec: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8EE8u, 0x2A8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EF0u;
label_2a8ef0:
    // 0x2a8ef0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8ef0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8ef4:
    // 0x2a8ef4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8ef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8efc: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8f00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8f04: 0x0  nop
    ctx->pc = 0x2a8f04u;
    // NOP
    // 0x2a8f08: 0x0  nop
    ctx->pc = 0x2a8f08u;
    // NOP
    // 0x2a8f0c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8f0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8f14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8f18: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a8f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a8f1c: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a8f20: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a8f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a8f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8F24u;
    {
        const bool branch_taken_0x2a8f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F24u;
        // 0x2a8f28: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f24) {
            ctx->pc = 0x2A8F34u;
            goto label_2a8f34;
        }
    }
    ctx->pc = 0x2A8F2Cu;
    // 0x2a8f2c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8f30: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8f34:
    // 0x2a8f34: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8f38: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a8f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a8f3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a8f40: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a8f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a8f44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f48: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a8f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a8f4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8f50: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a8f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a8f54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8F54u;
    {
        const bool branch_taken_0x2a8f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F54u;
        // 0x2a8f58: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f54) {
            ctx->pc = 0x2A8F64u;
            goto label_2a8f64;
        }
    }
    ctx->pc = 0x2A8F5Cu;
    // 0x2a8f5c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a8f60: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8f64:
    // 0x2a8f64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8f68: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a8f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a8f6c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a8f70: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8f74: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8f78: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a8f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a8f7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a8f7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a8f80: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a8f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a8f84: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a8f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8f88: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a8f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a8f8c: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a8f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a8f90: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a8f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a8f94: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a8f94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a8f98: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x2A8F98u;
    {
        const bool branch_taken_0x2a8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F98u;
        // 0x2a8f9c: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f98) {
            ctx->pc = 0x2A94B8u;
            goto label_2a94b8;
        }
    }
    ctx->pc = 0x2A8FA0u;
label_2a8fa0:
    // 0x2a8fa0: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A8FA0u;
    {
        const bool branch_taken_0x2a8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA0u;
        // 0x2a8fa4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fa0) {
            ctx->pc = 0x2A9230u;
            goto label_2a9230;
        }
    }
    ctx->pc = 0x2A8FA8u;
    // 0x2a8fa8: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a8fac: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8facu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8fb0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a8fb4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a8fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a8fb8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8FB8u;
    {
        const bool branch_taken_0x2a8fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8fb8) {
            ctx->pc = 0x2A8FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8FB8u;
            // 0x2a8fbc: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8FDCu;
            goto label_2a8fdc;
        }
    }
    ctx->pc = 0x2A8FC0u;
    // 0x2a8fc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8fc4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a8fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8fc8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8fcc: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A8FCCu;
    SET_GPR_U32(ctx, 31, 0x2A8FD4u);
    ctx->pc = 0x2A8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8FCCu;
    // 0x2a8fd0: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A8FCCu, 0x2A8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FD4u;
label_2a8fd4:
    // 0x2a8fd4: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a8fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8fd8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a8fd8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a8fdc:
    // 0x2a8fdc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a8fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a8fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8fe4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a8fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8fec: 0x0  nop
    ctx->pc = 0x2a8fecu;
    // NOP
    // 0x2a8ff0: 0x0  nop
    ctx->pc = 0x2a8ff0u;
    // NOP
    // 0x2a8ff4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a8ff4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a8ff8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ffc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a9000: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a9000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a9004: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a9004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a9008: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a9008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a900c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A900Cu;
    {
        const bool branch_taken_0x2a900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A900Cu;
        // 0x2a9010: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a900c) {
            ctx->pc = 0x2A901Cu;
            goto label_2a901c;
        }
    }
    ctx->pc = 0x2A9014u;
    // 0x2a9014: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a9018: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a9018u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a901c:
    // 0x2a901c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a901cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a9020: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a9020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a9024: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a9028: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a902c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a9030: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a9030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a9034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a9034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9038: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a9038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a903c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a903cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a9040: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9040u;
    {
        const bool branch_taken_0x2a9040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9040u;
        // 0x2a9044: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9040) {
            ctx->pc = 0x2A9050u;
            goto label_2a9050;
        }
    }
    ctx->pc = 0x2A9048u;
    // 0x2a9048: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a904c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a904cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a9050:
    // 0x2a9050: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a9050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a9054: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a9054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a9058: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a9058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a905c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a905cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a9060: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a9060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9064: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a9068: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a9068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a906c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a906cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a9070: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a9070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9074: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a9074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a9078: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a9078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a907c: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a907cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a9080: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a9080u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a9084: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a9088: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a908c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a9090: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9090u;
    {
        const bool branch_taken_0x2a9090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9090) {
            ctx->pc = 0x2A9094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9090u;
            // 0x2a9094: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A90B4u;
            goto label_2a90b4;
        }
    }
    ctx->pc = 0x2A9098u;
    // 0x2a9098: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a909c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a90a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a90a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a90a4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A90A4u;
    SET_GPR_U32(ctx, 31, 0x2A90ACu);
    ctx->pc = 0x2A90A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A90A4u;
    // 0x2a90a8: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A90A4u, 0x2A90ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90ACu;
label_2a90ac:
    // 0x2a90ac: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a90acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a90b0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a90b0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a90b4:
    // 0x2a90b4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a90b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a90b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a90b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a90bc: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a90bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a90c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a90c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a90c4: 0x0  nop
    ctx->pc = 0x2a90c4u;
    // NOP
    // 0x2a90c8: 0x0  nop
    ctx->pc = 0x2a90c8u;
    // NOP
    // 0x2a90cc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a90ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a90d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a90d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a90d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a90d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a90d8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a90d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a90dc: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a90e0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a90e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a90e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A90E4u;
    {
        const bool branch_taken_0x2a90e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90E4u;
        // 0x2a90e8: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90e4) {
            ctx->pc = 0x2A90F4u;
            goto label_2a90f4;
        }
    }
    ctx->pc = 0x2A90ECu;
    // 0x2a90ec: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a90f0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a90f4:
    // 0x2a90f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a90f8: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a90f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a90fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a9100: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a9100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a9104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a9104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9108: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a9108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a910c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a9110: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a9110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a9114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9114u;
    {
        const bool branch_taken_0x2a9114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9114u;
        // 0x2a9118: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9114) {
            ctx->pc = 0x2A9124u;
            goto label_2a9124;
        }
    }
    ctx->pc = 0x2A911Cu;
    // 0x2a911c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a9120: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a9120u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a9124:
    // 0x2a9124: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a9124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a9128: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a9128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a912c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a912cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a9130: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a9130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a9134: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a9134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9138: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a9138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a913c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a913cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a9140: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a9140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a9144: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a9144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9148: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a9148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a914c: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a914cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9150: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a9150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a9154: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a9154u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a9158: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a9158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a915c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9160: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a9160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a9164: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9164u;
    {
        const bool branch_taken_0x2a9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9164) {
            ctx->pc = 0x2A9168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9164u;
            // 0x2a9168: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9184u;
            goto label_2a9184;
        }
    }
    ctx->pc = 0x2A916Cu;
    // 0x2a916c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9170: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9174: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a9174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9178: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9178u;
    SET_GPR_U32(ctx, 31, 0x2A9180u);
    ctx->pc = 0x2A917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9178u;
    // 0x2a917c: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9178u, 0x2A9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9180u;
label_2a9180:
    // 0x2a9180: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a9180u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a9184:
    // 0x2a9184: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a9184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a9188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a918c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a9190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9194: 0x0  nop
    ctx->pc = 0x2a9194u;
    // NOP
    // 0x2a9198: 0x0  nop
    ctx->pc = 0x2a9198u;
    // NOP
    // 0x2a919c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a919cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a91a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a91a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a91a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a91a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a91a8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a91a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a91ac: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a91acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a91b0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a91b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A91B4u;
    {
        const bool branch_taken_0x2a91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91B4u;
        // 0x2a91b8: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91b4) {
            ctx->pc = 0x2A91C4u;
            goto label_2a91c4;
        }
    }
    ctx->pc = 0x2A91BCu;
    // 0x2a91bc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a91c0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a91c4:
    // 0x2a91c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a91c8: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a91c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a91cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a91d0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a91d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a91d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a91d8: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a91dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a91e0: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a91e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a91e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A91E4u;
    {
        const bool branch_taken_0x2a91e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91E4u;
        // 0x2a91e8: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91e4) {
            ctx->pc = 0x2A91F4u;
            goto label_2a91f4;
        }
    }
    ctx->pc = 0x2A91ECu;
    // 0x2a91ec: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a91f0: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a91f4:
    // 0x2a91f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a91f8: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a91fc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a9200: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a9200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a9204: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a9204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9208: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a9208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a920c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a920cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a9210: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a9210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a9214: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a9214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9218: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a9218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a921c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a921cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9220: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a9220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a9224: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a9224u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a9228: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A9228u;
    {
        const bool branch_taken_0x2a9228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9228u;
        // 0x2a922c: 0xc6020040  lwc1        $f2, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9228) {
            ctx->pc = 0x2A94B8u;
            goto label_2a94b8;
        }
    }
    ctx->pc = 0x2A9230u;
label_2a9230:
    // 0x2a9230: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A9230u;
    {
        const bool branch_taken_0x2a9230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9230u;
        // 0x2a9234: 0x2623cde0  addiu       $v1, $s1, -0x3220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9230) {
            ctx->pc = 0x2A94C0u;
            goto label_2a94c0;
        }
    }
    ctx->pc = 0x2A9238u;
    // 0x2a9238: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a923c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a9240: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a9240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a9244: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9244u;
    {
        const bool branch_taken_0x2a9244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9244) {
            ctx->pc = 0x2A9248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9244u;
            // 0x2a9248: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9268u;
            goto label_2a9268;
        }
    }
    ctx->pc = 0x2A924Cu;
    // 0x2a924c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9250: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9254: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a9254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9258: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9258u;
    SET_GPR_U32(ctx, 31, 0x2A9260u);
    ctx->pc = 0x2A925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9258u;
    // 0x2a925c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9258u, 0x2A9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9260u;
label_2a9260:
    // 0x2a9260: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a9260u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a9264: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a9264u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a9268:
    // 0x2a9268: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a9268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a926c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a926cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9270: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a9270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a9274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9278: 0x0  nop
    ctx->pc = 0x2a9278u;
    // NOP
    // 0x2a927c: 0x0  nop
    ctx->pc = 0x2a927cu;
    // NOP
    // 0x2a9280: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a9280u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a9284: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a9284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9288: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a9288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a928c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a928cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a9290: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2a9294: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a9294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a9298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9298u;
    {
        const bool branch_taken_0x2a9298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9298u;
        // 0x2a929c: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9298) {
            ctx->pc = 0x2A92A8u;
            goto label_2a92a8;
        }
    }
    ctx->pc = 0x2A92A0u;
    // 0x2a92a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a92a4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a92a8:
    // 0x2a92a8: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2a92a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2a92ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a92acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a92b0: 0x264a0340  addiu       $t2, $s2, 0x340
    ctx->pc = 0x2a92b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a92b4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a92b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a92b8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a92bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a92c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a92c4: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2a92c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2a92c8: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2a92c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2a92cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A92CCu;
    {
        const bool branch_taken_0x2a92cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92CCu;
        // 0x2a92d0: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92cc) {
            ctx->pc = 0x2A92DCu;
            goto label_2a92dc;
        }
    }
    ctx->pc = 0x2A92D4u;
    // 0x2a92d4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a92d8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2a92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a92dc:
    // 0x2a92dc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a92e0: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2a92e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2a92e4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a92e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a92ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a92f0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a92f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a92f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a92f8: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2a92f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2a92fc: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a92fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9300: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2a9300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a9304: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2a9304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a9308: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2a9308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a930c: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2a930cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a9310: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a9314: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9318: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a9318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a931c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A931Cu;
    {
        const bool branch_taken_0x2a931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a931c) {
            ctx->pc = 0x2A9320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A931Cu;
            // 0x2a9320: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9340u;
            goto label_2a9340;
        }
    }
    ctx->pc = 0x2A9324u;
    // 0x2a9324: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9328: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a932c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a932cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9330: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9330u;
    SET_GPR_U32(ctx, 31, 0x2A9338u);
    ctx->pc = 0x2A9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9330u;
    // 0x2a9334: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9330u, 0x2A9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9338u;
label_2a9338:
    // 0x2a9338: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2a9338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a933c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a933cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a9340:
    // 0x2a9340: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a9340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a9344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9348: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a9348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a934c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a934cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9350: 0x0  nop
    ctx->pc = 0x2a9350u;
    // NOP
    // 0x2a9354: 0x0  nop
    ctx->pc = 0x2a9354u;
    // NOP
    // 0x2a9358: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a9358u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a935c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a935cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9360: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a9360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a9364: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a9364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a9368: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a9368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a936c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a9370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9370u;
    {
        const bool branch_taken_0x2a9370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9370u;
        // 0x2a9374: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9370) {
            ctx->pc = 0x2A9380u;
            goto label_2a9380;
        }
    }
    ctx->pc = 0x2A9378u;
    // 0x2a9378: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a937c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a937cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a9380:
    // 0x2a9380: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a9384: 0x26490340  addiu       $t1, $s2, 0x340
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a9388: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a9388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a938c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a9390: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a9390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9394: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a9398: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a9398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a939c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a939cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a93a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A93A0u;
    {
        const bool branch_taken_0x2a93a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93A0u;
        // 0x2a93a4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93a0) {
            ctx->pc = 0x2A93B0u;
            goto label_2a93b0;
        }
    }
    ctx->pc = 0x2A93A8u;
    // 0x2a93a8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a93ac: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a93acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a93b0:
    // 0x2a93b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a93b4: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a93b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a93b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a93bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a93c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a93c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a93c4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a93c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a93c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a93c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a93cc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a93ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a93d0: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2a93d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a93d4: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2a93d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a93d8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a93d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a93dc: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2a93dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a93e0: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2a93e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a93e4: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a93e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a93ec: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2a93ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2a93f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A93F0u;
    {
        const bool branch_taken_0x2a93f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a93f0) {
            ctx->pc = 0x2A93F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A93F0u;
            // 0x2a93f4: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9410u;
            goto label_2a9410;
        }
    }
    ctx->pc = 0x2A93F8u;
    // 0x2a93f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a93fc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9400: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a9400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9404: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9404u;
    SET_GPR_U32(ctx, 31, 0x2A940Cu);
    ctx->pc = 0x2A9408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9404u;
    // 0x2a9408: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9404u, 0x2A940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A940Cu;
label_2a940c:
    // 0x2a940c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a940cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a9410:
    // 0x2a9410: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a9410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a9414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9418: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2a9418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2a941c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a941cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9420: 0x0  nop
    ctx->pc = 0x2a9420u;
    // NOP
    // 0x2a9424: 0x0  nop
    ctx->pc = 0x2a9424u;
    // NOP
    // 0x2a9428: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2a9428u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2a942c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a942cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9430: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a9430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a9434: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a9434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a9438: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2a9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2a943c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2a943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2a9440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9440u;
    {
        const bool branch_taken_0x2a9440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9440u;
        // 0x2a9444: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9440) {
            ctx->pc = 0x2A9450u;
            goto label_2a9450;
        }
    }
    ctx->pc = 0x2A9448u;
    // 0x2a9448: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a944c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a944cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a9450:
    // 0x2a9450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a9450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a9454: 0x26480340  addiu       $t0, $s2, 0x340
    ctx->pc = 0x2a9454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2a9458: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a9458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a945c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2a945cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2a9460: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a9460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9464: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2a9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2a9468: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a9468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a946c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2a946cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2a9470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9470u;
    {
        const bool branch_taken_0x2a9470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9470u;
        // 0x2a9474: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9470) {
            ctx->pc = 0x2A9480u;
            goto label_2a9480;
        }
    }
    ctx->pc = 0x2A9478u;
    // 0x2a9478: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a947c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2a947cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a9480:
    // 0x2a9480: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a9480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a9484: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2a9484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2a9488: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a9488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a948c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a948cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a9490: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a9490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9494: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a9498: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a9498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a949c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a949cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2a94a0: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2a94a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a94a4: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2a94a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a94a8: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2a94a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a94ac: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2a94acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a94b0: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2a94b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2a94b4: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2a94b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a94b8:
    // 0x2a94b8: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2a94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a94bc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2a94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a94c0:
    // 0x2a94c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a94c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a94c4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a94c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a94c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a94c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a94cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a94ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a94d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a94d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a94d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a94d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a94d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a94d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a94dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a94dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a94e0: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2a94e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a94e4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2a94e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a94e8: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2a94e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a94ec: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2a94ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a94f0: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2a94f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2a94f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a94f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94f8: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2A94F8u;
    SET_GPR_U32(ctx, 31, 0x2A9500u);
    ctx->pc = 0x2A94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94F8u;
    // 0x2a94fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2A94F8u, 0x2A9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9500u;
label_2a9500:
    // 0x2a9500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9504: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2A9504u;
    SET_GPR_U32(ctx, 31, 0x2A950Cu);
    ctx->pc = 0x2A9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9504u;
    // 0x2a9508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2A9504u, 0x2A950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A950Cu;
label_2a950c:
    // 0x2a950c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9510: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2A9510u;
    SET_GPR_U32(ctx, 31, 0x2A9518u);
    ctx->pc = 0x2A9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9510u;
    // 0x2a9514: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2A9510u, 0x2A9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9518u;
label_2a9518:
    // 0x2a9518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a951c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2a951cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a9520: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x2a9520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a9524: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x2a9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a9528: 0xc7a90008  lwc1        $f9, 0x8($sp)
    ctx->pc = 0x2a9528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a952c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9530: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2a9530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9534: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2a9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9538: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2a9538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2a953c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x2a953cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x2a9540: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x2a9540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a9544: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x2a9544u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x2a9548: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2a9548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a954c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2a954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9550: 0xe6050020  swc1        $f5, 0x20($s0)
    ctx->pc = 0x2a9550u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a9554: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x2a9554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a9558: 0xe6040028  swc1        $f4, 0x28($s0)
    ctx->pc = 0x2a9558u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2a955c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2a955cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2a9560: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2a9560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2a9564: 0xe6020038  swc1        $f2, 0x38($s0)
    ctx->pc = 0x2a9564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2a9568: 0xe606003c  swc1        $f6, 0x3C($s0)
    ctx->pc = 0x2a9568u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2a956c: 0xe6070010  swc1        $f7, 0x10($s0)
    ctx->pc = 0x2a956cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a9570: 0xe6080014  swc1        $f8, 0x14($s0)
    ctx->pc = 0x2a9570u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a9574: 0xe6090018  swc1        $f9, 0x18($s0)
    ctx->pc = 0x2a9574u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a9578: 0xe606001c  swc1        $f6, 0x1C($s0)
    ctx->pc = 0x2a9578u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a957c: 0xe606002c  swc1        $f6, 0x2C($s0)
    ctx->pc = 0x2a957cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2a9580: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x2a9580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2a9584:
    // 0x2a9584: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a9584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a9588: 0xc0cae76  jal         func_32B9D8
    ctx->pc = 0x2A9588u;
    SET_GPR_U32(ctx, 31, 0x2A9590u);
    ctx->pc = 0x2A958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9588u;
    // 0x2a958c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B9D8u, 0x2A9588u, 0x2A9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9590u;
label_2a9590:
    // 0x2a9590: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a9590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9594: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a9594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9598: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a9598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a959c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2a959cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a95a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a95a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a95a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2a95a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a95a8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2a95a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a95ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2a95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a95b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A95B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B0u;
        // 0x2a95b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A95B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A95B8u;
}
