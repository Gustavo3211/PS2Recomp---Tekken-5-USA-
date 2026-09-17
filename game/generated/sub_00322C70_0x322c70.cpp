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

// Function: sub_00322C70
// Address: 0x322c70 - 0x322d10
void sub_00322C70_0x322c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322C70_0x322c70");
#endif

    switch (ctx->pc) {
        case 0x322d08u: goto label_322d08;
        default: break;
    }

    ctx->pc = 0x322c70u;

    // 0x322c70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x322c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x322c74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x322c78: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x322c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x322c7c: 0x8c660414  lw          $a2, 0x414($v1)
    ctx->pc = 0x322c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x322c80: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x322c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x322c84: 0x2442ccf0  addiu       $v0, $v0, -0x3310
    ctx->pc = 0x322c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
    // 0x322c88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x322c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x322c8c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x322c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c90: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x322c94: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x322c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x322c98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x322c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x322c9c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x322c9cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x322ca0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322ca0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322ca4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322ca8: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x322ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x322cac: 0xd8580240  lqc2        $vf24, 0x240($v0)
    ctx->pc = 0x322cacu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x4006C0u));
    // 0x322cb0: 0xd8590250  lqc2        $vf25, 0x250($v0)
    ctx->pc = 0x322cb0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x4006D0u));
    // 0x322cb4: 0xd85a0260  lqc2        $vf26, 0x260($v0)
    ctx->pc = 0x322cb4u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4006E0u));
    // 0x322cb8: 0xd85b0270  lqc2        $vf27, 0x270($v0)
    ctx->pc = 0x322cb8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4006F0u));
    // 0x322cbc: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x322cbcu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x322cc0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322cc0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322cc4: 0xf87c0010  sqc2        $vf28, 0x10($v1)
    ctx->pc = 0x322cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x322cc8: 0xf87d0020  sqc2        $vf29, 0x20($v1)
    ctx->pc = 0x322cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x322ccc: 0xf87e0030  sqc2        $vf30, 0x30($v1)
    ctx->pc = 0x322cccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x322cd0: 0xf87f0040  sqc2        $vf31, 0x40($v1)
    ctx->pc = 0x322cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322cd4: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x322cd4u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x322cd8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322cd8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322cdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322ce0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x322ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x322CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE4u;
        // 0x322ce8: 0xac430414  sw          $v1, 0x414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322CECu;
    // 0x322cec: 0x0  nop
    ctx->pc = 0x322cecu;
    // NOP
    // 0x322cf0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x322cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x322cf4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x322cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x322cf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x322cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x322cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x322CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CFCu;
        // 0x322d00: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322D04u;
    // 0x322d04: 0x0  nop
    ctx->pc = 0x322d04u;
    // NOP
label_322d08:
    // 0x322d08: 0x3e00008  jr          $ra
    ctx->pc = 0x322D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D08u;
        // 0x322d0c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322D10u;
}
