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

// Function: sub_005139D0
// Address: 0x5139d0 - 0x513b70
void sub_005139D0_0x5139d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005139D0_0x5139d0");
#endif

    switch (ctx->pc) {
        case 0x5139f0u: goto label_5139f0;
        case 0x5139f8u: goto label_5139f8;
        case 0x513a04u: goto label_513a04;
        case 0x513a0cu: goto label_513a0c;
        case 0x513a14u: goto label_513a14;
        case 0x513a20u: goto label_513a20;
        case 0x513a28u: goto label_513a28;
        case 0x513a30u: goto label_513a30;
        case 0x513a60u: goto label_513a60;
        case 0x513a70u: goto label_513a70;
        case 0x513a80u: goto label_513a80;
        case 0x513a90u: goto label_513a90;
        case 0x513aa0u: goto label_513aa0;
        case 0x513ab0u: goto label_513ab0;
        case 0x513ac0u: goto label_513ac0;
        case 0x513accu: goto label_513acc;
        case 0x513ad4u: goto label_513ad4;
        case 0x513adcu: goto label_513adc;
        case 0x513ae4u: goto label_513ae4;
        case 0x513af8u: goto label_513af8;
        case 0x513b00u: goto label_513b00;
        case 0x513b08u: goto label_513b08;
        case 0x513b1cu: goto label_513b1c;
        default: break;
    }

    ctx->pc = 0x5139d0u;

    // 0x5139d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5139d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5139d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5139d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5139d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5139d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5139dc: 0x3c110090  lui         $s1, 0x90
    ctx->pc = 0x5139dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)144 << 16));
    // 0x5139e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5139e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5139e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x5139e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x5139e8: 0xc144df0  jal         func_5137C0
    ctx->pc = 0x5139E8u;
    SET_GPR_U32(ctx, 31, 0x5139F0u);
    ctx->pc = 0x5139ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5139E8u;
    // 0x5139ec: 0x2630f080  addiu       $s0, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5137C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5137C0u, 0x5139E8u, 0x5139F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5139F0u;
label_5139f0:
    // 0x5139f0: 0xc124620  jal         func_491880
    ctx->pc = 0x5139F0u;
    SET_GPR_U32(ctx, 31, 0x5139F8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x5139F0u, 0x5139F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5139F8u;
label_5139f8:
    // 0x5139f8: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x5139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x5139fc: 0xc124620  jal         func_491880
    ctx->pc = 0x5139FCu;
    SET_GPR_U32(ctx, 31, 0x513A04u);
    ctx->pc = 0x513A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5139FCu;
    // 0x513a00: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x5139FCu, 0x513A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A04u;
label_513a04:
    // 0x513a04: 0xc13e736  jal         func_4F9CD8
    ctx->pc = 0x513A04u;
    SET_GPR_U32(ctx, 31, 0x513A0Cu);
    ctx->pc = 0x513A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A04u;
    // 0x513a08: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CD8u, 0x513A04u, 0x513A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A0Cu;
label_513a0c:
    // 0x513a0c: 0xc1449ea  jal         func_5127A8
    ctx->pc = 0x513A0Cu;
    SET_GPR_U32(ctx, 31, 0x513A14u);
    ctx->pc = 0x513A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A0Cu;
    // 0x513a10: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5127A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5127A8u, 0x513A0Cu, 0x513A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A14u;
label_513a14:
    // 0x513a14: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x513a14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x513a18: 0xc143c8a  jal         func_50F228
    ctx->pc = 0x513A18u;
    SET_GPR_U32(ctx, 31, 0x513A20u);
    ctx->pc = 0x513A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A18u;
    // 0x513a1c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F228u, 0x513A18u, 0x513A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A20u;
label_513a20:
    // 0x513a20: 0xc13e73a  jal         func_4F9CE8
    ctx->pc = 0x513A20u;
    SET_GPR_U32(ctx, 31, 0x513A28u);
    ctx->pc = 0x4F9CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CE8u, 0x513A20u, 0x513A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A28u;
label_513a28:
    // 0x513a28: 0xc144e1c  jal         func_513870
    ctx->pc = 0x513A28u;
    SET_GPR_U32(ctx, 31, 0x513A30u);
    ctx->pc = 0x513A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A28u;
    // 0x513a2c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513870u, 0x513A28u, 0x513A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A30u;
label_513a30:
    // 0x513a30: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x513a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x513a34: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x513a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x513a38: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x513A38u;
    {
        const bool branch_taken_0x513a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a38) {
            ctx->pc = 0x513A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513A38u;
            // 0x513a3c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513A40u;
    // 0x513a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x513a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x513a44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x513a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x513a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x513a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x513a4c: 0x8c63d530  lw          $v1, -0x2AD0($v1)
    ctx->pc = 0x513a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956336)));
    // 0x513a50: 0x600008  jr          $v1
    ctx->pc = 0x513A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x513A58u: goto label_513a58;
            case 0x513A68u: goto label_513a68;
            case 0x513A78u: goto label_513a78;
            case 0x513A88u: goto label_513a88;
            case 0x513A98u: goto label_513a98;
            case 0x513AA8u: goto label_513aa8;
            case 0x513AB8u: goto label_513ab8;
            case 0x513AC0u: goto label_513ac0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x513A58u;
