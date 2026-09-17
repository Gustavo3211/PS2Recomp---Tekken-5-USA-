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

// Function: sub_0048E0E8
// Address: 0x48e0e8 - 0x48e108
void sub_0048E0E8_0x48e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E0E8_0x48e0e8");
#endif

    ctx->pc = 0x48e0e8u;

    // 0x48e0e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e0ec: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e0f0: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e0f4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e0f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x48e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x48e0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x48E0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0FCu;
        // 0x48e100: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E104u;
    // 0x48e104: 0x0  nop
    ctx->pc = 0x48e104u;
    // NOP
    ctx->pc = 0x48e108u;
}
