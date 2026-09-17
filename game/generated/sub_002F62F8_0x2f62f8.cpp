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

// Function: sub_002F62F8
// Address: 0x2f62f8 - 0x2f6328
void sub_002F62F8_0x2f62f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F62F8_0x2f62f8");
#endif

    switch (ctx->pc) {
        case 0x2f62f8u: goto label_2f62f8;
        case 0x2f62fcu: goto label_2f62fc;
        case 0x2f6300u: goto label_2f6300;
        case 0x2f6304u: goto label_2f6304;
        case 0x2f6308u: goto label_2f6308;
        case 0x2f630cu: goto label_2f630c;
        case 0x2f6310u: goto label_2f6310;
        case 0x2f6314u: goto label_2f6314;
        case 0x2f6318u: goto label_2f6318;
        case 0x2f631cu: goto label_2f631c;
        case 0x2f6320u: goto label_2f6320;
        case 0x2f6324u: goto label_2f6324;
        default: break;
    }

    ctx->pc = 0x2f62f8u;

label_2f62f8:
    // 0x2f62f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f62f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f62fc:
    // 0x2f62fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f62fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f6300:
    // 0x2f6300: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x2f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f6304:
    // 0x2f6304: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2f6304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2f6308:
    // 0x2f6308: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_2f630c:
    if (ctx->pc == 0x2F630Cu) {
        ctx->pc = 0x2F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6308u;
        // 0x2f630c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6310u;
        goto label_2f6310;
    }
    ctx->pc = 0x2F6308u;
    {
        const bool branch_taken_0x2f6308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6308) {
            ctx->pc = 0x2F630Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6308u;
            // 0x2f630c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F63A8u;
            return;
        }
    }
    ctx->pc = 0x2F6310u;
label_2f6310:
    // 0x2f6310: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f6310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f6314:
    // 0x2f6314: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2f6318:
    // 0x2f6318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f631c:
    // 0x2f631c: 0x8c631750  lw          $v1, 0x1750($v1)
    ctx->pc = 0x2f631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5968)));
label_2f6320:
    // 0x2f6320: 0x600008  jr          $v1
label_2f6324:
    if (ctx->pc == 0x2F6324u) {
        ctx->pc = 0x2F6328u;
        goto label_fallthrough_0x2f6320;
    }
    ctx->pc = 0x2F6320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2f6320:
    ctx->pc = 0x2F6328u;
}
