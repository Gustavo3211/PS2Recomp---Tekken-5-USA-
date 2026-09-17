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

// Function: sub_00225888
// Address: 0x225888 - 0x2258d8
void sub_00225888_0x225888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225888_0x225888");
#endif

    ctx->pc = 0x225888u;

    // 0x225888: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x225888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22588c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225890: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x225890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x225894: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x225894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x225898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22589c: 0x8c4261cc  lw          $v0, 0x61CC($v0)
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25036)));
    // 0x2258a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2258a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2258a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2258A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258A4u;
        // 0x2258a8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258ACu;
    // 0x2258ac: 0x0  nop
    ctx->pc = 0x2258acu;
    // NOP
    // 0x2258b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2258b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2258b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2258b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2258b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2258bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2258bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2258c0: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2258c4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2258c8: 0xac2361cc  sw          $v1, 0x61CC($at)
    ctx->pc = 0x2258c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25036), GPR_U32(ctx, 3));
    // 0x2258cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2258CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258D4u;
    // 0x2258d4: 0x0  nop
    ctx->pc = 0x2258d4u;
    // NOP
    ctx->pc = 0x2258d8u;
}
