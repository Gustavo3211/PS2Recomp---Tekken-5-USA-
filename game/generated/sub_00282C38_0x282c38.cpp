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

// Function: sub_00282C38
// Address: 0x282c38 - 0x282c78
void sub_00282C38_0x282c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282C38_0x282c38");
#endif

    ctx->pc = 0x282c38u;

    // 0x282c38: 0x908201bd  lbu         $v0, 0x1BD($a0)
    ctx->pc = 0x282c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
    // 0x282c3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x282C3Cu;
    {
        const bool branch_taken_0x282c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282c3c) {
            ctx->pc = 0x282C70u;
            goto label_282c70;
        }
    }
    ctx->pc = 0x282C44u;
    // 0x282c44: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x282c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x282c48: 0x8f82ca8c  lw          $v0, -0x3574($gp)
    ctx->pc = 0x282c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282c4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x282c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x282c50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x282c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x282c54: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x282c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282c58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x282c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x282c5c: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x282c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x282c60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x282c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x282c64: 0x3e00008  jr          $ra
    ctx->pc = 0x282C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C64u;
        // 0x282c68: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C6Cu;
    // 0x282c6c: 0x0  nop
    ctx->pc = 0x282c6cu;
    // NOP
label_282c70:
    // 0x282c70: 0x3e00008  jr          $ra
    ctx->pc = 0x282C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C70u;
        // 0x282c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C78u;
}
