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

// Function: sub_004DA7B8
// Address: 0x4da7b8 - 0x4da7c8
void sub_004DA7B8_0x4da7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA7B8_0x4da7b8");
#endif

    ctx->pc = 0x4da7b8u;

    // 0x4da7b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4da7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4da7bc: 0x24028fff  addiu       $v0, $zero, -0x7001
    ctx->pc = 0x4da7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938623));
    // 0x4da7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA7C0u;
        // 0x4da7c4: 0xa462f912  sh          $v0, -0x6EE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294965522), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA7C8u;
}
