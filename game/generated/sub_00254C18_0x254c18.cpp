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

// Function: sub_00254C18
// Address: 0x254c18 - 0x254c48
void sub_00254C18_0x254c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254C18_0x254c18");
#endif

    switch (ctx->pc) {
        case 0x254c3cu: goto label_254c3c;
        default: break;
    }

    ctx->pc = 0x254c18u;

    // 0x254c18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x254c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x254c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254c24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x254c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x254c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x254c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254c34: 0xc09528a  jal         func_254A28
    ctx->pc = 0x254C34u;
    SET_GPR_U32(ctx, 31, 0x254C3Cu);
    ctx->pc = 0x254C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C34u;
    // 0x254c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A28u, 0x254C34u, 0x254C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C3Cu;
label_254c3c:
    // 0x254c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254c40: 0x3e00008  jr          $ra
    ctx->pc = 0x254C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C40u;
        // 0x254c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254C48u;
}
