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

// Function: sub_002DF0B0
// Address: 0x2df0b0 - 0x2df0e0
void sub_002DF0B0_0x2df0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF0B0_0x2df0b0");
#endif

    switch (ctx->pc) {
        case 0x2df0d0u: goto label_2df0d0;
        default: break;
    }

    ctx->pc = 0x2df0b0u;

    // 0x2df0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df0b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2df0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df0bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2df0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2df0c4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2df0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2df0c8: 0xc0b7c00  jal         func_2DF000
    ctx->pc = 0x2DF0C8u;
    SET_GPR_U32(ctx, 31, 0x2DF0D0u);
    ctx->pc = 0x2DF0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0C8u;
    // 0x2df0cc: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF000u, 0x2DF0C8u, 0x2DF0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0D0u;
label_2df0d0:
    // 0x2df0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0D4u;
        // 0x2df0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF0DCu;
    // 0x2df0dc: 0x0  nop
    ctx->pc = 0x2df0dcu;
    // NOP
    ctx->pc = 0x2df0e0u;
}
