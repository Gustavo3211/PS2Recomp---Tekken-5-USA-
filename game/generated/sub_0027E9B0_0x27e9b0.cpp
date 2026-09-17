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

// Function: sub_0027E9B0
// Address: 0x27e9b0 - 0x27eab0
void sub_0027E9B0_0x27e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E9B0_0x27e9b0");
#endif

    switch (ctx->pc) {
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27ea10u: goto label_27ea10;
        case 0x27ea28u: goto label_27ea28;
        default: break;
    }

    ctx->pc = 0x27e9b0u;

    // 0x27e9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27e9b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27e9b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27e9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x27e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27e9c0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27e9c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x27e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x27e9c8: 0x241e0141  addiu       $fp, $zero, 0x141
    ctx->pc = 0x27e9c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27e9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e9d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27e9d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27e9d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27e9dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27e9e0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x27e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x27e9e4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x27e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x27e9e8: 0x8cd10020  lw          $s1, 0x20($a2)
    ctx->pc = 0x27e9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x27e9ec: 0xa6c00308  sh          $zero, 0x308($s6)
    ctx->pc = 0x27e9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 776), (uint16_t)GPR_U32(ctx, 0));
label_27e9f0:
    // 0x27e9f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27e9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e9f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e9f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27e9f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9fc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27e9fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ea00: 0x107e0015  beq         $v1, $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x27EA00u;
    {
        const bool branch_taken_0x27ea00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x27EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA00u;
        // 0x27ea04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea00) {
            ctx->pc = 0x27EA58u;
            goto label_27ea58;
        }
    }
    ctx->pc = 0x27EA08u;
    // 0x27ea08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27ea08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ea0c: 0x24170141  addiu       $s7, $zero, 0x141
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_27ea10:
    // 0x27ea10: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EA10u;
    {
        const bool branch_taken_0x27ea10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA10u;
        // 0x27ea14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea10) {
            ctx->pc = 0x27EA30u;
            goto label_27ea30;
        }
    }
    ctx->pc = 0x27EA18u;
    // 0x27ea18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27ea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea20: 0xc080b98  jal         func_202E60
    ctx->pc = 0x27EA20u;
    SET_GPR_U32(ctx, 31, 0x27EA28u);
    ctx->pc = 0x27EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA20u;
    // 0x27ea24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E60u, 0x27EA20u, 0x27EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA28u;
label_27ea28:
    // 0x27ea28: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27ea28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ea2c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x27ea2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27ea30:
    // 0x27ea30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27ea30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27ea34: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x27ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27ea38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27ea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea3c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x27ea3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ea40: 0x38430020  xori        $v1, $v0, 0x20
    ctx->pc = 0x27ea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32);
    // 0x27ea44: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x27ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x27ea48: 0x243980a  movz        $s3, $s2, $v1
    ctx->pc = 0x27ea48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x27ea4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27ea4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea50: 0x1497ffef  bne         $a0, $s7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27EA50u;
    {
        const bool branch_taken_0x27ea50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        ctx->pc = 0x27EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA50u;
        // 0x27ea54: 0x242a00a  movz        $s4, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea50) {
            ctx->pc = 0x27EA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ea10;
        }
    }
    ctx->pc = 0x27EA58u;
label_27ea58:
    // 0x27ea58: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EA58u;
    {
        const bool branch_taken_0x27ea58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ea58) {
            ctx->pc = 0x27EA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA58u;
            // 0x27ea5c: 0xa6b3030a  sh          $s3, 0x30A($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 778), (uint16_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EA68u;
            goto label_27ea68;
        }
    }
    ctx->pc = 0x27EA60u;
    // 0x27ea60: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x27EA60u;
    {
        const bool branch_taken_0x27ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA60u;
        // 0x27ea64: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea60) {
            ctx->pc = 0x27E9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e9f0;
        }
    }
    ctx->pc = 0x27EA68u;
label_27ea68:
    // 0x27ea68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27ea68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea6c: 0xa6b40308  sh          $s4, 0x308($s5)
    ctx->pc = 0x27ea6cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 776), (uint16_t)GPR_U32(ctx, 20));
    // 0x27ea70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ea70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ea74: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x27ea74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27ea78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ea78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ea7c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x27ea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x27ea80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ea80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ea84: 0xa6c3014e  sh          $v1, 0x14E($s6)
    ctx->pc = 0x27ea84u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 334), (uint16_t)GPR_U32(ctx, 3));
    // 0x27ea88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27ea88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ea8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27ea8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ea90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27ea90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27ea94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27ea94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ea98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x27ea98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27ea9c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x27ea9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27eaa0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x27eaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27eaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x27EAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAA4u;
        // 0x27eaa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EAACu;
    // 0x27eaac: 0x0  nop
    ctx->pc = 0x27eaacu;
    // NOP
    ctx->pc = 0x27eab0u;
}
