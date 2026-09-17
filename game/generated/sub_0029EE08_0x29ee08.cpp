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

// Function: sub_0029EE08
// Address: 0x29ee08 - 0x29ee98
void sub_0029EE08_0x29ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EE08_0x29ee08");
#endif

    ctx->pc = 0x29ee08u;

    // 0x29ee08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ee0c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x29ee10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ee14: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29ee18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29EE18u;
    {
        const bool branch_taken_0x29ee18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE18u;
        // 0x29ee1c: 0x28620039  slti        $v0, $v1, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee18) {
            ctx->pc = 0x29EE50u;
            goto label_29ee50;
        }
    }
    ctx->pc = 0x29EE20u;
    // 0x29ee20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EE20u;
    {
        const bool branch_taken_0x29ee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE20u;
        // 0x29ee24: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee20) {
            ctx->pc = 0x29EE40u;
            goto label_29ee40;
        }
    }
    ctx->pc = 0x29EE28u;
    // 0x29ee28: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x29ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x29ee2c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29EE2Cu;
    {
        const bool branch_taken_0x29ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE2Cu;
        // 0x29ee30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee2c) {
            ctx->pc = 0x29EE68u;
            goto label_29ee68;
        }
    }
    ctx->pc = 0x29EE34u;
    // 0x29ee34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29EE34u;
    {
        const bool branch_taken_0x29ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ee34) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EE3Cu;
    // 0x29ee3c: 0x0  nop
    ctx->pc = 0x29ee3cu;
    // NOP
label_29ee40:
    // 0x29ee40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EE40u;
    {
        const bool branch_taken_0x29ee40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE40u;
        // 0x29ee44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee40) {
            ctx->pc = 0x29EE60u;
            goto label_29ee60;
        }
    }
    ctx->pc = 0x29EE48u;
    // 0x29ee48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29EE48u;
    {
        const bool branch_taken_0x29ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ee48) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EE50u;
label_29ee50:
    // 0x29ee50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ee54: 0x80a7bbe  j           func_29EEF8
    ctx->pc = 0x29EE54u;
    ctx->pc = 0x29EE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE54u;
    // 0x29ee58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    sub_0029EEF8_0x29eef8(rdram, ctx, runtime); return;
    ctx->pc = 0x29EE5Cu;
    // 0x29ee5c: 0x0  nop
    ctx->pc = 0x29ee5cu;
    // NOP
label_29ee60:
    // 0x29ee60: 0x80a7bea  j           func_29EFA8
    ctx->pc = 0x29EE60u;
    ctx->pc = 0x29EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE60u;
    // 0x29ee64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EFA8u;
    sub_0029EFA8_0x29efa8(rdram, ctx, runtime); return;
    ctx->pc = 0x29EE68u;
label_29ee68:
    // 0x29ee68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29ee6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29ee70: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29ee74: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29EE74u;
    {
        const bool branch_taken_0x29ee74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x29ee74) {
            ctx->pc = 0x29EE88u;
            goto label_29ee88;
        }
    }
    ctx->pc = 0x29EE7Cu;
    // 0x29ee7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ee80: 0x80a7c12  j           func_29F048
    ctx->pc = 0x29EE80u;
    ctx->pc = 0x29EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE80u;
    // 0x29ee84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F048u;
    sub_0029F048_0x29f048(rdram, ctx, runtime); return;
    ctx->pc = 0x29EE88u;
label_29ee88:
    // 0x29ee88: 0x80a7c3a  j           func_29F0E8
    ctx->pc = 0x29EE88u;
    ctx->pc = 0x29EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE88u;
    // 0x29ee8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F0E8u;
    sub_0029F0E8_0x29f0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x29EE90u;
label_29ee90:
    // 0x29ee90: 0x3e00008  jr          $ra
    ctx->pc = 0x29EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE90u;
        // 0x29ee94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE98u;
}
