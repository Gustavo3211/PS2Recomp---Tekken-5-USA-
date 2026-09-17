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

// Function: sub_002F3D18
// Address: 0x2f3d18 - 0x2f3d38
void sub_002F3D18_0x2f3d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D18_0x2f3d18");
#endif

    ctx->pc = 0x2f3d18u;

    // 0x2f3d18: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2f3d1c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2f3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2f3d20: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2f3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2f3d24: 0x3463010c  ori         $v1, $v1, 0x10C
    ctx->pc = 0x2f3d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)268);
    // 0x2f3d28: 0x34420104  ori         $v0, $v0, 0x104
    ctx->pc = 0x2f3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x2f3d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D2Cu;
        // 0x2f3d30: 0x65100b  movn        $v0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D34u;
    // 0x2f3d34: 0x0  nop
    ctx->pc = 0x2f3d34u;
    // NOP
    ctx->pc = 0x2f3d38u;
}
