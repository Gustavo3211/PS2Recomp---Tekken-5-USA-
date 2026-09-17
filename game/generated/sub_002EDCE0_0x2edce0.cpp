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

// Function: sub_002EDCE0
// Address: 0x2edce0 - 0x2eddf0
void sub_002EDCE0_0x2edce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDCE0_0x2edce0");
#endif

    switch (ctx->pc) {
        case 0x2edd24u: goto label_2edd24;
        case 0x2edd60u: goto label_2edd60;
        case 0x2edda8u: goto label_2edda8;
        case 0x2eddc0u: goto label_2eddc0;
        case 0x2eddc8u: goto label_2eddc8;
        default: break;
    }

    ctx->pc = 0x2edce0u;

    // 0x2edce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2edce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2edce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2edce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2edce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2edcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2edcf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2edcf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2edcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2edcf8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2edcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2edcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2edd00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2edd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2edd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2edd08: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2edd08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2edd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2edd10: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2edd10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd14: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2edd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2edd18: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2edd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2edd1c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2EDD1Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD24u);
    ctx->pc = 0x2EDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD1Cu;
    // 0x2edd20: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2EDD1Cu, 0x2EDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD24u;
label_2edd24:
    // 0x2edd24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2edd28: 0x26040168  addiu       $a0, $s0, 0x168
    ctx->pc = 0x2edd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x2edd2c: 0x246308d8  addiu       $v1, $v1, 0x8D8
    ctx->pc = 0x2edd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2264));
    // 0x2edd30: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2edd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2edd34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2edd34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2edd38: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDD38u;
    {
        const bool branch_taken_0x2edd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD38u;
        // 0x2edd3c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd38) {
            ctx->pc = 0x2EDD4Cu;
            goto label_2edd4c;
        }
    }
    ctx->pc = 0x2EDD40u;
    // 0x2edd40: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x2edd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x2edd44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2edd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2edd48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2edd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2edd4c:
    // 0x2edd4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2edd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2edd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2edd54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd58: 0xc0bb77c  jal         func_2EDDF0
    ctx->pc = 0x2EDD58u;
    SET_GPR_U32(ctx, 31, 0x2EDD60u);
    ctx->pc = 0x2EDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD58u;
    // 0x2edd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDF0u, 0x2EDD58u, 0x2EDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD60u;
label_2edd60:
    // 0x2edd60: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2edd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2edd64: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2edd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2edd68: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2edd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edd6c: 0xae150154  sw          $s5, 0x154($s0)
    ctx->pc = 0x2edd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 21));
    // 0x2edd70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2edd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2edd74: 0xae040164  sw          $a0, 0x164($s0)
    ctx->pc = 0x2edd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 4));
    // 0x2edd78: 0xae160158  sw          $s6, 0x158($s0)
    ctx->pc = 0x2edd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 22));
    // 0x2edd7c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2edd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2edd80: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x2edd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x2edd84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDD84u;
    {
        const bool branch_taken_0x2edd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD84u;
        // 0x2edd88: 0xae040160  sw          $a0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd84) {
            ctx->pc = 0x2EDDC8u;
            goto label_2eddc8;
        }
    }
    ctx->pc = 0x2EDD8Cu;
    // 0x2edd8c: 0x0  nop
    ctx->pc = 0x2edd8cu;
    // NOP
    // 0x2edd90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2edd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2edd94: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2edd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2edd98: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2edd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2edd9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2edd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edda0: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2EDDA0u;
    SET_GPR_U32(ctx, 31, 0x2EDDA8u);
    ctx->pc = 0x2EDDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDA0u;
    // 0x2edda4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2EDDA0u, 0x2EDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDA8u;
label_2edda8:
    // 0x2edda8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eddac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2eddacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2eddb0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2eddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2eddb4: 0x24840688  addiu       $a0, $a0, 0x688
    ctx->pc = 0x2eddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1672));
    // 0x2eddb8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EDDB8u;
    SET_GPR_U32(ctx, 31, 0x2EDDC0u);
    ctx->pc = 0x2EDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDB8u;
    // 0x2eddbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EDDB8u, 0x2EDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDC0u;
label_2eddc0:
    // 0x2eddc0: 0xc049a82  jal         func_126A08
    ctx->pc = 0x2EDDC0u;
    SET_GPR_U32(ctx, 31, 0x2EDDC8u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2EDDC0u, 0x2EDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDC8u;
label_2eddc8:
    // 0x2eddc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eddc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eddcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eddccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eddd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eddd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eddd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eddd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eddd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eddd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edddc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2edddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2edde0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2edde0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2edde4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2edde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2edde8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDE8u;
        // 0x2eddec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDDF0u;
}
