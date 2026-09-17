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

// Function: sub_00322A20
// Address: 0x322a20 - 0x322b88
void sub_00322A20_0x322a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322A20_0x322a20");
#endif

    switch (ctx->pc) {
        case 0x322a88u: goto label_322a88;
        case 0x322ae0u: goto label_322ae0;
        case 0x322b3cu: goto label_322b3c;
        default: break;
    }

    ctx->pc = 0x322a20u;

    // 0x322a20: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x322a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x322a24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x322a28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x322a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x322a2c: 0x8ca60414  lw          $a2, 0x414($a1)
    ctx->pc = 0x322a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x322a30: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x322a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x322a34: 0x2442cdf8  addiu       $v0, $v0, -0x3208
    ctx->pc = 0x322a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954488));
    // 0x322a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322a3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x322a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322a44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x322a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a48: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x322a4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x322a50: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x322a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x322a54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x322a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x322a58: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x322a58u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x322a5c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322a5cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322a60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322a64: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x322a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x322a68: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x322a68u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400480u));
    // 0x322a6c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x322a6cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400490u));
    // 0x322a70: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x322a70u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4004A0u));
    // 0x322a74: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x322a74u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4004B0u));
    // 0x322a78: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x322a78u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x322a7c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322a7cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322a80: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x322A80u;
    SET_GPR_U32(ctx, 31, 0x322A88u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x322A80u, 0x322A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A88u;
label_322a88:
    // 0x322a88: 0x4bdef0aa  vmul.xyz    $vf2, $vf30, $vf30
    ctx->pc = 0x322a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322a8c: 0x4bc1f33c  vmove.xyz   $vf1, $vf30
    ctx->pc = 0x322a8cu;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[30], _mm_castsi128_ps(mask)); }
    // 0x322a90: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x322a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x322a94: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x322a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x322a98: 0x4a22008a  vmaddz.w    $vf2, $vf0, $vf2z
    ctx->pc = 0x322a98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322a9c: 0x4be203be  vrsqrt      $Q, $vf0w, $vf2w
    ctx->pc = 0x322a9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322aa0: 0x4a0003bf  vwaitq
    ctx->pc = 0x322aa0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322aa4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x322aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322aa8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x322aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x322aac: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x322aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x322ab0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x322ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x322ab4: 0xf87f0000  sqc2        $vf31, 0x0($v1)
    ctx->pc = 0x322ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322ab8: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x322ab8u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x322abc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322abcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322ac0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x322ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x322ac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322ac8: 0xac500414  sw          $s0, 0x414($v0)
    ctx->pc = 0x322ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x322acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x322accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x322AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AD4u;
        // 0x322ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322ADCu;
    // 0x322adc: 0x0  nop
    ctx->pc = 0x322adcu;
    // NOP
label_322ae0:
    // 0x322ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322ae4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x322ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x322ae8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x322ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x322aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322af0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x322af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322af4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x322af8: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x322af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x322afc: 0x34420034  ori         $v0, $v0, 0x34
    ctx->pc = 0x322afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
    // 0x322b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322b04: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x322b04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x322b08: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x322b08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x322b0c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x322b0cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x322b10: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322b10u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322b14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322b18: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x322b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x322b1c: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x322b1cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400480u));
    // 0x322b20: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x322b20u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400490u));
    // 0x322b24: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x322b24u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4004A0u));
    // 0x322b28: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x322b28u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4004B0u));
    // 0x322b2c: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x322b2cu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x322b30: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322b30u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322b34: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x322B34u;
    SET_GPR_U32(ctx, 31, 0x322B3Cu);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x322B34u, 0x322B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B3Cu;
label_322b3c:
    // 0x322b3c: 0x4bdef06a  vmul.xyz    $vf1, $vf30, $vf30
    ctx->pc = 0x322b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322b40: 0x4a2101bc  vmulax.w    $ACC, $vf0, $vf1x
    ctx->pc = 0x322b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x322b44: 0x4a2100bd  vmadday.w   $ACC, $vf0, $vf1y
    ctx->pc = 0x322b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x322b48: 0x4a21004a  vmaddz.w    $vf1, $vf0, $vf1z
    ctx->pc = 0x322b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322b4c: 0x4be103be  vrsqrt      $Q, $vf0w, $vf1w
    ctx->pc = 0x322b4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322b50: 0x4a0003bf  vwaitq
    ctx->pc = 0x322b50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322b54: 0x4bc0f05c  vmulq.xyz   $vf1, $vf30, $Q
    ctx->pc = 0x322b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322b58: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x322b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x322b5c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x322b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x322b60: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x322b60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x322b64: 0xf87f0000  sqc2        $vf31, 0x0($v1)
    ctx->pc = 0x322b64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322b68: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x322b68u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x322b6c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322b6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322b70: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x322b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x322b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322b78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x322b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x322B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B7Cu;
        // 0x322b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322B84u;
    // 0x322b84: 0x0  nop
    ctx->pc = 0x322b84u;
    // NOP
    ctx->pc = 0x322b88u;
}
