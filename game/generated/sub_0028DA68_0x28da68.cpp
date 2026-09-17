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

// Function: sub_0028DA68
// Address: 0x28da68 - 0x28da90
void sub_0028DA68_0x28da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DA68_0x28da68");
#endif

    switch (ctx->pc) {
        case 0x28da80u: goto label_28da80;
        default: break;
    }

    ctx->pc = 0x28da68u;

    // 0x28da68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da6c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x28da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x28da70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28da74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28da78: 0xc0a3476  jal         func_28D1D8
    ctx->pc = 0x28DA78u;
    SET_GPR_U32(ctx, 31, 0x28DA80u);
    ctx->pc = 0x28DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA78u;
    // 0x28da7c: 0x24846f88  addiu       $a0, $a0, 0x6F88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D1D8u, 0x28DA78u, 0x28DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA80u;
label_28da80:
    // 0x28da80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28da80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28da84: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA84u;
        // 0x28da88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA8Cu;
    // 0x28da8c: 0x0  nop
    ctx->pc = 0x28da8cu;
    // NOP
    ctx->pc = 0x28da90u;
}
