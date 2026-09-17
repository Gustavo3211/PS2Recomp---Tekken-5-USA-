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

// Function: sub_00236FA8
// Address: 0x236fa8 - 0x2370b8
void sub_00236FA8_0x236fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236FA8_0x236fa8");
#endif

    switch (ctx->pc) {
        case 0x236ff8u: goto label_236ff8;
        case 0x23700cu: goto label_23700c;
        case 0x237024u: goto label_237024;
        case 0x237034u: goto label_237034;
        default: break;
    }

    ctx->pc = 0x236fa8u;

    // 0x236fa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x236fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x236fac: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x236facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fb0: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x236fb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fb4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x236fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fb8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x236fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x236fbc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x236fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236fc0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x236fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x236fc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x236fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fd0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x236fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x236fd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x236fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fdc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x236fdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x236fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x236fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x236fec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x236fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x236ff0: 0xc08dba4  jal         func_236E90
    ctx->pc = 0x236FF0u;
    SET_GPR_U32(ctx, 31, 0x236FF8u);
    ctx->pc = 0x236FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FF0u;
    // 0x236ff4: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E90u, 0x236FF0u, 0x236FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FF8u;
label_236ff8:
    // 0x236ff8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x236ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x236ffc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x236ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237004: 0xc04a151  jal         func_128544
    ctx->pc = 0x237004u;
    SET_GPR_U32(ctx, 31, 0x23700Cu);
    ctx->pc = 0x237008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237004u;
    // 0x237008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x237004u, 0x23700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23700Cu;
label_23700c:
    // 0x23700c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237014: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x237014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x237018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23701c: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x23701Cu;
    SET_GPR_U32(ctx, 31, 0x237024u);
    ctx->pc = 0x237020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23701Cu;
    // 0x237020: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x23701Cu, 0x237024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237024u;
label_237024:
    // 0x237024: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x237024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23702c: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x23702Cu;
    SET_GPR_U32(ctx, 31, 0x237034u);
    ctx->pc = 0x237030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23702Cu;
    // 0x237030: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x23702Cu, 0x237034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237034u;
label_237034:
    // 0x237034: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x237034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x237038: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x237038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23703c: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x23703cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237040: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x237040u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237044: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x237044u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237048: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x237048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23704c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x23704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237050: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237054: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x237054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23705c: 0x0  nop
    ctx->pc = 0x23705cu;
    // NOP
    // 0x237060: 0x0  nop
    ctx->pc = 0x237060u;
    // NOP
    // 0x237064: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x237064u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x237068: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x237068u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23706c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23706cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x237070: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x237070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x237074: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x237074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237078: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x237078u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23707c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237080: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x237080u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237084: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x237084u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237088: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x237088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23708c: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x23708cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237098: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x237098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23709c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x23709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2370a0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2370a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2370a4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2370a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2370a8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2370a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2370ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2370acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2370b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2370B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2370B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370B0u;
        // 0x2370b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2370B8u;
}
