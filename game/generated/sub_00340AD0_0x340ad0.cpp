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

// Function: sub_00340AD0
// Address: 0x340ad0 - 0x340c18
void sub_00340AD0_0x340ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340AD0_0x340ad0");
#endif

    switch (ctx->pc) {
        case 0x340ad0u: goto label_340ad0;
        case 0x340ad4u: goto label_340ad4;
        case 0x340ad8u: goto label_340ad8;
        case 0x340adcu: goto label_340adc;
        case 0x340ae0u: goto label_340ae0;
        case 0x340ae4u: goto label_340ae4;
        case 0x340ae8u: goto label_340ae8;
        case 0x340aecu: goto label_340aec;
        case 0x340af0u: goto label_340af0;
        case 0x340af4u: goto label_340af4;
        case 0x340af8u: goto label_340af8;
        case 0x340afcu: goto label_340afc;
        case 0x340b00u: goto label_340b00;
        case 0x340b04u: goto label_340b04;
        case 0x340b08u: goto label_340b08;
        case 0x340b0cu: goto label_340b0c;
        case 0x340b10u: goto label_340b10;
        case 0x340b14u: goto label_340b14;
        case 0x340b18u: goto label_340b18;
        case 0x340b1cu: goto label_340b1c;
        case 0x340b20u: goto label_340b20;
        case 0x340b24u: goto label_340b24;
        case 0x340b28u: goto label_340b28;
        case 0x340b2cu: goto label_340b2c;
        case 0x340b30u: goto label_340b30;
        case 0x340b34u: goto label_340b34;
        case 0x340b38u: goto label_340b38;
        case 0x340b3cu: goto label_340b3c;
        case 0x340b40u: goto label_340b40;
        case 0x340b44u: goto label_340b44;
        case 0x340b48u: goto label_340b48;
        case 0x340b4cu: goto label_340b4c;
        case 0x340b50u: goto label_340b50;
        case 0x340b54u: goto label_340b54;
        case 0x340b58u: goto label_340b58;
        case 0x340b5cu: goto label_340b5c;
        case 0x340b60u: goto label_340b60;
        case 0x340b64u: goto label_340b64;
        case 0x340b68u: goto label_340b68;
        case 0x340b6cu: goto label_340b6c;
        case 0x340b70u: goto label_340b70;
        case 0x340b74u: goto label_340b74;
        case 0x340b78u: goto label_340b78;
        case 0x340b7cu: goto label_340b7c;
        case 0x340b80u: goto label_340b80;
        case 0x340b84u: goto label_340b84;
        case 0x340b88u: goto label_340b88;
        case 0x340b8cu: goto label_340b8c;
        case 0x340b90u: goto label_340b90;
        case 0x340b94u: goto label_340b94;
        case 0x340b98u: goto label_340b98;
        case 0x340b9cu: goto label_340b9c;
        case 0x340ba0u: goto label_340ba0;
        case 0x340ba4u: goto label_340ba4;
        case 0x340ba8u: goto label_340ba8;
        case 0x340bacu: goto label_340bac;
        case 0x340bb0u: goto label_340bb0;
        case 0x340bb4u: goto label_340bb4;
        case 0x340bb8u: goto label_340bb8;
        case 0x340bbcu: goto label_340bbc;
        case 0x340bc0u: goto label_340bc0;
        case 0x340bc4u: goto label_340bc4;
        case 0x340bc8u: goto label_340bc8;
        case 0x340bccu: goto label_340bcc;
        case 0x340bd0u: goto label_340bd0;
        case 0x340bd4u: goto label_340bd4;
        case 0x340bd8u: goto label_340bd8;
        case 0x340bdcu: goto label_340bdc;
        case 0x340be0u: goto label_340be0;
        case 0x340be4u: goto label_340be4;
        case 0x340be8u: goto label_340be8;
        case 0x340becu: goto label_340bec;
        case 0x340bf0u: goto label_340bf0;
        case 0x340bf4u: goto label_340bf4;
        case 0x340bf8u: goto label_340bf8;
        case 0x340bfcu: goto label_340bfc;
        case 0x340c00u: goto label_340c00;
        case 0x340c04u: goto label_340c04;
        case 0x340c08u: goto label_340c08;
        case 0x340c0cu: goto label_340c0c;
        case 0x340c10u: goto label_340c10;
        case 0x340c14u: goto label_340c14;
        default: break;
    }

    ctx->pc = 0x340ad0u;

