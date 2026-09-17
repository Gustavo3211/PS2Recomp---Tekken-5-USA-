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

// Function: sub_00322980
// Address: 0x322980 - 0x3229d8
void sub_00322980_0x322980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322980_0x322980");
#endif

    ctx->pc = 0x322980u;

    // 0x322980: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x322980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x322984: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x322984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x322988: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32298c: 0x8ca60414  lw          $a2, 0x414($a1)
    ctx->pc = 0x32298cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x322990: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x322990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x322994: 0x2463cdd8  addiu       $v1, $v1, -0x3228
    ctx->pc = 0x322994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954456));
    // 0x322998: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32299c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3229a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3229a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229a4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3229a8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x3229a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x3229ac: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x3229acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x3229b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3229b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3229b4: 0xd8580280  lqc2        $vf24, 0x280($v0)
    ctx->pc = 0x3229b4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x3229b8: 0xd8590290  lqc2        $vf25, 0x290($v0)
    ctx->pc = 0x3229b8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x3229bc: 0xd85a02a0  lqc2        $vf26, 0x2A0($v0)
    ctx->pc = 0x3229bcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x3229c0: 0xd85b02b0  lqc2        $vf27, 0x2B0($v0)
    ctx->pc = 0x3229c0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x3229c4: 0xf8bb0010  sqc2        $vf27, 0x10($a1)
    ctx->pc = 0x3229c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x3229c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3229c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3229cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3229ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3229d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3229D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3229D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229D0u;
        // 0x3229d4: 0xac450414  sw          $a1, 0x414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3229D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229D8u;
}
