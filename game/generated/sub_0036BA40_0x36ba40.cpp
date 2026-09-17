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

// Function: sub_0036BA40
// Address: 0x36ba40 - 0x36ba70
void sub_0036BA40_0x36ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BA40_0x36ba40");
#endif

    switch (ctx->pc) {
        case 0x36ba50u: goto label_36ba50;
        default: break;
    }

    ctx->pc = 0x36ba40u;

    // 0x36ba40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ba44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ba48: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x36BA48u;
    SET_GPR_U32(ctx, 31, 0x36BA50u);
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x36BA48u, 0x36BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA50u;
label_36ba50:
    // 0x36ba50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36BA50u;
    {
        const bool branch_taken_0x36ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA50u;
        // 0x36ba54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba50) {
            ctx->pc = 0x36BA5Cu;
            goto label_36ba5c;
        }
    }
    ctx->pc = 0x36BA58u;
    // 0x36ba58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x36ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_36ba5c:
    // 0x36ba5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ba5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ba60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36ba60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA64u;
        // 0x36ba68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA6Cu;
    // 0x36ba6c: 0x0  nop
    ctx->pc = 0x36ba6cu;
    // NOP
    ctx->pc = 0x36ba70u;
}
