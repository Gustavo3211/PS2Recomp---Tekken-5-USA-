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

// Function: sub_00213F68
// Address: 0x213f68 - 0x213f80
void sub_00213F68_0x213f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213F68_0x213f68");
#endif

    switch (ctx->pc) {
        case 0x213f6cu: goto label_213f6c;
        default: break;
    }

    ctx->pc = 0x213f68u;

    // 0x213f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213f6c:
    // 0x213f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f78: 0x3e00008  jr          $ra
    ctx->pc = 0x213F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F78u;
        // 0x213f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213F80u;
}
