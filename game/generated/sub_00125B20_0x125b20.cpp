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

// Function: sub_00125B20
// Address: 0x125b20 - 0x125cb0
void sub_00125B20_0x125b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125B20_0x125b20");
#endif

    switch (ctx->pc) {
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        default: break;
    }

    ctx->pc = 0x125b20u;

label_125b20:
    // 0x125b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_125b24:
    // 0x125b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125b28:
    // 0x125b28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x125b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_125b2c:
    // 0x125b2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x125b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_125b30:
    // 0x125b30: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x125b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_125b34:
    // 0x125b34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_125b38:
    // 0x125b38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x125b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b3c:
    // 0x125b3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125b40:
    // 0x125b40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x125b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125b44:
    // 0x125b44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_125b48:
    // 0x125b48: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x125b48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125b4c:
    // 0x125b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125b50:
    // 0x125b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125b54:
    // 0x125b54: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x125b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_125b58:
    // 0x125b58: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x125b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_125b5c:
    // 0x125b5c: 0x1636000e  bne         $s1, $s6, . + 4 + (0xE << 2)
label_125b60:
    if (ctx->pc == 0x125B60u) {
        ctx->pc = 0x125B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B5Cu;
        // 0x125b60: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B64u;
        goto label_125b64;
    }
    ctx->pc = 0x125B5Cu;
    {
        const bool branch_taken_0x125b5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x125B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B5Cu;
        // 0x125b60: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b5c) {
            ctx->pc = 0x125B98u;
            goto label_125b98;
        }
    }
    ctx->pc = 0x125B64u;
label_125b64:
    // 0x125b64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x125b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_125b68:
    // 0x125b68: 0xc0493b0  jal         func_124EC0
label_125b6c:
    if (ctx->pc == 0x125B6Cu) {
        ctx->pc = 0x125B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B68u;
        // 0x125b6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B70u;
        goto label_125b70;
    }
    ctx->pc = 0x125B68u;
    SET_GPR_U32(ctx, 31, 0x125B70u);
    ctx->pc = 0x125B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B68u;
    // 0x125b6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125B68u, 0x125B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B70u;
label_125b70:
    // 0x125b70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_125b74:
    if (ctx->pc == 0x125B74u) {
        ctx->pc = 0x125B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B70u;
        // 0x125b74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B78u;
        goto label_125b78;
    }
    ctx->pc = 0x125B70u;
    {
        const bool branch_taken_0x125b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B70u;
        // 0x125b74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b70) {
            ctx->pc = 0x125B98u;
            goto label_125b98;
        }
    }
    ctx->pc = 0x125B78u;
label_125b78:
    // 0x125b78: 0x10000037  b           . + 4 + (0x37 << 2)
label_125b7c:
    if (ctx->pc == 0x125B7Cu) {
        ctx->pc = 0x125B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B78u;
        // 0x125b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B80u;
        goto label_125b80;
    }
    ctx->pc = 0x125B78u;
    {
        const bool branch_taken_0x125b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B78u;
        // 0x125b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b78) {
            ctx->pc = 0x125C58u;
            goto label_125c58;
        }
    }
    ctx->pc = 0x125B80u;
label_125b80:
    // 0x125b80: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_125b84:
    // 0x125b84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125b88:
    // 0x125b88: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_125b8c:
    // 0x125b8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125b90:
    // 0x125b90: 0x10000030  b           . + 4 + (0x30 << 2)
label_125b94:
    if (ctx->pc == 0x125B94u) {
        ctx->pc = 0x125B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B90u;
        // 0x125b94: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B98u;
        goto label_125b98;
    }
    ctx->pc = 0x125B90u;
    {
        const bool branch_taken_0x125b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B90u;
        // 0x125b94: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b90) {
            ctx->pc = 0x125C54u;
            goto label_125c54;
        }
    }
    ctx->pc = 0x125B98u;
