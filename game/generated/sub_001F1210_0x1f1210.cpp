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

// Function: sub_001F1210
// Address: 0x1f1210 - 0x1f1230
void sub_001F1210_0x1f1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1210_0x1f1210");
#endif

    ctx->pc = 0x1f1210u;

    // 0x1f1210: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f1210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f1214: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1214u;
    {
        const bool branch_taken_0x1f1214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1214u;
        // 0x1f1218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1214) {
            ctx->pc = 0x1F1228u;
            goto label_1f1228;
        }
    }
    ctx->pc = 0x1F121Cu;
    // 0x1f121c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F121Cu;
    {
        const bool branch_taken_0x1f121c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F121Cu;
        // 0x1f1220: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f121c) {
            ctx->pc = 0x1F1228u;
            goto label_1f1228;
        }
    }
    ctx->pc = 0x1F1224u;
    // 0x1f1224: 0xac408858  sw          $zero, -0x77A8($v0)
    ctx->pc = 0x1f1224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936664), GPR_U32(ctx, 0));
label_1f1228:
    // 0x1f1228: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1230u;
}
