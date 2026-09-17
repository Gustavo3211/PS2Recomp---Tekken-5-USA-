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

// Function: sub_0028F1F8
// Address: 0x28f1f8 - 0x28f218
void sub_0028F1F8_0x28f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F1F8_0x28f1f8");
#endif

    switch (ctx->pc) {
        case 0x28f200u: goto label_28f200;
        default: break;
    }

    ctx->pc = 0x28f1f8u;

    // 0x28f1f8: 0xc049a82  jal         func_126A08
    ctx->pc = 0x28F1F8u;
    SET_GPR_U32(ctx, 31, 0x28F200u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x28F1F8u, 0x28F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F200u;
label_28f200:
    // 0x28f200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F20Cu;
        // 0x28f210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F214u;
    // 0x28f214: 0x0  nop
    ctx->pc = 0x28f214u;
    // NOP
    ctx->pc = 0x28f218u;
}
