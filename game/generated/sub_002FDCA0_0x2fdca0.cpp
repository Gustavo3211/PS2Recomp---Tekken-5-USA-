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

// Function: sub_002FDCA0
// Address: 0x2fdca0 - 0x2fdd90
void sub_002FDCA0_0x2fdca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDCA0_0x2fdca0");
#endif

    switch (ctx->pc) {
        case 0x2fdcc4u: goto label_2fdcc4;
        case 0x2fdcdcu: goto label_2fdcdc;
        case 0x2fdcf8u: goto label_2fdcf8;
        case 0x2fdd08u: goto label_2fdd08;
        case 0x2fdd60u: goto label_2fdd60;
        case 0x2fdd6cu: goto label_2fdd6c;
        default: break;
    }

    ctx->pc = 0x2fdca0u;

    // 0x2fdca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fdca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdcac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fdcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fdcb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fdcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fdcb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fdcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fdcb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fdcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fdcbc: 0xc0bf6fe  jal         func_2FDBF8
    ctx->pc = 0x2FDCBCu;
    SET_GPR_U32(ctx, 31, 0x2FDCC4u);
    ctx->pc = 0x2FDCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCBCu;
    // 0x2fdcc0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBF8u, 0x2FDCBCu, 0x2FDCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCC4u;
label_2fdcc4:
    // 0x2fdcc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fdcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdcc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdccc: 0x16230012  bne         $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FDCCCu;
    {
        const bool branch_taken_0x2fdccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCCCu;
        // 0x2fdcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdccc) {
            ctx->pc = 0x2FDD18u;
            goto label_2fdd18;
        }
    }
    ctx->pc = 0x2FDCD4u;
    // 0x2fdcd4: 0xc0bf718  jal         func_2FDC60
    ctx->pc = 0x2FDCD4u;
    SET_GPR_U32(ctx, 31, 0x2FDCDCu);
    ctx->pc = 0x2FDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCD4u;
    // 0x2fdcd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC60u, 0x2FDCD4u, 0x2FDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCDCu;
label_2fdcdc:
    // 0x2fdcdc: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDCDCu;
    {
        const bool branch_taken_0x2fdcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCDCu;
        // 0x2fdce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcdc) {
            ctx->pc = 0x2FDD18u;
            goto label_2fdd18;
        }
    }
    ctx->pc = 0x2FDCE4u;
    // 0x2fdce4: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2fdce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fdce8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2fdce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fdcec: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDCECu;
    {
        const bool branch_taken_0x2fdcec = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2FDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCECu;
        // 0x2fdcf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcec) {
            ctx->pc = 0x2FDD14u;
            goto label_2fdd14;
        }
    }
    ctx->pc = 0x2FDCF4u;
    // 0x2fdcf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdcf8:
    // 0x2fdcf8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2fdcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2fdcfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fdcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdd00: 0xc0bf6ac  jal         func_2FDAB0
    ctx->pc = 0x2FDD00u;
    SET_GPR_U32(ctx, 31, 0x2FDD08u);
    ctx->pc = 0x2FDD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD00u;
    // 0x2fdd04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDAB0u, 0x2FDD00u, 0x2FDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD08u;
label_2fdd08:
    // 0x2fdd08: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x2fdd08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2fdd0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FDD0Cu;
    {
        const bool branch_taken_0x2fdd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD0Cu;
        // 0x2fdd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd0c) {
            ctx->pc = 0x2FDCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdcf8;
        }
    }
    ctx->pc = 0x2FDD14u;
label_2fdd14:
    // 0x2fdd14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdd18:
    // 0x2fdd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fdd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdd1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fdd1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdd20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fdd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdd24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fdd24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fdd28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD2Cu;
        // 0x2fdd30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD34u;
    // 0x2fdd34: 0x0  nop
    ctx->pc = 0x2fdd34u;
    // NOP
    // 0x2fdd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdd40: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x2fdd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2fdd44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fdd48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fdd4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fdd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fdd50: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x2fdd50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fdd54: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDD54u;
    {
        const bool branch_taken_0x2fdd54 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2FDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD54u;
        // 0x2fdd58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd54) {
            ctx->pc = 0x2FDD78u;
            goto label_2fdd78;
        }
    }
    ctx->pc = 0x2FDD5Cu;
    // 0x2fdd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd60:
    // 0x2fdd60: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2fdd64: 0xc0bf6c4  jal         func_2FDB10
    ctx->pc = 0x2FDD64u;
    SET_GPR_U32(ctx, 31, 0x2FDD6Cu);
    ctx->pc = 0x2FDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD64u;
    // 0x2fdd68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB10u, 0x2FDD64u, 0x2FDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD6Cu;
label_2fdd6c:
    // 0x2fdd6c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2fdd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2fdd70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FDD70u;
    {
        const bool branch_taken_0x2fdd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD70u;
        // 0x2fdd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd70) {
            ctx->pc = 0x2FDD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdd60;
        }
    }
    ctx->pc = 0x2FDD78u;
label_2fdd78:
    // 0x2fdd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fdd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fdd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdd80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fdd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdd84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fdd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fdd88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD88u;
        // 0x2fdd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD90u;
}
