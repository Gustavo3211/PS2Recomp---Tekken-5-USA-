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

// Function: sub_00338BB8
// Address: 0x338bb8 - 0x338cc0
void sub_00338BB8_0x338bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338BB8_0x338bb8");
#endif

    switch (ctx->pc) {
        case 0x338bf0u: goto label_338bf0;
        case 0x338c14u: goto label_338c14;
        default: break;
    }

    ctx->pc = 0x338bb8u;

    // 0x338bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338bbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x338bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x338bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x338bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x338bc8: 0x2630fdc0  addiu       $s0, $s1, -0x240
    ctx->pc = 0x338bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966720));
    // 0x338bcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x338bd0: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338bd0u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338bd4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338bd4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338bd8: 0xda3cffc0  lqc2        $vf28, -0x40($s1)
    ctx->pc = 0x338bd8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967232)));
    // 0x338bdc: 0xda3dffd0  lqc2        $vf29, -0x30($s1)
    ctx->pc = 0x338bdcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967248)));
    // 0x338be0: 0xda3effe0  lqc2        $vf30, -0x20($s1)
    ctx->pc = 0x338be0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x338be4: 0xda3ffff0  lqc2        $vf31, -0x10($s1)
    ctx->pc = 0x338be4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967280)));
    // 0x338be8: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x338BE8u;
    SET_GPR_U32(ctx, 31, 0x338BF0u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x338BE8u, 0x338BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BF0u;
label_338bf0:
    // 0x338bf0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x338bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x338bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x338bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bf8: 0x244231b0  addiu       $v0, $v0, 0x31B0
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12720));
    // 0x338bfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x338bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c00: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x338c00u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4831B8u));
    // 0x338c04: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x338c04u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x4831B0u));
    // 0x338c08: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x338c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x338c0c: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x338C0Cu;
    SET_GPR_U32(ctx, 31, 0x338C14u);
    ctx->pc = 0x338C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C0Cu;
    // 0x338c10: 0xffa60000  sd          $a2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x338C0Cu, 0x338C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C14u;
label_338c14:
    // 0x338c14: 0xda1c01c0  lqc2        $vf28, 0x1C0($s0)
    ctx->pc = 0x338c14u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x338c18: 0xda1d01d0  lqc2        $vf29, 0x1D0($s0)
    ctx->pc = 0x338c18u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x338c1c: 0xda1e01e0  lqc2        $vf30, 0x1E0($s0)
    ctx->pc = 0x338c1cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x338c20: 0xda1f01f0  lqc2        $vf31, 0x1F0($s0)
    ctx->pc = 0x338c20u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x338c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x338c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338c28: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x338c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338c2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338c30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x338C30u;
    {
        const bool branch_taken_0x338c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338c30) {
            ctx->pc = 0x338C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338C30u;
            // 0x338c34: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338C38u;
            goto label_338c38;
        }
    }
    ctx->pc = 0x338C38u;
label_338c38:
    // 0x338c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338c40: 0x0  nop
    ctx->pc = 0x338c40u;
    // NOP
    // 0x338c44: 0x0  nop
    ctx->pc = 0x338c44u;
    // NOP
    // 0x338c48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x338c48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x338c4c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x338c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338c50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x338c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x338c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x338c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338c5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x338C5Cu;
    {
        const bool branch_taken_0x338c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338c5c) {
            ctx->pc = 0x338C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338C5Cu;
            // 0x338c60: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338C64u;
            goto label_338c64;
        }
    }
    ctx->pc = 0x338C64u;
label_338c64:
    // 0x338c64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338c6c: 0x0  nop
    ctx->pc = 0x338c6cu;
    // NOP
    // 0x338c70: 0x0  nop
    ctx->pc = 0x338c70u;
    // NOP
    // 0x338c74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x338c74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x338c78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x338c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x338c7c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x338c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338c80: 0x4b81e72a  vmul.xy     $vf28, $vf28, $vf1
    ctx->pc = 0x338c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x338c84: 0x4b81ef6a  vmul.xy     $vf29, $vf29, $vf1
    ctx->pc = 0x338c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x338c88: 0x4b81f7aa  vmul.xy     $vf30, $vf30, $vf1
    ctx->pc = 0x338c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x338c8c: 0x4b81ffea  vmul.xy     $vf31, $vf31, $vf1
    ctx->pc = 0x338c8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x338c90: 0xfa3c0000  sqc2        $vf28, 0x0($s1)
    ctx->pc = 0x338c90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338c94: 0xfa3d0010  sqc2        $vf29, 0x10($s1)
    ctx->pc = 0x338c94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338c98: 0xfa3e0020  sqc2        $vf30, 0x20($s1)
    ctx->pc = 0x338c98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338c9c: 0xfa3f0030  sqc2        $vf31, 0x30($s1)
    ctx->pc = 0x338c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338ca0: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338ca0u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338ca4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338ca4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338ca8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x338ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338cac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x338cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x338cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x338CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CB4u;
        // 0x338cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338CBCu;
    // 0x338cbc: 0x0  nop
    ctx->pc = 0x338cbcu;
    // NOP
    ctx->pc = 0x338cc0u;
}
