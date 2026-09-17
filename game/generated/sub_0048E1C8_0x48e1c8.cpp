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

// Function: sub_0048E1C8
// Address: 0x48e1c8 - 0x48e1e8
void sub_0048E1C8_0x48e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E1C8_0x48e1c8");
#endif

    ctx->pc = 0x48e1c8u;

    // 0x48e1c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e1cc: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e1d0: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e1d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e1d8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x48e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x48e1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x48E1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1DCu;
        // 0x48e1e0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E1E4u;
    // 0x48e1e4: 0x0  nop
    ctx->pc = 0x48e1e4u;
    // NOP
    ctx->pc = 0x48e1e8u;
}
