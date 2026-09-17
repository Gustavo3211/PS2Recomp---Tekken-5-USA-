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

// Function: sub_0027EAB0
// Address: 0x27eab0 - 0x27eb60
void sub_0027EAB0_0x27eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EAB0_0x27eab0");
#endif

    switch (ctx->pc) {
        case 0x27eae0u: goto label_27eae0;
        case 0x27eaf8u: goto label_27eaf8;
        case 0x27eb10u: goto label_27eb10;
        default: break;
    }

    ctx->pc = 0x27eab0u;

    // 0x27eab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27eab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27eab8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27eab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eabc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27eac0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27eac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eac4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27eac8: 0x24150141  addiu       $s5, $zero, 0x141
    ctx->pc = 0x27eac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27eacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27eaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ead0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27ead4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27ead8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27eadc: 0x8cd10020  lw          $s1, 0x20($a2)
    ctx->pc = 0x27eadcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_27eae0:
    // 0x27eae0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27eae4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27eae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27eae8: 0x1055000f  beq         $v0, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x27EAE8u;
    {
        const bool branch_taken_0x27eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x27EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAE8u;
        // 0x27eaec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eae8) {
            ctx->pc = 0x27EB28u;
            goto label_27eb28;
        }
    }
    ctx->pc = 0x27EAF0u;
    // 0x27eaf0: 0x24120141  addiu       $s2, $zero, 0x141
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27eaf4: 0x0  nop
    ctx->pc = 0x27eaf4u;
    // NOP
label_27eaf8:
    // 0x27eaf8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EAF8u;
    {
        const bool branch_taken_0x27eaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAF8u;
        // 0x27eafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaf8) {
            ctx->pc = 0x27EB14u;
            goto label_27eb14;
        }
    }
    ctx->pc = 0x27EB00u;
    // 0x27eb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27eb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb08: 0xc080b98  jal         func_202E60
    ctx->pc = 0x27EB08u;
    SET_GPR_U32(ctx, 31, 0x27EB10u);
    ctx->pc = 0x27EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB08u;
    // 0x27eb0c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E60u, 0x27EB08u, 0x27EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB10u;
label_27eb10:
    // 0x27eb10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27eb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27eb14:
    // 0x27eb14: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27eb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27eb18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27eb18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27eb1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27eb20: 0x1452fff5  bne         $v0, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x27EB20u;
    {
        const bool branch_taken_0x27eb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x27eb20) {
            ctx->pc = 0x27EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eaf8;
        }
    }
    ctx->pc = 0x27EB28u;
label_27eb28:
    // 0x27eb28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EB28u;
    {
        const bool branch_taken_0x27eb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB28u;
        // 0x27eb2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb28) {
            ctx->pc = 0x27EB38u;
            goto label_27eb38;
        }
    }
    ctx->pc = 0x27EB30u;
    // 0x27eb30: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x27EB30u;
    {
        const bool branch_taken_0x27eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB30u;
        // 0x27eb34: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb30) {
            ctx->pc = 0x27EAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eae0;
        }
    }
    ctx->pc = 0x27EB38u;
label_27eb38:
    // 0x27eb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27eb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eb3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27eb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27eb40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27eb40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eb44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27eb44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27eb48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27eb48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27eb4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27eb50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27eb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eb54: 0x3e00008  jr          $ra
    ctx->pc = 0x27EB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB54u;
        // 0x27eb58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EB5Cu;
    // 0x27eb5c: 0x0  nop
    ctx->pc = 0x27eb5cu;
    // NOP
    ctx->pc = 0x27eb60u;
}
