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

// Function: sub_00230608
// Address: 0x230608 - 0x230628
void sub_00230608_0x230608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230608_0x230608");
#endif

    ctx->pc = 0x230608u;

    // 0x230608: 0x8ca306b8  lw          $v1, 0x6B8($a1)
    ctx->pc = 0x230608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1720)));
    // 0x23060c: 0x8c8206b8  lw          $v0, 0x6B8($a0)
    ctx->pc = 0x23060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x230610: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230614: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x230614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x230618: 0xa08201bf  sb          $v0, 0x1BF($a0)
    ctx->pc = 0x230618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 447), (uint8_t)GPR_U32(ctx, 2));
    // 0x23061c: 0x3e00008  jr          $ra
    ctx->pc = 0x23061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23061Cu;
        // 0x230620: 0xa08201be  sb          $v0, 0x1BE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 446), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230624u;
    // 0x230624: 0x0  nop
    ctx->pc = 0x230624u;
    // NOP
    ctx->pc = 0x230628u;
}
