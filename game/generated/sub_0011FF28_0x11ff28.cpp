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

// Function: sub_0011FF28
// Address: 0x11ff28 - 0x11ffa0
void sub_0011FF28_0x11ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FF28_0x11ff28");
#endif

    ctx->pc = 0x11ff28u;

    // 0x11ff28: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11ff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ff2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11ff2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11ff30: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11ff30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11ff34: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x11ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11ff38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11ff38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11ff3c: 0x620019  multu       $v1, $v0
    ctx->pc = 0x11ff3cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11ff40: 0x3012  mflo        $a2
    ctx->pc = 0x11ff40u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11ff44: 0x4010  mfhi        $t0
    ctx->pc = 0x11ff44u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x11ff48: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11ff48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ff4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11ff4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11ff50: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x11ff50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11ff54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ff58: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11ff58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ff5c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x11ff5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11ff60: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11ff60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11ff64: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x11ff64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x11ff68: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x11ff68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x11ff6c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x11ff6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x11ff70: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x11ff70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x11ff74: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11ff74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11ff78: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x11ff7c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x11ff7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x11ff80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11ff84: 0x9103f  dsra32      $v0, $t1, 0
    ctx->pc = 0x11ff84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x11ff88: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x11ff88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x11ff8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ff90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ff94: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF94u;
        // 0x11ff98: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF9Cu;
    // 0x11ff9c: 0x0  nop
    ctx->pc = 0x11ff9cu;
    // NOP
    ctx->pc = 0x11ffa0u;
}
