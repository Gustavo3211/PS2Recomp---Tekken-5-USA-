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

// Function: sub_0023FE00
// Address: 0x23fe00 - 0x23fec0
void sub_0023FE00_0x23fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FE00_0x23fe00");
#endif

    switch (ctx->pc) {
        case 0x23fe40u: goto label_23fe40;
        case 0x23fe50u: goto label_23fe50;
        case 0x23fe70u: goto label_23fe70;
        case 0x23fe90u: goto label_23fe90;
        default: break;
    }

    ctx->pc = 0x23fe00u;

    // 0x23fe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fe04: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23fe08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fe0c: 0x24503580  addiu       $s0, $v0, 0x3580
    ctx->pc = 0x23fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
    // 0x23fe10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fe14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x163588u));
    // 0x23fe18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE18u;
    {
        const bool branch_taken_0x23fe18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE18u;
        // 0x23fe1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe18) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE20u;
    // 0x23fe20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE20u;
        // 0x23fe24: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x23FE88u;
            goto label_23fe88;
        }
    }
    ctx->pc = 0x23FE28u;
    // 0x23fe28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fe28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fe2c: 0x808fcaa  j           func_23F2A8
    ctx->pc = 0x23FE2Cu;
    ctx->pc = 0x23FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE2Cu;
    // 0x23fe30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2A8u;
    sub_0023F2A8_0x23f2a8(rdram, ctx, runtime); return;
    ctx->pc = 0x23FE34u;
    // 0x23fe34: 0x0  nop
    ctx->pc = 0x23fe34u;
    // NOP
label_23fe38:
    // 0x23fe38: 0xc09234e  jal         func_248D38
    ctx->pc = 0x23FE38u;
    SET_GPR_U32(ctx, 31, 0x23FE40u);
    ctx->pc = 0x248D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D38u, 0x23FE38u, 0x23FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE40u;
label_23fe40:
    // 0x23fe40: 0x5c40001c  bgtzl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23FE40u;
    {
        const bool branch_taken_0x23fe40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23fe40) {
            ctx->pc = 0x23FE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE40u;
            // 0x23fe44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEB4u;
            goto label_23feb4;
        }
    }
    ctx->pc = 0x23FE48u;
    // 0x23fe48: 0xc08ff7c  jal         func_23FDF0
    ctx->pc = 0x23FE48u;
    SET_GPR_U32(ctx, 31, 0x23FE50u);
    ctx->pc = 0x23FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FDF0u, 0x23FE48u, 0x23FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE50u;
label_23fe50:
    // 0x23fe50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe54: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FE54u;
    {
        const bool branch_taken_0x23fe54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe54) {
            ctx->pc = 0x23FE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE54u;
            // 0x23fe58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEB4u;
            goto label_23feb4;
        }
    }
    ctx->pc = 0x23FE5Cu;
    // 0x23fe5c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x23fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x23fe60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FE60u;
    {
        const bool branch_taken_0x23fe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe60) {
            ctx->pc = 0x23FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE60u;
            // 0x23fe64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE78u;
            goto label_23fe78;
        }
    }
    ctx->pc = 0x23FE68u;
    // 0x23fe68: 0xc08fe92  jal         func_23FA48
    ctx->pc = 0x23FE68u;
    SET_GPR_U32(ctx, 31, 0x23FE70u);
    ctx->pc = 0x23FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE68u;
    // 0x23fe6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FA48u, 0x23FE68u, 0x23FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE70u;
label_23fe70:
    // 0x23fe70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23FE70u;
    {
        const bool branch_taken_0x23fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE70u;
        // 0x23fe74: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe70) {
            ctx->pc = 0x23FEB0u;
            goto label_23feb0;
        }
    }
    ctx->pc = 0x23FE78u;
label_23fe78:
    // 0x23fe78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fe7c: 0x808fe6c  j           func_23F9B0
    ctx->pc = 0x23FE7Cu;
    ctx->pc = 0x23FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE7Cu;
    // 0x23fe80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F9B0u;
    sub_0023F9B0_0x23f9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FE84u;
    // 0x23fe84: 0x0  nop
    ctx->pc = 0x23fe84u;
    // NOP
label_23fe88:
    // 0x23fe88: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x23FE88u;
    SET_GPR_U32(ctx, 31, 0x23FE90u);
    ctx->pc = 0x23FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE88u;
    // 0x23fe8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x23FE88u, 0x23FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE90u;
label_23fe90:
    // 0x23fe90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23fe94: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE94u;
    {
        const bool branch_taken_0x23fe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE94u;
        // 0x23fe98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe94) {
            ctx->pc = 0x23FEB4u;
            goto label_23feb4;
        }
    }
    ctx->pc = 0x23FE9Cu;
    // 0x23fe9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fea4: 0x808fe92  j           func_23FA48
    ctx->pc = 0x23FEA4u;
    ctx->pc = 0x23FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEA4u;
    // 0x23fea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FA48u;
    sub_0023FA48_0x23fa48(rdram, ctx, runtime); return;
    ctx->pc = 0x23FEACu;
    // 0x23feac: 0x0  nop
    ctx->pc = 0x23feacu;
    // NOP
label_23feb0:
    // 0x23feb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23feb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23feb4:
    // 0x23feb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23feb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23feb8: 0x3e00008  jr          $ra
    ctx->pc = 0x23FEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB8u;
        // 0x23febc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FEC0u;
}
