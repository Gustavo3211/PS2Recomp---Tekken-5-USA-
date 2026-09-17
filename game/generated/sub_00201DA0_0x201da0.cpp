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

// Function: sub_00201DA0
// Address: 0x201da0 - 0x201dc0
void sub_00201DA0_0x201da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201DA0_0x201da0");
#endif

    switch (ctx->pc) {
        case 0x201da0u: goto label_201da0;
        case 0x201da4u: goto label_201da4;
        case 0x201da8u: goto label_201da8;
        case 0x201dacu: goto label_201dac;
        case 0x201db0u: goto label_201db0;
        case 0x201db4u: goto label_201db4;
        case 0x201db8u: goto label_201db8;
        case 0x201dbcu: goto label_201dbc;
        default: break;
    }

    ctx->pc = 0x201da0u;

label_201da0:
    // 0x201da0: 0x2ca20076  sltiu       $v0, $a1, 0x76
    ctx->pc = 0x201da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
label_201da4:
    // 0x201da4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_201da8:
    if (ctx->pc == 0x201DA8u) {
        ctx->pc = 0x201DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA4u;
        // 0x201da8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DACu;
        goto label_201dac;
    }
    ctx->pc = 0x201DA4u;
    {
        const bool branch_taken_0x201da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA4u;
        // 0x201da8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da4) {
            ctx->pc = 0x201E30u;
            return;
        }
    }
    ctx->pc = 0x201DACu;
label_201dac:
    // 0x201dac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_201db0:
    // 0x201db0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201db4:
    // 0x201db4: 0x8c633ac0  lw          $v1, 0x3AC0($v1)
    ctx->pc = 0x201db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15040)));
label_201db8:
    // 0x201db8: 0x600008  jr          $v1
label_201dbc:
    if (ctx->pc == 0x201DBCu) {
        ctx->pc = 0x201DC0u;
        goto label_fallthrough_0x201db8;
    }
    ctx->pc = 0x201DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x201db8:
    ctx->pc = 0x201DC0u;
}