label_125b98:
    // 0x125b98: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_125b9c:
    // 0x125b9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125ba0:
    // 0x125ba0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_125ba4:
    // 0x125ba4: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_125ba8:
    if (ctx->pc == 0x125BA8u) {
        ctx->pc = 0x125BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BA4u;
        // 0x125ba8: 0x241efffd  addiu       $fp, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BACu;
        goto label_125bac;
    }
    ctx->pc = 0x125BA4u;
    {
        const bool branch_taken_0x125ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x125BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BA4u;
        // 0x125ba8: 0x241efffd  addiu       $fp, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ba4) {
            ctx->pc = 0x125C50u;
            goto label_125c50;
        }
    }
    ctx->pc = 0x125BACu;
label_125bac:
    // 0x125bac: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125bb0:
    // 0x125bb0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x125bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125bb4:
    // 0x125bb4: 0x0  nop
    ctx->pc = 0x125bb4u;
    // NOP
label_125bb8:
    // 0x125bb8: 0x1090c0  sll         $s2, $s0, 3
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_125bbc:
    // 0x125bbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125bc0:
    // 0x125bc0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x125bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_125bc4:
    // 0x125bc4: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_125bc8:
    // 0x125bc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_125bcc:
    // 0x125bcc: 0x41f42  srl         $v1, $a0, 29
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
label_125bd0:
    // 0x125bd0: 0x41782  srl         $v0, $a0, 30
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 30));
label_125bd4:
    // 0x125bd4: 0x1446001c  bne         $v0, $a2, . + 4 + (0x1C << 2)
label_125bd8:
    if (ctx->pc == 0x125BD8u) {
        ctx->pc = 0x125BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD4u;
        // 0x125bd8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BDCu;
        goto label_125bdc;
    }
    ctx->pc = 0x125BD4u;
    {
        const bool branch_taken_0x125bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x125BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD4u;
        // 0x125bd8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bd4) {
            ctx->pc = 0x125C48u;
            goto label_125c48;
        }
    }
    ctx->pc = 0x125BDCu;
label_125bdc:
    // 0x125bdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_125be0:
    if (ctx->pc == 0x125BE0u) {
        ctx->pc = 0x125BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BDCu;
        // 0x125be0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BE4u;
        goto label_125be4;
    }
    ctx->pc = 0x125BDCu;
    {
        const bool branch_taken_0x125bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BDCu;
        // 0x125be0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bdc) {
            ctx->pc = 0x125BECu;
            goto label_125bec;
        }
    }
    ctx->pc = 0x125BE4u;
label_125be4:
    // 0x125be4: 0x129e0018  beq         $s4, $fp, . + 4 + (0x18 << 2)
label_125be8:
    if (ctx->pc == 0x125BE8u) {
        ctx->pc = 0x125BECu;
        goto label_125bec;
    }
    ctx->pc = 0x125BE4u;
    {
        const bool branch_taken_0x125be4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        if (branch_taken_0x125be4) {
            ctx->pc = 0x125C48u;
            goto label_125c48;
        }
    }
    ctx->pc = 0x125BECu;
label_125bec:
    // 0x125bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125bf0:
    // 0x125bf0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_125bf4:
    if (ctx->pc == 0x125BF4u) {
        ctx->pc = 0x125BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF0u;
        // 0x125bf4: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BF8u;
        goto label_125bf8;
    }
    ctx->pc = 0x125BF0u;
    {
        const bool branch_taken_0x125bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF0u;
        // 0x125bf4: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bf0) {
            ctx->pc = 0x125C08u;
            goto label_125c08;
        }
    }
    ctx->pc = 0x125BF8u;
label_125bf8:
    // 0x125bf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_125bfc:
    if (ctx->pc == 0x125BFCu) {
        ctx->pc = 0x125BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF8u;
        // 0x125bfc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C00u;
        goto label_125c00;
    }
    ctx->pc = 0x125BF8u;
    {
        const bool branch_taken_0x125bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF8u;
        // 0x125bfc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bf8) {
            ctx->pc = 0x125C08u;
            goto label_125c08;
        }
    }
    ctx->pc = 0x125C00u;
