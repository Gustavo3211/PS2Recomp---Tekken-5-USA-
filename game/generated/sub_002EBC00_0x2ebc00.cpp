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

// Function: sub_002EBC00
// Address: 0x2ebc00 - 0x2ebd40
void sub_002EBC00_0x2ebc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC00_0x2ebc00");
#endif

    switch (ctx->pc) {
        case 0x2ebc00u: goto label_2ebc00;
        case 0x2ebc04u: goto label_2ebc04;
        case 0x2ebc08u: goto label_2ebc08;
        case 0x2ebc0cu: goto label_2ebc0c;
        case 0x2ebc10u: goto label_2ebc10;
        case 0x2ebc14u: goto label_2ebc14;
        case 0x2ebc18u: goto label_2ebc18;
        case 0x2ebc1cu: goto label_2ebc1c;
        case 0x2ebc20u: goto label_2ebc20;
        case 0x2ebc24u: goto label_2ebc24;
        case 0x2ebc28u: goto label_2ebc28;
        case 0x2ebc2cu: goto label_2ebc2c;
        case 0x2ebc30u: goto label_2ebc30;
        case 0x2ebc34u: goto label_2ebc34;
        case 0x2ebc38u: goto label_2ebc38;
        case 0x2ebc3cu: goto label_2ebc3c;
        case 0x2ebc40u: goto label_2ebc40;
        case 0x2ebc44u: goto label_2ebc44;
        case 0x2ebc48u: goto label_2ebc48;
        case 0x2ebc4cu: goto label_2ebc4c;
        case 0x2ebc50u: goto label_2ebc50;
        case 0x2ebc54u: goto label_2ebc54;
        case 0x2ebc58u: goto label_2ebc58;
        case 0x2ebc5cu: goto label_2ebc5c;
        case 0x2ebc60u: goto label_2ebc60;
        case 0x2ebc64u: goto label_2ebc64;
        case 0x2ebc68u: goto label_2ebc68;
        case 0x2ebc6cu: goto label_2ebc6c;
        case 0x2ebc70u: goto label_2ebc70;
        case 0x2ebc74u: goto label_2ebc74;
        case 0x2ebc78u: goto label_2ebc78;
        case 0x2ebc7cu: goto label_2ebc7c;
        case 0x2ebc80u: goto label_2ebc80;
        case 0x2ebc84u: goto label_2ebc84;
        case 0x2ebc88u: goto label_2ebc88;
        case 0x2ebc8cu: goto label_2ebc8c;
        case 0x2ebc90u: goto label_2ebc90;
        case 0x2ebc94u: goto label_2ebc94;
        case 0x2ebc98u: goto label_2ebc98;
        case 0x2ebc9cu: goto label_2ebc9c;
        case 0x2ebca0u: goto label_2ebca0;
        case 0x2ebca4u: goto label_2ebca4;
        case 0x2ebca8u: goto label_2ebca8;
        case 0x2ebcacu: goto label_2ebcac;
        case 0x2ebcb0u: goto label_2ebcb0;
        case 0x2ebcb4u: goto label_2ebcb4;
        case 0x2ebcb8u: goto label_2ebcb8;
        case 0x2ebcbcu: goto label_2ebcbc;
        case 0x2ebcc0u: goto label_2ebcc0;
        case 0x2ebcc4u: goto label_2ebcc4;
        case 0x2ebcc8u: goto label_2ebcc8;
        case 0x2ebcccu: goto label_2ebccc;
        case 0x2ebcd0u: goto label_2ebcd0;
        case 0x2ebcd4u: goto label_2ebcd4;
        case 0x2ebcd8u: goto label_2ebcd8;
        case 0x2ebcdcu: goto label_2ebcdc;
        case 0x2ebce0u: goto label_2ebce0;
        case 0x2ebce4u: goto label_2ebce4;
        case 0x2ebce8u: goto label_2ebce8;
        case 0x2ebcecu: goto label_2ebcec;
        case 0x2ebcf0u: goto label_2ebcf0;
        case 0x2ebcf4u: goto label_2ebcf4;
        case 0x2ebcf8u: goto label_2ebcf8;
        case 0x2ebcfcu: goto label_2ebcfc;
        case 0x2ebd00u: goto label_2ebd00;
        case 0x2ebd04u: goto label_2ebd04;
        case 0x2ebd08u: goto label_2ebd08;
        case 0x2ebd0cu: goto label_2ebd0c;
        case 0x2ebd10u: goto label_2ebd10;
        case 0x2ebd14u: goto label_2ebd14;
        case 0x2ebd18u: goto label_2ebd18;
        case 0x2ebd1cu: goto label_2ebd1c;
        case 0x2ebd20u: goto label_2ebd20;
        case 0x2ebd24u: goto label_2ebd24;
        case 0x2ebd28u: goto label_2ebd28;
        case 0x2ebd2cu: goto label_2ebd2c;
        case 0x2ebd30u: goto label_2ebd30;
        case 0x2ebd34u: goto label_2ebd34;
        case 0x2ebd38u: goto label_2ebd38;
        case 0x2ebd3cu: goto label_2ebd3c;
        default: break;
    }

    ctx->pc = 0x2ebc00u;

