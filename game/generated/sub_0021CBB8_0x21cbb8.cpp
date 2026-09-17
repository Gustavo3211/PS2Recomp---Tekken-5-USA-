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

// Function: sub_0021CBB8
// Address: 0x21cbb8 - 0x21ce70
void sub_0021CBB8_0x21cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CBB8_0x21cbb8");
#endif

    switch (ctx->pc) {
        case 0x21cbe8u: goto label_21cbe8;
        case 0x21cbf0u: goto label_21cbf0;
        case 0x21cbfcu: goto label_21cbfc;
        case 0x21cc04u: goto label_21cc04;
        case 0x21cc50u: goto label_21cc50;
        case 0x21cce0u: goto label_21cce0;
        case 0x21cd3cu: goto label_21cd3c;
        case 0x21cd50u: goto label_21cd50;
        case 0x21cd88u: goto label_21cd88;
        case 0x21cdb8u: goto label_21cdb8;
        case 0x21ce14u: goto label_21ce14;
        case 0x21ce3cu: goto label_21ce3c;
        case 0x21ce48u: goto label_21ce48;
        default: break;
    }

    ctx->pc = 0x21cbb8u;

    // 0x21cbb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21cbbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21cbc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21cbc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21cbcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21cbd0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21cbd4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21cbd8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21cbdc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21cbe0: 0xc086644  jal         func_219910
    ctx->pc = 0x21CBE0u;
    SET_GPR_U32(ctx, 31, 0x21CBE8u);
    ctx->pc = 0x21CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBE0u;
    // 0x21cbe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21CBE0u, 0x21CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBE8u;
label_21cbe8:
    // 0x21cbe8: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21CBE8u;
    SET_GPR_U32(ctx, 31, 0x21CBF0u);
    ctx->pc = 0x21CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBE8u;
    // 0x21cbec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21CBE8u, 0x21CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBF0u;
label_21cbf0:
    // 0x21cbf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cbf4: 0xc086644  jal         func_219910
    ctx->pc = 0x21CBF4u;
    SET_GPR_U32(ctx, 31, 0x21CBFCu);
    ctx->pc = 0x21CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBF4u;
    // 0x21cbf8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21CBF4u, 0x21CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBFCu;
label_21cbfc:
    // 0x21cbfc: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21CBFCu;
    SET_GPR_U32(ctx, 31, 0x21CC04u);
    ctx->pc = 0x21CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBFCu;
    // 0x21cc00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21CBFCu, 0x21CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC04u;
