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

// Function: sub_002FBBA0
// Address: 0x2fbba0 - 0x2fbca0
void sub_002FBBA0_0x2fbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBBA0_0x2fbba0");
#endif

    switch (ctx->pc) {
        case 0x2fbbd4u: goto label_2fbbd4;
        case 0x2fbbf8u: goto label_2fbbf8;
        case 0x2fbc10u: goto label_2fbc10;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc50u: goto label_2fbc50;
        case 0x2fbc60u: goto label_2fbc60;
        case 0x2fbc6cu: goto label_2fbc6c;
        default: break;
    }

    ctx->pc = 0x2fbba0u;

    // 0x2fbba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fbba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbbac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fbbb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fbbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbbbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fbbc0: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x2FBBC0u;
    {
        const bool branch_taken_0x2fbbc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBC0u;
        // 0x2fbbc4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbc0) {
            ctx->pc = 0x2FBC80u;
            goto label_2fbc80;
        }
    }
    ctx->pc = 0x2FBBC8u;
    // 0x2fbbc8: 0xae260014  sw          $a2, 0x14($s1)
    ctx->pc = 0x2fbbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 6));
    // 0x2fbbcc: 0xc0bf382  jal         func_2FCE08
    ctx->pc = 0x2FBBCCu;
    SET_GPR_U32(ctx, 31, 0x2FBBD4u);
    ctx->pc = 0x2FBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBBCCu;
    // 0x2fbbd0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCE08u, 0x2FBBCCu, 0x2FBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBBD4u;
label_2fbbd4:
    // 0x2fbbd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fbbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbbdc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBBDCu;
    {
        const bool branch_taken_0x2fbbdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBDCu;
        // 0x2fbbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbdc) {
            ctx->pc = 0x2FBBF0u;
            goto label_2fbbf0;
        }
    }
    ctx->pc = 0x2FBBE4u;
    // 0x2fbbe4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FBBE4u;
    {
        const bool branch_taken_0x2fbbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBE4u;
        // 0x2fbbe8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbe4) {
            ctx->pc = 0x2FBC80u;
            goto label_2fbc80;
        }
    }
    ctx->pc = 0x2FBBECu;
    // 0x2fbbec: 0x0  nop
    ctx->pc = 0x2fbbecu;
    // NOP
label_2fbbf0:
    // 0x2fbbf0: 0xc0bef28  jal         func_2FBCA0
    ctx->pc = 0x2FBBF0u;
    SET_GPR_U32(ctx, 31, 0x2FBBF8u);
    ctx->pc = 0x2FBBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBBF0u;
    // 0x2fbbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCA0u, 0x2FBBF0u, 0x2FBBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBBF8u;
label_2fbbf8:
    // 0x2fbbf8: 0x14500021  bne         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FBBF8u;
    {
        const bool branch_taken_0x2fbbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF8u;
        // 0x2fbbfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbf8) {
            ctx->pc = 0x2FBC80u;
            goto label_2fbc80;
        }
    }
    ctx->pc = 0x2FBC00u;
    // 0x2fbc00: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbc00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbc04: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FBC04u;
    {
        const bool branch_taken_0x2fbc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC04u;
        // 0x2fbc08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc04) {
            ctx->pc = 0x2FBC7Cu;
            goto label_2fbc7c;
        }
    }
    ctx->pc = 0x2FBC0Cu;
    // 0x2fbc0c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2fbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2fbc10:
    // 0x2fbc10: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x2fbc10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2fbc14: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fbc18: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2fbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fbc1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FBC1Cu;
    {
        const bool branch_taken_0x2fbc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC1Cu;
        // 0x2fbc20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc1c) {
            ctx->pc = 0x2FBC58u;
            goto label_2fbc58;
        }
    }
    ctx->pc = 0x2FBC24u;
    // 0x2fbc24: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2fbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2fbc28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fbc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fbc2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBC2Cu;
    {
        const bool branch_taken_0x2fbc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc2c) {
            ctx->pc = 0x2FBC48u;
            goto label_2fbc48;
        }
    }
    ctx->pc = 0x2FBC34u;
    // 0x2fbc34: 0xc0beb2e  jal         func_2FACB8
    ctx->pc = 0x2FBC34u;
    SET_GPR_U32(ctx, 31, 0x2FBC3Cu);
    ctx->pc = 0x2FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACB8u, 0x2FBC34u, 0x2FBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC3Cu;
label_2fbc3c:
    // 0x2fbc3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBC3Cu;
    {
        const bool branch_taken_0x2fbc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC3Cu;
        // 0x2fbc40: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc3c) {
            ctx->pc = 0x2FBC54u;
            goto label_2fbc54;
        }
    }
    ctx->pc = 0x2FBC44u;
    // 0x2fbc44: 0x0  nop
    ctx->pc = 0x2fbc44u;
    // NOP
label_2fbc48:
    // 0x2fbc48: 0xc0beb26  jal         func_2FAC98
    ctx->pc = 0x2FBC48u;
    SET_GPR_U32(ctx, 31, 0x2FBC50u);
    ctx->pc = 0x2FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC98u, 0x2FBC48u, 0x2FBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC50u;
label_2fbc50:
    // 0x2fbc50: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2fbc54:
    // 0x2fbc54: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2fbc58:
    // 0x2fbc58: 0xc0bf1be  jal         func_2FC6F8
    ctx->pc = 0x2FBC58u;
    SET_GPR_U32(ctx, 31, 0x2FBC60u);
    ctx->pc = 0x2FBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC58u;
    // 0x2fbc5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC6F8u, 0x2FBC58u, 0x2FBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC60u;
label_2fbc60:
    // 0x2fbc60: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2fbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fbc64: 0xc0bedde  jal         func_2FB778
    ctx->pc = 0x2FBC64u;
    SET_GPR_U32(ctx, 31, 0x2FBC6Cu);
    ctx->pc = 0x2FBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC64u;
    // 0x2fbc68: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB778u, 0x2FBC64u, 0x2FBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC6Cu;
label_2fbc6c:
    // 0x2fbc6c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x2fbc6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbc70: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2fbc70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fbc74: 0x5460ffe6  bnel        $v1, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FBC74u;
    {
        const bool branch_taken_0x2fbc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc74) {
            ctx->pc = 0x2FBC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC74u;
            // 0x2fbc78: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbc10;
        }
    }
    ctx->pc = 0x2FBC7Cu;
label_2fbc7c:
    // 0x2fbc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbc80:
    // 0x2fbc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fbc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbc8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fbc8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fbc90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC94u;
        // 0x2fbc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBC9Cu;
    // 0x2fbc9c: 0x0  nop
    ctx->pc = 0x2fbc9cu;
    // NOP
    ctx->pc = 0x2fbca0u;
}