label_2ebc00:
    // 0x2ebc00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ebc04:
    // 0x2ebc04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ebc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2ebc08:
    // 0x2ebc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc0c:
    // 0x2ebc0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ebc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2ebc10:
    // 0x2ebc10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ebc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ebc14:
    // 0x2ebc14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ebc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2ebc18:
    // 0x2ebc18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ebc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2ebc1c:
    // 0x2ebc1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ebc1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc20:
    // 0x2ebc20: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ebc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2ebc24:
    // 0x2ebc24: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ebc28:
    // 0x2ebc28: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ebc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ebc2c:
    // 0x2ebc2c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ebc2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ebc30:
    // 0x2ebc30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ebc34:
    // 0x2ebc34: 0x40f809  jalr        $v0
label_2ebc38:
    if (ctx->pc == 0x2EBC38u) {
        ctx->pc = 0x2EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC34u;
        // 0x2ebc38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC3Cu;
        goto label_2ebc3c;
    }
    ctx->pc = 0x2EBC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBC3Cu);
        ctx->pc = 0x2EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC34u;
        // 0x2ebc38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC34u, 0x2EBC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBC3Cu;
label_2ebc3c:
    // 0x2ebc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc40:
    // 0x2ebc40: 0xc0bb974  jal         func_2EE5D0
label_2ebc44:
    if (ctx->pc == 0x2EBC44u) {
        ctx->pc = 0x2EBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC40u;
        // 0x2ebc44: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC48u;
        goto label_2ebc48;
    }
    ctx->pc = 0x2EBC40u;
    SET_GPR_U32(ctx, 31, 0x2EBC48u);
    ctx->pc = 0x2EBC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC40u;
    // 0x2ebc44: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5D0u, 0x2EBC40u, 0x2EBC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC48u;
label_2ebc48:
    // 0x2ebc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc4c:
    // 0x2ebc4c: 0xc0bb978  jal         func_2EE5E0
label_2ebc50:
    if (ctx->pc == 0x2EBC50u) {
        ctx->pc = 0x2EBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC4Cu;
        // 0x2ebc50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC54u;
        goto label_2ebc54;
    }
    ctx->pc = 0x2EBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC54u);
    ctx->pc = 0x2EBC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC4Cu;
    // 0x2ebc50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5E0u, 0x2EBC4Cu, 0x2EBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC54u;
label_2ebc54:
    // 0x2ebc54: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x2ebc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2ebc58:
    // 0x2ebc58: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ebc5c:
    if (ctx->pc == 0x2EBC5Cu) {
        ctx->pc = 0x2EBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC58u;
        // 0x2ebc5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC60u;
        goto label_2ebc60;
    }
    ctx->pc = 0x2EBC58u;
    {
        const bool branch_taken_0x2ebc58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC58u;
        // 0x2ebc5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc58) {
            ctx->pc = 0x2EBC74u;
            goto label_2ebc74;
        }
    }
    ctx->pc = 0x2EBC60u;
label_2ebc60:
    // 0x2ebc60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ebc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc64:
    // 0x2ebc64: 0xc0a5d52  jal         func_297548
label_2ebc68:
    if (ctx->pc == 0x2EBC68u) {
        ctx->pc = 0x2EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC64u;
        // 0x2ebc68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC6Cu;
        goto label_2ebc6c;
    }
    ctx->pc = 0x2EBC64u;
    SET_GPR_U32(ctx, 31, 0x2EBC6Cu);
    ctx->pc = 0x2EBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC64u;
    // 0x2ebc68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2EBC64u, 0x2EBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC6Cu;