label_21cc04:
    // 0x21cc04: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x21cc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21cc08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21cc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc0c: 0x920200fc  lbu         $v0, 0xFC($s0)
    ctx->pc = 0x21cc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x21cc10: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x21cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x21cc14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21cc18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21cc1c: 0xa44300dc  sh          $v1, 0xDC($v0)
    ctx->pc = 0x21cc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 220), (uint16_t)GPR_U32(ctx, 3));
    // 0x21cc20: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x21cc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21cc24: 0x5060004b  beql        $v1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x21CC24u;
    {
        const bool branch_taken_0x21cc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc24) {
            ctx->pc = 0x21CC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC24u;
            // 0x21cc28: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CC2Cu;
    // 0x21cc2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x21cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21cc30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CC30u;
    {
        const bool branch_taken_0x21cc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC30u;
        // 0x21cc34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc30) {
            ctx->pc = 0x21CC48u;
            goto label_21cc48;
        }
    }
    ctx->pc = 0x21CC38u;
    // 0x21cc38: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21CC38u;
    {
        const bool branch_taken_0x21cc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21cc38) {
            ctx->pc = 0x21CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC38u;
            // 0x21cc3c: 0x92020106  lbu         $v0, 0x106($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 262)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CCE8u;
            goto label_21cce8;
        }
    }
    ctx->pc = 0x21CC40u;
    // 0x21cc40: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x21CC40u;
    {
        const bool branch_taken_0x21cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC40u;
        // 0x21cc44: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc40) {
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CC48u;
label_21cc48:
    // 0x21cc48: 0xc0850f0  jal         func_2143C0
    ctx->pc = 0x21CC48u;
    SET_GPR_U32(ctx, 31, 0x21CC50u);
    ctx->pc = 0x21CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC48u;
    // 0x21cc4c: 0x92040031  lbu         $a0, 0x31($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143C0u, 0x21CC48u, 0x21CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC50u;
label_21cc50:
    // 0x21cc50: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x21cc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21cc54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21cc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cc60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21cc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cc68: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21cc6c: 0x26430106  addiu       $v1, $s2, 0x106
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 262));
    // 0x21cc70: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21cc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cc74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21cc78: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21cc7c: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x21cc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x21cc80: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CC80u;
    {
        const bool branch_taken_0x21cc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC80u;
        // 0x21cc84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc80) {
            ctx->pc = 0x21CCA8u;
            goto label_21cca8;
        }
    }
    ctx->pc = 0x21CC88u;
    // 0x21cc88: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x21CC88u;
    {
        const bool branch_taken_0x21cc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cc88) {
            ctx->pc = 0x21CC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC88u;
            // 0x21cc8c: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CC90u;
    // 0x21cc90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cc94: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21CC94u;
    {
        const bool branch_taken_0x21cc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21cc94) {
            ctx->pc = 0x21CC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC94u;
            // 0x21cc98: 0x92020031  lbu         $v0, 0x31($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CCC0u;
            goto label_21ccc0;
        }
    }
    ctx->pc = 0x21CC9Cu;
    // 0x21cc9c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21CC9Cu;
    {
        const bool branch_taken_0x21cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC9Cu;
        // 0x21cca0: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc9c) {
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CCA4u;
    // 0x21cca4: 0x0  nop
    ctx->pc = 0x21cca4u;
    // NOP
label_21cca8:
    // 0x21cca8: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x21cca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21ccac: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x21ccacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21ccb0: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21CCB0u;
    {
        const bool branch_taken_0x21ccb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ccb0) {
            ctx->pc = 0x21CCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CCB0u;
            // 0x21ccb4: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CCB8u;
    // 0x21ccb8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21CCB8u;
    {
        const bool branch_taken_0x21ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCB8u;
        // 0x21ccbc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccb8) {
            ctx->pc = 0x21CD30u;
            goto label_21cd30;
        }
    }
    ctx->pc = 0x21CCC0u;
label_21ccc0:
    // 0x21ccc0: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x21ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21ccc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ccc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cccc: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21ccd0: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21ccd4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21ccd8: 0xc08764c  jal         func_21D930
    ctx->pc = 0x21CCD8u;
    SET_GPR_U32(ctx, 31, 0x21CCE0u);
    ctx->pc = 0x21CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCD8u;
    // 0x21ccdc: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21CCD8u, 0x21CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCE0u;
label_21cce0:
    // 0x21cce0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21CCE0u;
    {
        const bool branch_taken_0x21cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE0u;
        // 0x21cce4: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cce0) {
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CCE8u;
label_21cce8:
    // 0x21cce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ccec: 0x92030113  lbu         $v1, 0x113($s0)
    ctx->pc = 0x21ccecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 275)));
    // 0x21ccf0: 0x9206002b  lbu         $a2, 0x2B($s0)
    ctx->pc = 0x21ccf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x21ccf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ccf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ccfc: 0xa2020106  sb          $v0, 0x106($s0)
    ctx->pc = 0x21ccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 262), (uint8_t)GPR_U32(ctx, 2));
    // 0x21cd00: 0x10c40009  beq         $a2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CD00u;
    {
        const bool branch_taken_0x21cd00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x21CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD00u;
        // 0x21cd04: 0xa2030113  sb          $v1, 0x113($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 275), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd00) {
            ctx->pc = 0x21CD28u;
            goto label_21cd28;
        }
    }
    ctx->pc = 0x21CD08u;
    // 0x21cd08: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x21cd08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21cd0c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21CD0Cu;
    {
        const bool branch_taken_0x21cd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cd0c) {
            ctx->pc = 0x21CD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CD0Cu;
            // 0x21cd10: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CD14u;
    // 0x21cd14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cd18: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21CD18u;
    {
        const bool branch_taken_0x21cd18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x21cd18) {
            ctx->pc = 0x21CD48u;
            goto label_21cd48;
        }
    }
    ctx->pc = 0x21CD20u;
    // 0x21cd20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21CD20u;
    {
        const bool branch_taken_0x21cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD20u;
        // 0x21cd24: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd20) {
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CD28u;
label_21cd28:
    // 0x21cd28: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x21cd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21cd2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21cd30:
    // 0x21cd30: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21cd34: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21CD34u;
    SET_GPR_U32(ctx, 31, 0x21CD3Cu);
    ctx->pc = 0x21CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD34u;
    // 0x21cd38: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21CD34u, 0x21CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD3Cu;
label_21cd3c:
    // 0x21cd3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21CD3Cu;
    {
        const bool branch_taken_0x21cd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x920200fc  lbu         $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd3c) {
            ctx->pc = 0x21CD54u;
            goto label_21cd54;
        }
    }
    ctx->pc = 0x21CD44u;
    // 0x21cd44: 0x0  nop
    ctx->pc = 0x21cd44u;
    // NOP
label_21cd48:
    // 0x21cd48: 0xc08764c  jal         func_21D930
    ctx->pc = 0x21CD48u;
    SET_GPR_U32(ctx, 31, 0x21CD50u);
    ctx->pc = 0x21CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD48u;
    // 0x21cd4c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21CD48u, 0x21CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD50u;
label_21cd50:
    // 0x21cd50: 0x920200fc  lbu         $v0, 0xFC($s0)
    ctx->pc = 0x21cd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
