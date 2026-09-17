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

// Function: sub_004FED60
// Address: 0x4fed60 - 0x4ff3a0
void sub_004FED60_0x4fed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FED60_0x4fed60");
#endif

    switch (ctx->pc) {
        case 0x4fed8cu: goto label_4fed8c;
        case 0x4fed9cu: goto label_4fed9c;
        case 0x4fedacu: goto label_4fedac;
        case 0x4fedbcu: goto label_4fedbc;
        case 0x4fedc8u: goto label_4fedc8;
        case 0x4ff350u: goto label_4ff350;
        default: break;
    }

    ctx->pc = 0x4fed60u;

    // 0x4fed60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4fed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4fed64: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4fed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4fed68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fed68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed6c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4fed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4fed70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4fed70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed74: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4fed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4fed78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed7c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4fed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4fed80: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4fed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4fed84: 0xc140cfc  jal         func_5033F0
    ctx->pc = 0x4FED84u;
    SET_GPR_U32(ctx, 31, 0x4FED8Cu);
    ctx->pc = 0x4FED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FED84u;
    // 0x4fed88: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5033F0u, 0x4FED84u, 0x4FED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FED8Cu;
label_4fed8c:
    // 0x4fed8c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4fed8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4fed90: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x4fed90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4fed94: 0xc140d1a  jal         func_503468
    ctx->pc = 0x4FED94u;
    SET_GPR_U32(ctx, 31, 0x4FED9Cu);
    ctx->pc = 0x4FED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FED94u;
    // 0x4fed98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503468u, 0x4FED94u, 0x4FED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FED9Cu;
label_4fed9c:
    // 0x4fed9c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x4fed9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4feda0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x4feda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4feda4: 0xc140d38  jal         func_5034E0
    ctx->pc = 0x4FEDA4u;
    SET_GPR_U32(ctx, 31, 0x4FEDACu);
    ctx->pc = 0x4FEDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FEDA4u;
    // 0x4feda8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5034E0u, 0x4FEDA4u, 0x4FEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FEDACu;
label_4fedac:
    // 0x4fedac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fedacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fedb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fedb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fedb4: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FEDB4u;
    SET_GPR_U32(ctx, 31, 0x4FEDBCu);
    ctx->pc = 0x4FEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FEDB4u;
    // 0x4fedb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FEDB4u, 0x4FEDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FEDBCu;
label_4fedbc:
    // 0x4fedbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fedbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fedc0: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FEDC0u;
    SET_GPR_U32(ctx, 31, 0x4FEDC8u);
    ctx->pc = 0x4FEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FEDC0u;
    // 0x4fedc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FEDC0u, 0x4FEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FEDC8u;
