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

// Function: sub_00100620
// Address: 0x100620 - 0x100648
void sub_00100620_0x100620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100620_0x100620");
#endif

    switch (ctx->pc) {
        case 0x100630u: goto label_100630;
        case 0x100638u: goto label_100638;
        default: break;
    }

    ctx->pc = 0x100620u;

    // 0x100620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100628: 0xc040104  jal         func_100410
    ctx->pc = 0x100628u;
    SET_GPR_U32(ctx, 31, 0x100630u);
    ctx->pc = 0x10062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100628u;
    // 0x10062c: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100410u, 0x100628u, 0x100630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100630u;
label_100630:
    // 0x100630: 0xc040158  jal         func_100560
    ctx->pc = 0x100630u;
    SET_GPR_U32(ctx, 31, 0x100638u);
    ctx->pc = 0x100560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100560u, 0x100630u, 0x100638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100638u;
label_100638:
    // 0x100638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10063c: 0x3e00008  jr          $ra
    ctx->pc = 0x10063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10063Cu;
        // 0x100640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100644u;
    // 0x100644: 0x0  nop
    ctx->pc = 0x100644u;
    // NOP
    ctx->pc = 0x100648u;
}
