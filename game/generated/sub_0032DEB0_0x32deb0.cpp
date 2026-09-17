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

// Function: sub_0032DEB0
// Address: 0x32deb0 - 0x32def8
void sub_0032DEB0_0x32deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DEB0_0x32deb0");
#endif

    ctx->pc = 0x32deb0u;

    // 0x32deb0: 0x8f83c5ec  lw          $v1, -0x3A14($gp)
    ctx->pc = 0x32deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952428)));
    // 0x32deb4: 0x3c046c07  lui         $a0, 0x6C07
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27655 << 16));
    // 0x32deb8: 0x34848965  ori         $a0, $a0, 0x8965
    ctx->pc = 0x32deb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35173);
    // 0x32debc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x32debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x32dec0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32dec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32dec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32dec8: 0x2812  mflo        $a1
    ctx->pc = 0x32dec8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x32decc: 0x1810  mfhi        $v1
    ctx->pc = 0x32deccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32ded0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x32ded0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32ded4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32ded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32ded8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x32ded8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x32dedc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x32dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32dee0: 0x64633039  daddiu      $v1, $v1, 0x3039
    ctx->pc = 0x32dee0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)12345);
    // 0x32dee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32dee8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32dee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32deec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32def0: 0x3e00008  jr          $ra
    ctx->pc = 0x32DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEF0u;
        // 0x32def4: 0xaf83c5ec  sw          $v1, -0x3A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DEF8u;
}