label_4fedc8:
    // 0x4fedc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fedc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fedcc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4fedccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fedd0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4fedd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fedd4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4fedd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fedd8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4fedd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4feddc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4feddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fede0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FEDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEDE0u;
        // 0x4fede4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FEDE8u;
    // 0x4fede8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4fede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4fedec: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x4fedecu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fedf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fedf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fedf4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4fedf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4fedf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fedf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fedfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4fedfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4fee00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4fee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4fee04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4fee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4fee08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4fee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4fee0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4fee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4fee10: 0x33160001  andi        $s6, $t8, 0x1
    ctx->pc = 0x4fee10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4fee14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4fee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4fee18: 0x848a000a  lh          $t2, 0xA($a0)
    ctx->pc = 0x4fee18u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x4fee1c: 0x84890000  lh          $t1, 0x0($a0)
    ctx->pc = 0x4fee1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fee20: 0x84880002  lh          $t0, 0x2($a0)
    ctx->pc = 0x4fee20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4fee24: 0x25550007  addiu       $s5, $t2, 0x7
    ctx->pc = 0x4fee24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x4fee28: 0x84870004  lh          $a3, 0x4($a0)
    ctx->pc = 0x4fee28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4fee2c: 0x25340007  addiu       $s4, $t1, 0x7
    ctx->pc = 0x4fee2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x4fee30: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x4fee30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4fee34: 0x29330000  slti        $s3, $t1, 0x0
    ctx->pc = 0x4fee34u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee38: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x4fee38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fee3c: 0x25120007  addiu       $s2, $t0, 0x7
    ctx->pc = 0x4fee3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x4fee40: 0x29100000  slti        $s0, $t0, 0x0
    ctx->pc = 0x4fee40u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee44: 0x24f10007  addiu       $s1, $a3, 0x7
    ctx->pc = 0x4fee44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x4fee48: 0x28ee0000  slti        $t6, $a3, 0x0
    ctx->pc = 0x4fee48u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee4c: 0x246f0007  addiu       $t7, $v1, 0x7
    ctx->pc = 0x4fee4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4fee50: 0x286c0000  slti        $t4, $v1, 0x0
    ctx->pc = 0x4fee50u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee54: 0x244d0007  addiu       $t5, $v0, 0x7
    ctx->pc = 0x4fee54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x4fee58: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x4fee58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee5c: 0x294b0000  slti        $t3, $t2, 0x0
    ctx->pc = 0x4fee5cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fee60: 0x22e380b  movn        $a3, $s1, $t6
    ctx->pc = 0x4fee60u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    // 0x4fee64: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x4fee64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fee68: 0x293480b  movn        $t1, $s4, $s3
    ctx->pc = 0x4fee68u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 20));
    // 0x4fee6c: 0x250400b  movn        $t0, $s2, $s0
    ctx->pc = 0x4fee6cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 18));
    // 0x4fee70: 0x1ec180b  movn        $v1, $t7, $t4
    ctx->pc = 0x4fee70u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
    // 0x4fee74: 0x1a4100b  movn        $v0, $t5, $a0
    ctx->pc = 0x4fee74u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
    // 0x4fee78: 0x2ab500b  movn        $t2, $s5, $t3
    ctx->pc = 0x4fee78u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 21));
    // 0x4fee7c: 0x62c03  sra         $a1, $a2, 16
    ctx->pc = 0x4fee7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4fee80: 0x998c3  sra         $s3, $t1, 3
    ctx->pc = 0x4fee80u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 3));
    // 0x4fee84: 0x880c3  sra         $s0, $t0, 3
    ctx->pc = 0x4fee84u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 8), 3));
    // 0x4fee88: 0x790c3  sra         $s2, $a3, 3
    ctx->pc = 0x4fee88u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 3));
    // 0x4fee8c: 0x378c3  sra         $t7, $v1, 3
    ctx->pc = 0x4fee8cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 3));
    // 0x4fee90: 0x2a0c3  sra         $s4, $v0, 3
    ctx->pc = 0x4fee90u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4fee94: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FEE94u;
    {
        const bool branch_taken_0x4fee94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEE94u;
        // 0x4fee98: 0xa88c3  sra         $s1, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fee94) {
            ctx->pc = 0x4FEEA4u;
            goto label_4feea4;
        }
    }
    ctx->pc = 0x4FEE9Cu;
    // 0x4fee9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4fee9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feea0: 0x24100fff  addiu       $s0, $zero, 0xFFF
    ctx->pc = 0x4feea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_4feea4:
    // 0x4feea4: 0x33020002  andi        $v0, $t8, 0x2
    ctx->pc = 0x4feea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x4feea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FEEA8u;
    {
        const bool branch_taken_0x4feea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEEA8u;
        // 0x4feeac: 0x33020004  andi        $v0, $t8, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feea8) {
            ctx->pc = 0x4FEEB8u;
            goto label_4feeb8;
        }
    }
    ctx->pc = 0x4FEEB0u;
    // 0x4feeb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4feeb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feeb4: 0x240f0fff  addiu       $t7, $zero, 0xFFF
    ctx->pc = 0x4feeb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_4feeb8:
    // 0x4feeb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FEEB8u;
    {
        const bool branch_taken_0x4feeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEEB8u;
        // 0x4feebc: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feeb8) {
            ctx->pc = 0x4FEEC8u;
            goto label_4feec8;
        }
    }
    ctx->pc = 0x4FEEC0u;
    // 0x4feec0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4feec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feec4: 0x24110fff  addiu       $s1, $zero, 0xFFF
    ctx->pc = 0x4feec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_4feec8:
    // 0x4feec8: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x4FEEC8u;
    {
        const bool branch_taken_0x4feec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEEC8u;
        // 0x4feecc: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feec8) {
            ctx->pc = 0x4FF348u;
            goto label_4ff348;
        }
    }
    ctx->pc = 0x4FEED0u;
    // 0x4feed0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4feed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4feed4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4feed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4feed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4feed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4feedc: 0x8c63c5c0  lw          $v1, -0x3A40($v1)
    ctx->pc = 0x4feedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952384)));
    // 0x4feee0: 0x600008  jr          $v1
    ctx->pc = 0x4FEEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FEEE8u: goto label_4feee8;
            case 0x4FEFA8u: goto label_4fefa8;
            case 0x4FF060u: goto label_4ff060;
            case 0x4FF110u: goto label_4ff110;
            case 0x4FF1D0u: goto label_4ff1d0;
            case 0x4FF290u: goto label_4ff290;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEEE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4FEEE8u;
