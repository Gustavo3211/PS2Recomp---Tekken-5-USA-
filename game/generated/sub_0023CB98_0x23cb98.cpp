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

// Function: sub_0023CB98
// Address: 0x23cb98 - 0x23cc10
void sub_0023CB98_0x23cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CB98_0x23cb98");
#endif

    switch (ctx->pc) {
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd8u: goto label_23cbd8;
        default: break;
    }

    ctx->pc = 0x23cb98u;

    // 0x23cb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cb9c: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x23cba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cbac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23cbb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23cbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23cbb8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23cbb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cbbc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23CBBCu;
    {
        const bool branch_taken_0x23cbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbbc) {
            ctx->pc = 0x23CBF0u;
            goto label_23cbf0;
        }
    }
    ctx->pc = 0x23CBC4u;
    // 0x23cbc4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cbc8: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x23cbcc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x23cbccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_23cbd0:
    // 0x23cbd0: 0xc089622  jal         func_225888
    ctx->pc = 0x23CBD0u;
    SET_GPR_U32(ctx, 31, 0x23CBD8u);
    ctx->pc = 0x23CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBD0u;
    // 0x23cbd4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x23CBD0u, 0x23CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBD8u;
label_23cbd8:
    // 0x23cbd8: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x23cbd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x23cbdc: 0x16330005  bne         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CBDCu;
    {
        const bool branch_taken_0x23cbdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x23CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBDCu;
        // 0x23cbe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbdc) {
            ctx->pc = 0x23CBF4u;
            goto label_23cbf4;
        }
    }
    ctx->pc = 0x23CBE4u;
    // 0x23cbe4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23cbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cbe8: 0x5452fff9  bnel        $v0, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23CBE8u;
    {
        const bool branch_taken_0x23cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x23cbe8) {
            ctx->pc = 0x23CBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBE8u;
            // 0x23cbec: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbd0;
        }
    }
    ctx->pc = 0x23CBF0u;
label_23cbf0:
    // 0x23cbf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23cbf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23cbf4:
    // 0x23cbf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cbf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cbfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cbfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cc00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cc04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x23CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC08u;
        // 0x23cc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CC10u;
}
