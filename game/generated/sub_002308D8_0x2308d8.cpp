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

// Function: sub_002308D8
// Address: 0x2308d8 - 0x230908
void sub_002308D8_0x2308d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002308D8_0x2308d8");
#endif

    ctx->pc = 0x2308d8u;

    // 0x2308d8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2308dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2308DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308DCu;
        // 0x2308e0: 0xe44cd0bc  swc1        $f12, -0x2F44($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2308E4u;
    // 0x2308e4: 0x0  nop
    ctx->pc = 0x2308e4u;
    // NOP
    // 0x2308e8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2308ec: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x2308f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2308F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308F0u;
        // 0x2308f4: 0x244200ec  addiu       $v0, $v0, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2308F8u;
    // 0x2308f8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2308fc: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x2308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x230900: 0x3e00008  jr          $ra
    ctx->pc = 0x230900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230900u;
        // 0x230904: 0x2442012c  addiu       $v0, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230908u;
}