label_2ebc6c:
    // 0x2ebc6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ebc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ebc70:
    // 0x2ebc70: 0x24540006  addiu       $s4, $v0, 0x6
    ctx->pc = 0x2ebc70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2ebc74:
    // 0x2ebc74: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
label_2ebc78:
    if (ctx->pc == 0x2EBC78u) {
        ctx->pc = 0x2EBC7Cu;
        goto label_2ebc7c;
    }
    ctx->pc = 0x2EBC74u;
    {
        const bool branch_taken_0x2ebc74 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2ebc74) {
            ctx->pc = 0x2EBCFCu;
            goto label_2ebcfc;
        }
    }
    ctx->pc = 0x2EBC7Cu;
label_2ebc7c:
    // 0x2ebc7c: 0xc0b45c4  jal         func_2D1710
label_2ebc80:
    if (ctx->pc == 0x2EBC80u) {
        ctx->pc = 0x2EBC84u;
        goto label_2ebc84;
    }
    ctx->pc = 0x2EBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC84u);
    ctx->pc = 0x2D1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1710u, 0x2EBC7Cu, 0x2EBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC84u;
label_2ebc84:
    // 0x2ebc84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ebc88:
    if (ctx->pc == 0x2EBC88u) {
        ctx->pc = 0x2EBC8Cu;
        goto label_2ebc8c;
    }
    ctx->pc = 0x2EBC84u;
    {
        const bool branch_taken_0x2ebc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc84) {
            ctx->pc = 0x2EBC9Cu;
            goto label_2ebc9c;
        }
    }
    ctx->pc = 0x2EBC8Cu;
label_2ebc8c:
    // 0x2ebc8c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2ebc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2ebc90:
    // 0x2ebc90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ebc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2ebc94:
    // 0x2ebc94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2ebc98:
    if (ctx->pc == 0x2EBC98u) {
        ctx->pc = 0x2EBC9Cu;
        goto label_2ebc9c;
    }
    ctx->pc = 0x2EBC94u;
    {
        const bool branch_taken_0x2ebc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc94) {
            ctx->pc = 0x2EBCCCu;
            goto label_2ebccc;
        }
    }
    ctx->pc = 0x2EBC9Cu;
label_2ebc9c:
    // 0x2ebc9c: 0xc0b45c4  jal         func_2D1710
label_2ebca0:
    if (ctx->pc == 0x2EBCA0u) {
        ctx->pc = 0x2EBCA4u;
        goto label_2ebca4;
    }
    ctx->pc = 0x2EBC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EBCA4u);
    ctx->pc = 0x2D1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1710u, 0x2EBC9Cu, 0x2EBCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCA4u;
label_2ebca4:
    // 0x2ebca4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ebca8:
    if (ctx->pc == 0x2EBCA8u) {
        ctx->pc = 0x2EBCACu;
        goto label_2ebcac;
    }
    ctx->pc = 0x2EBCA4u;
    {
        const bool branch_taken_0x2ebca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebca4) {
            ctx->pc = 0x2EBCD8u;
            goto label_2ebcd8;
        }
    }
    ctx->pc = 0x2EBCACu;
label_2ebcac:
    // 0x2ebcac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ebcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ebcb0:
    // 0x2ebcb0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ebcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ebcb4:
    // 0x2ebcb4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ebcb8:
    // 0x2ebcb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ebcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ebcbc:
    // 0x2ebcbc: 0x40f809  jalr        $v0
label_2ebcc0:
    if (ctx->pc == 0x2EBCC0u) {
        ctx->pc = 0x2EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCBCu;
        // 0x2ebcc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBCC4u;
        goto label_2ebcc4;
    }
    ctx->pc = 0x2EBCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBCC4u);
        ctx->pc = 0x2EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCBCu;
        // 0x2ebcc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBCBCu, 0x2EBCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBCC4u;
label_2ebcc4:
    // 0x2ebcc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ebcc8:
    if (ctx->pc == 0x2EBCC8u) {
        ctx->pc = 0x2EBCCCu;
        goto label_2ebccc;
    }
    ctx->pc = 0x2EBCC4u;
    {
        const bool branch_taken_0x2ebcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebcc4) {
            ctx->pc = 0x2EBCD8u;
            goto label_2ebcd8;
        }
    }
    ctx->pc = 0x2EBCCCu;
