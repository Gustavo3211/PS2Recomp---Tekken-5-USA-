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

// Function: sub_00363E98
// Address: 0x363e98 - 0x363ec8
void sub_00363E98_0x363e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E98_0x363e98");
#endif

    switch (ctx->pc) {
        case 0x363ea8u: goto label_363ea8;
        default: break;
    }

    ctx->pc = 0x363e98u;

    // 0x363e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363ea0: 0xc0d9032  jal         func_3640C8
    ctx->pc = 0x363EA0u;
    SET_GPR_U32(ctx, 31, 0x363EA8u);
    ctx->pc = 0x3640C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3640C8u, 0x363EA0u, 0x363EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EA8u;
label_363ea8:
    // 0x363ea8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x363ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363eac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x363EACu;
    {
        const bool branch_taken_0x363eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363EACu;
        // 0x363eb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363eac) {
            ctx->pc = 0x363EB8u;
            goto label_363eb8;
        }
    }
    ctx->pc = 0x363EB4u;
    // 0x363eb4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x363eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_363eb8:
    // 0x363eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x363EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363EBCu;
        // 0x363ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363EC4u;
    // 0x363ec4: 0x0  nop
    ctx->pc = 0x363ec4u;
    // NOP
    ctx->pc = 0x363ec8u;
}
