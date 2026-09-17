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

// Function: sub_001106A8
// Address: 0x1106a8 - 0x1106e8
void sub_001106A8_0x1106a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001106A8_0x1106a8");
#endif

    ctx->pc = 0x1106a8u;

    // 0x1106a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1106a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1106b0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1106b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1106b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1106b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1106bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1106bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1106c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1106c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1106c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1106c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1106c8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1106cc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1106CCu;
    {
        const bool branch_taken_0x1106cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106CCu;
        // 0x1106d0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106cc) {
            ctx->pc = 0x1106DCu;
            goto label_1106dc;
        }
    }
    ctx->pc = 0x1106D4u;
    // 0x1106d4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1106d8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1106d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1106dc:
    // 0x1106dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1106DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1106E4u;
    // 0x1106e4: 0x0  nop
    ctx->pc = 0x1106e4u;
    // NOP
    ctx->pc = 0x1106e8u;
}