label_21cd54:
    // 0x21cd54: 0x92030106  lbu         $v1, 0x106($s0)
    ctx->pc = 0x21cd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 262)));
    // 0x21cd58: 0x92040109  lbu         $a0, 0x109($s0)
    ctx->pc = 0x21cd58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 265)));
    // 0x21cd5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21cd60: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x21cd60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21cd64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21CD64u;
    {
        const bool branch_taken_0x21cd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0xa20200fc  sb          $v0, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd64) {
            ctx->pc = 0x21CD98u;
            goto label_21cd98;
        }
    }
    ctx->pc = 0x21CD6Cu;
    // 0x21cd6c: 0x92020113  lbu         $v0, 0x113($s0)
    ctx->pc = 0x21cd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 275)));
    // 0x21cd70: 0x92030116  lbu         $v1, 0x116($s0)
    ctx->pc = 0x21cd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x21cd74: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21cd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21cd78: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21CD78u;
    {
        const bool branch_taken_0x21cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cd78) {
            ctx->pc = 0x21CD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CD78u;
            // 0x21cd7c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CD9Cu;
            goto label_21cd9c;
        }
    }
    ctx->pc = 0x21CD80u;
    // 0x21cd80: 0xc0821ce  jal         func_208738
    ctx->pc = 0x21CD80u;
    SET_GPR_U32(ctx, 31, 0x21CD88u);
    ctx->pc = 0x21CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD80u;
    // 0x21cd84: 0x92040005  lbu         $a0, 0x5($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x21CD80u, 0x21CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD88u;
label_21cd88:
    // 0x21cd88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21cd8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cd90: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21CD90u;
    {
        const bool branch_taken_0x21cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD90u;
        // 0x21cd94: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd90) {
            ctx->pc = 0x21CE48u;
            goto label_21ce48;
        }
    }
    ctx->pc = 0x21CD98u;
label_21cd98:
    // 0x21cd98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_21cd9c:
    // 0x21cd9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cda0: 0x24538858  addiu       $s3, $v0, -0x77A8
    ctx->pc = 0x21cda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21cda4: 0x26120016  addiu       $s2, $s0, 0x16
    ctx->pc = 0x21cda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x21cda8: 0x26140019  addiu       $s4, $s0, 0x19
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x21cdac: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x21cdacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21cdb0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x21cdb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cdb4: 0x0  nop
    ctx->pc = 0x21cdb4u;
    // NOP
label_21cdb8:
    // 0x21cdb8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x21cdbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21cdc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21cdc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21cdc8: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x21cdcc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21cdd0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21cdd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21cdd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cdd8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x21cdd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21cddc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x21cddcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21cde0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21CDE0u;
    {
        const bool branch_taken_0x21cde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDE0u;
        // 0x21cde4: 0x2351004  sllv        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cde0) {
            ctx->pc = 0x21CE18u;
            goto label_21ce18;
        }
    }
    ctx->pc = 0x21CDE8u;
    // 0x21cde8: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x21cde8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x21cdec: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x21cdf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21cdf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21CDF4u;
    {
        const bool branch_taken_0x21cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDF4u;
        // 0x21cdf8: 0x2351004  sllv        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cdf4) {
            ctx->pc = 0x21CE18u;
            goto label_21ce18;
        }
    }
    ctx->pc = 0x21CDFCu;
    // 0x21cdfc: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x21cdfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21ce00: 0x10560004  beq         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CE00u;
    {
        const bool branch_taken_0x21ce00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x21CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE00u;
        // 0x21ce04: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce00) {
            ctx->pc = 0x21CE14u;
            goto label_21ce14;
        }
    }
    ctx->pc = 0x21CE08u;
    // 0x21ce08: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21ce0c: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21CE0Cu;
    SET_GPR_U32(ctx, 31, 0x21CE14u);
    ctx->pc = 0x21CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE0Cu;
    // 0x21ce10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21CE0Cu, 0x21CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE14u;
label_21ce14:
    // 0x21ce14: 0x2351004  sllv        $v0, $s5, $s1
    ctx->pc = 0x21ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
label_21ce18:
    // 0x21ce18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ce18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ce1c: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21ce20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21ce24: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x21ce24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21ce28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21ce28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ce2c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x21CE2Cu;
    {
        const bool branch_taken_0x21ce2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE2Cu;
        // 0x21ce30: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce2c) {
            ctx->pc = 0x21CDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cdb8;
        }
    }
    ctx->pc = 0x21CE34u;
    // 0x21ce34: 0xc0821ce  jal         func_208738
    ctx->pc = 0x21CE34u;
    SET_GPR_U32(ctx, 31, 0x21CE3Cu);
    ctx->pc = 0x21CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE34u;
    // 0x21ce38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x21CE34u, 0x21CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE3Cu;
label_21ce3c:
    // 0x21ce3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ce40: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x21CE40u;
    SET_GPR_U32(ctx, 31, 0x21CE48u);
    ctx->pc = 0x21CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE40u;
    // 0x21ce44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x21CE40u, 0x21CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE48u;
label_21ce48:
    // 0x21ce48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ce4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ce4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ce50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ce54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21ce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ce58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ce5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ce60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ce64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE68u;
        // 0x21ce6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CE70u;
}