label_4feee8:
    // 0x4feee8: 0x121023  negu        $v0, $s2
    ctx->pc = 0x4feee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4feeec: 0x2122018  mult        $a0, $s0, $s2
    ctx->pc = 0x4feeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4feef0: 0x72721818  mult1       $v1, $s3, $s2
    ctx->pc = 0x4feef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4feef4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x4feef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4feef8: 0x144023  negu        $t0, $s4
    ctx->pc = 0x4feef8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4feefc: 0x72716018  mult1       $t4, $s3, $s1
    ctx->pc = 0x4feefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4fef00: 0x2145018  mult        $t2, $s0, $s4
    ctx->pc = 0x4fef00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4fef04: 0x72115818  mult1       $t3, $s0, $s1
    ctx->pc = 0x4fef04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4fef08: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fef08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fef0c: 0x72743018  mult1       $a2, $s3, $s4
    ctx->pc = 0x4fef0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4fef10: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fef10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fef14: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4fef14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4fef18: 0x684818  mult        $t1, $v1, $t0
    ctx->pc = 0x4fef18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fef1c: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4fef1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fef20: 0x70942018  mult1       $a0, $a0, $s4
    ctx->pc = 0x4fef20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fef24: 0x132823  negu        $a1, $s3
    ctx->pc = 0x4fef24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4fef28: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x4fef28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4fef2c: 0x720f6818  mult1       $t5, $s0, $t7
    ctx->pc = 0x4fef2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4fef30: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x4fef30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fef34: 0x71f13818  mult1       $a3, $t7, $s1
    ctx->pc = 0x4fef34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fef38: 0x1e84018  mult        $t0, $t7, $t0
    ctx->pc = 0x4fef38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fef3c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fef3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fef40: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4fef40u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4fef44: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4fef44u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4fef48: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4fef48u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4fef4c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4fef4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4fef50: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4fef50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4fef54: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fef54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fef58: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4fef58u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4fef5c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4fef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4fef60: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x4fef60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x4fef64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4fef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4fef68: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4fef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4fef6c: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fef6cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fef70: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fef70u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fef74: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4fef74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4fef78: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4fef78u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4fef7c: 0xa5c70000  sh          $a3, 0x0($t6)
    ctx->pc = 0x4fef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fef80: 0xa5c80002  sh          $t0, 0x2($t6)
    ctx->pc = 0x4fef80u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x4fef84: 0xa5c30006  sh          $v1, 0x6($t6)
    ctx->pc = 0x4fef84u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fef88: 0xa5c90008  sh          $t1, 0x8($t6)
    ctx->pc = 0x4fef88u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x4fef8c: 0xa5c5000a  sh          $a1, 0xA($t6)
    ctx->pc = 0x4fef8cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fef90: 0xa5c2000c  sh          $v0, 0xC($t6)
    ctx->pc = 0x4fef90u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fef94: 0xa5c4000e  sh          $a0, 0xE($t6)
    ctx->pc = 0x4fef94u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fef98: 0xa5cd0010  sh          $t5, 0x10($t6)
    ctx->pc = 0x4fef98u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 16), (uint16_t)GPR_U32(ctx, 13));
    // 0x4fef9c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x4FEF9Cu;
    {
        const bool branch_taken_0x4fef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEF9Cu;
        // 0x4fefa0: 0xa5d20004  sh          $s2, 0x4($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fef9c) {
            ctx->pc = 0x4FF370u;
            goto label_4ff370;
        }
    }
    ctx->pc = 0x4FEFA4u;
    // 0x4fefa4: 0x0  nop
    ctx->pc = 0x4fefa4u;
    // NOP