label_340ad0:
    // 0x340ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_340ad4:
    // 0x340ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340ad8:
    // 0x340ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340adc:
    // 0x340adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_340ae0:
    // 0x340ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_340ae4:
    // 0x340ae4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340ae8:
    // 0x340ae8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x340ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_340aec:
    // 0x340aec: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_340af0:
    if (ctx->pc == 0x340AF0u) {
        ctx->pc = 0x340AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AECu;
        // 0x340af0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AF4u;
        goto label_340af4;
    }
    ctx->pc = 0x340AECu;
    {
        const bool branch_taken_0x340aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340aec) {
            ctx->pc = 0x340AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340AECu;
            // 0x340af0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340B90u;
            goto label_340b90;
        }
    }
    ctx->pc = 0x340AF4u;
label_340af4:
    // 0x340af4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340af8:
    // 0x340af8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x340af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_340afc:
    // 0x340afc: 0x40f809  jalr        $v0
label_340b00:
    if (ctx->pc == 0x340B00u) {
        ctx->pc = 0x340B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AFCu;
        // 0x340b00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B04u;
        goto label_340b04;
    }
    ctx->pc = 0x340AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340B04u);
        ctx->pc = 0x340B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AFCu;
        // 0x340b00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AFCu, 0x340B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340B04u;
label_340b04:
    // 0x340b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x340b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340b08:
    // 0x340b08: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
label_340b0c:
    if (ctx->pc == 0x340B0Cu) {
        ctx->pc = 0x340B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B08u;
        // 0x340b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B10u;
        goto label_340b10;
    }
    ctx->pc = 0x340B08u;
    {
        const bool branch_taken_0x340b08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x340B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B08u;
        // 0x340b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b08) {
            ctx->pc = 0x340B8Cu;
            goto label_340b8c;
        }
    }
    ctx->pc = 0x340B10u;
label_340b10:
    // 0x340b10: 0xc0d0274  jal         func_3409D0
label_340b14:
    if (ctx->pc == 0x340B14u) {
        ctx->pc = 0x340B18u;
        goto label_340b18;
    }
    ctx->pc = 0x340B10u;
    SET_GPR_U32(ctx, 31, 0x340B18u);
    ctx->pc = 0x3409D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3409D0u, 0x340B10u, 0x340B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B18u;
label_340b18:
    // 0x340b18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340b1c:
    // 0x340b1c: 0x3443000c  ori         $v1, $v0, 0xC
    ctx->pc = 0x340b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
label_340b20:
    // 0x340b20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x340b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_340b24:
    // 0x340b24: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_340b28:
    if (ctx->pc == 0x340B28u) {
        ctx->pc = 0x340B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B24u;
        // 0x340b28: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B2Cu;
        goto label_340b2c;
    }
    ctx->pc = 0x340B24u;
    {
        const bool branch_taken_0x340b24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x340B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B24u;
        // 0x340b28: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b24) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340B2Cu;
label_340b2c:
    // 0x340b2c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x340b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_340b30:
    // 0x340b30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x340b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340b34:
    // 0x340b34: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x340b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_340b38:
    // 0x340b38: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x340b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_340b3c:
    // 0x340b3c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x340b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340b40:
    // 0x340b40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x340b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_340b44:
    // 0x340b44: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x340b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_340b48:
    // 0x340b48: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x340b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_340b4c:
    // 0x340b4c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x340b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_340b50:
    // 0x340b50: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x340b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_340b54:
    // 0x340b54: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x340b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_340b58:
    // 0x340b58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_340b5c:
    if (ctx->pc == 0x340B5Cu) {
        ctx->pc = 0x340B60u;
        goto label_340b60;
    }
    ctx->pc = 0x340B58u;
    {
        const bool branch_taken_0x340b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340b58) {
            ctx->pc = 0x340B68u;
            goto label_340b68;
        }
    }
    ctx->pc = 0x340B60u;
label_340b60:
    // 0x340b60: 0x1000000a  b           . + 4 + (0xA << 2)
label_340b64:
    if (ctx->pc == 0x340B64u) {
        ctx->pc = 0x340B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B60u;
        // 0x340b64: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B68u;
        goto label_340b68;
    }
    ctx->pc = 0x340B60u;
    {
        const bool branch_taken_0x340b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B60u;
        // 0x340b64: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b60) {
            ctx->pc = 0x340B8Cu;
            goto label_340b8c;
        }
    }
    ctx->pc = 0x340B68u;
label_340b68:
    // 0x340b68: 0x40f809  jalr        $v0
label_340b6c:
    if (ctx->pc == 0x340B6Cu) {
        ctx->pc = 0x340B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B68u;
        // 0x340b6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B70u;
        goto label_340b70;
    }
    ctx->pc = 0x340B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340B70u);
        ctx->pc = 0x340B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B68u;
        // 0x340b6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340B68u, 0x340B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340B70u;
