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

// Function: sub_0029E608
// Address: 0x29e608 - 0x29e630
void sub_0029E608_0x29e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E608_0x29e608");
#endif

    switch (ctx->pc) {
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        default: break;
    }

    ctx->pc = 0x29e608u;

label_29e608:
    // 0x29e608: 0x2c820050  sltiu       $v0, $a0, 0x50
    ctx->pc = 0x29e608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_29e60c:
    // 0x29e60c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_29e610:
    if (ctx->pc == 0x29E610u) {
        ctx->pc = 0x29E614u;
        goto label_29e614;
    }
    ctx->pc = 0x29E60Cu;
    {
        const bool branch_taken_0x29e60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e60c) {
            ctx->pc = 0x29E738u;
            return;
        }
    }
    ctx->pc = 0x29E614u;
label_29e614:
    // 0x29e614: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29e618:
    // 0x29e618: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29e618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_29e61c:
    // 0x29e61c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e620:
    // 0x29e620: 0x8c63c450  lw          $v1, -0x3BB0($v1)
    ctx->pc = 0x29e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952016)));
label_29e624:
    // 0x29e624: 0x600008  jr          $v1
label_29e628:
    if (ctx->pc == 0x29E628u) {
        ctx->pc = 0x29E62Cu;
        goto label_29e62c;
    }
    ctx->pc = 0x29E624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E624u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E62Cu;
label_29e62c:
    // 0x29e62c: 0x0  nop
    ctx->pc = 0x29e62cu;
    // NOP
    ctx->pc = 0x29e630u;
}
