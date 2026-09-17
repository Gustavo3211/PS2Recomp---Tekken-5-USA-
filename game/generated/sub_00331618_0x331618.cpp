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

// Function: sub_00331618
// Address: 0x331618 - 0x331638
void sub_00331618_0x331618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331618_0x331618");
#endif

    switch (ctx->pc) {
        case 0x33162cu: goto label_33162c;
        default: break;
    }

    ctx->pc = 0x331618u;

    // 0x331618: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x331618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x33161c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33161cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331624: 0xc0cc69e  jal         func_331A78
    ctx->pc = 0x331624u;
    SET_GPR_U32(ctx, 31, 0x33162Cu);
    ctx->pc = 0x331628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331624u;
    // 0x331628: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A78u, 0x331624u, 0x33162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33162Cu;
label_33162c:
    // 0x33162c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331630: 0x3e00008  jr          $ra
    ctx->pc = 0x331630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331630u;
        // 0x331634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331638u;
}
