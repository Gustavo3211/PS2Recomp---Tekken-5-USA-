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

// Function: sub_00121C90
// Address: 0x121c90 - 0x121ca8
void sub_00121C90_0x121c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121C90_0x121c90");
#endif

    switch (ctx->pc) {
        case 0x121c90u: goto label_121c90;
        case 0x121c94u: goto label_121c94;
        case 0x121c98u: goto label_121c98;
        case 0x121c9cu: goto label_121c9c;
        case 0x121ca0u: goto label_121ca0;
        case 0x121ca4u: goto label_121ca4;
        default: break;
    }

    ctx->pc = 0x121c90u;

label_121c90:
    // 0x121c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_121c94:
    // 0x121c94: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x121c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_121c98:
    // 0x121c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121c9c:
    // 0x121c9c: 0x8c43437c  lw          $v1, 0x437C($v0)
    ctx->pc = 0x121c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17276)));
label_121ca0:
    // 0x121ca0: 0x60f809  jalr        $v1
label_121ca4:
    if (ctx->pc == 0x121CA4u) {
        ctx->pc = 0x121CA8u;
        goto label_fallthrough_0x121ca0;
    }
    ctx->pc = 0x121CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121CA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CA0u, 0x121CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x121ca0:
    ctx->pc = 0x121CA8u;
}
