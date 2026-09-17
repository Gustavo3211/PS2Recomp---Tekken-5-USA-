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

// Function: sub_00320D70
// Address: 0x320d70 - 0x320de0
void sub_00320D70_0x320d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D70_0x320d70");
#endif

    switch (ctx->pc) {
        case 0x320d70u: goto label_320d70;
        case 0x320d74u: goto label_320d74;
        case 0x320d78u: goto label_320d78;
        case 0x320d7cu: goto label_320d7c;
        case 0x320d80u: goto label_320d80;
        case 0x320d84u: goto label_320d84;
        case 0x320d88u: goto label_320d88;
        case 0x320d8cu: goto label_320d8c;
        case 0x320d90u: goto label_320d90;
        case 0x320d94u: goto label_320d94;
        case 0x320d98u: goto label_320d98;
        case 0x320d9cu: goto label_320d9c;
        case 0x320da0u: goto label_320da0;
        case 0x320da4u: goto label_320da4;
        case 0x320da8u: goto label_320da8;
        case 0x320dacu: goto label_320dac;
        case 0x320db0u: goto label_320db0;
        case 0x320db4u: goto label_320db4;
        case 0x320db8u: goto label_320db8;
        case 0x320dbcu: goto label_320dbc;
        case 0x320dc0u: goto label_320dc0;
        case 0x320dc4u: goto label_320dc4;
        case 0x320dc8u: goto label_320dc8;
        case 0x320dccu: goto label_320dcc;
        case 0x320dd0u: goto label_320dd0;
        case 0x320dd4u: goto label_320dd4;
        case 0x320dd8u: goto label_320dd8;
        case 0x320ddcu: goto label_320ddc;
        default: break;
    }

    ctx->pc = 0x320d70u;

label_320d70:
    // 0x320d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_320d74:
    // 0x320d74: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x320d74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_320d78:
    // 0x320d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_320d7c:
    // 0x320d7c: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x320d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_320d80:
    // 0x320d80: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x320d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_320d84:
    // 0x320d84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320d88:
    // 0x320d88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x320d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320d8c:
    // 0x320d8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x320d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_320d90:
    // 0x320d90: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x320d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_320d94:
    // 0x320d94: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320d98:
    // 0x320d98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320d9c:
    // 0x320d9c: 0x40f809  jalr        $v0
label_320da0:
    if (ctx->pc == 0x320DA0u) {
        ctx->pc = 0x320DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D9Cu;
        // 0x320da0: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DA4u;
        goto label_320da4;
    }
    ctx->pc = 0x320D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320DA4u);
        ctx->pc = 0x320DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D9Cu;
        // 0x320da0: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D9Cu, 0x320DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320DA4u;
label_320da4:
    // 0x320da4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_320da8:
    if (ctx->pc == 0x320DA8u) {
        ctx->pc = 0x320DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DA4u;
        // 0x320da8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DACu;
        goto label_320dac;
    }
    ctx->pc = 0x320DA4u;
    {
        const bool branch_taken_0x320da4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x320DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DA4u;
        // 0x320da8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320da4) {
            ctx->pc = 0x320DB8u;
            goto label_320db8;
        }
    }
    ctx->pc = 0x320DACu;
label_320dac:
    // 0x320dac: 0x10000009  b           . + 4 + (0x9 << 2)
label_320db0:
    if (ctx->pc == 0x320DB0u) {
        ctx->pc = 0x320DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DACu;
        // 0x320db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DB4u;
        goto label_320db4;
    }
    ctx->pc = 0x320DACu;
    {
        const bool branch_taken_0x320dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DACu;
        // 0x320db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320dac) {
            ctx->pc = 0x320DD4u;
            goto label_320dd4;
        }
    }
    ctx->pc = 0x320DB4u;
label_320db4:
    // 0x320db4: 0x0  nop
    ctx->pc = 0x320db4u;
    // NOP
label_320db8:
    // 0x320db8: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x320db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_320dbc:
    // 0x320dbc: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x320dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_320dc0:
    // 0x320dc0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320dc4:
    // 0x320dc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320dc8:
    // 0x320dc8: 0x40f809  jalr        $v0
label_320dcc:
    if (ctx->pc == 0x320DCCu) {
        ctx->pc = 0x320DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC8u;
        // 0x320dcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DD0u;
        goto label_320dd0;
    }
    ctx->pc = 0x320DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320DD0u);
        ctx->pc = 0x320DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC8u;
        // 0x320dcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320DC8u, 0x320DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320DD0u;
label_320dd0:
    // 0x320dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320dd4:
    // 0x320dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_320dd8:
    // 0x320dd8: 0x3e00008  jr          $ra
label_320ddc:
    if (ctx->pc == 0x320DDCu) {
        ctx->pc = 0x320DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DD8u;
        // 0x320ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DE0u;
        goto label_fallthrough_0x320dd8;
    }
    ctx->pc = 0x320DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DD8u;
        // 0x320ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320dd8:
    ctx->pc = 0x320DE0u;
}
