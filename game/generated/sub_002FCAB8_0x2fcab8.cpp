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

// Function: sub_002FCAB8
// Address: 0x2fcab8 - 0x2fcb58
void sub_002FCAB8_0x2fcab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCAB8_0x2fcab8");
#endif

    switch (ctx->pc) {
        case 0x2fcaf0u: goto label_2fcaf0;
        case 0x2fcb18u: goto label_2fcb18;
        default: break;
    }

    ctx->pc = 0x2fcab8u;

    // 0x2fcab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fcabc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fcabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fcac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fcac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fcac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fcac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fcac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcacc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fcaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fcad0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fcad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcad4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fcad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fcad8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2fcad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fcadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fcae0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fcae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2fcae4: 0x9664000e  lhu         $a0, 0xE($s3)
    ctx->pc = 0x2fcae4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2fcae8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FCAE8u;
    {
        const bool branch_taken_0x2fcae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAE8u;
        // 0x2fcaec: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcae8) {
            ctx->pc = 0x2FCB30u;
            goto label_2fcb30;
        }
    }
    ctx->pc = 0x2FCAF0u;
label_2fcaf0:
    // 0x2fcaf0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fcaf4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fcaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fcaf8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2fcaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2fcafc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCAFCu;
    {
        const bool branch_taken_0x2fcafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcafc) {
            ctx->pc = 0x2FCB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCAFCu;
            // 0x2fcb00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCB24u;
            goto label_2fcb24;
        }
    }
    ctx->pc = 0x2FCB04u;
    // 0x2fcb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fcb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fcb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2fcb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb10: 0xc0bec78  jal         func_2FB1E0
    ctx->pc = 0x2FCB10u;
    SET_GPR_U32(ctx, 31, 0x2FCB18u);
    ctx->pc = 0x2FCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB10u;
    // 0x2fcb14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1E0u, 0x2FCB10u, 0x2FCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB18u;
label_2fcb18:
    // 0x2fcb18: 0x9664000e  lhu         $a0, 0xE($s3)
    ctx->pc = 0x2fcb18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2fcb1c: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x2fcb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2fcb20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2fcb20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2fcb24:
    // 0x2fcb24: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x2fcb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fcb28: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FCB28u;
    {
        const bool branch_taken_0x2fcb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB28u;
        // 0x2fcb2c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb28) {
            ctx->pc = 0x2FCAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcaf0;
        }
    }
    ctx->pc = 0x2FCB30u;
label_2fcb30:
    // 0x2fcb30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fcb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcb38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fcb38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fcb3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fcb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcb40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fcb40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fcb44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fcb44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcb48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fcb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fcb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB4Cu;
        // 0x2fcb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCB54u;
    // 0x2fcb54: 0x0  nop
    ctx->pc = 0x2fcb54u;
    // NOP
    ctx->pc = 0x2fcb58u;
}
