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

// Function: sub_00322C08
// Address: 0x322c08 - 0x322c70
void sub_00322C08_0x322c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322C08_0x322c08");
#endif

    ctx->pc = 0x322c08u;

    // 0x322c08: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x322c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x322c0c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x322c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x322c10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x322c14: 0x8c670414  lw          $a3, 0x414($v1)
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x400414u));
    // 0x322c18: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x322c1c: 0x24a5cdb8  addiu       $a1, $a1, -0x3248
    ctx->pc = 0x322c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954424));
    // 0x322c20: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x322c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x322c24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322c28: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x322c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c2c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x322c2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x322c30: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x322c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x322c34: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x322c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x322c38: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x322c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x322c3c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x322c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x322c40: 0xd8580200  lqc2        $vf24, 0x200($v0)
    ctx->pc = 0x322c40u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x322c44: 0xd8590210  lqc2        $vf25, 0x210($v0)
    ctx->pc = 0x322c44u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x322c48: 0xd85a0220  lqc2        $vf26, 0x220($v0)
    ctx->pc = 0x322c48u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x322c4c: 0xd85b0230  lqc2        $vf27, 0x230($v0)
    ctx->pc = 0x322c4cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x322c50: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x322c50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x322c54: 0xf8790010  sqc2        $vf25, 0x10($v1)
    ctx->pc = 0x322c54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x322c58: 0xf87a0020  sqc2        $vf26, 0x20($v1)
    ctx->pc = 0x322c58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x322c5c: 0xf87b0030  sqc2        $vf27, 0x30($v1)
    ctx->pc = 0x322c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x322c60: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x322c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x322c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x322c68: 0x3e00008  jr          $ra
    ctx->pc = 0x322C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C68u;
        // 0x322c6c: 0xac460414  sw          $a2, 0x414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C70u;
}