label_2ebccc:
    // 0x2ebccc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2ebcccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2ebcd0:
    // 0x2ebcd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ebcd4:
    if (ctx->pc == 0x2EBCD4u) {
        ctx->pc = 0x2EBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCD0u;
        // 0x2ebcd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBCD8u;
        goto label_2ebcd8;
    }
    ctx->pc = 0x2EBCD0u;
    {
        const bool branch_taken_0x2ebcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCD0u;
        // 0x2ebcd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcd0) {
            ctx->pc = 0x2EBCE0u;
            goto label_2ebce0;
        }
    }
    ctx->pc = 0x2EBCD8u;
label_2ebcd8:
    // 0x2ebcd8: 0x3c0580df  lui         $a1, 0x80DF
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32991 << 16));
label_2ebcdc:
    // 0x2ebcdc: 0x34a5cfcf  ori         $a1, $a1, 0xCFCF
    ctx->pc = 0x2ebcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53199);
label_2ebce0:
    // 0x2ebce0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ebce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_2ebce4:
    // 0x2ebce4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ebce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ebce8:
    // 0x2ebce8: 0x24840768  addiu       $a0, $a0, 0x768
    ctx->pc = 0x2ebce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1896));
label_2ebcec:
    // 0x2ebcec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ebcecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcf0:
    // 0x2ebcf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcf4:
    // 0x2ebcf4: 0xc0b640e  jal         func_2D9038
label_2ebcf8:
    if (ctx->pc == 0x2EBCF8u) {
        ctx->pc = 0x2EBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCF4u;
        // 0x2ebcf8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBCFCu;
        goto label_2ebcfc;
    }
    ctx->pc = 0x2EBCF4u;
    SET_GPR_U32(ctx, 31, 0x2EBCFCu);
    ctx->pc = 0x2EBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCF4u;
    // 0x2ebcf8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EBCF4u, 0x2EBCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCFCu;
label_2ebcfc:
    // 0x2ebcfc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2ebd00:
    if (ctx->pc == 0x2EBD00u) {
        ctx->pc = 0x2EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCFCu;
        // 0x2ebd00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD04u;
        goto label_2ebd04;
    }
    ctx->pc = 0x2EBCFCu;
    {
        const bool branch_taken_0x2ebcfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCFCu;
        // 0x2ebd00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcfc) {
            ctx->pc = 0x2EBD24u;
            goto label_2ebd24;
        }
    }
    ctx->pc = 0x2EBD04u;
label_2ebd04:
    // 0x2ebd04: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_2ebd08:
    if (ctx->pc == 0x2EBD08u) {
        ctx->pc = 0x2EBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD04u;
        // 0x2ebd08: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD0Cu;
        goto label_2ebd0c;
    }
    ctx->pc = 0x2EBD04u;
    {
        const bool branch_taken_0x2ebd04 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2EBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD04u;
        // 0x2ebd08: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd04) {
            ctx->pc = 0x2EBD24u;
            goto label_2ebd24;
        }
    }
    ctx->pc = 0x2EBD0Cu;
label_2ebd0c:
    // 0x2ebd0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ebd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd10:
    // 0x2ebd10: 0x24844a68  addiu       $a0, $a0, 0x4A68
    ctx->pc = 0x2ebd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19048));
label_2ebd14:
    // 0x2ebd14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd18:
    // 0x2ebd18: 0xc0b640e  jal         func_2D9038
label_2ebd1c:
    if (ctx->pc == 0x2EBD1Cu) {
        ctx->pc = 0x2EBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD18u;
        // 0x2ebd1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD20u;
        goto label_2ebd20;
    }
    ctx->pc = 0x2EBD18u;
    SET_GPR_U32(ctx, 31, 0x2EBD20u);
    ctx->pc = 0x2EBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD18u;
    // 0x2ebd1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EBD18u, 0x2EBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD20u;
label_2ebd20:
    // 0x2ebd20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ebd20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebd24:
    // 0x2ebd24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ebd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ebd28:
    // 0x2ebd28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebd28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebd2c:
    // 0x2ebd2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ebd2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ebd30:
    // 0x2ebd30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ebd30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebd34:
    // 0x2ebd34: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ebd38:
    // 0x2ebd38: 0x3e00008  jr          $ra
label_2ebd3c:
    if (ctx->pc == 0x2EBD3Cu) {
        ctx->pc = 0x2EBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD38u;
        // 0x2ebd3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD40u;
        goto label_fallthrough_0x2ebd38;
    }
    ctx->pc = 0x2EBD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD38u;
        // 0x2ebd3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ebd38:
    ctx->pc = 0x2EBD40u;
}
