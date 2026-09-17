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

// Function: sub_00321CE0
// Address: 0x321ce0 - 0x321d88
void sub_00321CE0_0x321ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321CE0_0x321ce0");
#endif

    switch (ctx->pc) {
        case 0x321ce0u: goto label_321ce0;
        case 0x321ce4u: goto label_321ce4;
        case 0x321ce8u: goto label_321ce8;
        case 0x321cecu: goto label_321cec;
        case 0x321cf0u: goto label_321cf0;
        case 0x321cf4u: goto label_321cf4;
        case 0x321cf8u: goto label_321cf8;
        case 0x321cfcu: goto label_321cfc;
        case 0x321d00u: goto label_321d00;
        case 0x321d04u: goto label_321d04;
        case 0x321d08u: goto label_321d08;
        case 0x321d0cu: goto label_321d0c;
        case 0x321d10u: goto label_321d10;
        case 0x321d14u: goto label_321d14;
        case 0x321d18u: goto label_321d18;
        case 0x321d1cu: goto label_321d1c;
        case 0x321d20u: goto label_321d20;
        case 0x321d24u: goto label_321d24;
        case 0x321d28u: goto label_321d28;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d30u: goto label_321d30;
        case 0x321d34u: goto label_321d34;
        case 0x321d38u: goto label_321d38;
        case 0x321d3cu: goto label_321d3c;
        case 0x321d40u: goto label_321d40;
        case 0x321d44u: goto label_321d44;
        case 0x321d48u: goto label_321d48;
        case 0x321d4cu: goto label_321d4c;
        case 0x321d50u: goto label_321d50;
        case 0x321d54u: goto label_321d54;
        case 0x321d58u: goto label_321d58;
        case 0x321d5cu: goto label_321d5c;
        case 0x321d60u: goto label_321d60;
        case 0x321d64u: goto label_321d64;
        case 0x321d68u: goto label_321d68;
        case 0x321d6cu: goto label_321d6c;
        case 0x321d70u: goto label_321d70;
        case 0x321d74u: goto label_321d74;
        case 0x321d78u: goto label_321d78;
        case 0x321d7cu: goto label_321d7c;
        case 0x321d80u: goto label_321d80;
        case 0x321d84u: goto label_321d84;
        default: break;
    }

    ctx->pc = 0x321ce0u;

label_321ce0:
    // 0x321ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321ce4:
    // 0x321ce4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x321ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321ce8:
    // 0x321ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321cec:
    // 0x321cec: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x321cecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321cf0:
    // 0x321cf0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x321cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321cf4:
    // 0x321cf4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_321cf8:
    // 0x321cf8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x321cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_321cfc:
    // 0x321cfc: 0x846b0000  lh          $t3, 0x0($v1)
    ctx->pc = 0x321cfcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321d00:
    // 0x321d00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321d04:
    // 0x321d04: 0x40f809  jalr        $v0
label_321d08:
    if (ctx->pc == 0x321D08u) {
        ctx->pc = 0x321D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D04u;
        // 0x321d08: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D0Cu;
        goto label_321d0c;
    }
    ctx->pc = 0x321D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321D0Cu);
        ctx->pc = 0x321D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D04u;
        // 0x321d08: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D04u, 0x321D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321D0Cu;
label_321d0c:
    // 0x321d0c: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
label_321d10:
    if (ctx->pc == 0x321D10u) {
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D14u;
        goto label_321d14;
    }
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D74u;
            goto label_321d74;
        }
    }
    ctx->pc = 0x321D14u;
label_321d14:
    // 0x321d14: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321d18:
    // 0x321d18: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x321d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_321d1c:
    // 0x321d1c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x321d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_321d20:
    // 0x321d20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x321d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_321d24:
    // 0x321d24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x321d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_321d28:
    // 0x321d28: 0x60f809  jalr        $v1
label_321d2c:
    if (ctx->pc == 0x321D2Cu) {
        ctx->pc = 0x321D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D28u;
        // 0x321d2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D30u;
        goto label_321d30;
    }
    ctx->pc = 0x321D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x321D30u);
        ctx->pc = 0x321D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D28u;
        // 0x321d2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D28u, 0x321D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321D30u;
label_321d30:
    // 0x321d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d34:
    // 0x321d34: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321d38:
    // 0x321d38: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x321d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_321d3c:
    // 0x321d3c: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x321d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_321d40:
    // 0x321d40: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321d44:
    // 0x321d44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321d48:
    // 0x321d48: 0x40f809  jalr        $v0
label_321d4c:
    if (ctx->pc == 0x321D4Cu) {
        ctx->pc = 0x321D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D48u;
        // 0x321d4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D50u;
        goto label_321d50;
    }
    ctx->pc = 0x321D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321D50u);
        ctx->pc = 0x321D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D48u;
        // 0x321d4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D48u, 0x321D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321D50u;
label_321d50:
    // 0x321d50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_321d54:
    if (ctx->pc == 0x321D54u) {
        ctx->pc = 0x321D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D50u;
        // 0x321d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D58u;
        goto label_321d58;
    }
    ctx->pc = 0x321D50u;
    {
        const bool branch_taken_0x321d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D50u;
        // 0x321d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d50) {
            ctx->pc = 0x321D78u;
            goto label_321d78;
        }
    }
    ctx->pc = 0x321D58u;
label_321d58:
    // 0x321d58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x321d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321d5c:
    // 0x321d5c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x321d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_321d60:
    // 0x321d60: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x321d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_321d64:
    // 0x321d64: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321d68:
    // 0x321d68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321d6c:
    // 0x321d6c: 0x40f809  jalr        $v0
label_321d70:
    if (ctx->pc == 0x321D70u) {
        ctx->pc = 0x321D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D6Cu;
        // 0x321d70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D74u;
        goto label_321d74;
    }
    ctx->pc = 0x321D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321D74u);
        ctx->pc = 0x321D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D6Cu;
        // 0x321d70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D6Cu, 0x321D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321D74u;
label_321d74:
    // 0x321d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d78:
    // 0x321d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321d7c:
    // 0x321d7c: 0x3e00008  jr          $ra
label_321d80:
    if (ctx->pc == 0x321D80u) {
        ctx->pc = 0x321D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D7Cu;
        // 0x321d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D84u;
        goto label_321d84;
    }
    ctx->pc = 0x321D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D7Cu;
        // 0x321d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D84u;
label_321d84:
    // 0x321d84: 0x0  nop
    ctx->pc = 0x321d84u;
    // NOP
    ctx->pc = 0x321d88u;
}
