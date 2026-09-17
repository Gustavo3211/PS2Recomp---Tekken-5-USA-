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

// Function: sub_002EE618
// Address: 0x2ee618 - 0x2ee640
void sub_002EE618_0x2ee618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE618_0x2ee618");
#endif

    switch (ctx->pc) {
        case 0x2ee638u: goto label_2ee638;
        default: break;
    }

    ctx->pc = 0x2ee618u;

    // 0x2ee618: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ee618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ee61c: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x2ee61cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ee620: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee624: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE624u;
    {
        const bool branch_taken_0x2ee624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE624u;
        // 0x2ee628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee624) {
            ctx->pc = 0x2EE630u;
            goto label_2ee630;
        }
    }
    ctx->pc = 0x2EE62Cu;
    // 0x2ee62c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2ee62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2ee630:
    // 0x2ee630: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE638u;
label_2ee638:
    // 0x2ee638: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE638u;
        // 0x2ee63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE640u;
}
