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

// Function: sub_002FCCB0
// Address: 0x2fccb0 - 0x2fcd50
void sub_002FCCB0_0x2fccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCCB0_0x2fccb0");
#endif

    switch (ctx->pc) {
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fccf8u: goto label_2fccf8;
        case 0x2fcd04u: goto label_2fcd04;
        default: break;
    }

    ctx->pc = 0x2fccb0u;

    // 0x2fccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fccb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fccb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fccb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fccc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fccc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fccc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fcccc: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCCCCu;
    {
        const bool branch_taken_0x2fcccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCCCu;
        // 0x2fccd0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcccc) {
            ctx->pc = 0x2FCCE8u;
            goto label_2fcce8;
        }
    }
    ctx->pc = 0x2FCCD4u;
    // 0x2fccd4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FCCD4u;
    {
        const bool branch_taken_0x2fccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCD4u;
        // 0x2fccd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccd4) {
            ctx->pc = 0x2FCD34u;
            goto label_2fcd34;
        }
    }
    ctx->pc = 0x2FCCDCu;
    // 0x2fccdc: 0x0  nop
    ctx->pc = 0x2fccdcu;
    // NOP
label_2fcce0:
    // 0x2fcce0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FCCE0u;
    {
        const bool branch_taken_0x2fcce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCE0u;
        // 0x2fcce4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcce0) {
            ctx->pc = 0x2FCD34u;
            goto label_2fcd34;
        }
    }
    ctx->pc = 0x2FCCE8u;
label_2fcce8:
    // 0x2fcce8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fccec: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2fccecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2fccf0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FCCF0u;
    {
        const bool branch_taken_0x2fccf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCF0u;
        // 0x2fccf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccf0) {
            ctx->pc = 0x2FCD30u;
            goto label_2fcd30;
        }
    }
    ctx->pc = 0x2FCCF8u;
label_2fccf8:
    // 0x2fccf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccfc: 0xc0bf312  jal         func_2FCC48
    ctx->pc = 0x2FCCFCu;
    SET_GPR_U32(ctx, 31, 0x2FCD04u);
    ctx->pc = 0x2FCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCCFCu;
    // 0x2fcd00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCC48u, 0x2FCCFCu, 0x2FCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD04u;
label_2fcd04:
    // 0x2fcd04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2FCD04u;
    {
        const bool branch_taken_0x2fcd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD04u;
        // 0x2fcd08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd04) {
            ctx->pc = 0x2FCCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcce0;
        }
    }
    ctx->pc = 0x2FCD0Cu;
    // 0x2fcd0c: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCD0Cu;
    {
        const bool branch_taken_0x2fcd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd0c) {
            ctx->pc = 0x2FCD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCD0Cu;
            // 0x2fcd10: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD20u;
            goto label_2fcd20;
        }
    }
    ctx->pc = 0x2FCD14u;
    // 0x2fcd14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2fcd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fcd18: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2fcd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fcd1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fcd20:
    // 0x2fcd20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fcd20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fcd24: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2fcd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fcd28: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FCD28u;
    {
        const bool branch_taken_0x2fcd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD28u;
        // 0x2fcd2c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd28) {
            ctx->pc = 0x2FCCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fccf8;
        }
    }
    ctx->pc = 0x2FCD30u;
label_2fcd30:
    // 0x2fcd30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fcd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd34:
    // 0x2fcd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcd38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fcd38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fcd3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fcd3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcd40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fcd40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fcd44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fcd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcd48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD48u;
        // 0x2fcd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCD50u;
}
