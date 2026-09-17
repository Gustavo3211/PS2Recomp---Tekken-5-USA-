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

// Function: sub_0050F730
// Address: 0x50f730 - 0x50f758
void sub_0050F730_0x50f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F730_0x50f730");
#endif

    switch (ctx->pc) {
        case 0x50f730u: goto label_50f730;
        case 0x50f734u: goto label_50f734;
        case 0x50f738u: goto label_50f738;
        case 0x50f73cu: goto label_50f73c;
        case 0x50f740u: goto label_50f740;
        case 0x50f744u: goto label_50f744;
        case 0x50f748u: goto label_50f748;
        case 0x50f74cu: goto label_50f74c;
        case 0x50f750u: goto label_50f750;
        case 0x50f754u: goto label_50f754;
        default: break;
    }

    ctx->pc = 0x50f730u;

label_50f730:
    // 0x50f730: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
label_50f734:
    // 0x50f734: 0x84423d56  lh          $v0, 0x3D56($v0)
    ctx->pc = 0x50f734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 15702)));
label_50f738:
    // 0x50f738: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x50f738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_50f73c:
    // 0x50f73c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_50f740:
    if (ctx->pc == 0x50F740u) {
        ctx->pc = 0x50F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F73Cu;
        // 0x50f740: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50F744u;
        goto label_50f744;
    }
    ctx->pc = 0x50F73Cu;
    {
        const bool branch_taken_0x50f73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F73Cu;
        // 0x50f740: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f73c) {
            ctx->pc = 0x50F798u;
            return;
        }
    }
    ctx->pc = 0x50F744u;
label_50f744:
    // 0x50f744: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50f744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_50f748:
    // 0x50f748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50f74c:
    // 0x50f74c: 0x8c63d3f0  lw          $v1, -0x2C10($v1)
    ctx->pc = 0x50f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956016)));
label_50f750:
    // 0x50f750: 0x600008  jr          $v1
label_50f754:
    if (ctx->pc == 0x50F754u) {
        ctx->pc = 0x50F758u;
        goto label_fallthrough_0x50f750;
    }
    ctx->pc = 0x50F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F750u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x50f750:
    ctx->pc = 0x50F758u;
}
