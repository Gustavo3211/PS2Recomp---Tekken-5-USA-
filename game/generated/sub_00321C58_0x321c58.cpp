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

// Function: sub_00321C58
// Address: 0x321c58 - 0x321ce0
void sub_00321C58_0x321c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321C58_0x321c58");
#endif

    switch (ctx->pc) {
        case 0x321c58u: goto label_321c58;
        case 0x321c5cu: goto label_321c5c;
        case 0x321c60u: goto label_321c60;
        case 0x321c64u: goto label_321c64;
        case 0x321c68u: goto label_321c68;
        case 0x321c6cu: goto label_321c6c;
        case 0x321c70u: goto label_321c70;
        case 0x321c74u: goto label_321c74;
        case 0x321c78u: goto label_321c78;
        case 0x321c7cu: goto label_321c7c;
        case 0x321c80u: goto label_321c80;
        case 0x321c84u: goto label_321c84;
        case 0x321c88u: goto label_321c88;
        case 0x321c8cu: goto label_321c8c;
        case 0x321c90u: goto label_321c90;
        case 0x321c94u: goto label_321c94;
        case 0x321c98u: goto label_321c98;
        case 0x321c9cu: goto label_321c9c;
        case 0x321ca0u: goto label_321ca0;
        case 0x321ca4u: goto label_321ca4;
        case 0x321ca8u: goto label_321ca8;
        case 0x321cacu: goto label_321cac;
        case 0x321cb0u: goto label_321cb0;
        case 0x321cb4u: goto label_321cb4;
        case 0x321cb8u: goto label_321cb8;
        case 0x321cbcu: goto label_321cbc;
        case 0x321cc0u: goto label_321cc0;
        case 0x321cc4u: goto label_321cc4;
        case 0x321cc8u: goto label_321cc8;
        case 0x321cccu: goto label_321ccc;
        case 0x321cd0u: goto label_321cd0;
        case 0x321cd4u: goto label_321cd4;
        case 0x321cd8u: goto label_321cd8;
        case 0x321cdcu: goto label_321cdc;
        default: break;
    }

    ctx->pc = 0x321c58u;

label_321c58:
    // 0x321c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321c5c:
    // 0x321c5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x321c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321c60:
    // 0x321c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321c64:
    // 0x321c64: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x321c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321c68:
    // 0x321c68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x321c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321c6c:
    // 0x321c6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_321c70:
    // 0x321c70: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x321c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_321c74:
    // 0x321c74: 0x846b0000  lh          $t3, 0x0($v1)
    ctx->pc = 0x321c74u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321c78:
    // 0x321c78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321c7c:
    // 0x321c7c: 0x40f809  jalr        $v0
label_321c80:
    if (ctx->pc == 0x321C80u) {
        ctx->pc = 0x321C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C7Cu;
        // 0x321c80: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C84u;
        goto label_321c84;
    }
    ctx->pc = 0x321C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321C84u);
        ctx->pc = 0x321C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C7Cu;
        // 0x321c80: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C7Cu, 0x321C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321C84u;
label_321c84:
    // 0x321c84: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_321c88:
    if (ctx->pc == 0x321C88u) {
        ctx->pc = 0x321C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C84u;
        // 0x321c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C8Cu;
        goto label_321c8c;
    }
    ctx->pc = 0x321C84u;
    {
        const bool branch_taken_0x321c84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x321C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C84u;
        // 0x321c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c84) {
            ctx->pc = 0x321CCCu;
            goto label_321ccc;
        }
    }
    ctx->pc = 0x321C8Cu;
label_321c8c:
    // 0x321c8c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321c90:
    // 0x321c90: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x321c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_321c94:
    // 0x321c94: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x321c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_321c98:
    // 0x321c98: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321c9c:
    // 0x321c9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321ca0:
    // 0x321ca0: 0x40f809  jalr        $v0
label_321ca4:
    if (ctx->pc == 0x321CA4u) {
        ctx->pc = 0x321CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CA0u;
        // 0x321ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CA8u;
        goto label_321ca8;
    }
    ctx->pc = 0x321CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321CA8u);
        ctx->pc = 0x321CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CA0u;
        // 0x321ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321CA0u, 0x321CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321CA8u;
label_321ca8:
    // 0x321ca8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_321cac:
    if (ctx->pc == 0x321CACu) {
        ctx->pc = 0x321CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CA8u;
        // 0x321cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CB0u;
        goto label_321cb0;
    }
    ctx->pc = 0x321CA8u;
    {
        const bool branch_taken_0x321ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CA8u;
        // 0x321cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ca8) {
            ctx->pc = 0x321CD0u;
            goto label_321cd0;
        }
    }
    ctx->pc = 0x321CB0u;
label_321cb0:
    // 0x321cb0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x321cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321cb4:
    // 0x321cb4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x321cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_321cb8:
    // 0x321cb8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x321cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_321cbc:
    // 0x321cbc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321cc0:
    // 0x321cc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321cc4:
    // 0x321cc4: 0x40f809  jalr        $v0
label_321cc8:
    if (ctx->pc == 0x321CC8u) {
        ctx->pc = 0x321CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CC4u;
        // 0x321cc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CCCu;
        goto label_321ccc;
    }
    ctx->pc = 0x321CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321CCCu);
        ctx->pc = 0x321CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CC4u;
        // 0x321cc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321CC4u, 0x321CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321CCCu;
label_321ccc:
    // 0x321ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321cd0:
    // 0x321cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321cd4:
    // 0x321cd4: 0x3e00008  jr          $ra
label_321cd8:
    if (ctx->pc == 0x321CD8u) {
        ctx->pc = 0x321CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CD4u;
        // 0x321cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CDCu;
        goto label_321cdc;
    }
    ctx->pc = 0x321CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CD4u;
        // 0x321cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321CDCu;
label_321cdc:
    // 0x321cdc: 0x0  nop
    ctx->pc = 0x321cdcu;
    // NOP
    ctx->pc = 0x321ce0u;
}