label_513a58:
    // 0x513a58: 0xc144362  jal         func_510D88
    ctx->pc = 0x513A58u;
    SET_GPR_U32(ctx, 31, 0x513A60u);
    ctx->pc = 0x513A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A58u;
    // 0x513a5c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510D88u, 0x513A58u, 0x513A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A60u;
label_513a60:
    // 0x513a60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x513A60u;
    {
        const bool branch_taken_0x513a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a60) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513A68u;
label_513a68:
    // 0x513a68: 0xc1414e0  jal         func_505380
    ctx->pc = 0x513A68u;
    SET_GPR_U32(ctx, 31, 0x513A70u);
    ctx->pc = 0x513A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A68u;
    // 0x513a6c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505380u, 0x513A68u, 0x513A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A70u;
label_513a70:
    // 0x513a70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x513A70u;
    {
        const bool branch_taken_0x513a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a70) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513A78u;
label_513a78:
    // 0x513a78: 0xc1443b2  jal         func_510EC8
    ctx->pc = 0x513A78u;
    SET_GPR_U32(ctx, 31, 0x513A80u);
    ctx->pc = 0x513A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A78u;
    // 0x513a7c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510EC8u, 0x513A78u, 0x513A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A80u;
label_513a80:
    // 0x513a80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x513A80u;
    {
        const bool branch_taken_0x513a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a80) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513A88u;
label_513a88:
    // 0x513a88: 0xc142bba  jal         func_50AEE8
    ctx->pc = 0x513A88u;
    SET_GPR_U32(ctx, 31, 0x513A90u);
    ctx->pc = 0x513A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A88u;
    // 0x513a8c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50AEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50AEE8u, 0x513A88u, 0x513A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513A90u;
label_513a90:
    // 0x513a90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x513A90u;
    {
        const bool branch_taken_0x513a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a90) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513A98u;
label_513a98:
    // 0x513a98: 0xc143c0a  jal         func_50F028
    ctx->pc = 0x513A98u;
    SET_GPR_U32(ctx, 31, 0x513AA0u);
    ctx->pc = 0x513A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513A98u;
    // 0x513a9c: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F028u, 0x513A98u, 0x513AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AA0u;
label_513aa0:
    // 0x513aa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x513AA0u;
    {
        const bool branch_taken_0x513aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513aa0) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513AA8u;
label_513aa8:
    // 0x513aa8: 0xc142c02  jal         func_50B008
    ctx->pc = 0x513AA8u;
    SET_GPR_U32(ctx, 31, 0x513AB0u);
    ctx->pc = 0x513AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513AA8u;
    // 0x513aac: 0x2632f080  addiu       $s2, $s1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B008u, 0x513AA8u, 0x513AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AB0u;
label_513ab0:
    // 0x513ab0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x513AB0u;
    {
        const bool branch_taken_0x513ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513ab0) {
            ctx->pc = 0x513AC4u;
            goto label_513ac4;
        }
    }
    ctx->pc = 0x513AB8u;
label_513ab8:
    // 0x513ab8: 0xc141a06  jal         func_506818
    ctx->pc = 0x513AB8u;
    SET_GPR_U32(ctx, 31, 0x513AC0u);
    ctx->pc = 0x506818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506818u, 0x513AB8u, 0x513AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AC0u;
