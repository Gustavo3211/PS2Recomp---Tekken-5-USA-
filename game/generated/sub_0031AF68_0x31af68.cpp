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

// Function: sub_0031AF68
// Address: 0x31af68 - 0x31b058
void sub_0031AF68_0x31af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AF68_0x31af68");
#endif

    switch (ctx->pc) {
        case 0x31af68u: goto label_31af68;
        case 0x31af6cu: goto label_31af6c;
        case 0x31af70u: goto label_31af70;
        case 0x31af74u: goto label_31af74;
        case 0x31af78u: goto label_31af78;
        case 0x31af7cu: goto label_31af7c;
        case 0x31af80u: goto label_31af80;
        case 0x31af84u: goto label_31af84;
        case 0x31af88u: goto label_31af88;
        case 0x31af8cu: goto label_31af8c;
        case 0x31af90u: goto label_31af90;
        case 0x31af94u: goto label_31af94;
        case 0x31af98u: goto label_31af98;
        case 0x31af9cu: goto label_31af9c;
        case 0x31afa0u: goto label_31afa0;
        case 0x31afa4u: goto label_31afa4;
        case 0x31afa8u: goto label_31afa8;
        case 0x31afacu: goto label_31afac;
        case 0x31afb0u: goto label_31afb0;
        case 0x31afb4u: goto label_31afb4;
        case 0x31afb8u: goto label_31afb8;
        case 0x31afbcu: goto label_31afbc;
        case 0x31afc0u: goto label_31afc0;
        case 0x31afc4u: goto label_31afc4;
        case 0x31afc8u: goto label_31afc8;
        case 0x31afccu: goto label_31afcc;
        case 0x31afd0u: goto label_31afd0;
        case 0x31afd4u: goto label_31afd4;
        case 0x31afd8u: goto label_31afd8;
        case 0x31afdcu: goto label_31afdc;
        case 0x31afe0u: goto label_31afe0;
        case 0x31afe4u: goto label_31afe4;
        case 0x31afe8u: goto label_31afe8;
        case 0x31afecu: goto label_31afec;
        case 0x31aff0u: goto label_31aff0;
        case 0x31aff4u: goto label_31aff4;
        case 0x31aff8u: goto label_31aff8;
        case 0x31affcu: goto label_31affc;
        case 0x31b000u: goto label_31b000;
        case 0x31b004u: goto label_31b004;
        case 0x31b008u: goto label_31b008;
        case 0x31b00cu: goto label_31b00c;
        case 0x31b010u: goto label_31b010;
        case 0x31b014u: goto label_31b014;
        case 0x31b018u: goto label_31b018;
        case 0x31b01cu: goto label_31b01c;
        case 0x31b020u: goto label_31b020;
        case 0x31b024u: goto label_31b024;
        case 0x31b028u: goto label_31b028;
        case 0x31b02cu: goto label_31b02c;
        case 0x31b030u: goto label_31b030;
        case 0x31b034u: goto label_31b034;
        case 0x31b038u: goto label_31b038;
        case 0x31b03cu: goto label_31b03c;
        case 0x31b040u: goto label_31b040;
        case 0x31b044u: goto label_31b044;
        case 0x31b048u: goto label_31b048;
        case 0x31b04cu: goto label_31b04c;
        case 0x31b050u: goto label_31b050;
        case 0x31b054u: goto label_31b054;
        default: break;
    }

    ctx->pc = 0x31af68u;

label_31af68:
    // 0x31af68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31af6c:
    // 0x31af6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_31af70:
    // 0x31af70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31af70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31af74:
    // 0x31af74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31af78:
    // 0x31af78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31af7c:
    // 0x31af7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31af80:
    // 0x31af80: 0xc04098c  jal         func_102630
label_31af84:
    if (ctx->pc == 0x31AF84u) {
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF88u;
        goto label_31af88;
    }
    ctx->pc = 0x31AF80u;
    SET_GPR_U32(ctx, 31, 0x31AF88u);
    ctx->pc = 0x31AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF80u;
    // 0x31af84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x31AF80u, 0x31AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF88u;
label_31af88:
    // 0x31af88: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x31af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_31af8c:
    // 0x31af8c: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_31af90:
    // 0x31af90: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31af90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31af94:
    // 0x31af94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31af98:
    // 0x31af98: 0x40f809  jalr        $v0
label_31af9c:
    if (ctx->pc == 0x31AF9Cu) {
        ctx->pc = 0x31AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF98u;
        // 0x31af9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFA0u;
        goto label_31afa0;
    }
    ctx->pc = 0x31AF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AFA0u);
        ctx->pc = 0x31AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF98u;
        // 0x31af9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF98u, 0x31AFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AFA0u;
label_31afa0:
    // 0x31afa0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x31afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_31afa4:
    // 0x31afa4: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x31afa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_31afa8:
    // 0x31afa8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x31afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_31afac:
    // 0x31afac: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x31afacu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
label_31afb0:
    // 0x31afb0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31afb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31afb4:
    // 0x31afb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31afb8:
    // 0x31afb8: 0x40f809  jalr        $v0
