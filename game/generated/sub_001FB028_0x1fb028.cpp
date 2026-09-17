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

// Function: sub_001FB028
// Address: 0x1fb028 - 0x1fb0a0
void sub_001FB028_0x1fb028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB028_0x1fb028");
#endif

    ctx->pc = 0x1fb028u;

    // 0x1fb028: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fb028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fb02c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fb030: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fb030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fb034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB034u;
    {
        const bool branch_taken_0x1fb034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB034u;
        // 0x1fb038: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb034) {
            ctx->pc = 0x1FB068u;
            goto label_1fb068;
        }
    }
    ctx->pc = 0x1FB03Cu;
    // 0x1fb03c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb040: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb044: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB044u;
    {
        const bool branch_taken_0x1fb044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb044) {
            ctx->pc = 0x1FB068u;
            goto label_1fb068;
        }
    }
    ctx->pc = 0x1FB04Cu;
    // 0x1fb04c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1fb050: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb054: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB054u;
    {
        const bool branch_taken_0x1fb054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fb054) {
            ctx->pc = 0x1FB058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB054u;
            // 0x1fb058: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB068u;
            goto label_1fb068;
        }
    }
    ctx->pc = 0x1FB05Cu;
    // 0x1fb05c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1fb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fb060: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB060u;
    {
        const bool branch_taken_0x1fb060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fb060) {
            ctx->pc = 0x1FB064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB060u;
            // 0x1fb064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB068u;
            goto label_1fb068;
        }
    }
    ctx->pc = 0x1FB068u;
label_1fb068:
    // 0x1fb068: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB068u;
        // 0x1fb06c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB070u;
    // 0x1fb070: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fb074: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fb074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fb078: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fb078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fb07c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB07Cu;
    {
        const bool branch_taken_0x1fb07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB07Cu;
        // 0x1fb080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb07c) {
            ctx->pc = 0x1FB094u;
            goto label_1fb094;
        }
    }
    ctx->pc = 0x1FB084u;
    // 0x1fb084: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb088: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fb08c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fb08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fb090: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1fb090u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fb094:
    // 0x1fb094: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB094u;
        // 0x1fb098: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB09Cu;
    // 0x1fb09c: 0x0  nop
    ctx->pc = 0x1fb09cu;
    // NOP
    ctx->pc = 0x1fb0a0u;
}
