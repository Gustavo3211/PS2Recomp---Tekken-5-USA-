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

// Function: sub_002CECB8
// Address: 0x2cecb8 - 0x2ceec8
void sub_002CECB8_0x2cecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CECB8_0x2cecb8");
#endif

    switch (ctx->pc) {
        case 0x2cece4u: goto label_2cece4;
        case 0x2cececu: goto label_2cecec;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee50u: goto label_2cee50;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea8u: goto label_2ceea8;
        default: break;
    }

    ctx->pc = 0x2cecb8u;

    // 0x2cecb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cecb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cecbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cecc0: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x2cecc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x2cecc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cecc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cecc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cecd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cecd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cecd8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cecdc: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CECDCu;
    SET_GPR_U32(ctx, 31, 0x2CECE4u);
    ctx->pc = 0x2CECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECDCu;
    // 0x2cece0: 0x26938858  addiu       $s3, $s4, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CECDCu, 0x2CECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECE4u;
label_2cece4:
    // 0x2cece4: 0xc086620  jal         func_219880
    ctx->pc = 0x2CECE4u;
    SET_GPR_U32(ctx, 31, 0x2CECECu);
    ctx->pc = 0x2CECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECE4u;
    // 0x2cece8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x2CECE4u, 0x2CECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECECu;
label_2cecec:
    // 0x2cecec: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2cececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2cecf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CECF0u;
    {
        const bool branch_taken_0x2cecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECF0u;
        // 0x2cecf4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecf0) {
            ctx->pc = 0x2CED10u;
            goto label_2ced10;
        }
    }
    ctx->pc = 0x2CECF8u;
    // 0x2cecf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cecfc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CECFCu;
    {
        const bool branch_taken_0x2cecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECFCu;
        // 0x2ced00: 0x26828858  addiu       $v0, $s4, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecfc) {
            ctx->pc = 0x2CED40u;
            goto label_2ced40;
        }
    }
    ctx->pc = 0x2CED04u;
    // 0x2ced04: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CED04u;
    {
        const bool branch_taken_0x2ced04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED04u;
        // 0x2ced08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced04) {
            ctx->pc = 0x2CED54u;
            goto label_2ced54;
        }
    }
    ctx->pc = 0x2CED0Cu;
    // 0x2ced0c: 0x0  nop
    ctx->pc = 0x2ced0cu;
    // NOP
label_2ced10:
    // 0x2ced10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ced10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced14: 0xc09342a  jal         func_24D0A8
    ctx->pc = 0x2CED14u;
    SET_GPR_U32(ctx, 31, 0x2CED1Cu);
    ctx->pc = 0x2CED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CED14u;
    // 0x2ced18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D0A8u, 0x2CED14u, 0x2CED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED1Cu;
label_2ced1c:
    // 0x2ced1c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ced1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ced20: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ced20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ced24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ced24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced28: 0xc0b2dd6  jal         func_2CB758
    ctx->pc = 0x2CED28u;
    SET_GPR_U32(ctx, 31, 0x2CED30u);
    ctx->pc = 0x2CED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CED28u;
    // 0x2ced2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB758u, 0x2CED28u, 0x2CED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED30u;
label_2ced30:
    // 0x2ced30: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x2ced30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x2ced34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ced34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ced38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CED38u;
    {
        const bool branch_taken_0x2ced38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED38u;
        // 0x2ced3c: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced38) {
            ctx->pc = 0x2CED4Cu;
            goto label_2ced4c;
        }
    }
    ctx->pc = 0x2CED40u;
label_2ced40:
    // 0x2ced40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ced40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced44: 0xc0b2dd6  jal         func_2CB758
    ctx->pc = 0x2CED44u;
    SET_GPR_U32(ctx, 31, 0x2CED4Cu);
    ctx->pc = 0x2CED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CED44u;
    // 0x2ced48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB758u, 0x2CED44u, 0x2CED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED4Cu;
label_2ced4c:
    // 0x2ced4c: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x2ced4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x2ced50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ced54:
    // 0x2ced54: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2ced54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ced58: 0x54640054  bnel        $v1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2CED58u;
    {
        const bool branch_taken_0x2ced58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ced58) {
            ctx->pc = 0x2CED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CED58u;
            // 0x2ced5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEEACu;
            goto label_2ceeac;
        }
    }
    ctx->pc = 0x2CED60u;
    // 0x2ced60: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CED60u;
    SET_GPR_U32(ctx, 31, 0x2CED68u);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CED60u, 0x2CED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED68u;
label_2ced68:
    // 0x2ced68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ced68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ced6c: 0x5c8821  addu        $s1, $v0, $gp
    ctx->pc = 0x2ced6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2ced70: 0x8e31a850  lw          $s1, -0x57B0($s1)
    ctx->pc = 0x2ced70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944848)));
    // 0x2ced74: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CED74u;
    SET_GPR_U32(ctx, 31, 0x2CED7Cu);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CED74u, 0x2CED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED7Cu;
label_2ced7c:
    // 0x2ced7c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ced7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ced80: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ced80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ced84: 0x32220090  andi        $v0, $s1, 0x90
    ctx->pc = 0x2ced84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)144);
    // 0x2ced88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ced88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ced8c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2ced8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ced90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CED90u;
    {
        const bool branch_taken_0x2ced90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED90u;
        // 0x2ced94: 0x8c720008  lw          $s2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced90) {
            ctx->pc = 0x2CEDE0u;
            goto label_2cede0;
        }
    }
    ctx->pc = 0x2CED98u;
    // 0x2ced98: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CED98u;
    SET_GPR_U32(ctx, 31, 0x2CEDA0u);
    ctx->pc = 0x2CED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CED98u;
    // 0x2ced9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CED98u, 0x2CEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDA0u;
