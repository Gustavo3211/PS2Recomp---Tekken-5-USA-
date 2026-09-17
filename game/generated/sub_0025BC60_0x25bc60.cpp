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

// Function: sub_0025BC60
// Address: 0x25bc60 - 0x25bec8
void sub_0025BC60_0x25bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BC60_0x25bc60");
#endif

    switch (ctx->pc) {
        case 0x25bc78u: goto label_25bc78;
        case 0x25bce4u: goto label_25bce4;
        case 0x25be38u: goto label_25be38;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be88u: goto label_25be88;
        case 0x25beb0u: goto label_25beb0;
        default: break;
    }

    ctx->pc = 0x25bc60u;

    // 0x25bc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25bc68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25bc6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25bc70: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x25BC70u;
    SET_GPR_U32(ctx, 31, 0x25BC78u);
    ctx->pc = 0x25BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC70u;
    // 0x25bc74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x25BC70u, 0x25BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC78u;
label_25bc78:
    // 0x25bc78: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x25BC78u;
    {
        const bool branch_taken_0x25bc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bc78) {
            ctx->pc = 0x25BC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC78u;
            // 0x25bc7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BEB4u;
            goto label_25beb4;
        }
    }
    ctx->pc = 0x25BC80u;
    // 0x25bc80: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x25bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x25bc84: 0x24c323b0  addiu       $v1, $a2, 0x23B0
    ctx->pc = 0x25bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 9136));
    // 0x25bc88: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x25bc8c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x25bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x25bc90: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BC90u;
    {
        const bool branch_taken_0x25bc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC90u;
        // 0x25bc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc90) {
            ctx->pc = 0x25BCA4u;
            goto label_25bca4;
        }
    }
    ctx->pc = 0x25BC98u;
    // 0x25bc98: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x25bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x25bc9c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25BC9Cu;
    {
        const bool branch_taken_0x25bc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bc9c) {
            ctx->pc = 0x25BCA8u;
            goto label_25bca8;
        }
    }
    ctx->pc = 0x25BCA4u;
label_25bca4:
    // 0x25bca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bca8:
    // 0x25bca8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25BCA8u;
    {
        const bool branch_taken_0x25bca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCA8u;
        // 0x25bcac: 0x24c223b0  addiu       $v0, $a2, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bca8) {
            ctx->pc = 0x25BCD0u;
            goto label_25bcd0;
        }
    }
    ctx->pc = 0x25BCB0u;
    // 0x25bcb0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25bcb4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25bcb8: 0x5060007e  beql        $v1, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x25BCB8u;
    {
        const bool branch_taken_0x25bcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcb8) {
            ctx->pc = 0x25BCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BCB8u;
            // 0x25bcbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BEB4u;
            goto label_25beb4;
        }
    }
    ctx->pc = 0x25BCC0u;
    // 0x25bcc0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25bcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bcc8: 0x5062007a  beql        $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x25BCC8u;
    {
        const bool branch_taken_0x25bcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25bcc8) {
            ctx->pc = 0x25BCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BCC8u;
            // 0x25bccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BEB4u;
            goto label_25beb4;
        }
    }
    ctx->pc = 0x25BCD0u;
label_25bcd0:
    // 0x25bcd0: 0x8f82974c  lw          $v0, -0x68B4($gp)
    ctx->pc = 0x25bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940492)));
    // 0x25bcd4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BCD4u;
    {
        const bool branch_taken_0x25bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcd4) {
            ctx->pc = 0x25BCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BCD4u;
            // 0x25bcd8: 0xa2000204  sb          $zero, 0x204($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCF0u;
            goto label_25bcf0;
        }
    }
    ctx->pc = 0x25BCDCu;
    // 0x25bcdc: 0xc096efc  jal         func_25BBF0
    ctx->pc = 0x25BCDCu;
    SET_GPR_U32(ctx, 31, 0x25BCE4u);
    ctx->pc = 0x25BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCDCu;
    // 0x25bce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBF0u, 0x25BCDCu, 0x25BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCE4u;
