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

// Function: sub_002DDA48
// Address: 0x2dda48 - 0x2dda78
void sub_002DDA48_0x2dda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA48_0x2dda48");
#endif

    switch (ctx->pc) {
        case 0x2dda5cu: goto label_2dda5c;
        case 0x2dda68u: goto label_2dda68;
        default: break;
    }

    ctx->pc = 0x2dda48u;

    // 0x2dda48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dda4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dda4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dda50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dda50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dda54: 0xc0b7654  jal         func_2DD950
    ctx->pc = 0x2DDA54u;
    SET_GPR_U32(ctx, 31, 0x2DDA5Cu);
    ctx->pc = 0x2DDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA54u;
    // 0x2dda58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD950u, 0x2DDA54u, 0x2DDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA5Cu;
label_2dda5c:
    // 0x2dda5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dda5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda60: 0xc0b75de  jal         func_2DD778
    ctx->pc = 0x2DDA60u;
    SET_GPR_U32(ctx, 31, 0x2DDA68u);
    ctx->pc = 0x2DDA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA60u;
    // 0x2dda64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD778u, 0x2DDA60u, 0x2DDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA68u;
label_2dda68:
    // 0x2dda68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dda68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dda6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dda70: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA70u;
        // 0x2dda74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA78u;
}
