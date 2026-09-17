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

// Function: sub_00346970
// Address: 0x346970 - 0x346990
void sub_00346970_0x346970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346970_0x346970");
#endif

    switch (ctx->pc) {
        case 0x346980u: goto label_346980;
        default: break;
    }

    ctx->pc = 0x346970u;

    // 0x346970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346978: 0xc0d1a12  jal         func_346848
    ctx->pc = 0x346978u;
    SET_GPR_U32(ctx, 31, 0x346980u);
    ctx->pc = 0x346848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346848u, 0x346978u, 0x346980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346980u;
label_346980:
    // 0x346980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346984: 0x3e00008  jr          $ra
    ctx->pc = 0x346984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346984u;
        // 0x346988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34698Cu;
    // 0x34698c: 0x0  nop
    ctx->pc = 0x34698cu;
    // NOP
    ctx->pc = 0x346990u;
}
