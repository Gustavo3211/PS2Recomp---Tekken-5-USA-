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

// Function: sub_0050F198
// Address: 0x50f198 - 0x50f1c8
void sub_0050F198_0x50f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F198_0x50f198");
#endif

    switch (ctx->pc) {
        case 0x50f198u: goto label_50f198;
        case 0x50f19cu: goto label_50f19c;
        case 0x50f1a0u: goto label_50f1a0;
        case 0x50f1a4u: goto label_50f1a4;
        case 0x50f1a8u: goto label_50f1a8;
        case 0x50f1acu: goto label_50f1ac;
        case 0x50f1b0u: goto label_50f1b0;
        case 0x50f1b4u: goto label_50f1b4;
        case 0x50f1b8u: goto label_50f1b8;
        case 0x50f1bcu: goto label_50f1bc;
        case 0x50f1c0u: goto label_50f1c0;
        case 0x50f1c4u: goto label_50f1c4;
        default: break;
    }

    ctx->pc = 0x50f198u;

label_50f198:
    // 0x50f198: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
label_50f19c:
    // 0x50f19c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50f19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_50f1a0:
    // 0x50f1a0: 0x84423d56  lh          $v0, 0x3D56($v0)
    ctx->pc = 0x50f1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 15702)));
label_50f1a4:
    // 0x50f1a4: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x50f1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_50f1a8:
    // 0x50f1a8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_50f1ac:
    if (ctx->pc == 0x50F1ACu) {
        ctx->pc = 0x50F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F1A8u;
        // 0x50f1ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50F1B0u;
        goto label_50f1b0;
    }
    ctx->pc = 0x50F1A8u;
    {
        const bool branch_taken_0x50f1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F1A8u;
        // 0x50f1ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f1a8) {
            ctx->pc = 0x50F218u;
            return;
        }
    }
    ctx->pc = 0x50F1B0u;
label_50f1b0:
    // 0x50f1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50f1b4:
    // 0x50f1b4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_50f1b8:
    // 0x50f1b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50f1bc:
    // 0x50f1bc: 0x8c63d3a0  lw          $v1, -0x2C60($v1)
    ctx->pc = 0x50f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955936)));
label_50f1c0:
    // 0x50f1c0: 0x600008  jr          $v1
label_50f1c4:
    if (ctx->pc == 0x50F1C4u) {
        ctx->pc = 0x50F1C8u;
        goto label_fallthrough_0x50f1c0;
    }
    ctx->pc = 0x50F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F1C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x50f1c0:
    ctx->pc = 0x50F1C8u;
}
