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

// Function: sub_00111CC0
// Address: 0x111cc0 - 0x111ce8
void sub_00111CC0_0x111cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111CC0_0x111cc0");
#endif

    switch (ctx->pc) {
        case 0x111cd8u: goto label_111cd8;
        default: break;
    }

    ctx->pc = 0x111cc0u;

    // 0x111cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111cc4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x111cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111CC8u;
    {
        const bool branch_taken_0x111cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CC8u;
        // 0x111ccc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cc8) {
            ctx->pc = 0x111CD8u;
            goto label_111cd8;
        }
    }
    ctx->pc = 0x111CD0u;
    // 0x111cd0: 0xc044300  jal         func_110C00
    ctx->pc = 0x111CD0u;
    SET_GPR_U32(ctx, 31, 0x111CD8u);
    ctx->pc = 0x110C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C00u, 0x111CD0u, 0x111CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CD8u;
label_111cd8:
    // 0x111cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x111CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CE0u;
        // 0x111ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CE8u;
}