label_25bce4:
    // 0x25bce4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x25BCE4u;
    {
        const bool branch_taken_0x25bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCE4u;
        // 0x25bce8: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bce4) {
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BCECu;
    // 0x25bcec: 0x0  nop
    ctx->pc = 0x25bcecu;
    // NOP
label_25bcf0:
    // 0x25bcf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcf4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x25bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x25bcf8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x25bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x25bcfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25bd00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD00u;
    {
        const bool branch_taken_0x25bd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD00u;
        // 0x25bd04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd00) {
            ctx->pc = 0x25BD14u;
            goto label_25bd14;
        }
    }
    ctx->pc = 0x25BD08u;
    // 0x25bd08: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x25bd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x25bd0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BD0Cu;
    {
        const bool branch_taken_0x25bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd0c) {
            ctx->pc = 0x25BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD0Cu;
            // 0x25bd10: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD1Cu;
            goto label_25bd1c;
        }
    }
    ctx->pc = 0x25BD14u;
label_25bd14:
    // 0x25bd14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bd18: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x25bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_25bd1c:
    // 0x25bd1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25bd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25bd20: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x25BD20u;
    {
        const bool branch_taken_0x25bd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bd20) {
            ctx->pc = 0x25BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD20u;
            // 0x25bd24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD7Cu;
            goto label_25bd7c;
        }
    }
    ctx->pc = 0x25BD28u;
    // 0x25bd28: 0x9202030c  lbu         $v0, 0x30C($s0)
    ctx->pc = 0x25bd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x25bd2c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x25BD2Cu;
    {
        const bool branch_taken_0x25bd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bd2c) {
            ctx->pc = 0x25BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD2Cu;
            // 0x25bd30: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD7Cu;
            goto label_25bd7c;
        }
    }
    ctx->pc = 0x25BD34u;
    // 0x25bd34: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x25bd34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x25bd38: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BD38u;
    {
        const bool branch_taken_0x25bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd38) {
            ctx->pc = 0x25BD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD38u;
            // 0x25bd3c: 0x86020156  lh          $v0, 0x156($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD58u;
            goto label_25bd58;
        }
    }
    ctx->pc = 0x25BD40u;
    // 0x25bd40: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x25bd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x25bd44: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x25bd44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x25bd48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25bd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25bd4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25BD4Cu;
    {
        const bool branch_taken_0x25bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd4c) {
            ctx->pc = 0x25BD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD4Cu;
            // 0x25bd50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD7Cu;
            goto label_25bd7c;
        }
    }
    ctx->pc = 0x25BD54u;
    // 0x25bd54: 0x86020156  lh          $v0, 0x156($s0)
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
label_25bd58:
    // 0x25bd58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25BD58u;
    {
        const bool branch_taken_0x25bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bd58) {
            ctx->pc = 0x25BD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD58u;
            // 0x25bd5c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD7Cu;
            goto label_25bd7c;
        }
    }
    ctx->pc = 0x25BD60u;
    // 0x25bd60: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x25bd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x25bd64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BD64u;
    {
        const bool branch_taken_0x25bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd64) {
            ctx->pc = 0x25BD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD64u;
            // 0x25bd68: 0x920201ef  lbu         $v0, 0x1EF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD80u;
            goto label_25bd80;
        }
    }
    ctx->pc = 0x25BD6Cu;
    // 0x25bd6c: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x25bd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x25bd70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BD70u;
    {
        const bool branch_taken_0x25bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd70) {
            ctx->pc = 0x25BD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD70u;
            // 0x25bd74: 0x920201ef  lbu         $v0, 0x1EF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD80u;
            goto label_25bd80;
        }
    }
    ctx->pc = 0x25BD78u;
    // 0x25bd78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bd7c:
    // 0x25bd7c: 0x920201ef  lbu         $v0, 0x1EF($s0)
    ctx->pc = 0x25bd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
