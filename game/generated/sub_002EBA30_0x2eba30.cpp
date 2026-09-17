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

// Function: sub_002EBA30
// Address: 0x2eba30 - 0x2ebb10
void sub_002EBA30_0x2eba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBA30_0x2eba30");
#endif

    switch (ctx->pc) {
        case 0x2eba58u: goto label_2eba58;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebaf0u: goto label_2ebaf0;
        default: break;
    }

    ctx->pc = 0x2eba30u;

    // 0x2eba30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eba34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eba38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2eba38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eba40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eba40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eba48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eba4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eba50: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EBA50u;
    SET_GPR_U32(ctx, 31, 0x2EBA58u);
    ctx->pc = 0x2EBA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA50u;
    // 0x2eba54: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EBA50u, 0x2EBA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA58u;
label_2eba58:
    // 0x2eba58: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eba5c: 0x2463f278  addiu       $v1, $v1, -0xD88
    ctx->pc = 0x2eba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963832));
    // 0x2eba60: 0x26100068  addiu       $s0, $s0, 0x68
    ctx->pc = 0x2eba60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2eba64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2eba64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2eba68: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2eba68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eba6c: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBA6Cu;
    {
        const bool branch_taken_0x2eba6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eba6c) {
            ctx->pc = 0x2EBA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBA6Cu;
            // 0x2eba70: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA88u;
            goto label_2eba88;
        }
    }
    ctx->pc = 0x2EBA74u;
    // 0x2eba74: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2eba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2eba78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eba7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBA7Cu;
    {
        const bool branch_taken_0x2eba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA7Cu;
        // 0x2eba80: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba7c) {
            ctx->pc = 0x2EBA90u;
            goto label_2eba90;
        }
    }
    ctx->pc = 0x2EBA84u;
    // 0x2eba84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eba84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eba88:
    // 0x2eba88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eba88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eba90:
    // 0x2eba90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba94: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EBA94u;
    SET_GPR_U32(ctx, 31, 0x2EBA9Cu);
    ctx->pc = 0x2EBA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA94u;
    // 0x2eba98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EBA94u, 0x2EBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA9Cu;
label_2eba9c:
    // 0x2eba9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ebaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaa4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ebaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaac: 0xc0bd630  jal         func_2F58C0
    ctx->pc = 0x2EBAACu;
    SET_GPR_U32(ctx, 31, 0x2EBAB4u);
    ctx->pc = 0x2EBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBAACu;
    // 0x2ebab0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58C0u, 0x2EBAACu, 0x2EBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAB4u;
label_2ebab4:
    // 0x2ebab4: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2ebab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ebab8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ebab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ebabc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2ebabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2ebac0: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x2ebac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x2ebac4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ebac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebac8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ebac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ebacc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBACCu;
    {
        const bool branch_taken_0x2ebacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBACCu;
        // 0x2ebad0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebacc) {
            ctx->pc = 0x2EBAF0u;
            goto label_2ebaf0;
        }
    }
    ctx->pc = 0x2EBAD4u;
    // 0x2ebad4: 0x0  nop
    ctx->pc = 0x2ebad4u;
    // NOP
    // 0x2ebad8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ebad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ebadc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ebadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ebae0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ebae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ebae4: 0x248405ec  addiu       $a0, $a0, 0x5EC
    ctx->pc = 0x2ebae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1516));
    // 0x2ebae8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EBAE8u;
    SET_GPR_U32(ctx, 31, 0x2EBAF0u);
    ctx->pc = 0x2EBAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBAE8u;
    // 0x2ebaec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EBAE8u, 0x2EBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAF0u;
label_2ebaf0:
    // 0x2ebaf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebaf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebaf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebaf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebaf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebaf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebafc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ebafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebb00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebb04: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB04u;
        // 0x2ebb08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBB0Cu;
    // 0x2ebb0c: 0x0  nop
    ctx->pc = 0x2ebb0cu;
    // NOP
    ctx->pc = 0x2ebb10u;
}
