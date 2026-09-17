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

// Function: sub_002EE5F0
// Address: 0x2ee5f0 - 0x2ee618
void sub_002EE5F0_0x2ee5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE5F0_0x2ee5f0");
#endif

    switch (ctx->pc) {
        case 0x2ee610u: goto label_2ee610;
        default: break;
    }

    ctx->pc = 0x2ee5f0u;

    // 0x2ee5f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ee5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ee5f4: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x2ee5f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ee5f8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2ee5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee5fc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE5FCu;
    {
        const bool branch_taken_0x2ee5fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5FCu;
        // 0x2ee600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5fc) {
            ctx->pc = 0x2EE608u;
            goto label_2ee608;
        }
    }
    ctx->pc = 0x2EE604u;
    // 0x2ee604: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2ee604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2ee608:
    // 0x2ee608: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE610u;
label_2ee610:
    // 0x2ee610: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE610u;
        // 0x2ee614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE618u;
}
