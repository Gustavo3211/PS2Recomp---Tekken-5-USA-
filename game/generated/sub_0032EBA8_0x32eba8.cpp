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

// Function: sub_0032EBA8
// Address: 0x32eba8 - 0x32ece0
void sub_0032EBA8_0x32eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EBA8_0x32eba8");
#endif

    switch (ctx->pc) {
        case 0x32ec08u: goto label_32ec08;
        case 0x32ec50u: goto label_32ec50;
        case 0x32ecbcu: goto label_32ecbc;
        default: break;
    }

    ctx->pc = 0x32eba8u;

    // 0x32eba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ebb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ebb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ebb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32ebb8: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32ebb8u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32ebbc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ebbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ebc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ebc4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32ebc8: 0xd85801c0  lqc2        $vf24, 0x1C0($v0)
    ctx->pc = 0x32ebc8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400640u));
    // 0x32ebcc: 0xd85901d0  lqc2        $vf25, 0x1D0($v0)
    ctx->pc = 0x32ebccu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400650u));
    // 0x32ebd0: 0xd85a01e0  lqc2        $vf26, 0x1E0($v0)
    ctx->pc = 0x32ebd0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400660u));
    // 0x32ebd4: 0xd85b01f0  lqc2        $vf27, 0x1F0($v0)
    ctx->pc = 0x32ebd4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400670u));
    // 0x32ebd8: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32ebd8u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x32ebdc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ebdcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ebe0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ebe4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32ebe8: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x32ebe8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400500u));
    // 0x32ebec: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x32ebecu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400510u));
    // 0x32ebf0: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x32ebf0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400520u));
    // 0x32ebf4: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x32ebf4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400530u));
    // 0x32ebf8: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32ebf8u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x32ebfc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ebfcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ec00: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x32EC00u;
    SET_GPR_U32(ctx, 31, 0x32EC08u);
    ctx->pc = 0x32EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC00u;
    // 0x32ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x32EC00u, 0x32EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC08u;
label_32ec08:
    // 0x32ec08: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32ec08u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32ec0c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ec0cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ec10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32ec10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ec14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ec18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ec18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ec1c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC1Cu;
        // 0x32ec20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC24u;
    // 0x32ec24: 0x0  nop
    ctx->pc = 0x32ec24u;
    // NOP
    // 0x32ec28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ec2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ec30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ec38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32ec38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ec40: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32ec40u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32ec44: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ec44u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ec48: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x32EC48u;
    SET_GPR_U32(ctx, 31, 0x32EC50u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x32EC48u, 0x32EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC50u;
label_32ec50:
    // 0x32ec50: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ec54: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32ec58: 0xd8580280  lqc2        $vf24, 0x280($v0)
    ctx->pc = 0x32ec58u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400700u));
    // 0x32ec5c: 0xd8590290  lqc2        $vf25, 0x290($v0)
    ctx->pc = 0x32ec5cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400710u));
    // 0x32ec60: 0xd85a02a0  lqc2        $vf26, 0x2A0($v0)
    ctx->pc = 0x32ec60u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400720u));
    // 0x32ec64: 0xd85b02b0  lqc2        $vf27, 0x2B0($v0)
    ctx->pc = 0x32ec64u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400730u));
    // 0x32ec68: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32ec68u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32ec6c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ec6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ec70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ec74: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32ec78: 0xd85802c0  lqc2        $vf24, 0x2C0($v0)
    ctx->pc = 0x32ec78u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400740u));
    // 0x32ec7c: 0xd85902d0  lqc2        $vf25, 0x2D0($v0)
    ctx->pc = 0x32ec7cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400750u));
    // 0x32ec80: 0xd85a02e0  lqc2        $vf26, 0x2E0($v0)
    ctx->pc = 0x32ec80u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400760u));
    // 0x32ec84: 0xd85b02f0  lqc2        $vf27, 0x2F0($v0)
    ctx->pc = 0x32ec84u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400770u));
    // 0x32ec88: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32ec88u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32ec8c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ec8cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ec90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ec94: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32ec98: 0xd8580300  lqc2        $vf24, 0x300($v0)
    ctx->pc = 0x32ec98u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400780u));
    // 0x32ec9c: 0xd8590310  lqc2        $vf25, 0x310($v0)
    ctx->pc = 0x32ec9cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400790u));
    // 0x32eca0: 0xd85a0320  lqc2        $vf26, 0x320($v0)
    ctx->pc = 0x32eca0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4007A0u));
    // 0x32eca4: 0xd85b0330  lqc2        $vf27, 0x330($v0)
    ctx->pc = 0x32eca4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4007B0u));
    // 0x32eca8: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32eca8u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32ecac: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ecacu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ecb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ecb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ecb4: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x32ECB4u;
    SET_GPR_U32(ctx, 31, 0x32ECBCu);
    ctx->pc = 0x32ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECB4u;
    // 0x32ecb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x32ECB4u, 0x32ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECBCu;
label_32ecbc:
    // 0x32ecbc: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32ecbcu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32ecc0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32ecc0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32ecc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32ecc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ecc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ecc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ecccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ecd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECD4u;
        // 0x32ecd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ECDCu;
    // 0x32ecdc: 0x0  nop
    ctx->pc = 0x32ecdcu;
    // NOP
    ctx->pc = 0x32ece0u;
}
