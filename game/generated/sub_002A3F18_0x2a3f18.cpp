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

// Function: sub_002A3F18
// Address: 0x2a3f18 - 0x2a3f30
void sub_002A3F18_0x2a3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3F18_0x2a3f18");
#endif

    switch (ctx->pc) {
        case 0x2a3f20u: goto label_2a3f20;
        default: break;
    }

    ctx->pc = 0x2a3f18u;

    // 0x2a3f18: 0xc049a82  jal         func_126A08
    ctx->pc = 0x2A3F18u;
    SET_GPR_U32(ctx, 31, 0x2A3F20u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2A3F18u, 0x2A3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F20u;
label_2a3f20:
    // 0x2a3f20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a3f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F28u;
        // 0x2a3f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F30u;
}
