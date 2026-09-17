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

// Function: sub_0026EDD8
// Address: 0x26edd8 - 0x26ee58
void sub_0026EDD8_0x26edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EDD8_0x26edd8");
#endif

    ctx->pc = 0x26edd8u;

    // 0x26edd8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26eddc: 0x84830086  lh          $v1, 0x86($a0)
    ctx->pc = 0x26eddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x26ede0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x26EDE0u;
    {
        const bool branch_taken_0x26ede0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDE0u;
        // 0x26ede4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ede0) {
            ctx->pc = 0x26EE50u;
            goto label_26ee50;
        }
    }
    ctx->pc = 0x26EDE8u;
    // 0x26ede8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26edec: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26edf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26edf4: 0x2406031f  addiu       $a2, $zero, 0x31F
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
    // 0x26edf8: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x26edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x26edfc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ee00: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x26ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x26ee04: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ee08: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x26ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x26ee0c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ee10: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x26ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x26ee14: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ee18: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x26ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x26ee1c: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x26EE1Cu;
    {
        const bool branch_taken_0x26ee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x26EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE1Cu;
        // 0x26ee20: 0x2c620320  sltiu       $v0, $v1, 0x320 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee1c) {
            ctx->pc = 0x26EE48u;
            goto label_26ee48;
        }
    }
    ctx->pc = 0x26EE24u;
    // 0x26ee24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EE24u;
    {
        const bool branch_taken_0x26ee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE24u;
        // 0x26ee28: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee24) {
            ctx->pc = 0x26EE40u;
            goto label_26ee40;
        }
    }
    ctx->pc = 0x26EE2Cu;
    // 0x26ee2c: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x26ee30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EE30u;
    {
        const bool branch_taken_0x26ee30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ee30) {
            ctx->pc = 0x26EE48u;
            goto label_26ee48;
        }
    }
    ctx->pc = 0x26EE38u;
    // 0x26ee38: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE38u;
        // 0x26ee3c: 0x3402c000  ori         $v0, $zero, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE40u;
label_26ee40:
    // 0x26ee40: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE40u;
    {
        const bool branch_taken_0x26ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ee40) {
            ctx->pc = 0x26EE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EE40u;
            // 0x26ee44: 0x3402c000  ori         $v0, $zero, 0xC000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EE50u;
            goto label_26ee50;
        }
    }
    ctx->pc = 0x26EE48u;
label_26ee48:
    // 0x26ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE48u;
        // 0x26ee4c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE50u;
label_26ee50:
    // 0x26ee50: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE58u;
}