label_25bd80:
    // 0x25bd80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BD80u;
    {
        const bool branch_taken_0x25bd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD80u;
        // 0x25bd84: 0x8e0307c8  lw          $v1, 0x7C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd80) {
            ctx->pc = 0x25BD90u;
            goto label_25bd90;
        }
    }
    ctx->pc = 0x25BD88u;
    // 0x25bd88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25bd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bd8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bd90:
    // 0x25bd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bd94: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25BD94u;
    {
        const bool branch_taken_0x25bd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD94u;
        // 0x25bd98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd94) {
            ctx->pc = 0x25BDC0u;
            goto label_25bdc0;
        }
    }
    ctx->pc = 0x25BD9Cu;
    // 0x25bd9c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25BD9Cu;
    {
        const bool branch_taken_0x25bd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD9Cu;
        // 0x25bda0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd9c) {
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BDA4u;
    // 0x25bda4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25BDA4u;
    {
        const bool branch_taken_0x25bda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDA4u;
        // 0x25bda8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bda4) {
            ctx->pc = 0x25BDE0u;
            goto label_25bde0;
        }
    }
    ctx->pc = 0x25BDACu;
    // 0x25bdac: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BDACu;
    {
        const bool branch_taken_0x25bdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25bdac) {
            ctx->pc = 0x25BDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDACu;
            // 0x25bdb0: 0x8e020804  lw          $v0, 0x804($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE00u;
            goto label_25be00;
        }
    }
    ctx->pc = 0x25BDB4u;
    // 0x25bdb4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25BDB4u;
    {
        const bool branch_taken_0x25bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdb4) {
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BDBCu;
    // 0x25bdbc: 0x0  nop
    ctx->pc = 0x25bdbcu;
    // NOP
label_25bdc0:
    // 0x25bdc0: 0x8e020804  lw          $v0, 0x804($s0)
    ctx->pc = 0x25bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x25bdc4: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25BDC4u;
    {
        const bool branch_taken_0x25bdc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25bdc4) {
            ctx->pc = 0x25BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDC4u;
            // 0x25bdc8: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BDCCu;
    // 0x25bdcc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25BDCCu;
    {
        const bool branch_taken_0x25bdcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdcc) {
            ctx->pc = 0x25BE30u;
            goto label_25be30;
        }
    }
    ctx->pc = 0x25BDD4u;
    // 0x25bdd4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25BDD4u;
    {
        const bool branch_taken_0x25bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDD4u;
        // 0x25bdd8: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdd4) {
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BDDCu;
    // 0x25bddc: 0x0  nop
    ctx->pc = 0x25bddcu;
    // NOP
label_25bde0:
    // 0x25bde0: 0x8e020804  lw          $v0, 0x804($s0)
    ctx->pc = 0x25bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x25bde4: 0x8e0307fc  lw          $v1, 0x7FC($s0)
    ctx->pc = 0x25bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x25bde8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25bde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25bdec: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x25BDECu;
    {
        const bool branch_taken_0x25bdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdec) {
            ctx->pc = 0x25BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDECu;
            // 0x25bdf0: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BDF4u;
    // 0x25bdf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25BDF4u;
    {
        const bool branch_taken_0x25bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdf4) {
            ctx->pc = 0x25BE1Cu;
            goto label_25be1c;
        }
    }
    ctx->pc = 0x25BDFCu;
    // 0x25bdfc: 0x0  nop
    ctx->pc = 0x25bdfcu;
    // NOP
label_25be00:
    // 0x25be00: 0x8e0307fc  lw          $v1, 0x7FC($s0)
    ctx->pc = 0x25be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x25be04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25be04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25be08: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BE08u;
    {
        const bool branch_taken_0x25be08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be08) {
            ctx->pc = 0x25BE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE08u;
            // 0x25be0c: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BE10u;
    // 0x25be10: 0x920201f7  lbu         $v0, 0x1F7($s0)
    ctx->pc = 0x25be10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 503)));
    // 0x25be14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BE14u;
    {
        const bool branch_taken_0x25be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be14) {
            ctx->pc = 0x25BE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE14u;
            // 0x25be18: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BE1Cu;
label_25be1c:
    // 0x25be1c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25BE1Cu;
    {
        const bool branch_taken_0x25be1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be1c) {
            ctx->pc = 0x25BE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE1Cu;
            // 0x25be20: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BE24u;
label_25be24:
    // 0x25be24: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BE24u;
    {
        const bool branch_taken_0x25be24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be24) {
            ctx->pc = 0x25BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE24u;
            // 0x25be28: 0x8e0307c8  lw          $v1, 0x7C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE44u;
            goto label_25be44;
        }
    }
    ctx->pc = 0x25BE2Cu;
    // 0x25be2c: 0x0  nop
    ctx->pc = 0x25be2cu;
    // NOP
label_25be30:
    // 0x25be30: 0xc0a059c  jal         func_281670
    ctx->pc = 0x25BE30u;
    SET_GPR_U32(ctx, 31, 0x25BE38u);
    ctx->pc = 0x25BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE30u;
    // 0x25be34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281670u, 0x25BE30u, 0x25BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE38u;
label_25be38:
    // 0x25be38: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BE38u;
    {
        const bool branch_taken_0x25be38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be38) {
            ctx->pc = 0x25BE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE38u;
            // 0x25be3c: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE40u;
    // 0x25be40: 0x8e0307c8  lw          $v1, 0x7C8($s0)
    ctx->pc = 0x25be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
label_25be44:
    // 0x25be44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25be48: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25BE48u;
    {
        const bool branch_taken_0x25be48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25be48) {
            ctx->pc = 0x25BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE48u;
            // 0x25be4c: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE50u;
    // 0x25be50: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25BE50u;
    {
        const bool branch_taken_0x25be50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be50) {
            ctx->pc = 0x25BE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE50u;
            // 0x25be54: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE58u;
    // 0x25be58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25be5c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25BE5Cu;
    {
        const bool branch_taken_0x25be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25be5c) {
            ctx->pc = 0x25BE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE5Cu;
            // 0x25be60: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE64u;
    // 0x25be64: 0xc0a05da  jal         func_281768
    ctx->pc = 0x25BE64u;
    SET_GPR_U32(ctx, 31, 0x25BE6Cu);
    ctx->pc = 0x25BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE64u;
    // 0x25be68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281768u, 0x25BE64u, 0x25BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE6Cu;
label_25be6c:
    // 0x25be6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BE6Cu;
    {
        const bool branch_taken_0x25be6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be6c) {
            ctx->pc = 0x25BE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE6Cu;
            // 0x25be70: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE74u;
    // 0x25be74: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x25be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x25be78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE78u;
    {
        const bool branch_taken_0x25be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be78) {
            ctx->pc = 0x25BE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE78u;
            // 0x25be7c: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE8Cu;
            goto label_25be8c;
        }
    }
    ctx->pc = 0x25BE80u;
    // 0x25be80: 0xc0a062e  jal         func_2818B8
    ctx->pc = 0x25BE80u;
    SET_GPR_U32(ctx, 31, 0x25BE88u);
    ctx->pc = 0x25BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE80u;
    // 0x25be84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818B8u, 0x25BE80u, 0x25BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE88u;
label_25be88:
    // 0x25be88: 0x92020204  lbu         $v0, 0x204($s0)
    ctx->pc = 0x25be88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
label_25be8c:
    // 0x25be8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BE8Cu;
    {
        const bool branch_taken_0x25be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE8Cu;
        // 0x25be90: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be8c) {
            ctx->pc = 0x25BEA8u;
            goto label_25bea8;
        }
    }
    ctx->pc = 0x25BE94u;
    // 0x25be94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25be98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25be9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bea0: 0x8096fb2  j           func_25BEC8
    ctx->pc = 0x25BEA0u;
    ctx->pc = 0x25BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEA0u;
    // 0x25bea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEC8u;
    sub_0025BEC8_0x25bec8(rdram, ctx, runtime); return;
    ctx->pc = 0x25BEA8u;
label_25bea8:
    // 0x25bea8: 0xc0a07ac  jal         func_281EB0
    ctx->pc = 0x25BEA8u;
    SET_GPR_U32(ctx, 31, 0x25BEB0u);
    ctx->pc = 0x25BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEA8u;
    // 0x25beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281EB0u, 0x25BEA8u, 0x25BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEB0u;
label_25beb0:
    // 0x25beb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25beb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25beb4:
    // 0x25beb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25beb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25beb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x25BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEBCu;
        // 0x25bec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BEC4u;
    // 0x25bec4: 0x0  nop
    ctx->pc = 0x25bec4u;
    // NOP
    ctx->pc = 0x25bec8u;
}
