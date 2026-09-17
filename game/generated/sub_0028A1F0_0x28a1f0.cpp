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

// Function: sub_0028A1F0
// Address: 0x28a1f0 - 0x28a210
void sub_0028A1F0_0x28a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A1F0_0x28a1f0");
#endif

    switch (ctx->pc) {
        case 0x28a200u: goto label_28a200;
        default: break;
    }

    ctx->pc = 0x28a1f0u;

    // 0x28a1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a1f8: 0xc0a2870  jal         func_28A1C0
    ctx->pc = 0x28A1F8u;
    SET_GPR_U32(ctx, 31, 0x28A200u);
    ctx->pc = 0x28A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1C0u, 0x28A1F8u, 0x28A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A200u;
label_28a200:
    // 0x28a200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a204: 0x3e00008  jr          $ra
    ctx->pc = 0x28A204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A204u;
        // 0x28a208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A20Cu;
    // 0x28a20c: 0x0  nop
    ctx->pc = 0x28a20cu;
    // NOP
    ctx->pc = 0x28a210u;
}