label_2ceda0:
    // 0x2ceda0: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CEDA0u;
    {
        const bool branch_taken_0x2ceda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceda0) {
            ctx->pc = 0x2CEDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEDA0u;
            // 0x2ceda4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEEACu;
            goto label_2ceeac;
        }
    }
    ctx->pc = 0x2CEDA8u;
    // 0x2ceda8: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x2ceda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x2cedac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cedb0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEDB0u;
    SET_GPR_U32(ctx, 31, 0x2CEDB8u);
    ctx->pc = 0x2CEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDB0u;
    // 0x2cedb4: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEDB0u, 0x2CEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDB8u;
label_2cedb8:
    // 0x2cedb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cedb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cedbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cedbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cedc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cedc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cedc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cedc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cedc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cedc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cedcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cedccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cedd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cedd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cedd4: 0x80b2e22  j           func_2CB888
    ctx->pc = 0x2CEDD4u;
    ctx->pc = 0x2CEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDD4u;
    // 0x2cedd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB888u;
    sub_002CB888_0x2cb888(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEDDCu;
    // 0x2ceddc: 0x0  nop
    ctx->pc = 0x2ceddcu;
    // NOP
label_2cede0:
    // 0x2cede0: 0x32220060  andi        $v0, $s1, 0x60
    ctx->pc = 0x2cede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
    // 0x2cede4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CEDE4u;
    {
        const bool branch_taken_0x2cede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cede4) {
            ctx->pc = 0x2CEDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEDE4u;
            // 0x2cede8: 0x32220800  andi        $v0, $s1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE30u;
            goto label_2cee30;
        }
    }
    ctx->pc = 0x2CEDECu;
    // 0x2cedec: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CEDECu;
    SET_GPR_U32(ctx, 31, 0x2CEDF4u);
    ctx->pc = 0x2CEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDECu;
    // 0x2cedf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CEDECu, 0x2CEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDF4u;
label_2cedf4:
    // 0x2cedf4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CEDF4u;
    {
        const bool branch_taken_0x2cedf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDF4u;
        // 0x2cedf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedf4) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEDFCu;
    // 0x2cedfc: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x2cedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x2cee00: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x2cee00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x2cee04: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEE04u;
    SET_GPR_U32(ctx, 31, 0x2CEE0Cu);
    ctx->pc = 0x2CEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE04u;
    // 0x2cee08: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEE04u, 0x2CEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE0Cu;
label_2cee0c:
    // 0x2cee0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cee10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cee14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cee14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cee18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cee18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cee1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cee1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cee20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cee20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cee24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cee28: 0x80b2e22  j           func_2CB888
    ctx->pc = 0x2CEE28u;
    ctx->pc = 0x2CEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE28u;
    // 0x2cee2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB888u;
    sub_002CB888_0x2cb888(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEE30u;
label_2cee30:
    // 0x2cee30: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CEE30u;
    {
        const bool branch_taken_0x2cee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee30) {
            ctx->pc = 0x2CEE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE30u;
            // 0x2cee34: 0x32220100  andi        $v0, $s1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE90u;
            goto label_2cee90;
        }
    }
    ctx->pc = 0x2CEE38u;
    // 0x2cee38: 0xc0b385c  jal         func_2CE170
    ctx->pc = 0x2CEE38u;
    SET_GPR_U32(ctx, 31, 0x2CEE40u);
    ctx->pc = 0x2CEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE38u;
    // 0x2cee3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE170u, 0x2CEE38u, 0x2CEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE40u;
label_2cee40:
    // 0x2cee40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEE40u;
    {
        const bool branch_taken_0x2cee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE40u;
        // 0x2cee44: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee40) {
            ctx->pc = 0x2CEE58u;
            goto label_2cee58;
        }
    }
    ctx->pc = 0x2CEE48u;
    // 0x2cee48: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CEE48u;
    SET_GPR_U32(ctx, 31, 0x2CEE50u);
    ctx->pc = 0x2CEE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE48u;
    // 0x2cee4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CEE48u, 0x2CEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE50u;
label_2cee50:
    // 0x2cee50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CEE50u;
    {
        const bool branch_taken_0x2cee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE50u;
        // 0x2cee54: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee50) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEE58u;
label_2cee58:
    // 0x2cee58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cee5c: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x2cee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x2cee60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cee64: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cee64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cee68: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2cee68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2cee6c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2cee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2cee70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cee70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cee74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cee74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cee78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cee78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cee7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cee7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cee80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cee80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cee84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cee88: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEE88u;
    ctx->pc = 0x2CEE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE88u;
    // 0x2cee8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEE90u;
label_2cee90:
    // 0x2cee90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEE90u;
    {
        const bool branch_taken_0x2cee90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee90) {
            ctx->pc = 0x2CEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE90u;
            // 0x2cee94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEEACu;
            goto label_2ceeac;
        }
    }
    ctx->pc = 0x2CEE98u;
    // 0x2cee98: 0xc0b2e44  jal         func_2CB910
    ctx->pc = 0x2CEE98u;
    SET_GPR_U32(ctx, 31, 0x2CEEA0u);
    ctx->pc = 0x2CEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE98u;
    // 0x2cee9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB910u, 0x2CEE98u, 0x2CEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEA0u;
label_2ceea0:
    // 0x2ceea0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEEA0u;
    SET_GPR_U32(ctx, 31, 0x2CEEA8u);
    ctx->pc = 0x2CEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEEA0u;
    // 0x2ceea4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEEA0u, 0x2CEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEA8u;
label_2ceea8:
    // 0x2ceea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ceea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ceeac:
    // 0x2ceeac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ceeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ceeb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ceeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceeb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ceeb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ceeb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ceeb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceebc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ceebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ceec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEC0u;
        // 0x2ceec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEEC8u;
}