label_4fefa8:
    // 0x4fefa8: 0x2742018  mult        $a0, $s3, $s4
    ctx->pc = 0x4fefa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fefac: 0x72141818  mult1       $v1, $s0, $s4
    ctx->pc = 0x4fefacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fefb0: 0x131023  negu        $v0, $s3
    ctx->pc = 0x4fefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4fefb4: 0x122823  negu        $a1, $s2
    ctx->pc = 0x4fefb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4fefb8: 0x20f6018  mult        $t4, $s0, $t7
    ctx->pc = 0x4fefb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4fefbc: 0x704f1018  mult1       $v0, $v0, $t7
    ctx->pc = 0x4fefbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4fefc0: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x4fefc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fefc4: 0x72723018  mult1       $a2, $s3, $s2
    ctx->pc = 0x4fefc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4fefc8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fefc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fefcc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fefccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fefd0: 0x925018  mult        $t2, $a0, $s2
    ctx->pc = 0x4fefd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4fefd4: 0x708f2018  mult1       $a0, $a0, $t7
    ctx->pc = 0x4fefd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fefd8: 0x70723818  mult1       $a3, $v1, $s2
    ctx->pc = 0x4fefd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fefdc: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x4fefdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fefe0: 0x2716818  mult        $t5, $s3, $s1
    ctx->pc = 0x4fefe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4fefe4: 0x722f4018  mult1       $t0, $s1, $t7
    ctx->pc = 0x4fefe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fefe8: 0x2324818  mult        $t1, $s1, $s2
    ctx->pc = 0x4fefe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fefec: 0x72115818  mult1       $t3, $s0, $s1
    ctx->pc = 0x4fefecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4feff0: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4feff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4feff4: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4feff4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4feff8: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4feff8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4feffc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4feffcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff000: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff000u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff004: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4ff004u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4ff008: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4ff008u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4ff00c: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4ff00cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4ff010: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4ff010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ff014: 0x141023  negu        $v0, $s4
    ctx->pc = 0x4ff014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4ff018: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4ff018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ff01c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ff01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4ff020: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x4ff020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4ff024: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4ff024u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4ff028: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4ff028u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4ff02c: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4ff02cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4ff030: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4ff030u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4ff034: 0xa5c80000  sh          $t0, 0x0($t6)
    ctx->pc = 0x4ff034u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ff038: 0xa5c20002  sh          $v0, 0x2($t6)
    ctx->pc = 0x4ff038u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff03c: 0xa5c90004  sh          $t1, 0x4($t6)
    ctx->pc = 0x4ff03cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ff040: 0xa5c30006  sh          $v1, 0x6($t6)
    ctx->pc = 0x4ff040u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff044: 0xa5cb0008  sh          $t3, 0x8($t6)
    ctx->pc = 0x4ff044u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x4ff048: 0xa5c7000a  sh          $a3, 0xA($t6)
    ctx->pc = 0x4ff048u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ff04c: 0xa5c4000c  sh          $a0, 0xC($t6)
    ctx->pc = 0x4ff04cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff050: 0xa5cd000e  sh          $t5, 0xE($t6)
    ctx->pc = 0x4ff050u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 14), (uint16_t)GPR_U32(ctx, 13));
    // 0x4ff054: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x4FF054u;
    {
        const bool branch_taken_0x4ff054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF054u;
        // 0x4ff058: 0xa5ca0010  sh          $t2, 0x10($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 16), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff054) {
            ctx->pc = 0x4FF370u;
            goto label_4ff370;
        }
    }
    ctx->pc = 0x4FF05Cu;
    // 0x4ff05c: 0x0  nop
    ctx->pc = 0x4ff05cu;
    // NOP
