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

// Function: sub_0029BA68
// Address: 0x29ba68 - 0x29bb78
void sub_0029BA68_0x29ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BA68_0x29ba68");
#endif

    switch (ctx->pc) {
        case 0x29bab8u: goto label_29bab8;
        case 0x29bac4u: goto label_29bac4;
        case 0x29bae0u: goto label_29bae0;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb34u: goto label_29bb34;
        default: break;
    }

    ctx->pc = 0x29ba68u;

    // 0x29ba68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ba6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29ba70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ba70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba74: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29ba78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ba78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ba80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ba80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29ba88: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x29ba88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ba8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ba90: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29ba94: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29ba98: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x29ba98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x29ba9c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x29baa0: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x29baa4: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x29baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x29baa8: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29baac: 0x24740028  addiu       $s4, $v1, 0x28
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x29bab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bab4: 0x0  nop
    ctx->pc = 0x29bab4u;
    // NOP
label_29bab8:
    // 0x29bab8: 0x26c5c1d0  addiu       $a1, $s6, -0x3E30
    ctx->pc = 0x29bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951376));
    // 0x29babc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BABCu;
    SET_GPR_U32(ctx, 31, 0x29BAC4u);
    ctx->pc = 0x29BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BABCu;
    // 0x29bac0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BABCu, 0x29BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAC4u;
label_29bac4:
    // 0x29bac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bac8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x29bacc: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x29baccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x29bad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29BAD0u;
    {
        const bool branch_taken_0x29bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAD0u;
        // 0x29bad4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bad0) {
            ctx->pc = 0x29BB00u;
            goto label_29bb00;
        }
    }
    ctx->pc = 0x29BAD8u;
    // 0x29bad8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BAD8u;
    SET_GPR_U32(ctx, 31, 0x29BAE0u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BAD8u, 0x29BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAE0u;
label_29bae0:
    // 0x29bae0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29bae4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x29bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x29bae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29baec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29baecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29baf0: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x29baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x29baf4: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x29baf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x29baf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29BAF8u;
    {
        const bool branch_taken_0x29baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAF8u;
        // 0x29bafc: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29baf8) {
            ctx->pc = 0x29BB28u;
            goto label_29bb28;
        }
    }
    ctx->pc = 0x29BB00u;
label_29bb00:
    // 0x29bb00: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29BB00u;
    SET_GPR_U32(ctx, 31, 0x29BB08u);
    ctx->pc = 0x29BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB00u;
    // 0x29bb04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29BB00u, 0x29BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB08u;
label_29bb08:
    // 0x29bb08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BB08u;
    {
        const bool branch_taken_0x29bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB08u;
        // 0x29bb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb08) {
            ctx->pc = 0x29BB2Cu;
            goto label_29bb2c;
        }
    }
    ctx->pc = 0x29BB10u;
    // 0x29bb10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29bb14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BB14u;
    {
        const bool branch_taken_0x29bb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb14) {
            ctx->pc = 0x29BB2Cu;
            goto label_29bb2c;
        }
    }
    ctx->pc = 0x29BB1Cu;
    // 0x29bb1c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29bb20: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x29bb24: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29bb28:
    // 0x29bb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bb2c:
    // 0x29bb2c: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x29BB2Cu;
    SET_GPR_U32(ctx, 31, 0x29BB34u);
    ctx->pc = 0x29BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB2Cu;
    // 0x29bb30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x29BB2Cu, 0x29BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB34u;
label_29bb34:
    // 0x29bb34: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29bb38: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29bb3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29bb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29bb40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29bb44: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x29bb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29bb48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x29BB48u;
    {
        const bool branch_taken_0x29bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB48u;
        // 0x29bb4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb48) {
            ctx->pc = 0x29BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bab8;
        }
    }
    ctx->pc = 0x29BB50u;
    // 0x29bb50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29bb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bb54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29bb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29bb58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29bb58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bb5c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29bb5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29bb60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29bb60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bb64: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29bb64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29bb68: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29bb68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bb6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB70u;
        // 0x29bb74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BB78u;
}