label_31afbc:
    if (ctx->pc == 0x31AFBCu) {
        ctx->pc = 0x31AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFB8u;
        // 0x31afbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFC0u;
        goto label_31afc0;
    }
    ctx->pc = 0x31AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AFC0u);
        ctx->pc = 0x31AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFB8u;
        // 0x31afbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFB8u, 0x31AFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AFC0u;
label_31afc0:
    // 0x31afc0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_31afc4:
    // 0x31afc4: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x31afc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_31afc8:
    // 0x31afc8: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x31afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31afcc:
    // 0x31afcc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x31afccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_31afd0:
    // 0x31afd0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31afd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31afd4:
    // 0x31afd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31afd8:
    // 0x31afd8: 0x40f809  jalr        $v0
label_31afdc:
    if (ctx->pc == 0x31AFDCu) {
        ctx->pc = 0x31AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD8u;
        // 0x31afdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFE0u;
        goto label_31afe0;
    }
    ctx->pc = 0x31AFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AFE0u);
        ctx->pc = 0x31AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD8u;
        // 0x31afdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFD8u, 0x31AFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AFE0u;
label_31afe0:
    // 0x31afe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31afe4:
    // 0x31afe4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x31afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_31afe8:
    // 0x31afe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31afe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31afec:
    // 0x31afec: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x31afecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_31aff0:
    // 0x31aff0: 0xc04081c  jal         func_102070
label_31aff4:
    if (ctx->pc == 0x31AFF4u) {
        ctx->pc = 0x31AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFF0u;
        // 0x31aff4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFF8u;
        goto label_31aff8;
    }
    ctx->pc = 0x31AFF0u;
    SET_GPR_U32(ctx, 31, 0x31AFF8u);
    ctx->pc = 0x31AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFF0u;
    // 0x31aff4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102070u, 0x31AFF0u, 0x31AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFF8u;
label_31aff8:
    // 0x31aff8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_31affc:
    // 0x31affc: 0x34423010  ori         $v0, $v0, 0x3010
    ctx->pc = 0x31affcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
label_31b000:
    // 0x31b000: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31b004:
    // 0x31b004: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x31b004u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10003010
label_31b008:
    // 0x31b008: 0xc0cd558  jal         func_335560
label_31b00c:
    if (ctx->pc == 0x31B00Cu) {
        ctx->pc = 0x31B010u;
        goto label_31b010;
    }
    ctx->pc = 0x31B008u;
    SET_GPR_U32(ctx, 31, 0x31B010u);
    ctx->pc = 0x335560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335560u, 0x31B008u, 0x31B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B010u;
label_31b010:
    // 0x31b010: 0xc0cd7fc  jal         func_335FF0
label_31b014:
    if (ctx->pc == 0x31B014u) {
        ctx->pc = 0x31B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B010u;
        // 0x31b014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B018u;
        goto label_31b018;
    }
    ctx->pc = 0x31B010u;
    SET_GPR_U32(ctx, 31, 0x31B018u);
    ctx->pc = 0x31B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B010u;
    // 0x31b014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335FF0u, 0x31B010u, 0x31B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B018u;
label_31b018:
    // 0x31b018: 0xc0c6ce6  jal         func_31B398
label_31b01c:
    if (ctx->pc == 0x31B01Cu) {
        ctx->pc = 0x31B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B018u;
        // 0x31b01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B020u;
        goto label_31b020;
    }
    ctx->pc = 0x31B018u;
    SET_GPR_U32(ctx, 31, 0x31B020u);
    ctx->pc = 0x31B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B018u;
    // 0x31b01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B398u, 0x31B018u, 0x31B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B020u;
label_31b020:
    // 0x31b020: 0xc0c6c5a  jal         func_31B168
label_31b024:
    if (ctx->pc == 0x31B024u) {
        ctx->pc = 0x31B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B020u;
        // 0x31b024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B028u;
        goto label_31b028;
    }
    ctx->pc = 0x31B020u;
    SET_GPR_U32(ctx, 31, 0x31B028u);
    ctx->pc = 0x31B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B020u;
    // 0x31b024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B168u, 0x31B020u, 0x31B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B028u;
label_31b028:
    // 0x31b028: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x31b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_31b02c:
    // 0x31b02c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_31b030:
    // 0x31b030: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31b034:
    // 0x31b034: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31b038:
    // 0x31b038: 0x60f809  jalr        $v1
label_31b03c:
    if (ctx->pc == 0x31B03Cu) {
        ctx->pc = 0x31B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B038u;
        // 0x31b03c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B040u;
        goto label_31b040;
    }
    ctx->pc = 0x31B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31B040u);
        ctx->pc = 0x31B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B038u;
        // 0x31b03c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B038u, 0x31B040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B040u;
label_31b040:
    // 0x31b040: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b044:
    // 0x31b044: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31b044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31b048:
    // 0x31b048: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31b048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31b04c:
    // 0x31b04c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31b050:
    // 0x31b050: 0x3e00008  jr          $ra
label_31b054:
    if (ctx->pc == 0x31B054u) {
        ctx->pc = 0x31B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B050u;
        // 0x31b054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B058u;
        goto label_fallthrough_0x31b050;
    }
    ctx->pc = 0x31B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B050u;
        // 0x31b054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31b050:
    ctx->pc = 0x31B058u;
}
