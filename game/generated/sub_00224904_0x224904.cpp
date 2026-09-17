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

// Function: sub_00224904
// Address: 0x224904 - 0x224920
void sub_00224904_0x224904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224904_0x224904");
#endif

    switch (ctx->pc) {
        case 0x224908u: goto label_224908;
        default: break;
    }

    ctx->pc = 0x224904u;

    // 0x224904: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x224904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_224908:
    // 0x224908: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x224908u;
    {
        const bool branch_taken_0x224908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x224908) {
            ctx->pc = 0x224918u;
            goto label_224918;
        }
    }
    ctx->pc = 0x224910u;
    // 0x224910: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x224910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x224914: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x224914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_224918:
    // 0x224918: 0x3e00008  jr          $ra
    ctx->pc = 0x224918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224920u;
}
