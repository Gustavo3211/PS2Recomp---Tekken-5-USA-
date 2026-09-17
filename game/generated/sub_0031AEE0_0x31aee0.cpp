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

// Function: sub_0031AEE0
// Address: 0x31aee0 - 0x31af68
void sub_0031AEE0_0x31aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AEE0_0x31aee0");
#endif

    ctx->pc = 0x31aee0u;

    // 0x31aee0: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x31aee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31aee4: 0x1547001e  bne         $t2, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x31AEE4u;
    {
        const bool branch_taken_0x31aee4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x31AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEE4u;
        // 0x31aee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aee4) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AEECu;
    // 0x31aeec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31aef0: 0x1468001b  bne         $v1, $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31AEF0u;
    {
        const bool branch_taken_0x31aef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x31aef0) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AEF8u;
    // 0x31aef8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x31aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31aefc: 0x14650018  bne         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x31AEFCu;
    {
        const bool branch_taken_0x31aefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x31aefc) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF04u;
    // 0x31af04: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x31af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31af08: 0x14660015  bne         $v1, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x31AF08u;
    {
        const bool branch_taken_0x31af08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x31AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF08u;
        // 0x31af0c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af08) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF10u;
    // 0x31af10: 0x11430004  beq         $t2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AF10u;
    {
        const bool branch_taken_0x31af10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x31AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF10u;
        // 0x31af14: 0x49480a  movz        $t1, $v0, $t1 (Delay Slot)
        if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af10) {
            ctx->pc = 0x31AF24u;
            goto label_31af24;
        }
    }
    ctx->pc = 0x31AF18u;
    // 0x31af18: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x31af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x31af1c: 0x15420010  bne         $t2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31AF1Cu;
    {
        const bool branch_taken_0x31af1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF1Cu;
        // 0x31af20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af1c) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF24u;
label_31af24:
    // 0x31af24: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x31af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x31af28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31AF28u;
    {
        const bool branch_taken_0x31af28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF28u;
        // 0x31af2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af28) {
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF30u;
    // 0x31af30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31af34: 0x5049000a  beql        $v0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x31AF34u;
    {
        const bool branch_taken_0x31af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x31af34) {
            ctx->pc = 0x31AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF34u;
            // 0x31af38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF3Cu;
    // 0x31af3c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x31af3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31af40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AF40u;
    {
        const bool branch_taken_0x31af40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31af40) {
            ctx->pc = 0x31AF54u;
            goto label_31af54;
        }
    }
    ctx->pc = 0x31AF48u;
    // 0x31af48: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x31af48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31af4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AF4Cu;
    {
        const bool branch_taken_0x31af4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af4c) {
            ctx->pc = 0x31AF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF4Cu;
            // 0x31af50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF54u;
label_31af54:
    // 0x31af54: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF54u;
        // 0x31af58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF5Cu;
    // 0x31af5c: 0x0  nop
    ctx->pc = 0x31af5cu;
    // NOP
label_31af60:
    // 0x31af60: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF68u;
}
