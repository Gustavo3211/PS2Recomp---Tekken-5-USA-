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

// Function: sub_002A4B78
// Address: 0x2a4b78 - 0x2a4b98
void sub_002A4B78_0x2a4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B78_0x2a4b78");
#endif

    switch (ctx->pc) {
        case 0x2a4b80u: goto label_2a4b80;
        default: break;
    }

    ctx->pc = 0x2a4b78u;

    // 0x2a4b78: 0xc049a82  jal         func_126A08
    ctx->pc = 0x2A4B78u;
    SET_GPR_U32(ctx, 31, 0x2A4B80u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2A4B78u, 0x2A4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B80u;
label_2a4b80:
    // 0x2a4b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a4b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a4b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B90u;
        // 0x2a4b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B98u;
}
