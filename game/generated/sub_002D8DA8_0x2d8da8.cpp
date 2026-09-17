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

// Function: sub_002D8DA8
// Address: 0x2d8da8 - 0x2d8dd0
void sub_002D8DA8_0x2d8da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8DA8_0x2d8da8");
#endif

    ctx->pc = 0x2d8da8u;

    // 0x2d8da8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d8dac: 0x2442e7e0  addiu       $v0, $v0, -0x1820
    ctx->pc = 0x2d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x2d8db0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8db4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2d8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2d8db8: 0xac2090d4  sw          $zero, -0x6F2C($at)
    ctx->pc = 0x2d8db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3D78B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D78B4u, _value); } while (0);
    // 0x2d8dbc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8dc0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2d8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2d8dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DC4u;
        // 0x2d8dc8: 0xac2090d0  sw          $zero, -0x6F30($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8DCCu;
    // 0x2d8dcc: 0x0  nop
    ctx->pc = 0x2d8dccu;
    // NOP
    ctx->pc = 0x2d8dd0u;
}