label_4ff060:
    // 0x4ff060: 0x1f31818  mult        $v1, $t7, $s3
    ctx->pc = 0x4ff060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff064: 0x72531018  mult1       $v0, $s2, $s3
    ctx->pc = 0x4ff064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff068: 0x142023  negu        $a0, $s4
    ctx->pc = 0x4ff068u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4ff06c: 0x122823  negu        $a1, $s2
    ctx->pc = 0x4ff06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4ff070: 0x2546018  mult        $t4, $s2, $s4
    ctx->pc = 0x4ff070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4ff074: 0x71e42018  mult1       $a0, $t7, $a0
    ctx->pc = 0x4ff074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff078: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x4ff078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ff07c: 0x71f13818  mult1       $a3, $t7, $s1
    ctx->pc = 0x4ff07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ff080: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff084: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff088: 0x714018  mult        $t0, $v1, $s1
    ctx->pc = 0x4ff088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ff08c: 0x70741818  mult1       $v1, $v1, $s4
    ctx->pc = 0x4ff08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff090: 0x70513018  mult1       $a2, $v0, $s1
    ctx->pc = 0x4ff090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff094: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x4ff094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff098: 0x1f06818  mult        $t5, $t7, $s0
    ctx->pc = 0x4ff098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4ff09c: 0x72504818  mult1       $t1, $s2, $s0
    ctx->pc = 0x4ff09cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4ff0a0: 0x2145018  mult        $t2, $s0, $s4
    ctx->pc = 0x4ff0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4ff0a4: 0x72115818  mult1       $t3, $s0, $s1
    ctx->pc = 0x4ff0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4ff0a8: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4ff0a8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4ff0ac: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff0acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff0b0: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff0b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff0b4: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4ff0b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4ff0b8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4ff0b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4ff0bc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff0bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff0c0: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4ff0c0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4ff0c4: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4ff0c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4ff0c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4ff0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ff0cc: 0x131023  negu        $v0, $s3
    ctx->pc = 0x4ff0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4ff0d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4ff0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ff0d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4ff0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ff0d8: 0x1886021  addu        $t4, $t4, $t0
    ctx->pc = 0x4ff0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x4ff0dc: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4ff0dcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4ff0e0: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4ff0e0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4ff0e4: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4ff0e4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4ff0e8: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4ff0e8u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4ff0ec: 0xa5c70000  sh          $a3, 0x0($t6)
    ctx->pc = 0x4ff0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ff0f0: 0xa5c40002  sh          $a0, 0x2($t6)
    ctx->pc = 0x4ff0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff0f4: 0xa5c90004  sh          $t1, 0x4($t6)
    ctx->pc = 0x4ff0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ff0f8: 0xa5ca0006  sh          $t2, 0x6($t6)
    ctx->pc = 0x4ff0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ff0fc: 0xa5cb0008  sh          $t3, 0x8($t6)
    ctx->pc = 0x4ff0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x4ff100: 0xa5c2000a  sh          $v0, 0xA($t6)
    ctx->pc = 0x4ff100u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff104: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x4FF104u;
    {
        const bool branch_taken_0x4ff104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF104u;
        // 0x4ff108: 0xa5c5000c  sh          $a1, 0xC($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff104) {
            ctx->pc = 0x4FF338u;
            goto label_4ff338;
        }
    }
    ctx->pc = 0x4FF10Cu;
    // 0x4ff10c: 0x0  nop
    ctx->pc = 0x4ff10cu;
    // NOP
