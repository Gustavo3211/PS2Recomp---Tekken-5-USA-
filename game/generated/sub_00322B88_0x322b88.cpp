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

// Function: sub_00322B88
// Address: 0x322b88 - 0x322c08
void sub_00322B88_0x322b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322B88_0x322b88");
#endif

    ctx->pc = 0x322b88u;

    // 0x322b88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x322b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x322b8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x322b90: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x322b94: 0x8c660414  lw          $a2, 0x414($v1)
    ctx->pc = 0x322b94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x322b98: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x322b9c: 0x2442cda8  addiu       $v0, $v0, -0x3258
    ctx->pc = 0x322b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954408));
    // 0x322ba0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x322ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x322ba4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x322ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ba8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x322ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x322bac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x322bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x322bb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x322bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x322bb4: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x322bb4u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x322bb8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322bb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322bbc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322bc0: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x322bc4: 0xd85801c0  lqc2        $vf24, 0x1C0($v0)
    ctx->pc = 0x322bc4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400640u));
    // 0x322bc8: 0xd85901d0  lqc2        $vf25, 0x1D0($v0)
    ctx->pc = 0x322bc8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400650u));
    // 0x322bcc: 0xd85a01e0  lqc2        $vf26, 0x1E0($v0)
    ctx->pc = 0x322bccu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400660u));
    // 0x322bd0: 0xd85b01f0  lqc2        $vf27, 0x1F0($v0)
    ctx->pc = 0x322bd0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400670u));
    // 0x322bd4: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x322bd4u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x322bd8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322bd8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322bdc: 0xf87c0010  sqc2        $vf28, 0x10($v1)
    ctx->pc = 0x322bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x322be0: 0xf87d0020  sqc2        $vf29, 0x20($v1)
    ctx->pc = 0x322be0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x322be4: 0xf87e0030  sqc2        $vf30, 0x30($v1)
    ctx->pc = 0x322be4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x322be8: 0xf87f0040  sqc2        $vf31, 0x40($v1)
    ctx->pc = 0x322be8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322bec: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x322becu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x322bf0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x322bf0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x322bf4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322bf8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x322bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x322bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x322BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BFCu;
        // 0x322c00: 0xac430414  sw          $v1, 0x414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C04u;
    // 0x322c04: 0x0  nop
    ctx->pc = 0x322c04u;
    // NOP
    ctx->pc = 0x322c08u;
}
