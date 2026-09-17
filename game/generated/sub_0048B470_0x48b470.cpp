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

// Function: sub_0048B470
// Address: 0x48b470 - 0x48b4a0
void sub_0048B470_0x48b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B470_0x48b470");
#endif

    switch (ctx->pc) {
        case 0x48b470u: goto label_48b470;
        case 0x48b474u: goto label_48b474;
        case 0x48b478u: goto label_48b478;
        case 0x48b47cu: goto label_48b47c;
        case 0x48b480u: goto label_48b480;
        case 0x48b484u: goto label_48b484;
        case 0x48b488u: goto label_48b488;
        case 0x48b48cu: goto label_48b48c;
        case 0x48b490u: goto label_48b490;
        case 0x48b494u: goto label_48b494;
        case 0x48b498u: goto label_48b498;
        case 0x48b49cu: goto label_48b49c;
        default: break;
    }

    ctx->pc = 0x48b470u;

label_48b470:
    // 0x48b470: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_48b474:
    // 0x48b474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48b478:
    // 0x48b478: 0x8442d716  lh          $v0, -0x28EA($v0)
    ctx->pc = 0x48b478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956822)));
label_48b47c:
    // 0x48b47c: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x48b47cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_48b480:
    // 0x48b480: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_48b484:
    if (ctx->pc == 0x48B484u) {
        ctx->pc = 0x48B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B480u;
        // 0x48b484: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B488u;
        goto label_48b488;
    }
    ctx->pc = 0x48B480u;
    {
        const bool branch_taken_0x48b480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B480u;
        // 0x48b484: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b480) {
            ctx->pc = 0x48B4F0u;
            return;
        }
    }
    ctx->pc = 0x48B488u;
label_48b488:
    // 0x48b488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48b48c:
    // 0x48b48c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48b490:
    // 0x48b490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48b490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48b494:
    // 0x48b494: 0x8c639eb0  lw          $v1, -0x6150($v1)
    ctx->pc = 0x48b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942384)));
label_48b498:
    // 0x48b498: 0x600008  jr          $v1
label_48b49c:
    if (ctx->pc == 0x48B49Cu) {
        ctx->pc = 0x48B4A0u;
        goto label_fallthrough_0x48b498;
    }
    ctx->pc = 0x48B498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x48b498:
    ctx->pc = 0x48B4A0u;
}
