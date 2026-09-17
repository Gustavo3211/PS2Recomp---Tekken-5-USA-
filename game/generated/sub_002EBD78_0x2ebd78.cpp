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

// Function: sub_002EBD78
// Address: 0x2ebd78 - 0x2ebe58
void sub_002EBD78_0x2ebd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBD78_0x2ebd78");
#endif

    switch (ctx->pc) {
        case 0x2ebd9cu: goto label_2ebd9c;
        case 0x2ebdecu: goto label_2ebdec;
        case 0x2ebe00u: goto label_2ebe00;
        case 0x2ebe38u: goto label_2ebe38;
        default: break;
    }

    ctx->pc = 0x2ebd78u;

    // 0x2ebd78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebd80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ebd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebd88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebd8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ebd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ebd90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ebd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ebd94: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EBD94u;
    SET_GPR_U32(ctx, 31, 0x2EBD9Cu);
    ctx->pc = 0x2EBD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD94u;
    // 0x2ebd98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EBD94u, 0x2EBD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD9Cu;
label_2ebd9c:
    // 0x2ebd9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ebd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ebda0: 0x26320110  addiu       $s2, $s1, 0x110
    ctx->pc = 0x2ebda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x2ebda4: 0x2463f0e8  addiu       $v1, $v1, -0xF18
    ctx->pc = 0x2ebda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963432));
    // 0x2ebda8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ebda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2ebdac: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x2ebdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2ebdb0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ebdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2ebdb4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2ebdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2ebdb8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ebdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ebdbc: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBDBCu;
    {
        const bool branch_taken_0x2ebdbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdbc) {
            ctx->pc = 0x2EBDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDBCu;
            // 0x2ebdc0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBDD8u;
            goto label_2ebdd8;
        }
    }
    ctx->pc = 0x2EBDC4u;
    // 0x2ebdc4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2ebdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ebdc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ebdcc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBDCCu;
    {
        const bool branch_taken_0x2ebdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDCCu;
        // 0x2ebdd0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdcc) {
            ctx->pc = 0x2EBDE0u;
            goto label_2ebde0;
        }
    }
    ctx->pc = 0x2EBDD4u;
    // 0x2ebdd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ebdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ebdd8:
    // 0x2ebdd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ebdd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebddc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ebddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ebde0:
    // 0x2ebde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebde4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EBDE4u;
    SET_GPR_U32(ctx, 31, 0x2EBDECu);
    ctx->pc = 0x2EBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDE4u;
    // 0x2ebde8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EBDE4u, 0x2EBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDECu;
label_2ebdec:
    // 0x2ebdec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ebdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdf8: 0xc0b2df0  jal         func_2CB7C0
    ctx->pc = 0x2EBDF8u;
    SET_GPR_U32(ctx, 31, 0x2EBE00u);
    ctx->pc = 0x2EBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDF8u;
    // 0x2ebdfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7C0u, 0x2EBDF8u, 0x2EBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE00u;
label_2ebe00:
    // 0x2ebe00: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2ebe00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2ebe04: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ebe04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ebe08: 0x24630778  addiu       $v1, $v1, 0x778
    ctx->pc = 0x2ebe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1912));
    // 0x2ebe0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebe10: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2ebe10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2ebe14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBE14u;
    {
        const bool branch_taken_0x2ebe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE14u;
        // 0x2ebe18: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe14) {
            ctx->pc = 0x2EBE38u;
            goto label_2ebe38;
        }
    }
    ctx->pc = 0x2EBE1Cu;
    // 0x2ebe1c: 0x0  nop
    ctx->pc = 0x2ebe1cu;
    // NOP
    // 0x2ebe20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ebe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ebe24: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ebe24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ebe28: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ebe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ebe2c: 0x2484060c  addiu       $a0, $a0, 0x60C
    ctx->pc = 0x2ebe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1548));
    // 0x2ebe30: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EBE30u;
    SET_GPR_U32(ctx, 31, 0x2EBE38u);
    ctx->pc = 0x2EBE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE30u;
    // 0x2ebe34: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EBE30u, 0x2EBE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE38u;
label_2ebe38:
    // 0x2ebe38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebe38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebe3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebe3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebe40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebe40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebe44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ebe44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebe48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE4Cu;
        // 0x2ebe50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBE54u;
    // 0x2ebe54: 0x0  nop
    ctx->pc = 0x2ebe54u;
    // NOP
    ctx->pc = 0x2ebe58u;
}
