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

// Function: sub_0033DB48
// Address: 0x33db48 - 0x33db88
void sub_0033DB48_0x33db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DB48_0x33db48");
#endif

    ctx->pc = 0x33db48u;

    // 0x33db48: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x33db4c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x33db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x33db50: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33db50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33db54: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x33db54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x33db58: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x33db58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x33db5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33db60: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33db60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33db64: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33db64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33db68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33db68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33db6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33db70: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33db70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33db74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33db78: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x33db78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x33db7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB7Cu;
        // 0x33db80: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DB84u;
    // 0x33db84: 0x0  nop
    ctx->pc = 0x33db84u;
    // NOP
    ctx->pc = 0x33db88u;
}
