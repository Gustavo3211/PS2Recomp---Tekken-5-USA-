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

// Function: sub_0031CC70
// Address: 0x31cc70 - 0x31cd00
void sub_0031CC70_0x31cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CC70_0x31cc70");
#endif

    switch (ctx->pc) {
        case 0x31cc70u: goto label_31cc70;
        case 0x31cc74u: goto label_31cc74;
        case 0x31cc78u: goto label_31cc78;
        case 0x31cc7cu: goto label_31cc7c;
        case 0x31cc80u: goto label_31cc80;
        case 0x31cc84u: goto label_31cc84;
        case 0x31cc88u: goto label_31cc88;
        case 0x31cc8cu: goto label_31cc8c;
        case 0x31cc90u: goto label_31cc90;
        case 0x31cc94u: goto label_31cc94;
        case 0x31cc98u: goto label_31cc98;
        case 0x31cc9cu: goto label_31cc9c;
        case 0x31cca0u: goto label_31cca0;
        case 0x31cca4u: goto label_31cca4;
        case 0x31cca8u: goto label_31cca8;
        case 0x31ccacu: goto label_31ccac;
        case 0x31ccb0u: goto label_31ccb0;
        case 0x31ccb4u: goto label_31ccb4;
        case 0x31ccb8u: goto label_31ccb8;
        case 0x31ccbcu: goto label_31ccbc;
        case 0x31ccc0u: goto label_31ccc0;
        case 0x31ccc4u: goto label_31ccc4;
        case 0x31ccc8u: goto label_31ccc8;
        case 0x31ccccu: goto label_31cccc;
        case 0x31ccd0u: goto label_31ccd0;
        case 0x31ccd4u: goto label_31ccd4;
        case 0x31ccd8u: goto label_31ccd8;
        case 0x31ccdcu: goto label_31ccdc;
        case 0x31cce0u: goto label_31cce0;
        case 0x31cce4u: goto label_31cce4;
        case 0x31cce8u: goto label_31cce8;
        case 0x31ccecu: goto label_31ccec;
        case 0x31ccf0u: goto label_31ccf0;
        case 0x31ccf4u: goto label_31ccf4;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31ccfcu: goto label_31ccfc;
        default: break;
    }

    ctx->pc = 0x31cc70u;

label_31cc70:
    // 0x31cc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31cc74:
    // 0x31cc74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31cc78:
    // 0x31cc78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_31cc7c:
    // 0x31cc7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31cc80:
    // 0x31cc80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31cc84:
    // 0x31cc84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31cc88:
    // 0x31cc88: 0xc0c8864  jal         func_322190
label_31cc8c:
    if (ctx->pc == 0x31CC8Cu) {
        ctx->pc = 0x31CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC88u;
        // 0x31cc8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CC90u;
        goto label_31cc90;
    }
    ctx->pc = 0x31CC88u;
    SET_GPR_U32(ctx, 31, 0x31CC90u);
    ctx->pc = 0x31CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC88u;
    // 0x31cc8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x31CC88u, 0x31CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC90u;
label_31cc90:
    // 0x31cc90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31cc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cc94:
    // 0x31cc94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31cc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31cc98:
    // 0x31cc98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31cc9c:
    // 0x31cc9c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x31cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31cca0:
    // 0x31cca0: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31cca4:
    // 0x31cca4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31cca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31cca8:
    // 0x31cca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31ccac:
    // 0x31ccac: 0x40f809  jalr        $v0
label_31ccb0:
    if (ctx->pc == 0x31CCB0u) {
        ctx->pc = 0x31CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCACu;
        // 0x31ccb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCB4u;
        goto label_31ccb4;
    }
    ctx->pc = 0x31CCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CCB4u);
        ctx->pc = 0x31CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCACu;
        // 0x31ccb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCACu, 0x31CCB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CCB4u;
label_31ccb4:
    // 0x31ccb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31ccb8:
    // 0x31ccb8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x31ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_31ccbc:
    // 0x31ccbc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_31ccc0:
    // 0x31ccc0: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31ccc4:
    // 0x31ccc4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31ccc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31ccc8:
    // 0x31ccc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31cccc:
    // 0x31cccc: 0x40f809  jalr        $v0
label_31ccd0:
    if (ctx->pc == 0x31CCD0u) {
        ctx->pc = 0x31CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCCCu;
        // 0x31ccd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCD4u;
        goto label_31ccd4;
    }
    ctx->pc = 0x31CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CCD4u);
        ctx->pc = 0x31CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCCCu;
        // 0x31ccd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCCCu, 0x31CCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CCD4u;
label_31ccd4:
    // 0x31ccd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ccd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ccd8:
    // 0x31ccd8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31ccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31ccdc:
    // 0x31ccdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ccdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31cce0:
    // 0x31cce0: 0xc0c7340  jal         func_31CD00
label_31cce4:
    if (ctx->pc == 0x31CCE4u) {
        ctx->pc = 0x31CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCE0u;
        // 0x31cce4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCE8u;
        goto label_31cce8;
    }
    ctx->pc = 0x31CCE0u;
    SET_GPR_U32(ctx, 31, 0x31CCE8u);
    ctx->pc = 0x31CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCE0u;
    // 0x31cce4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CD00u, 0x31CCE0u, 0x31CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCE8u;
label_31cce8:
    // 0x31cce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31cce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ccec:
    // 0x31ccec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31ccecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31ccf0:
    // 0x31ccf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31ccf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31ccf4:
    // 0x31ccf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31ccf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31ccf8:
    // 0x31ccf8: 0x3e00008  jr          $ra
label_31ccfc:
    if (ctx->pc == 0x31CCFCu) {
        ctx->pc = 0x31CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCF8u;
        // 0x31ccfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD00u;
        goto label_fallthrough_0x31ccf8;
    }
    ctx->pc = 0x31CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCF8u;
        // 0x31ccfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31ccf8:
    ctx->pc = 0x31CD00u;
}
