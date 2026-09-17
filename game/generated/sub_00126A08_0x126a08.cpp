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

// Function: sub_00126A08
// Address: 0x126a08 - 0x126a20
void sub_00126A08_0x126a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A08_0x126a08");
#endif

    switch (ctx->pc) {
        case 0x126a08u: goto label_126a08;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a10u: goto label_126a10;
        case 0x126a14u: goto label_126a14;
        case 0x126a18u: goto label_126a18;
        case 0x126a1cu: goto label_126a1c;
        default: break;
    }

    ctx->pc = 0x126a08u;

label_126a08:
    // 0x126a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126a0c:
    // 0x126a0c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_126a10:
    // 0x126a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126a14:
    // 0x126a14: 0x8c43437c  lw          $v1, 0x437C($v0)
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17276)));
label_126a18:
    // 0x126a18: 0x60f809  jalr        $v1
label_126a1c:
    if (ctx->pc == 0x126A1Cu) {
        ctx->pc = 0x126A20u;
        goto label_fallthrough_0x126a18;
    }
    ctx->pc = 0x126A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x126A20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A18u, 0x126A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x126a18:
    ctx->pc = 0x126A20u;
}