label_125c00:
    // 0x125c00: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x125c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_125c04:
    // 0x125c04: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x125c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125c08:
    // 0x125c08: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x125c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_125c0c:
    // 0x125c0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125c10:
    // 0x125c10: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125c14:
    // 0x125c14: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x125c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_125c18:
    // 0x125c18: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x125c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125c1c:
    // 0x125c1c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_125c20:
    // 0x125c20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_125c24:
    // 0x125c24: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x125c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125c28:
    // 0x125c28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125c2c:
    // 0x125c2c: 0x40f809  jalr        $v0
label_125c30:
    if (ctx->pc == 0x125C30u) {
        ctx->pc = 0x125C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C2Cu;
        // 0x125c30: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C34u;
        goto label_125c34;
    }
    ctx->pc = 0x125C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125C34u);
        ctx->pc = 0x125C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C2Cu;
        // 0x125c30: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C2Cu, 0x125C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125C34u;
label_125c34:
    // 0x125c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x125c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125c38:
    // 0x125c38: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x125c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_125c3c:
    // 0x125c3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x125c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_125c40:
    // 0x125c40: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_125c44:
    if (ctx->pc == 0x125C44u) {
        ctx->pc = 0x125C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C40u;
        // 0x125c44: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C48u;
        goto label_125c48;
    }
    ctx->pc = 0x125C40u;
    {
        const bool branch_taken_0x125c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125c40) {
            ctx->pc = 0x125C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125C40u;
            // 0x125c44: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b80;
        }
    }
    ctx->pc = 0x125C48u;
label_125c48:
    // 0x125c48: 0x5617ffdb  bnel        $s0, $s7, . + 4 + (-0x25 << 2)
label_125c4c:
    if (ctx->pc == 0x125C4Cu) {
        ctx->pc = 0x125C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C48u;
        // 0x125c4c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C50u;
        goto label_125c50;
    }
    ctx->pc = 0x125C48u;
    {
        const bool branch_taken_0x125c48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x125c48) {
            ctx->pc = 0x125C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125C48u;
            // 0x125c4c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125bb8;
        }
    }
    ctx->pc = 0x125C50u;
label_125c50:
    // 0x125c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125c54:
    // 0x125c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125c58:
    // 0x125c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125c5c:
    // 0x125c5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125c60:
    // 0x125c60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125c64:
    // 0x125c64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125c64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125c68:
    // 0x125c68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125c68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125c6c:
    // 0x125c6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x125c6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125c70:
    // 0x125c70: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125c74:
    // 0x125c74: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x125c74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125c78:
    // 0x125c78: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x125c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125c7c:
    // 0x125c7c: 0x3e00008  jr          $ra
label_125c80:
    if (ctx->pc == 0x125C80u) {
        ctx->pc = 0x125C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C7Cu;
        // 0x125c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C84u;
        goto label_125c84;
    }
    ctx->pc = 0x125C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C7Cu;
        // 0x125c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C84u;
label_125c84:
    // 0x125c84: 0x0  nop
    ctx->pc = 0x125c84u;
    // NOP
label_125c88:
    // 0x125c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_125c8c:
    // 0x125c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_125c90:
    // 0x125c90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125c94:
    // 0x125c94: 0xc04a43b  jal         func_1290EC
label_125c98:
    if (ctx->pc == 0x125C98u) {
        ctx->pc = 0x125C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C94u;
        // 0x125c98: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C9Cu;
        goto label_125c9c;
    }
    ctx->pc = 0x125C94u;
    SET_GPR_U32(ctx, 31, 0x125C9Cu);
    ctx->pc = 0x125C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C94u;
    // 0x125c98: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x125C94u, 0x125C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C9Cu;
label_125c9c:
    // 0x125c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125ca0:
    // 0x125ca0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x125ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_125ca4:
    // 0x125ca4: 0x3e00008  jr          $ra
label_125ca8:
    if (ctx->pc == 0x125CA8u) {
        ctx->pc = 0x125CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CA4u;
        // 0x125ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CACu;
        goto label_125cac;
    }
    ctx->pc = 0x125CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CA4u;
        // 0x125ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125CACu;
label_125cac:
    // 0x125cac: 0x0  nop
    ctx->pc = 0x125cacu;
    // NOP
    ctx->pc = 0x125cb0u;
}
