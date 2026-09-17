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

// Function: sub_00499150
// Address: 0x499150 - 0x499180
void sub_00499150_0x499150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499150_0x499150");
#endif

    switch (ctx->pc) {
        case 0x499150u: goto label_499150;
        case 0x499154u: goto label_499154;
        case 0x499158u: goto label_499158;
        case 0x49915cu: goto label_49915c;
        case 0x499160u: goto label_499160;
        case 0x499164u: goto label_499164;
        case 0x499168u: goto label_499168;
        case 0x49916cu: goto label_49916c;
        case 0x499170u: goto label_499170;
        case 0x499174u: goto label_499174;
        case 0x499178u: goto label_499178;
        case 0x49917cu: goto label_49917c;
        default: break;
    }

    ctx->pc = 0x499150u;

label_499150:
    // 0x499150: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x499150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_499154:
    // 0x499154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_499158:
    // 0x499158: 0x8442d68e  lh          $v0, -0x2972($v0)
    ctx->pc = 0x499158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956686)));
label_49915c:
    // 0x49915c: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x49915cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_499160:
    // 0x499160: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_499164:
    if (ctx->pc == 0x499164u) {
        ctx->pc = 0x499164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499160u;
        // 0x499164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499168u;
        goto label_499168;
    }
    ctx->pc = 0x499160u;
    {
        const bool branch_taken_0x499160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x499164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499160u;
        // 0x499164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499160) {
            ctx->pc = 0x4991D0u;
            return;
        }
    }
    ctx->pc = 0x499168u;
label_499168:
    // 0x499168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x499168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_49916c:
    // 0x49916c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49916cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_499170:
    // 0x499170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x499170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_499174:
    // 0x499174: 0x8c63ada0  lw          $v1, -0x5260($v1)
    ctx->pc = 0x499174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946208)));
label_499178:
    // 0x499178: 0x600008  jr          $v1
label_49917c:
    if (ctx->pc == 0x49917Cu) {
        ctx->pc = 0x499180u;
        goto label_fallthrough_0x499178;
    }
    ctx->pc = 0x499178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499178u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x499178:
    ctx->pc = 0x499180u;
}
