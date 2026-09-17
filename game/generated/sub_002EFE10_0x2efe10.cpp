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

// Function: sub_002EFE10
// Address: 0x2efe10 - 0x2efe98
void sub_002EFE10_0x2efe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFE10_0x2efe10");
#endif

    switch (ctx->pc) {
        case 0x2efe10u: goto label_2efe10;
        case 0x2efe14u: goto label_2efe14;
        case 0x2efe18u: goto label_2efe18;
        case 0x2efe1cu: goto label_2efe1c;
        case 0x2efe20u: goto label_2efe20;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe28u: goto label_2efe28;
        case 0x2efe2cu: goto label_2efe2c;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe34u: goto label_2efe34;
        case 0x2efe38u: goto label_2efe38;
        case 0x2efe3cu: goto label_2efe3c;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe44u: goto label_2efe44;
        case 0x2efe48u: goto label_2efe48;
        case 0x2efe4cu: goto label_2efe4c;
        case 0x2efe50u: goto label_2efe50;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe58u: goto label_2efe58;
        case 0x2efe5cu: goto label_2efe5c;
        case 0x2efe60u: goto label_2efe60;
        case 0x2efe64u: goto label_2efe64;
        case 0x2efe68u: goto label_2efe68;
        case 0x2efe6cu: goto label_2efe6c;
        case 0x2efe70u: goto label_2efe70;
        case 0x2efe74u: goto label_2efe74;
        case 0x2efe78u: goto label_2efe78;
        case 0x2efe7cu: goto label_2efe7c;
        case 0x2efe80u: goto label_2efe80;
        case 0x2efe84u: goto label_2efe84;
        case 0x2efe88u: goto label_2efe88;
        case 0x2efe8cu: goto label_2efe8c;
        case 0x2efe90u: goto label_2efe90;
        case 0x2efe94u: goto label_2efe94;
        default: break;
    }

    ctx->pc = 0x2efe10u;

label_2efe10:
    // 0x2efe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2efe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2efe14:
    // 0x2efe14: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x2efe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2efe18:
    // 0x2efe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2efe1c:
    // 0x2efe1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2efe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efe20:
    // 0x2efe20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2efe24:
    if (ctx->pc == 0x2EFE24u) {
        ctx->pc = 0x2EFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE20u;
        // 0x2efe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE28u;
        goto label_2efe28;
    }
    ctx->pc = 0x2EFE20u;
    {
        const bool branch_taken_0x2efe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE20u;
        // 0x2efe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe20) {
            ctx->pc = 0x2EFE38u;
            goto label_2efe38;
        }
    }
    ctx->pc = 0x2EFE28u;
label_2efe28:
    // 0x2efe28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2efe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2efe2c:
    // 0x2efe2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efe30:
    // 0x2efe30: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efe34:
    if (ctx->pc == 0x2EFE34u) {
        ctx->pc = 0x2EFE38u;
        goto label_2efe38;
    }
    ctx->pc = 0x2EFE30u;
    {
        const bool branch_taken_0x2efe30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efe30) {
            ctx->pc = 0x2EFE44u;
            goto label_2efe44;
        }
    }
    ctx->pc = 0x2EFE38u;
label_2efe38:
    // 0x2efe38: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efe38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efe3c:
    // 0x2efe3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efe40:
    // 0x2efe40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efe40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efe44:
    // 0x2efe44: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2efe48:
    if (ctx->pc == 0x2EFE48u) {
        ctx->pc = 0x2EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE44u;
        // 0x2efe48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE4Cu;
        goto label_2efe4c;
    }
    ctx->pc = 0x2EFE44u;
    {
        const bool branch_taken_0x2efe44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE44u;
        // 0x2efe48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe44) {
            ctx->pc = 0x2EFE90u;
            goto label_2efe90;
        }
    }
    ctx->pc = 0x2EFE4Cu;
label_2efe4c:
    // 0x2efe4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efe50:
    // 0x2efe50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2efe54:
    if (ctx->pc == 0x2EFE54u) {
        ctx->pc = 0x2EFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE50u;
        // 0x2efe54: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE58u;
        goto label_2efe58;
    }
    ctx->pc = 0x2EFE50u;
    {
        const bool branch_taken_0x2efe50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efe50) {
            ctx->pc = 0x2EFE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFE50u;
            // 0x2efe54: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFE6Cu;
            goto label_2efe6c;
        }
    }
    ctx->pc = 0x2EFE58u;
label_2efe58:
    // 0x2efe58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2efe5c:
    // 0x2efe5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efe60:
    // 0x2efe60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efe64:
    if (ctx->pc == 0x2EFE64u) {
        ctx->pc = 0x2EFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE60u;
        // 0x2efe64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE68u;
        goto label_2efe68;
    }
    ctx->pc = 0x2EFE60u;
    {
        const bool branch_taken_0x2efe60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE60u;
        // 0x2efe64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe60) {
            ctx->pc = 0x2EFE74u;
            goto label_2efe74;
        }
    }
    ctx->pc = 0x2EFE68u;
label_2efe68:
    // 0x2efe68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efe68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efe6c:
    // 0x2efe6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2efe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efe70:
    // 0x2efe70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efe70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efe74:
    // 0x2efe74: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2efe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2efe78:
    // 0x2efe78: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2efe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2efe7c:
    // 0x2efe7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2efe7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2efe80:
    // 0x2efe80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2efe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2efe84:
    // 0x2efe84: 0x60f809  jalr        $v1
label_2efe88:
    if (ctx->pc == 0x2EFE88u) {
        ctx->pc = 0x2EFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE84u;
        // 0x2efe88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE8Cu;
        goto label_2efe8c;
    }
    ctx->pc = 0x2EFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFE8Cu);
        ctx->pc = 0x2EFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE84u;
        // 0x2efe88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFE84u, 0x2EFE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFE8Cu;
label_2efe8c:
    // 0x2efe8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efe90:
    // 0x2efe90: 0x3e00008  jr          $ra
label_2efe94:
    if (ctx->pc == 0x2EFE94u) {
        ctx->pc = 0x2EFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE90u;
        // 0x2efe94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFE98u;
        goto label_fallthrough_0x2efe90;
    }
    ctx->pc = 0x2EFE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE90u;
        // 0x2efe94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efe90:
    ctx->pc = 0x2EFE98u;
}
