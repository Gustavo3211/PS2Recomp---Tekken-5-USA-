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

// Function: sub_0032C5F0
// Address: 0x32c5f0 - 0x32c618
void sub_0032C5F0_0x32c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C5F0_0x32c5f0");
#endif

    switch (ctx->pc) {
        case 0x32c608u: goto label_32c608;
        default: break;
    }

    ctx->pc = 0x32c5f0u;

    // 0x32c5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c5f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32c5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c5fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x32c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x32c600: 0xc0cb186  jal         func_32C618
    ctx->pc = 0x32C600u;
    SET_GPR_U32(ctx, 31, 0x32C608u);
    ctx->pc = 0x32C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C600u;
    // 0x32c604: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C618u, 0x32C600u, 0x32C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C608u;
label_32c608:
    // 0x32c608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c60c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C60Cu;
        // 0x32c610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C614u;
    // 0x32c614: 0x0  nop
    ctx->pc = 0x32c614u;
    // NOP
    ctx->pc = 0x32c618u;
}
