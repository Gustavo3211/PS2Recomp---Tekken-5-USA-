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

// Function: sub_002D1D40
// Address: 0x2d1d40 - 0x2d1d98
void sub_002D1D40_0x2d1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D40_0x2d1d40");
#endif

    switch (ctx->pc) {
        case 0x2d1d6cu: goto label_2d1d6c;
        default: break;
    }

    ctx->pc = 0x2d1d40u;

    // 0x2d1d40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d1d44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d1d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d48: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2d1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2d1d4c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d1d50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d1d54: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x2d1d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x2d1d58: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1D58u;
    {
        const bool branch_taken_0x2d1d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D58u;
        // 0x2d1d5c: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d58) {
            ctx->pc = 0x2D1D78u;
            goto label_2d1d78;
        }
    }
    ctx->pc = 0x2D1D60u;
    // 0x2d1d60: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d1d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1d68: 0x8c42b680  lw          $v0, -0x4980($v0)
    ctx->pc = 0x2d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948480)));
label_2d1d6c:
    // 0x2d1d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D74u;
    // 0x2d1d74: 0x0  nop
    ctx->pc = 0x2d1d74u;
    // NOP
label_2d1d78:
    // 0x2d1d78: 0x8f83cb54  lw          $v1, -0x34AC($gp)
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953812)));
    // 0x2d1d7c: 0x14a3fffb  bne         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D1D7Cu;
    {
        const bool branch_taken_0x2d1d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D7Cu;
        // 0x2d1d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d7c) {
            ctx->pc = 0x2D1D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1d6c;
        }
    }
    ctx->pc = 0x2D1D84u;
    // 0x2d1d84: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2d1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2d1d88: 0x24424520  addiu       $v0, $v0, 0x4520
    ctx->pc = 0x2d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x2d1d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D8Cu;
        // 0x2d1d90: 0x24420110  addiu       $v0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D94u;
    // 0x2d1d94: 0x0  nop
    ctx->pc = 0x2d1d94u;
    // NOP
    ctx->pc = 0x2d1d98u;
}
