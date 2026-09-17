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

// Function: sub_00311A80
// Address: 0x311a80 - 0x311aa8
void sub_00311A80_0x311a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311A80_0x311a80");
#endif

    switch (ctx->pc) {
        case 0x311a9cu: goto label_311a9c;
        default: break;
    }

    ctx->pc = 0x311a80u;

    // 0x311a80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x311a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311a84: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x311a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311a8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x311a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311a94: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x311A94u;
    SET_GPR_U32(ctx, 31, 0x311A9Cu);
    ctx->pc = 0x311A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A94u;
    // 0x311a98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x311A94u, 0x311A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A9Cu;
label_311a9c:
    // 0x311a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x311AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA0u;
        // 0x311aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311AA8u;
}
