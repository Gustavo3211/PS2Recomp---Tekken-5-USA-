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

// Function: sub_002D5E50
// Address: 0x2d5e50 - 0x2d5e80
void sub_002D5E50_0x2d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5E50_0x2d5e50");
#endif

    ctx->pc = 0x2d5e50u;

    // 0x2d5e50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d5e54: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5E54u;
    {
        const bool branch_taken_0x2d5e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E54u;
        // 0x2d5e58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e54) {
            ctx->pc = 0x2D5E74u;
            goto label_2d5e74;
        }
    }
    ctx->pc = 0x2D5E5Cu;
    // 0x2d5e5c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5E5Cu;
    {
        const bool branch_taken_0x2d5e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E5Cu;
        // 0x2d5e60: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e5c) {
            ctx->pc = 0x2D5E74u;
            goto label_2d5e74;
        }
    }
    ctx->pc = 0x2D5E64u;
    // 0x2d5e64: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5E64u;
    {
        const bool branch_taken_0x2d5e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E64u;
        // 0x2d5e68: 0xac40c700  sw          $zero, -0x3900($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e64) {
            ctx->pc = 0x2D5E74u;
            goto label_2d5e74;
        }
    }
    ctx->pc = 0x2D5E6Cu;
    // 0x2d5e6c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d5e70: 0xac44c730  sw          $a0, -0x38D0($v0)
    ctx->pc = 0x2d5e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x17C730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x17C730u, _value); } while (0);
label_2d5e74:
    // 0x2d5e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5E7Cu;
    // 0x2d5e7c: 0x0  nop
    ctx->pc = 0x2d5e7cu;
    // NOP
    ctx->pc = 0x2d5e80u;
}
