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

// Function: sub_00346048
// Address: 0x346048 - 0x346068
void sub_00346048_0x346048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346048_0x346048");
#endif

    switch (ctx->pc) {
        case 0x346058u: goto label_346058;
        default: break;
    }

    ctx->pc = 0x346048u;

    // 0x346048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34604c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346050: 0xc0d1790  jal         func_345E40
    ctx->pc = 0x346050u;
    SET_GPR_U32(ctx, 31, 0x346058u);
    ctx->pc = 0x345E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345E40u, 0x346050u, 0x346058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346058u;
label_346058:
    // 0x346058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34605c: 0x3e00008  jr          $ra
    ctx->pc = 0x34605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34605Cu;
        // 0x346060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346064u;
    // 0x346064: 0x0  nop
    ctx->pc = 0x346064u;
    // NOP
    ctx->pc = 0x346068u;
}
