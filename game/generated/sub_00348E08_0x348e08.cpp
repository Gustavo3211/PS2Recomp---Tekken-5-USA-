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

// Function: sub_00348E08
// Address: 0x348e08 - 0x348e40
void sub_00348E08_0x348e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348E08_0x348e08");
#endif

    switch (ctx->pc) {
        case 0x348e30u: goto label_348e30;
        default: break;
    }

    ctx->pc = 0x348e08u;

    // 0x348e08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x348e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348e14: 0xa0460044  sb          $a2, 0x44($v0)
    ctx->pc = 0x348e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 6));
    // 0x348e18: 0xa0450045  sb          $a1, 0x45($v0)
    ctx->pc = 0x348e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 5));
    // 0x348e1c: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x348e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e20: 0xa0400046  sb          $zero, 0x46($v0)
    ctx->pc = 0x348e20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e24: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x348e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e28: 0xc0d2390  jal         func_348E40
    ctx->pc = 0x348E28u;
    SET_GPR_U32(ctx, 31, 0x348E30u);
    ctx->pc = 0x348E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E28u;
    // 0x348e2c: 0xa0400048  sb          $zero, 0x48($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348E40u, 0x348E28u, 0x348E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E30u;
label_348e30:
    // 0x348e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348e34: 0x3e00008  jr          $ra
    ctx->pc = 0x348E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E34u;
        // 0x348e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E3Cu;
    // 0x348e3c: 0x0  nop
    ctx->pc = 0x348e3cu;
    // NOP
    ctx->pc = 0x348e40u;
}
