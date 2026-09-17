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

// Function: sub_0022ABB0
// Address: 0x22abb0 - 0x22abd0
void sub_0022ABB0_0x22abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ABB0_0x22abb0");
#endif

    switch (ctx->pc) {
        case 0x22abc4u: goto label_22abc4;
        default: break;
    }

    ctx->pc = 0x22abb0u;

    // 0x22abb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22abb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22abbc: 0xc091658  jal         func_245960
    ctx->pc = 0x22ABBCu;
    SET_GPR_U32(ctx, 31, 0x22ABC4u);
    ctx->pc = 0x22ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABBCu;
    // 0x22abc0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245960u, 0x22ABBCu, 0x22ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABC4u;
label_22abc4:
    // 0x22abc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22abc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABC8u;
        // 0x22abcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ABD0u;
}
