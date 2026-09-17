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

// Function: sub_002A7600
// Address: 0x2a7600 - 0x2a76f8
void sub_002A7600_0x2a7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7600_0x2a7600");
#endif

    switch (ctx->pc) {
        case 0x2a76d4u: goto label_2a76d4;
        case 0x2a76dcu: goto label_2a76dc;
        default: break;
    }

    ctx->pc = 0x2a7600u;

    // 0x2a7600: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2a7600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a7604: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x2a7604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a7608: 0x44047000  mfc1        $a0, $f14
    ctx->pc = 0x2a7608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a760c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a760cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a7610: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a7610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a7614: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2a7614u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a7618: 0x4be1e718  vmulx.xyzw  $vf28, $vf28, $vf1x
    ctx->pc = 0x2a7618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2a761c: 0x4be2ef58  vmulx.xyzw  $vf29, $vf29, $vf2x
    ctx->pc = 0x2a761cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2a7620: 0x4be3f798  vmulx.xyzw  $vf30, $vf30, $vf3x
    ctx->pc = 0x2a7620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2a7624: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A762Cu;
    // 0x2a762c: 0x0  nop
    ctx->pc = 0x2a762cu;
    // NOP
    // 0x2a7630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a7634: 0xe7b30024  swc1        $f19, 0x24($sp)
    ctx->pc = 0x2a7634u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a7638: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x2a7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x2a763c: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2a763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2a7640: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x2a7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x2a7644: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2a7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2a7648: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x2a7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x2a764c: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x2a764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x2a7650: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x2a7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x2a7654: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x2a7654u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a7658: 0xe7ad000c  swc1        $f13, 0xC($sp)
    ctx->pc = 0x2a7658u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a765c: 0xe7ae0010  swc1        $f14, 0x10($sp)
    ctx->pc = 0x2a765cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a7660: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x2a7660u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a7664: 0xe7b00018  swc1        $f16, 0x18($sp)
    ctx->pc = 0x2a7664u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a7668: 0xe7b1001c  swc1        $f17, 0x1C($sp)
    ctx->pc = 0x2a7668u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a766c: 0xe7b20020  swc1        $f18, 0x20($sp)
    ctx->pc = 0x2a766cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7670: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7670u;
        // 0x2a7674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7678u;
    // 0x2a7678: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x2a7678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x2a767c: 0x27a20848  addiu       $v0, $sp, 0x848
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2120));
    // 0x2a7680: 0xffa50848  sd          $a1, 0x848($sp)
    ctx->pc = 0x2a7680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2120), GPR_U64(ctx, 5));
    // 0x2a7684: 0xffa60850  sd          $a2, 0x850($sp)
    ctx->pc = 0x2a7684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2128), GPR_U64(ctx, 6));
    // 0x2a7688: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a7688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a768c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7694: 0xffbf0810  sd          $ra, 0x810($sp)
    ctx->pc = 0x2a7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 31));
    // 0x2a7698: 0xffa70858  sd          $a3, 0x858($sp)
    ctx->pc = 0x2a7698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2136), GPR_U64(ctx, 7));
    // 0x2a769c: 0xffa80860  sd          $t0, 0x860($sp)
    ctx->pc = 0x2a769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 8));
    // 0x2a76a0: 0xffa90868  sd          $t1, 0x868($sp)
    ctx->pc = 0x2a76a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2152), GPR_U64(ctx, 9));
    // 0x2a76a4: 0xffaa0870  sd          $t2, 0x870($sp)
    ctx->pc = 0x2a76a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 10));
    // 0x2a76a8: 0xffab0878  sd          $t3, 0x878($sp)
    ctx->pc = 0x2a76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2168), GPR_U64(ctx, 11));
    // 0x2a76ac: 0xe7ac0828  swc1        $f12, 0x828($sp)
    ctx->pc = 0x2a76acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2088), bits); }
    // 0x2a76b0: 0xe7ad082c  swc1        $f13, 0x82C($sp)
    ctx->pc = 0x2a76b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2092), bits); }
    // 0x2a76b4: 0xe7ae0830  swc1        $f14, 0x830($sp)
    ctx->pc = 0x2a76b4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2096), bits); }
    // 0x2a76b8: 0xe7af0834  swc1        $f15, 0x834($sp)
    ctx->pc = 0x2a76b8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2100), bits); }
    // 0x2a76bc: 0xe7b00838  swc1        $f16, 0x838($sp)
    ctx->pc = 0x2a76bcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2104), bits); }
    // 0x2a76c0: 0xe7b1083c  swc1        $f17, 0x83C($sp)
    ctx->pc = 0x2a76c0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2108), bits); }
    // 0x2a76c4: 0xe7b20840  swc1        $f18, 0x840($sp)
    ctx->pc = 0x2a76c4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2112), bits); }
    // 0x2a76c8: 0xe7b30844  swc1        $f19, 0x844($sp)
    ctx->pc = 0x2a76c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2116), bits); }
    // 0x2a76cc: 0xc04b114  jal         func_12C450
    ctx->pc = 0x2A76CCu;
    SET_GPR_U32(ctx, 31, 0x2A76D4u);
    ctx->pc = 0x2A76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A76CCu;
    // 0x2a76d0: 0xafa20800  sw          $v0, 0x800($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C450u, 0x2A76CCu, 0x2A76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76D4u;
label_2a76d4:
    // 0x2a76d4: 0xc0cc5b4  jal         func_3316D0
    ctx->pc = 0x2A76D4u;
    SET_GPR_U32(ctx, 31, 0x2A76DCu);
    ctx->pc = 0x2A76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A76D4u;
    // 0x2a76d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3316D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3316D0u, 0x2A76D4u, 0x2A76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76DCu;
label_2a76dc:
    // 0x2a76dc: 0xdfbf0810  ld          $ra, 0x810($sp)
    ctx->pc = 0x2a76dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x2a76e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A76E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76E0u;
        // 0x2a76e4: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A76E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A76E8u;
    // 0x2a76e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A76E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A76E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A76F0u;
    // 0x2a76f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A76F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A76F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A76F8u;
}
