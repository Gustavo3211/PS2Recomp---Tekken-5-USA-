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

// Function: sub_00249CC0
// Address: 0x249cc0 - 0x249cd8
void sub_00249CC0_0x249cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249CC0_0x249cc0");
#endif

    switch (ctx->pc) {
        case 0x249cc4u: goto label_249cc4;
        default: break;
    }

    ctx->pc = 0x249cc0u;

    // 0x249cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249cc4:
    // 0x249cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249ccc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x249CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CD0u;
        // 0x249cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249CD8u;
}
