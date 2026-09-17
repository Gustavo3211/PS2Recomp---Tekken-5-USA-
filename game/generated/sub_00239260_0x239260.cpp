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

// Function: sub_00239260
// Address: 0x239260 - 0x2392a8
void sub_00239260_0x239260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239260_0x239260");
#endif

    ctx->pc = 0x239260u;

    // 0x239260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239264: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x239268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23926c: 0x3e00008  jr          $ra
    ctx->pc = 0x23926Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23926Cu;
        // 0x239270: 0x8c42a2e8  lw          $v0, -0x5D18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943464)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23926Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239274u;
    // 0x239274: 0x0  nop
    ctx->pc = 0x239274u;
    // NOP
    // 0x239278: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23927c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x239280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239284: 0x8c448874  lw          $a0, -0x778C($v0)
    ctx->pc = 0x239284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8874u));
    // 0x239288: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x239288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23928c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239294: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x239294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x239298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23929c: 0x3e00008  jr          $ra
    ctx->pc = 0x23929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23929Cu;
        // 0x2392a0: 0x8c42a628  lw          $v0, -0x59D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944296)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392A4u;
    // 0x2392a4: 0x0  nop
    ctx->pc = 0x2392a4u;
    // NOP
    ctx->pc = 0x2392a8u;
}
