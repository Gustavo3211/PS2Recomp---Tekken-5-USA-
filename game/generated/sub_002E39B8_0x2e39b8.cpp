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

// Function: sub_002E39B8
// Address: 0x2e39b8 - 0x2e39e8
void sub_002E39B8_0x2e39b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E39B8_0x2e39b8");
#endif

    switch (ctx->pc) {
        case 0x2e39b8u: goto label_2e39b8;
        case 0x2e39bcu: goto label_2e39bc;
        case 0x2e39c0u: goto label_2e39c0;
        case 0x2e39c4u: goto label_2e39c4;
        case 0x2e39c8u: goto label_2e39c8;
        case 0x2e39ccu: goto label_2e39cc;
        case 0x2e39d0u: goto label_2e39d0;
        case 0x2e39d4u: goto label_2e39d4;
        case 0x2e39d8u: goto label_2e39d8;
        case 0x2e39dcu: goto label_2e39dc;
        case 0x2e39e0u: goto label_2e39e0;
        case 0x2e39e4u: goto label_2e39e4;
        default: break;
    }

    ctx->pc = 0x2e39b8u;

label_2e39b8:
    // 0x2e39b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e39b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e39bc:
    // 0x2e39bc: 0x24850088  addiu       $a1, $a0, 0x88
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
label_2e39c0:
    // 0x2e39c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e39c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e39c4:
    // 0x2e39c4: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2e39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2e39c8:
    // 0x2e39c8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e39cc:
    // 0x2e39cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e39ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e39d0:
    // 0x2e39d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e39d4:
    // 0x2e39d4: 0x60f809  jalr        $v1
label_2e39d8:
    if (ctx->pc == 0x2E39D8u) {
        ctx->pc = 0x2E39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39D4u;
        // 0x2e39d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39DCu;
        goto label_2e39dc;
    }
    ctx->pc = 0x2E39D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E39DCu);
        ctx->pc = 0x2E39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39D4u;
        // 0x2e39d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39D4u, 0x2E39DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E39DCu;
label_2e39dc:
    // 0x2e39dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e39dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e39e0:
    // 0x2e39e0: 0x3e00008  jr          $ra
label_2e39e4:
    if (ctx->pc == 0x2E39E4u) {
        ctx->pc = 0x2E39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39E0u;
        // 0x2e39e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39E8u;
        goto label_fallthrough_0x2e39e0;
    }
    ctx->pc = 0x2E39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39E0u;
        // 0x2e39e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e39e0:
    ctx->pc = 0x2E39E8u;
}
