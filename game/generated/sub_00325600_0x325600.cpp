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

// Function: sub_00325600
// Address: 0x325600 - 0x325628
void sub_00325600_0x325600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325600_0x325600");
#endif

    switch (ctx->pc) {
        case 0x325600u: goto label_325600;
        case 0x325604u: goto label_325604;
        case 0x325608u: goto label_325608;
        case 0x32560cu: goto label_32560c;
        case 0x325610u: goto label_325610;
        case 0x325614u: goto label_325614;
        case 0x325618u: goto label_325618;
        case 0x32561cu: goto label_32561c;
        case 0x325620u: goto label_325620;
        case 0x325624u: goto label_325624;
        default: break;
    }

    ctx->pc = 0x325600u;

label_325600:
    // 0x325600: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x325600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_325604:
    // 0x325604: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x325604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_325608:
    // 0x325608: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32560c:
    if (ctx->pc == 0x32560Cu) {
        ctx->pc = 0x325610u;
        goto label_325610;
    }
    ctx->pc = 0x325608u;
    {
        const bool branch_taken_0x325608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325608) {
            ctx->pc = 0x325638u;
            return;
        }
    }
    ctx->pc = 0x325610u;
label_325610:
    // 0x325610: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x325610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_325614:
    // 0x325614: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x325614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_325618:
    // 0x325618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32561c:
    // 0x32561c: 0x8c6330a0  lw          $v1, 0x30A0($v1)
    ctx->pc = 0x32561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12448)));
label_325620:
    // 0x325620: 0x600008  jr          $v1
label_325624:
    if (ctx->pc == 0x325624u) {
        ctx->pc = 0x325628u;
        goto label_fallthrough_0x325620;
    }
    ctx->pc = 0x325620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x325620:
    ctx->pc = 0x325628u;
}
