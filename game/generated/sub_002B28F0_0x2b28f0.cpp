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

// Function: sub_002B28F0
// Address: 0x2b28f0 - 0x2b2918
void sub_002B28F0_0x2b28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B28F0_0x2b28f0");
#endif

    switch (ctx->pc) {
        case 0x2b2908u: goto label_2b2908;
        default: break;
    }

    ctx->pc = 0x2b28f0u;

    // 0x2b28f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b28f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b28f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b28f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b28fc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2900: 0xc0ab272  jal         func_2AC9C8
    ctx->pc = 0x2B2900u;
    SET_GPR_U32(ctx, 31, 0x2B2908u);
    ctx->pc = 0x2B2904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2900u;
    // 0x2b2904: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9C8u, 0x2B2900u, 0x2B2908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2908u;
label_2b2908:
    // 0x2b2908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b290c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B290Cu;
        // 0x2b2910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B290Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2914u;
    // 0x2b2914: 0x0  nop
    ctx->pc = 0x2b2914u;
    // NOP
    ctx->pc = 0x2b2918u;
}
