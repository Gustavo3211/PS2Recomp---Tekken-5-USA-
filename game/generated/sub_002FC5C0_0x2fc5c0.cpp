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

// Function: sub_002FC5C0
// Address: 0x2fc5c0 - 0x2fc6a0
void sub_002FC5C0_0x2fc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC5C0_0x2fc5c0");
#endif

    switch (ctx->pc) {
        case 0x2fc5f4u: goto label_2fc5f4;
        default: break;
    }

    ctx->pc = 0x2fc5c0u;

    // 0x2fc5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc5c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc5d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fc5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5d4: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FC5D4u;
    {
        const bool branch_taken_0x2fc5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5D4u;
        // 0x2fc5d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5d4) {
            ctx->pc = 0x2FC68Cu;
            goto label_2fc68c;
        }
    }
    ctx->pc = 0x2FC5DCu;
    // 0x2fc5dc: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2FC5DCu;
    {
        const bool branch_taken_0x2fc5dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5DCu;
        // 0x2fc5e0: 0x3c04001b  lui         $a0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5dc) {
            ctx->pc = 0x2FC68Cu;
            goto label_2fc68c;
        }
    }
    ctx->pc = 0x2FC5E4u;
    // 0x2fc5e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fc5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5e8: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x2fc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
    // 0x2fc5ec: 0xc0bea10  jal         func_2FA840
    ctx->pc = 0x2FC5ECu;
    SET_GPR_U32(ctx, 31, 0x2FC5F4u);
    ctx->pc = 0x2FC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC5ECu;
    // 0x2fc5f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA840u, 0x2FC5ECu, 0x2FC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5F4u;
label_2fc5f4:
    // 0x2fc5f4: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x2fc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x2fc5f8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2fc5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc5fc: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x2fc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x2fc600: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fc604: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2fc604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECB0u, _value); } while (0); }
    // 0x2fc608: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2fc608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc60c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2fc60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECB4u, _value); } while (0); }
    // 0x2fc610: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2fc610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc614: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2fc614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1AECBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECBCu, _value); } while (0);
    // 0x2fc618: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2fc618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECB8u, _value); } while (0); }
    // 0x2fc61c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2fc61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc620: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2fc620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECC0u, _value); } while (0); }
    // 0x2fc624: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2fc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc628: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2fc628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECC4u, _value); } while (0); }
    // 0x2fc62c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2fc62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc630: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2fc630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1AECCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECCCu, _value); } while (0);
    // 0x2fc634: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x2fc634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECC8u, _value); } while (0); }
    // 0x2fc638: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2fc638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc63c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2fc63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fc640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fc644: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2fc644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECD0u, _value); } while (0); }
    // 0x2fc648: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2fc648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc64c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2fc64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc650: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2fc650u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fc654: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x2fc654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECD4u, _value); } while (0); }
    // 0x2fc658: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2fc658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc65c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2fc65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc660: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2fc660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1AECDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECDCu, _value); } while (0);
    // 0x2fc664: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fc664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fc668: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2fc668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1AECD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AECD8u, _value); } while (0); }
    // 0x2fc66c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2fc66cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x1AECD0u));
    // 0x2fc670: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2fc670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc674: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fc674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc678: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fc678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc67c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fc67cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fc680: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fc680u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fc684: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2fc684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fc688: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2fc688u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_2fc68c:
    // 0x2fc68c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc698: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC698u;
        // 0x2fc69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6A0u;
}
