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

// Function: sub_002EEBC0
// Address: 0x2eebc0 - 0x2eec30
void sub_002EEBC0_0x2eebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEBC0_0x2eebc0");
#endif

    ctx->pc = 0x2eebc0u;

    // 0x2eebc0: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2eebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eebc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eebc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEBC8u;
    {
        const bool branch_taken_0x2eebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBC8u;
        // 0x2eebcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebc8) {
            ctx->pc = 0x2EEBE0u;
            goto label_2eebe0;
        }
    }
    ctx->pc = 0x2EEBD0u;
    // 0x2eebd0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eebd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eebd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEBD8u;
    {
        const bool branch_taken_0x2eebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eebd8) {
            ctx->pc = 0x2EEBECu;
            goto label_2eebec;
        }
    }
    ctx->pc = 0x2EEBE0u;
label_2eebe0:
    // 0x2eebe0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eebe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eebe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebe8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2eebec:
    // 0x2eebec: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEBECu;
    {
        const bool branch_taken_0x2eebec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBECu;
        // 0x2eebf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebec) {
            ctx->pc = 0x2EEC28u;
            goto label_2eec28;
        }
    }
    ctx->pc = 0x2EEBF4u;
    // 0x2eebf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eebf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEBF8u;
    {
        const bool branch_taken_0x2eebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBF8u;
        // 0x2eebfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebf8) {
            ctx->pc = 0x2EEC10u;
            goto label_2eec10;
        }
    }
    ctx->pc = 0x2EEC00u;
    // 0x2eec00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eec04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eec08: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEC08u;
    {
        const bool branch_taken_0x2eec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eec08) {
            ctx->pc = 0x2EEC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEC08u;
            // 0x2eec0c: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC20u;
            goto label_2eec20;
        }
    }
    ctx->pc = 0x2EEC10u;
label_2eec10:
    // 0x2eec10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2eec14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eec18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eec1c: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2eec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x100u));
label_2eec20:
    // 0x2eec20: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2eec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2eec24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2eec24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eec28:
    // 0x2eec28: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEC30u;
}
