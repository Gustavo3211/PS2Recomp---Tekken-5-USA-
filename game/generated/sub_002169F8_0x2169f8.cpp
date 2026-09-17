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

// Function: sub_002169F8
// Address: 0x2169f8 - 0x216a28
void sub_002169F8_0x2169f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002169F8_0x2169f8");
#endif

    ctx->pc = 0x2169f8u;

    // 0x2169f8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2169fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2169FCu;
    {
        const bool branch_taken_0x2169fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169FCu;
        // 0x216a00: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169fc) {
            ctx->pc = 0x216A10u;
            goto label_216a10;
        }
    }
    ctx->pc = 0x216A04u;
    // 0x216a04: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x216a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x216a08: 0x3e00008  jr          $ra
    ctx->pc = 0x216A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A08u;
        // 0x216a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A10u;
label_216a10:
    // 0x216a10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x216a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x216a14: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x216a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x216A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A1Cu;
        // 0x216a20: 0xac83886c  sw          $v1, -0x7794($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294936684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A24u;
    // 0x216a24: 0x0  nop
    ctx->pc = 0x216a24u;
    // NOP
    ctx->pc = 0x216a28u;
}
