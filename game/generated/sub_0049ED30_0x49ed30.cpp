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

// Function: sub_0049ED30
// Address: 0x49ed30 - 0x49ee48
void sub_0049ED30_0x49ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ED30_0x49ed30");
#endif

    switch (ctx->pc) {
        case 0x49ed9cu: goto label_49ed9c;
        case 0x49eda4u: goto label_49eda4;
        case 0x49edacu: goto label_49edac;
        case 0x49edb4u: goto label_49edb4;
        case 0x49ee2cu: goto label_49ee2c;
        default: break;
    }

    ctx->pc = 0x49ed30u;

    // 0x49ed30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49ed34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49ed38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49ed38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49ed40: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x49ed40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x49ed44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49ed48: 0x2642014a  addiu       $v0, $s2, 0x14A
    ctx->pc = 0x49ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 330));
    // 0x49ed4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49ed50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x49ed54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x49ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x49ed58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x49ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x49ed5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49ed5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49ed60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x49ed64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49ed68: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x49ed68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x49ed6c: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x49ED6Cu;
    {
        const bool branch_taken_0x49ed6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED6Cu;
        // 0x49ed70: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed6c) {
            ctx->pc = 0x49EE2Cu;
            goto label_49ee2c;
        }
    }
    ctx->pc = 0x49ED74u;
    // 0x49ed74: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x49ed74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x49ed78: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x49ed78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x49ed7c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49ed80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49ed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x49ed84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x49ed88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x49ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x49ed90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x49ed94: 0xc12aba8  jal         func_4AAEA0
    ctx->pc = 0x49ED94u;
    SET_GPR_U32(ctx, 31, 0x49ED9Cu);
    ctx->pc = 0x49ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ED94u;
    // 0x49ed98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAEA0u, 0x49ED94u, 0x49ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ED9Cu;
label_49ed9c:
    // 0x49ed9c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49ED9Cu;
    SET_GPR_U32(ctx, 31, 0x49EDA4u);
    ctx->pc = 0x49EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ED9Cu;
    // 0x49eda0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49ED9Cu, 0x49EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDA4u;
label_49eda4:
    // 0x49eda4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49EDA4u;
    SET_GPR_U32(ctx, 31, 0x49EDACu);
    ctx->pc = 0x49EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDA4u;
    // 0x49eda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49EDA4u, 0x49EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDACu;
label_49edac:
    // 0x49edac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49EDACu;
    SET_GPR_U32(ctx, 31, 0x49EDB4u);
    ctx->pc = 0x49EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDACu;
    // 0x49edb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49EDACu, 0x49EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDB4u;
label_49edb4:
    // 0x49edb4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x49edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x49edb8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x49edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x49edbc: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x49edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x49edc0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x49edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x49edc4: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x49edc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x49edc8: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x49edc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49edcc: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x49edccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x49edd0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x49edd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49edd4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x49edd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x49edd8: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x49edd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49eddc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49eddcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49ede0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49ede0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49ede4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x49ede4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x49ede8: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x49ede8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x49edec: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x49edecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x49edf0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x49edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x49edf4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49edf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49edf8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49edfc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49edfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49ee00: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x49ee00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x49ee04: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x49ee04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x49ee08: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x49ee08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49ee0c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x49ee0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee10: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49ee10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee14: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x49ee14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee18: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x49ee18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x49ee1c: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x49ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x49ee20: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x49ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x49ee24: 0xc1247c2  jal         func_491F08
    ctx->pc = 0x49EE24u;
    SET_GPR_U32(ctx, 31, 0x49EE2Cu);
    ctx->pc = 0x49EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE24u;
    // 0x49ee28: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491F08u, 0x49EE24u, 0x49EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE2Cu;
label_49ee2c:
    // 0x49ee2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49ee2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ee30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49ee30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ee34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49ee34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ee38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49ee38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49ee3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x49EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE40u;
        // 0x49ee44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EE48u;
}