label_4ff110:
    // 0x4ff110: 0x141023  negu        $v0, $s4
    ctx->pc = 0x4ff110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4ff114: 0x2542018  mult        $a0, $s2, $s4
    ctx->pc = 0x4ff114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff118: 0x71f41818  mult1       $v1, $t7, $s4
    ctx->pc = 0x4ff118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff11c: 0x1e21018  mult        $v0, $t7, $v0
    ctx->pc = 0x4ff11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff120: 0x134823  negu        $t1, $s3
    ctx->pc = 0x4ff120u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4ff124: 0x71f06818  mult1       $t5, $t7, $s0
    ctx->pc = 0x4ff124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4ff128: 0x1f36018  mult        $t4, $t7, $s3
    ctx->pc = 0x4ff128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4ff12c: 0x72535018  mult1       $t2, $s2, $s3
    ctx->pc = 0x4ff12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4ff130: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff130u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff134: 0x2502818  mult        $a1, $s2, $s0
    ctx->pc = 0x4ff134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ff138: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff138u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff13c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff13cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff140: 0x895818  mult        $t3, $a0, $t1
    ctx->pc = 0x4ff140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4ff144: 0x70902018  mult1       $a0, $a0, $s0
    ctx->pc = 0x4ff144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff148: 0x70731818  mult1       $v1, $v1, $s3
    ctx->pc = 0x4ff148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff14c: 0x123023  negu        $a2, $s2
    ctx->pc = 0x4ff14cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4ff150: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x4ff150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff154: 0x70d13018  mult1       $a2, $a2, $s1
    ctx->pc = 0x4ff154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff158: 0x1f13818  mult        $a3, $t7, $s1
    ctx->pc = 0x4ff158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ff15c: 0x72304018  mult1       $t0, $s1, $s0
    ctx->pc = 0x4ff15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ff160: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x4ff160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4ff164: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4ff164u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4ff168: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff168u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff16c: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4ff16cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4ff170: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff174: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff174u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff178: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4ff178u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4ff17c: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4ff17cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4ff180: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4ff180u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4ff184: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4ff184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4ff188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ff188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ff18c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4ff18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4ff190: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x4ff190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x4ff194: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4ff194u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4ff198: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4ff198u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4ff19c: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4ff19cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4ff1a0: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4ff1a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4ff1a4: 0xa5c70000  sh          $a3, 0x0($t6)
    ctx->pc = 0x4ff1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ff1a8: 0xa5c20002  sh          $v0, 0x2($t6)
    ctx->pc = 0x4ff1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff1ac: 0xa5c30004  sh          $v1, 0x4($t6)
    ctx->pc = 0x4ff1acu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff1b0: 0xa5c80008  sh          $t0, 0x8($t6)
    ctx->pc = 0x4ff1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ff1b4: 0xa5c9000a  sh          $t1, 0xA($t6)
    ctx->pc = 0x4ff1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ff1b8: 0xa5c6000c  sh          $a2, 0xC($t6)
    ctx->pc = 0x4ff1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ff1bc: 0xa5c4000e  sh          $a0, 0xE($t6)
    ctx->pc = 0x4ff1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff1c0: 0xa5cb0010  sh          $t3, 0x10($t6)
    ctx->pc = 0x4ff1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 16), (uint16_t)GPR_U32(ctx, 11));
    // 0x4ff1c4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x4FF1C4u;
    {
        const bool branch_taken_0x4ff1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF1C4u;
        // 0x4ff1c8: 0xa5d40006  sh          $s4, 0x6($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff1c4) {
            ctx->pc = 0x4FF370u;
            goto label_4ff370;
        }
    }
    ctx->pc = 0x4FF1CCu;
    // 0x4ff1cc: 0x0  nop
    ctx->pc = 0x4ff1ccu;
    // NOP
