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

// Function: sub_002DBDA8
// Address: 0x2dbda8 - 0x2dbe88
void sub_002DBDA8_0x2dbda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBDA8_0x2dbda8");
#endif

    switch (ctx->pc) {
        case 0x2dbddcu: goto label_2dbddc;
        case 0x2dbe14u: goto label_2dbe14;
        case 0x2dbe50u: goto label_2dbe50;
        case 0x2dbe68u: goto label_2dbe68;
        default: break;
    }

    ctx->pc = 0x2dbda8u;

    // 0x2dbda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbdac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbdb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dbdb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dbdb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbdbc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dbdc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbdc4: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2dbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2dbdc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbdc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbdd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dbdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dbdd4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DBDD4u;
    SET_GPR_U32(ctx, 31, 0x2DBDDCu);
    ctx->pc = 0x2DBDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDD4u;
    // 0x2dbdd8: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DBDD4u, 0x2DBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDDCu;
label_2dbddc:
    // 0x2dbddc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbde0: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBDE0u;
    {
        const bool branch_taken_0x2dbde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dbde0) {
            ctx->pc = 0x2DBDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBDE0u;
            // 0x2dbde4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE74u;
            goto label_2dbe74;
        }
    }
    ctx->pc = 0x2DBDE8u;
    // 0x2dbde8: 0x109040  sll         $s2, $s0, 1
    ctx->pc = 0x2dbde8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dbdec: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x2dbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2dbdf0: 0x8442cb70  lh          $v0, -0x3490($v0)
    ctx->pc = 0x2dbdf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x2dbdf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DBDF4u;
    {
        const bool branch_taken_0x2dbdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDF4u;
        // 0x2dbdf8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdf4) {
            ctx->pc = 0x2DBE70u;
            goto label_2dbe70;
        }
    }
    ctx->pc = 0x2DBDFCu;
    // 0x2dbdfc: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2dbdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2dbe00: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2dbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2dbe04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBE04u;
    {
        const bool branch_taken_0x2dbe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE04u;
        // 0x2dbe08: 0x2445f2f0  addiu       $a1, $v0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe04) {
            ctx->pc = 0x2DBE20u;
            goto label_2dbe20;
        }
    }
    ctx->pc = 0x2DBE0Cu;
    // 0x2dbe0c: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DBE0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE14u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DBE0Cu, 0x2DBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE14u;
label_2dbe14:
    // 0x2dbe14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBE14u;
    {
        const bool branch_taken_0x2dbe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE14u;
        // 0x2dbe18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe14) {
            ctx->pc = 0x2DBE24u;
            goto label_2dbe24;
        }
    }
    ctx->pc = 0x2DBE1Cu;
    // 0x2dbe1c: 0x0  nop
    ctx->pc = 0x2dbe1cu;
    // NOP
label_2dbe20:
    // 0x2dbe20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe24:
    // 0x2dbe24: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBE24u;
    {
        const bool branch_taken_0x2dbe24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe24) {
            ctx->pc = 0x2DBE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE24u;
            // 0x2dbe28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE74u;
            goto label_2dbe74;
        }
    }
    ctx->pc = 0x2DBE2Cu;
    // 0x2dbe2c: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x2dbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2dbe30: 0x9442cb70  lhu         $v0, -0x3490($v0)
    ctx->pc = 0x2dbe30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x2dbe34: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2dbe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2dbe38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBE38u;
    {
        const bool branch_taken_0x2dbe38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE38u;
        // 0x2dbe3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe38) {
            ctx->pc = 0x2DBE58u;
            goto label_2dbe58;
        }
    }
    ctx->pc = 0x2DBE40u;
    // 0x2dbe40: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2dbe40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2dbe44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dbe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe48: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x2DBE48u;
    SET_GPR_U32(ctx, 31, 0x2DBE50u);
    ctx->pc = 0x2DBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE48u;
    // 0x2dbe4c: 0x24e7f378  addiu       $a3, $a3, -0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x2DBE48u, 0x2DBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE50u;
label_2dbe50:
    // 0x2dbe50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBE50u;
    {
        const bool branch_taken_0x2dbe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe50) {
            ctx->pc = 0x2DBE68u;
            goto label_2dbe68;
        }
    }
    ctx->pc = 0x2DBE58u;
label_2dbe58:
    // 0x2dbe58: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2dbe58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2dbe5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dbe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe60: 0xc0b6d2c  jal         func_2DB4B0
    ctx->pc = 0x2DBE60u;
    SET_GPR_U32(ctx, 31, 0x2DBE68u);
    ctx->pc = 0x2DBE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE60u;
    // 0x2dbe64: 0x24e7f378  addiu       $a3, $a3, -0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB4B0u, 0x2DBE60u, 0x2DBE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE68u;
label_2dbe68:
    // 0x2dbe68: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x2dbe68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2dbe6c: 0xa420cb70  sh          $zero, -0x3490($at)
    ctx->pc = 0x2dbe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953840), (uint16_t)GPR_U32(ctx, 0));
label_2dbe70:
    // 0x2dbe70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbe70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbe74:
    // 0x2dbe74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbe78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbe78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbe7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dbe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbe80: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE80u;
        // 0x2dbe84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE88u;
}
