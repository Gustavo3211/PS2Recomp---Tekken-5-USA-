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

// Function: sub_00297D90
// Address: 0x297d90 - 0x297db0
void sub_00297D90_0x297d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297D90_0x297d90");
#endif

    switch (ctx->pc) {
        case 0x297da0u: goto label_297da0;
        default: break;
    }

    ctx->pc = 0x297d90u;

    // 0x297d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297d98: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x297D98u;
    SET_GPR_U32(ctx, 31, 0x297DA0u);
    ctx->pc = 0x297D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D98u;
    // 0x297d9c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x297D98u, 0x297DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DA0u;
label_297da0:
    // 0x297da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297da4: 0x3e00008  jr          $ra
    ctx->pc = 0x297DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA4u;
        // 0x297da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297DACu;
    // 0x297dac: 0x0  nop
    ctx->pc = 0x297dacu;
    // NOP
    ctx->pc = 0x297db0u;
}