label_513ac0:
    // 0x513ac0: 0x2632f080  addiu       $s2, $s1, -0xF80
    ctx->pc = 0x513ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
label_513ac4:
    // 0x513ac4: 0xc142914  jal         func_50A450
    ctx->pc = 0x513AC4u;
    SET_GPR_U32(ctx, 31, 0x513ACCu);
    ctx->pc = 0x50A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A450u, 0x513AC4u, 0x513ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513ACCu;
label_513acc:
    // 0x513acc: 0xc144566  jal         func_511598
    ctx->pc = 0x513ACCu;
    SET_GPR_U32(ctx, 31, 0x513AD4u);
    ctx->pc = 0x511598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511598u, 0x513ACCu, 0x513AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AD4u;
label_513ad4:
    // 0x513ad4: 0xc14431a  jal         func_510C68
    ctx->pc = 0x513AD4u;
    SET_GPR_U32(ctx, 31, 0x513ADCu);
    ctx->pc = 0x510C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510C68u, 0x513AD4u, 0x513ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513ADCu;
label_513adc:
    // 0x513adc: 0xc141992  jal         func_506648
    ctx->pc = 0x513ADCu;
    SET_GPR_U32(ctx, 31, 0x513AE4u);
    ctx->pc = 0x506648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506648u, 0x513ADCu, 0x513AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AE4u;
label_513ae4:
    // 0x513ae4: 0x86420078  lh          $v0, 0x78($s2)
    ctx->pc = 0x513ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x513ae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x513AE8u;
    {
        const bool branch_taken_0x513ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513AE8u;
        // 0x513aec: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ae8) {
            ctx->pc = 0x513B00u;
            goto label_513b00;
        }
    }
    ctx->pc = 0x513AF0u;
    // 0x513af0: 0xc144e38  jal         func_5138E0
    ctx->pc = 0x513AF0u;
    SET_GPR_U32(ctx, 31, 0x513AF8u);
    ctx->pc = 0x5138E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5138E0u, 0x513AF0u, 0x513AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513AF8u;
label_513af8:
    // 0x513af8: 0xc144e34  jal         func_5138D0
    ctx->pc = 0x513AF8u;
    SET_GPR_U32(ctx, 31, 0x513B00u);
    ctx->pc = 0x5138D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5138D0u, 0x513AF8u, 0x513B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513B00u;
label_513b00:
    // 0x513b00: 0xc124628  jal         func_4918A0
    ctx->pc = 0x513B00u;
    SET_GPR_U32(ctx, 31, 0x513B08u);
    ctx->pc = 0x513B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513B00u;
    // 0x513b04: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918A0u, 0x513B00u, 0x513B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513B08u;
label_513b08:
    // 0x513b08: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x513b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x513b0c: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x513b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x513b10: 0xa4500002  sh          $s0, 0x2($v0)
    ctx->pc = 0x513b10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x513b14: 0xc13e73a  jal         func_4F9CE8
    ctx->pc = 0x513B14u;
    SET_GPR_U32(ctx, 31, 0x513B1Cu);
    ctx->pc = 0x513B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513B14u;
    // 0x513b18: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CE8u, 0x513B14u, 0x513B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513B1Cu;
label_513b1c:
    // 0x513b1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x513b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x513b20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x513b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513b24: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x513b24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x513b28: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x513b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x513b2c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x513b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x513b30: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x513b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x513b34: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x513b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x513b38: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x513B38u;
    {
        const bool branch_taken_0x513b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x513B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513B38u;
        // 0x513b3c: 0x26430064  addiu       $v1, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513b38) {
            ctx->pc = 0x513B54u;
            goto label_513b54;
        }
    }
    ctx->pc = 0x513B40u;
    // 0x513b40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x513b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x513b44: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x513b44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x513b48: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x513b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x513b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x513b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x513b50: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x513b50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_513b54:
    // 0x513b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x513b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x513b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x513b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x513b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513b64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x513b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x513b68: 0x3e00008  jr          $ra
    ctx->pc = 0x513B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513B68u;
        // 0x513b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513B70u;
}
