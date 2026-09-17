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

// Function: sub_0021F050
// Address: 0x21f050 - 0x21f088
void sub_0021F050_0x21f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F050_0x21f050");
#endif

    ctx->pc = 0x21f050u;

    // 0x21f050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f058: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F058u;
    {
        const bool branch_taken_0x21f058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F058u;
        // 0x21f05c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f058) {
            ctx->pc = 0x21F078u;
            goto label_21f078;
        }
    }
    ctx->pc = 0x21F060u;
    // 0x21f060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f064: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F064u;
    {
        const bool branch_taken_0x21f064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F064u;
        // 0x21f068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f064) {
            ctx->pc = 0x21F07Cu;
            goto label_21f07c;
        }
    }
    ctx->pc = 0x21F06Cu;
    // 0x21f06c: 0x8087e96  j           func_21FA58
    ctx->pc = 0x21F06Cu;
    ctx->pc = 0x21F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F06Cu;
    // 0x21f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA58u, 0x21F06Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21F074u;
    // 0x21f074: 0x0  nop
    ctx->pc = 0x21f074u;
    // NOP
label_21f078:
    // 0x21f078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f07c:
    // 0x21f07c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F07Cu;
        // 0x21f080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F084u;
    // 0x21f084: 0x0  nop
    ctx->pc = 0x21f084u;
    // NOP
    ctx->pc = 0x21f088u;
}
