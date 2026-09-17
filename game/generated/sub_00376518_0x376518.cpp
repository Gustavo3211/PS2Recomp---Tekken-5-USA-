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

// Function: sub_00376518
// Address: 0x376518 - 0x376538
void sub_00376518_0x376518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376518_0x376518");
#endif

    switch (ctx->pc) {
        case 0x376528u: goto label_376528;
        default: break;
    }

    ctx->pc = 0x376518u;

    // 0x376518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37651c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376520: 0xc0cb174  jal         func_32C5D0
    ctx->pc = 0x376520u;
    SET_GPR_U32(ctx, 31, 0x376528u);
    ctx->pc = 0x32C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5D0u, 0x376520u, 0x376528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376528u;
label_376528:
    // 0x376528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37652c: 0x3e00008  jr          $ra
    ctx->pc = 0x37652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37652Cu;
        // 0x376530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37652Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376534u;
    // 0x376534: 0x0  nop
    ctx->pc = 0x376534u;
    // NOP
    ctx->pc = 0x376538u;
}
