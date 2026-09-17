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

// Function: sub_00126A60
// Address: 0x126a60 - 0x126a78
void sub_00126A60_0x126a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A60_0x126a60");
#endif

    switch (ctx->pc) {
        case 0x126a60u: goto label_126a60;
        case 0x126a64u: goto label_126a64;
        case 0x126a68u: goto label_126a68;
        case 0x126a6cu: goto label_126a6c;
        case 0x126a70u: goto label_126a70;
        case 0x126a74u: goto label_126a74;
        default: break;
    }

    ctx->pc = 0x126a60u;

label_126a60:
    // 0x126a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126a64:
    // 0x126a64: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_126a68:
    // 0x126a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126a6c:
    // 0x126a6c: 0x8c434434  lw          $v1, 0x4434($v0)
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17460)));
label_126a70:
    // 0x126a70: 0x60f809  jalr        $v1
label_126a74:
    if (ctx->pc == 0x126A74u) {
        ctx->pc = 0x126A78u;
        goto label_fallthrough_0x126a70;
    }
    ctx->pc = 0x126A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x126A78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A70u, 0x126A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x126a70:
    ctx->pc = 0x126A78u;
}
