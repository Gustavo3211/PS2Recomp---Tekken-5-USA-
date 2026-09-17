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

// Function: sub_0023D4C0
// Address: 0x23d4c0 - 0x23d4f8
void sub_0023D4C0_0x23d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D4C0_0x23d4c0");
#endif

    switch (ctx->pc) {
        case 0x23d4d0u: goto label_23d4d0;
        default: break;
    }

    ctx->pc = 0x23d4c0u;

    // 0x23d4c0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23d4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4c8: 0x2443f3d0  addiu       $v1, $v0, -0xC30
    ctx->pc = 0x23d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
    // 0x23d4cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d4d0:
    // 0x23d4d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d4d4: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x23d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x23d4d8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x23d4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x23d4dc: 0x0  nop
    ctx->pc = 0x23d4dcu;
    // NOP
    // 0x23d4e0: 0x0  nop
    ctx->pc = 0x23d4e0u;
    // NOP
    // 0x23d4e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D4E4u;
    {
        const bool branch_taken_0x23d4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4E4u;
        // 0x23d4e8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4e4) {
            ctx->pc = 0x23D4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d4d0;
        }
    }
    ctx->pc = 0x23D4ECu;
    // 0x23d4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23D4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D4F4u;
    // 0x23d4f4: 0x0  nop
    ctx->pc = 0x23d4f4u;
    // NOP
    ctx->pc = 0x23d4f8u;
}
