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

// Function: sub_0021E4F0
// Address: 0x21e4f0 - 0x21e520
void sub_0021E4F0_0x21e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E4F0_0x21e4f0");
#endif

    switch (ctx->pc) {
        case 0x21e500u: goto label_21e500;
        default: break;
    }

    ctx->pc = 0x21e4f0u;

    // 0x21e4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e4f8: 0xc085114  jal         func_214450
    ctx->pc = 0x21E4F8u;
    SET_GPR_U32(ctx, 31, 0x21E500u);
    ctx->pc = 0x214450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214450u, 0x21E4F8u, 0x21E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E500u;
label_21e500:
    // 0x21e500: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x21e500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e504: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21e508: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x21e508u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21e50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e510: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x21e510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e514: 0x3e00008  jr          $ra
    ctx->pc = 0x21E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E514u;
        // 0x21e518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E51Cu;
    // 0x21e51c: 0x0  nop
    ctx->pc = 0x21e51cu;
    // NOP
    ctx->pc = 0x21e520u;
}