label_340b70:
    // 0x340b70: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_340b74:
    if (ctx->pc == 0x340B74u) {
        ctx->pc = 0x340B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B70u;
        // 0x340b74: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B78u;
        goto label_340b78;
    }
    ctx->pc = 0x340B70u;
    {
        const bool branch_taken_0x340b70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x340B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B70u;
        // 0x340b74: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b70) {
            ctx->pc = 0x340B80u;
            goto label_340b80;
        }
    }
    ctx->pc = 0x340B78u;
label_340b78:
    // 0x340b78: 0x10000003  b           . + 4 + (0x3 << 2)
label_340b7c:
    if (ctx->pc == 0x340B7Cu) {
        ctx->pc = 0x340B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B78u;
        // 0x340b7c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B80u;
        goto label_340b80;
    }
    ctx->pc = 0x340B78u;
    {
        const bool branch_taken_0x340b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B78u;
        // 0x340b7c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b78) {
            ctx->pc = 0x340B88u;
            goto label_340b88;
        }
    }
    ctx->pc = 0x340B80u;
label_340b80:
    // 0x340b80: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x340b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_340b84:
    // 0x340b84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_340b88:
    // 0x340b88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_340b8c:
    // 0x340b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340b90:
    // 0x340b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340b94:
    // 0x340b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_340b98:
    // 0x340b98: 0x3e00008  jr          $ra
label_340b9c:
    if (ctx->pc == 0x340B9Cu) {
        ctx->pc = 0x340B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B98u;
        // 0x340b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340BA0u;
        goto label_340ba0;
    }
    ctx->pc = 0x340B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B98u;
        // 0x340b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340BA0u;
label_340ba0:
    // 0x340ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340ba4:
    // 0x340ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340ba8:
    // 0x340ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340bac:
    // 0x340bac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_340bb0:
    // 0x340bb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340bb4:
    // 0x340bb4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x340bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_340bb8:
    // 0x340bb8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_340bbc:
    if (ctx->pc == 0x340BBCu) {
        ctx->pc = 0x340BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BB8u;
        // 0x340bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340BC0u;
        goto label_340bc0;
    }
    ctx->pc = 0x340BB8u;
    {
        const bool branch_taken_0x340bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340bb8) {
            ctx->pc = 0x340BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340BB8u;
            // 0x340bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C0Cu;
            goto label_340c0c;
        }
    }
    ctx->pc = 0x340BC0u;
label_340bc0:
    // 0x340bc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340bc4:
    // 0x340bc4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_340bc8:
    // 0x340bc8: 0x40f809  jalr        $v0
label_340bcc:
    if (ctx->pc == 0x340BCCu) {
        ctx->pc = 0x340BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BC8u;
        // 0x340bcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340BD0u;
        goto label_340bd0;
    }
    ctx->pc = 0x340BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340BD0u);
        ctx->pc = 0x340BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BC8u;
        // 0x340bcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340BC8u, 0x340BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340BD0u;
label_340bd0:
    // 0x340bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340bd4:
    // 0x340bd4: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_340bd8:
    if (ctx->pc == 0x340BD8u) {
        ctx->pc = 0x340BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BD4u;
        // 0x340bd8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340BDCu;
        goto label_340bdc;
    }
    ctx->pc = 0x340BD4u;
    {
        const bool branch_taken_0x340bd4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x340BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BD4u;
        // 0x340bd8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bd4) {
            ctx->pc = 0x340C08u;
            goto label_340c08;
        }
    }
    ctx->pc = 0x340BDCu;
label_340bdc:
    // 0x340bdc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x340bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340be0:
    // 0x340be0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x340be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340be4:
    // 0x340be4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_340be8:
    if (ctx->pc == 0x340BE8u) {
        ctx->pc = 0x340BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BE4u;
        // 0x340be8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340BECu;
        goto label_340bec;
    }
    ctx->pc = 0x340BE4u;
    {
        const bool branch_taken_0x340be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BE4u;
        // 0x340be8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340be4) {
            ctx->pc = 0x340BF8u;
            goto label_340bf8;
        }
    }
    ctx->pc = 0x340BECu;
label_340bec:
    // 0x340bec: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x340becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_340bf0:
    // 0x340bf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x340bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340bf4:
    // 0x340bf4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_340bf8:
    // 0x340bf8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340bfc:
    // 0x340bfc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x340bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_340c00:
    // 0x340c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_340c04:
    // 0x340c04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_340c08:
    // 0x340c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340c0c:
    // 0x340c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340c10:
    // 0x340c10: 0x3e00008  jr          $ra
label_340c14:
    if (ctx->pc == 0x340C14u) {
        ctx->pc = 0x340C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C10u;
        // 0x340c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C18u;
        goto label_fallthrough_0x340c10;
    }
    ctx->pc = 0x340C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C10u;
        // 0x340c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340c10:
    ctx->pc = 0x340C18u;
}
