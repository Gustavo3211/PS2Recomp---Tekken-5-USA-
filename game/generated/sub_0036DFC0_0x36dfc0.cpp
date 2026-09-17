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

// Function: sub_0036DFC0
// Address: 0x36dfc0 - 0x36e088
void sub_0036DFC0_0x36dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DFC0_0x36dfc0");
#endif

    ctx->pc = 0x36dfc0u;

    // 0x36dfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFC0u;
        // 0x36dfc4: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFC8u;
    // 0x36dfc8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36dfcc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x36dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x36dfd0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x36dfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36dfd4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DFD4u;
    {
        const bool branch_taken_0x36dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFD4u;
        // 0x36dfd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dfd4) {
            ctx->pc = 0x36DFE0u;
            goto label_36dfe0;
        }
    }
    ctx->pc = 0x36DFDCu;
    // 0x36dfdc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x36dfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_36dfe0:
    // 0x36dfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFE8u;
    // 0x36dfe8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFECu;
        // 0x36dff0: 0xa0400052  sb          $zero, 0x52($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFF4u;
    // 0x36dff4: 0x0  nop
    ctx->pc = 0x36dff4u;
    // NOP
    // 0x36dff8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x36dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36dffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e000: 0x3e00008  jr          $ra
    ctx->pc = 0x36E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E000u;
        // 0x36e004: 0xa0620052  sb          $v0, 0x52($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E008u;
    // 0x36e008: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e00c: 0x24440052  addiu       $a0, $v0, 0x52
    ctx->pc = 0x36e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 82));
    // 0x36e010: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x36e010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e014: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E014u;
    {
        const bool branch_taken_0x36e014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E014u;
        // 0x36e018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e014) {
            ctx->pc = 0x36E020u;
            goto label_36e020;
        }
    }
    ctx->pc = 0x36E01Cu;
    // 0x36e01c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x36e01cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_36e020:
    // 0x36e020: 0x3e00008  jr          $ra
    ctx->pc = 0x36E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E028u;
    // 0x36e028: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e02c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E02Cu;
        // 0x36e030: 0xa0400051  sb          $zero, 0x51($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E034u;
    // 0x36e034: 0x0  nop
    ctx->pc = 0x36e034u;
    // NOP
    // 0x36e038: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e040: 0x3e00008  jr          $ra
    ctx->pc = 0x36E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E040u;
        // 0x36e044: 0xa0620051  sb          $v0, 0x51($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E048u;
    // 0x36e048: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e04c: 0x24440053  addiu       $a0, $v0, 0x53
    ctx->pc = 0x36e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 83));
    // 0x36e050: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x36e050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e054: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E054u;
    {
        const bool branch_taken_0x36e054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E054u;
        // 0x36e058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e054) {
            ctx->pc = 0x36E060u;
            goto label_36e060;
        }
    }
    ctx->pc = 0x36E05Cu;
    // 0x36e05c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x36e05cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_36e060:
    // 0x36e060: 0x3e00008  jr          $ra
    ctx->pc = 0x36E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E068u;
    // 0x36e068: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e06c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e070: 0x24420053  addiu       $v0, $v0, 0x53
    ctx->pc = 0x36e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 83));
    // 0x36e074: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x36e074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36e078: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x36E078u;
    {
        const bool branch_taken_0x36e078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x36e078) {
            ctx->pc = 0x36E07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E078u;
            // 0x36e07c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E080u;
            goto label_36e080;
        }
    }
    ctx->pc = 0x36E080u;
label_36e080:
    // 0x36e080: 0x3e00008  jr          $ra
    ctx->pc = 0x36E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E088u;
}
