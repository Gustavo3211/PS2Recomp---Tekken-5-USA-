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

// Function: sub_0026BC90
// Address: 0x26bc90 - 0x26bd40
void sub_0026BC90_0x26bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC90_0x26bc90");
#endif

    switch (ctx->pc) {
        case 0x26bc90u: goto label_26bc90;
        case 0x26bc94u: goto label_26bc94;
        case 0x26bc98u: goto label_26bc98;
        case 0x26bc9cu: goto label_26bc9c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bca4u: goto label_26bca4;
        case 0x26bca8u: goto label_26bca8;
        case 0x26bcacu: goto label_26bcac;
        case 0x26bcb0u: goto label_26bcb0;
        case 0x26bcb4u: goto label_26bcb4;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcc0u: goto label_26bcc0;
        case 0x26bcc4u: goto label_26bcc4;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd0u: goto label_26bcd0;
        case 0x26bcd4u: goto label_26bcd4;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bcdcu: goto label_26bcdc;
        case 0x26bce0u: goto label_26bce0;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bce8u: goto label_26bce8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcf0u: goto label_26bcf0;
        case 0x26bcf4u: goto label_26bcf4;
        case 0x26bcf8u: goto label_26bcf8;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd04u: goto label_26bd04;
        case 0x26bd08u: goto label_26bd08;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd10u: goto label_26bd10;
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd18u: goto label_26bd18;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd20u: goto label_26bd20;
        case 0x26bd24u: goto label_26bd24;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd2cu: goto label_26bd2c;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd34u: goto label_26bd34;
        case 0x26bd38u: goto label_26bd38;
        case 0x26bd3cu: goto label_26bd3c;
        default: break;
    }

    ctx->pc = 0x26bc90u;

label_26bc90:
    // 0x26bc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26bc94:
    // 0x26bc94: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26bc98:
    // 0x26bc98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26bc9c:
    // 0x26bc9c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x26bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_26bca0:
    // 0x26bca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26bca4:
    // 0x26bca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bca8:
    // 0x26bca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_26bcac:
    // 0x26bcac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26bcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bcb0:
    // 0x26bcb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_26bcb4:
    // 0x26bcb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26bcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bcb8:
    // 0x26bcb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_26bcbc:
    // 0x26bcbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_26bcc0:
    // 0x26bcc0: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x26bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_26bcc4:
    // 0x26bcc4: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
label_26bcc8:
    if (ctx->pc == 0x26BCC8u) {
        ctx->pc = 0x26BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC4u;
        // 0x26bcc8: 0x2450f718  addiu       $s0, $v0, -0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCCCu;
        goto label_26bccc;
    }
    ctx->pc = 0x26BCC4u;
    {
        const bool branch_taken_0x26bcc4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC4u;
        // 0x26bcc8: 0x2450f718  addiu       $s0, $v0, -0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcc4) {
            ctx->pc = 0x26BD10u;
            goto label_26bd10;
        }
    }
    ctx->pc = 0x26BCCCu;
label_26bccc:
    // 0x26bccc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26bcd0:
    // 0x26bcd0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x26bcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26bcd4:
    // 0x26bcd4: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
label_26bcd8:
    if (ctx->pc == 0x26BCD8u) {
        ctx->pc = 0x26BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCD4u;
        // 0x26bcd8: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCDCu;
        goto label_26bcdc;
    }
    ctx->pc = 0x26BCD4u;
    {
        const bool branch_taken_0x26bcd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26bcd4) {
            ctx->pc = 0x26BCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BCD4u;
            // 0x26bcd8: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BD00u;
            goto label_26bd00;
        }
    }
    ctx->pc = 0x26BCDCu;
label_26bcdc:
    // 0x26bcdc: 0x260f809  jalr        $s3
label_26bce0:
    if (ctx->pc == 0x26BCE0u) {
        ctx->pc = 0x26BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCDCu;
        // 0x26bce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCE4u;
        goto label_26bce4;
    }
    ctx->pc = 0x26BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x26BCE4u);
        ctx->pc = 0x26BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCDCu;
        // 0x26bce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BCDCu, 0x26BCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BCE4u;
label_26bce4:
    // 0x26bce4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26bce8:
    if (ctx->pc == 0x26BCE8u) {
        ctx->pc = 0x26BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCE4u;
        // 0x26bce8: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCECu;
        goto label_26bcec;
    }
    ctx->pc = 0x26BCE4u;
    {
        const bool branch_taken_0x26bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCE4u;
        // 0x26bce8: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bce4) {
            ctx->pc = 0x26BCFCu;
            goto label_26bcfc;
        }
    }
    ctx->pc = 0x26BCECu;
label_26bcec:
    // 0x26bcec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x26bcecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26bcf0:
    // 0x26bcf0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x26bcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26bcf4:
    // 0x26bcf4: 0xa6140000  sh          $s4, 0x0($s0)
    ctx->pc = 0x26bcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
label_26bcf8:
    // 0x26bcf8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x26bcf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_26bcfc:
    // 0x26bcfc: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x26bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_26bd00:
    // 0x26bd00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26bd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26bd04:
    // 0x26bd04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26bd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26bd08:
    // 0x26bd08: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_26bd0c:
    if (ctx->pc == 0x26BD0Cu) {
        ctx->pc = 0x26BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD08u;
        // 0x26bd0c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD10u;
        goto label_26bd10;
    }
    ctx->pc = 0x26BD08u;
    {
        const bool branch_taken_0x26bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD08u;
        // 0x26bd0c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd08) {
            ctx->pc = 0x26BCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bcd0;
        }
    }
    ctx->pc = 0x26BD10u;
label_26bd10:
    // 0x26bd10: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
label_26bd14:
    // 0x26bd14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26bd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bd18:
    // 0x26bd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bd1c:
    // 0x26bd1c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_26bd20:
    // 0x26bd20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26bd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26bd24:
    // 0x26bd24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26bd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26bd28:
    // 0x26bd28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26bd28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26bd2c:
    // 0x26bd2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26bd2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26bd30:
    // 0x26bd30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_26bd34:
    // 0x26bd34: 0xaca300a8  sw          $v1, 0xA8($a1)
    ctx->pc = 0x26bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 3));
label_26bd38:
    // 0x26bd38: 0x3e00008  jr          $ra
label_26bd3c:
    if (ctx->pc == 0x26BD3Cu) {
        ctx->pc = 0x26BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD38u;
        // 0x26bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD40u;
        goto label_fallthrough_0x26bd38;
    }
    ctx->pc = 0x26BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD38u;
        // 0x26bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26bd38:
    ctx->pc = 0x26BD40u;
}
