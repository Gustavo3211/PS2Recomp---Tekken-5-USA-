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

// Function: sub_00244790
// Address: 0x244790 - 0x2447b0
void sub_00244790_0x244790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244790_0x244790");
#endif

    ctx->pc = 0x244790u;

    // 0x244790: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x244790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x244794: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x244794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x244798: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24479c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2447a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2447a4: 0x8c426694  lw          $v0, 0x6694($v0)
    ctx->pc = 0x2447a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26260)));
    // 0x2447a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2447A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2447ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447A8u;
        // 0x2447ac: 0xc4400038  lwc1        $f0, 0x38($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2447A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2447B0u;
}