label_4ff1d0:
    // 0x4ff1d0: 0x131023  negu        $v0, $s3
    ctx->pc = 0x4ff1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4ff1d4: 0x2931818  mult        $v1, $s4, $s3
    ctx->pc = 0x4ff1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff1d8: 0x72332018  mult1       $a0, $s1, $s3
    ctx->pc = 0x4ff1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff1dc: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4ff1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff1e0: 0x125823  negu        $t3, $s2
    ctx->pc = 0x4ff1e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4ff1e4: 0x72926018  mult1       $t4, $s4, $s2
    ctx->pc = 0x4ff1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4ff1e8: 0x22f4018  mult        $t0, $s1, $t7
    ctx->pc = 0x4ff1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ff1ec: 0x72325018  mult1       $t2, $s1, $s2
    ctx->pc = 0x4ff1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4ff1f0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff1f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff1f4: 0x728f3018  mult1       $a2, $s4, $t7
    ctx->pc = 0x4ff1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff1f8: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff1f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff1fc: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff1fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff200: 0x6f3818  mult        $a3, $v1, $t7
    ctx->pc = 0x4ff200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ff204: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x4ff204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff208: 0x70922018  mult1       $a0, $a0, $s2
    ctx->pc = 0x4ff208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff20c: 0x142823  negu        $a1, $s4
    ctx->pc = 0x4ff20cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4ff210: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x4ff210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff214: 0x720f6818  mult1       $t5, $s0, $t7
    ctx->pc = 0x4ff214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4ff218: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x4ff218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ff21c: 0x720b5818  mult1       $t3, $s0, $t3
    ctx->pc = 0x4ff21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4ff220: 0x2304818  mult        $t1, $s1, $s0
    ctx->pc = 0x4ff220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4ff224: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4ff224u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4ff228: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff228u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff22c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4ff22cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4ff230: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4ff230u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4ff234: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4ff234u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4ff238: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff238u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff23c: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4ff23cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4ff240: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff244: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4ff244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4ff248: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x4ff248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4ff24c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4ff24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4ff250: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4ff250u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4ff254: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4ff254u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4ff258: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4ff258u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4ff25c: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4ff25cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4ff260: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4ff260u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4ff264: 0xa5c80000  sh          $t0, 0x0($t6)
    ctx->pc = 0x4ff264u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ff268: 0xa5c50002  sh          $a1, 0x2($t6)
    ctx->pc = 0x4ff268u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ff26c: 0xa5ca0004  sh          $t2, 0x4($t6)
    ctx->pc = 0x4ff26cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ff270: 0xa5c60006  sh          $a2, 0x6($t6)
    ctx->pc = 0x4ff270u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ff274: 0xa5c90008  sh          $t1, 0x8($t6)
    ctx->pc = 0x4ff274u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ff278: 0xa5cc000a  sh          $t4, 0xA($t6)
    ctx->pc = 0x4ff278u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 12));
    // 0x4ff27c: 0xa5cb000c  sh          $t3, 0xC($t6)
    ctx->pc = 0x4ff27cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 11));
    // 0x4ff280: 0xa5d3000e  sh          $s3, 0xE($t6)
    ctx->pc = 0x4ff280u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x4ff284: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4FF284u;
    {
        const bool branch_taken_0x4ff284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF284u;
        // 0x4ff288: 0xa5cd0010  sh          $t5, 0x10($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 16), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff284) {
            ctx->pc = 0x4FF370u;
            goto label_4ff370;
        }
    }
    ctx->pc = 0x4FF28Cu;
    // 0x4ff28c: 0x0  nop
    ctx->pc = 0x4ff28cu;
    // NOP
