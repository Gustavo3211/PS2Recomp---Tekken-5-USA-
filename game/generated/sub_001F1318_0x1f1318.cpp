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

// Function: sub_001F1318
// Address: 0x1f1318 - 0x1f1358
void sub_001F1318_0x1f1318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1318_0x1f1318");
#endif

    ctx->pc = 0x1f1318u;

    // 0x1f1318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f131c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1320: 0x8c8206b0  lw          $v0, 0x6B0($a0)
    ctx->pc = 0x1f1320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1712)));
    // 0x1f1324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1324u;
    {
        const bool branch_taken_0x1f1324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1324u;
        // 0x1f1328: 0x2c430003  sltiu       $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1324) {
            ctx->pc = 0x1F1340u;
            goto label_1f1340;
        }
    }
    ctx->pc = 0x1F132Cu;
    // 0x1f132c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F132Cu;
    {
        const bool branch_taken_0x1f132c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F132Cu;
        // 0x1f1330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f132c) {
            ctx->pc = 0x1F1350u;
            goto label_1f1350;
        }
    }
    ctx->pc = 0x1F1334u;
    // 0x1f1334: 0x809e6cc  j           func_279B30
    ctx->pc = 0x1F1334u;
    ctx->pc = 0x1F1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1334u;
    // 0x1f1338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B30u;
    sub_00279B30_0x279b30(rdram, ctx, runtime); return;
    ctx->pc = 0x1F133Cu;
    // 0x1f133c: 0x0  nop
    ctx->pc = 0x1f133cu;
    // NOP
label_1f1340:
    // 0x1f1340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1344: 0x809e690  j           func_279A40
    ctx->pc = 0x1F1344u;
    ctx->pc = 0x1F1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1344u;
    // 0x1f1348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279A40u;
    sub_00279A40_0x279a40(rdram, ctx, runtime); return;
    ctx->pc = 0x1F134Cu;
    // 0x1f134c: 0x0  nop
    ctx->pc = 0x1f134cu;
    // NOP
label_1f1350:
    // 0x1f1350: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1350u;
        // 0x1f1354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1358u;
}
