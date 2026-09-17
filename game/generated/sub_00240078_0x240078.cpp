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

// Function: sub_00240078
// Address: 0x240078 - 0x2400a0
void sub_00240078_0x240078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240078_0x240078");
#endif

    ctx->pc = 0x240078u;

    // 0x240078: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x24007c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x240080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240088: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x240088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x24008c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240090: 0x844202ca  lh          $v0, 0x2CA($v0)
    ctx->pc = 0x240090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 714)));
    // 0x240094: 0x3e00008  jr          $ra
    ctx->pc = 0x240094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24009Cu;
    // 0x24009c: 0x0  nop
    ctx->pc = 0x24009cu;
    // NOP
    ctx->pc = 0x2400a0u;
}