label_4ff290:
    // 0x4ff290: 0x2921818  mult        $v1, $s4, $s2
    ctx->pc = 0x4ff290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff294: 0x72321018  mult1       $v0, $s1, $s2
    ctx->pc = 0x4ff294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff298: 0x142023  negu        $a0, $s4
    ctx->pc = 0x4ff298u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4ff29c: 0x132823  negu        $a1, $s3
    ctx->pc = 0x4ff29cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4ff2a0: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x4ff2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ff2a4: 0x70902018  mult1       $a0, $a0, $s0
    ctx->pc = 0x4ff2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff2a8: 0x2934818  mult        $t1, $s4, $s3
    ctx->pc = 0x4ff2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4ff2ac: 0x72305818  mult1       $t3, $s1, $s0
    ctx->pc = 0x4ff2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4ff2b0: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff2b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff2b4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff2b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff2b8: 0x503018  mult        $a2, $v0, $s0
    ctx->pc = 0x4ff2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff2bc: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x4ff2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff2c0: 0x70703818  mult1       $a3, $v1, $s0
    ctx->pc = 0x4ff2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ff2c4: 0x70731818  mult1       $v1, $v1, $s3
    ctx->pc = 0x4ff2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff2c8: 0x1f06818  mult        $t5, $t7, $s0
    ctx->pc = 0x4ff2c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4ff2cc: 0x71f36018  mult1       $t4, $t7, $s3
    ctx->pc = 0x4ff2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4ff2d0: 0x22f4018  mult        $t0, $s1, $t7
    ctx->pc = 0x4ff2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ff2d4: 0x728f5018  mult1       $t2, $s4, $t7
    ctx->pc = 0x4ff2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4ff2d8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff2d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff2dc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff2dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff2e0: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4ff2e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4ff2e4: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4ff2e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4ff2e8: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x4ff2e8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x4ff2ec: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff2ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff2f0: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4ff2f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4ff2f4: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4ff2f4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4ff2f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ff2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ff2fc: 0x121023  negu        $v0, $s2
    ctx->pc = 0x4ff2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x4ff300: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x4ff300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4ff304: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x4ff304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4ff308: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4ff308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4ff30c: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4ff30cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4ff310: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4ff310u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4ff314: 0xc6303  sra         $t4, $t4, 12
    ctx->pc = 0x4ff314u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 12));
    // 0x4ff318: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x4ff318u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
    // 0x4ff31c: 0xa5c80000  sh          $t0, 0x0($t6)
    ctx->pc = 0x4ff31cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ff320: 0xa5c40002  sh          $a0, 0x2($t6)
    ctx->pc = 0x4ff320u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff324: 0xa5c90004  sh          $t1, 0x4($t6)
    ctx->pc = 0x4ff324u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ff328: 0xa5ca0006  sh          $t2, 0x6($t6)
    ctx->pc = 0x4ff328u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ff32c: 0xa5cb0008  sh          $t3, 0x8($t6)
    ctx->pc = 0x4ff32cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x4ff330: 0xa5c5000a  sh          $a1, 0xA($t6)
    ctx->pc = 0x4ff330u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ff334: 0xa5c2000c  sh          $v0, 0xC($t6)
    ctx->pc = 0x4ff334u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 2));
label_4ff338:
    // 0x4ff338: 0xa5cc000e  sh          $t4, 0xE($t6)
    ctx->pc = 0x4ff338u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 14), (uint16_t)GPR_U32(ctx, 12));
    // 0x4ff33c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4FF33Cu;
    {
        const bool branch_taken_0x4ff33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF33Cu;
        // 0x4ff340: 0xa5cd0010  sh          $t5, 0x10($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 16), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff33c) {
            ctx->pc = 0x4FF370u;
            goto label_4ff370;
        }
    }
    ctx->pc = 0x4FF344u;
    // 0x4ff344: 0x0  nop
    ctx->pc = 0x4ff344u;
    // NOP
label_4ff348:
    // 0x4ff348: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FF348u;
    SET_GPR_U32(ctx, 31, 0x4FF350u);
    ctx->pc = 0x4FF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF348u;
    // 0x4ff34c: 0x2484c590  addiu       $a0, $a0, -0x3A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FF348u, 0x4FF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF350u;
label_4ff350:
    // 0x4ff350: 0x0  nop
    ctx->pc = 0x4ff350u;
    // NOP
    // 0x4ff354: 0x0  nop
    ctx->pc = 0x4ff354u;
    // NOP
    // 0x4ff358: 0x0  nop
    ctx->pc = 0x4ff358u;
    // NOP
    // 0x4ff35c: 0x0  nop
    ctx->pc = 0x4ff35cu;
    // NOP
    // 0x4ff360: 0x0  nop
    ctx->pc = 0x4ff360u;
    // NOP
    // 0x4ff364: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FF364u;
    {
        const bool branch_taken_0x4ff364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff364) {
            ctx->pc = 0x4FF350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ff350;
        }
    }
    ctx->pc = 0x4FF36Cu;
    // 0x4ff36c: 0x0  nop
    ctx->pc = 0x4ff36cu;
    // NOP
label_4ff370:
    // 0x4ff370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff374: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4ff374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ff378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff37c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ff37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ff380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ff380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ff384: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ff384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ff388: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ff388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ff38c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ff38cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ff390: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ff390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ff394: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF394u;
        // 0x4ff398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF39Cu;
    // 0x4ff39c: 0x0  nop
    ctx->pc = 0x4ff39cu;
    // NOP
    ctx->pc = 0x4ff3a0u;
}
