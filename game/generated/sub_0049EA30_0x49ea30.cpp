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

// Function: sub_0049EA30
// Address: 0x49ea30 - 0x49eb20
void sub_0049EA30_0x49ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EA30_0x49ea30");
#endif

    switch (ctx->pc) {
        case 0x49ea78u: goto label_49ea78;
        case 0x49eabcu: goto label_49eabc;
        case 0x49eadcu: goto label_49eadc;
        default: break;
    }

    ctx->pc = 0x49ea30u;

    // 0x49ea30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49ea34: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49ea38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49ea3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49ea3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ea40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49ea44: 0x2444d680  addiu       $a0, $v0, -0x2980
    ctx->pc = 0x49ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49ea48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49ea4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49ea50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49ea54: 0x94832314  lhu         $v1, 0x2314($a0)
    ctx->pc = 0x49ea54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F994u));
    // 0x49ea58: 0x94822316  lhu         $v0, 0x2316($a0)
    ctx->pc = 0x49ea58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F996u));
    // 0x49ea5c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49ea5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49ea60: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x49EA60u;
    {
        const bool branch_taken_0x49ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA60u;
        // 0x49ea64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea60) {
            ctx->pc = 0x49EB04u;
            goto label_49eb04;
        }
    }
    ctx->pc = 0x49EA68u;
    // 0x49ea68: 0x84922338  lh          $s2, 0x2338($a0)
    ctx->pc = 0x49ea68u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9016)));
    // 0x49ea6c: 0x84902334  lh          $s0, 0x2334($a0)
    ctx->pc = 0x49ea6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9012)));
    // 0x49ea70: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49EA70u;
    SET_GPR_U32(ctx, 31, 0x49EA78u);
    ctx->pc = 0x49EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA70u;
    // 0x49ea74: 0x84912336  lh          $s1, 0x2336($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9014)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49EA70u, 0x49EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA78u;
label_49ea78:
    // 0x49ea78: 0x9445000a  lhu         $a1, 0xA($v0)
    ctx->pc = 0x49ea78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x49ea7c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x49ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x49ea80: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x49ea80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49ea84: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x49ea84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x49ea88: 0x2459023  subu        $s2, $s2, $a1
    ctx->pc = 0x49ea88u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x49ea8c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49ea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49ea90: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x49ea90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x49ea94: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x49ea94u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x49ea98: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x49ea98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x49ea9c: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x49ea9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x49eaa0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x49eaa0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x49eaa4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x49eaa4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x49eaa8: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x49eaa8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x49eaac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49eaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49eab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eab4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x49EAB4u;
    SET_GPR_U32(ctx, 31, 0x49EABCu);
    ctx->pc = 0x49EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EAB4u;
    // 0x49eab8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x49EAB4u, 0x49EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EABCu;
label_49eabc:
    // 0x49eabc: 0x24041400  addiu       $a0, $zero, 0x1400
    ctx->pc = 0x49eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x49eac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49eac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49eac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eac8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49eac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eacc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x49EACCu;
    {
        const bool branch_taken_0x49eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x49EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EACCu;
        // 0x49ead0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eacc) {
            ctx->pc = 0x49EB00u;
            goto label_49eb00;
        }
    }
    ctx->pc = 0x49EAD4u;
    // 0x49ead4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x49EAD4u;
    SET_GPR_U32(ctx, 31, 0x49EADCu);
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x49EAD4u, 0x49EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EADCu;
label_49eadc:
    // 0x49eadc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49EADCu;
    {
        const bool branch_taken_0x49eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EADCu;
        // 0x49eae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eadc) {
            ctx->pc = 0x49EB00u;
            goto label_49eb00;
        }
    }
    ctx->pc = 0x49EAE4u;
    // 0x49eae4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49eae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49eae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49eae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eaec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49eaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49eaf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49eaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49eaf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49eaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49eaf8: 0x8127a30  j           func_49E8C0
    ctx->pc = 0x49EAF8u;
    ctx->pc = 0x49EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EAF8u;
    // 0x49eafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E8C0u, 0x49EAF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49EB00u;
label_49eb00:
    // 0x49eb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49eb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49eb04:
    // 0x49eb04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49eb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49eb08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49eb08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49eb0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49eb0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49eb10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49eb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49eb14: 0x3e00008  jr          $ra
    ctx->pc = 0x49EB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB14u;
        // 0x49eb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EB1Cu;
    // 0x49eb1c: 0x0  nop
    ctx->pc = 0x49eb1cu;
    // NOP
    ctx->pc = 0x49eb20u;
}
