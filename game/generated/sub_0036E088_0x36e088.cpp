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

// Function: sub_0036E088
// Address: 0x36e088 - 0x36e0a8
void sub_0036E088_0x36e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E088_0x36e088");
#endif

    switch (ctx->pc) {
        case 0x36e09cu: goto label_36e09c;
        default: break;
    }

    ctx->pc = 0x36e088u;

    // 0x36e088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e08c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e094: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x36E094u;
    SET_GPR_U32(ctx, 31, 0x36E09Cu);
    ctx->pc = 0x36E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E094u;
    // 0x36e098: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8D0u, 0x36E094u, 0x36E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E09Cu;
label_36e09c:
    // 0x36e09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0A0u;
        // 0x36e0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0A8u;
}
