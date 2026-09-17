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

// Function: sub_002E8DE0
// Address: 0x2e8de0 - 0x2e8e08
void sub_002E8DE0_0x2e8de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8DE0_0x2e8de0");
#endif

    switch (ctx->pc) {
        case 0x2e8dfcu: goto label_2e8dfc;
        default: break;
    }

    ctx->pc = 0x2e8de0u;

    // 0x2e8de0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2e8de4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8de8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e8de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8dec: 0x34a50113  ori         $a1, $a1, 0x113
    ctx->pc = 0x2e8decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)275);
    // 0x2e8df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8df4: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2E8DF4u;
    SET_GPR_U32(ctx, 31, 0x2E8DFCu);
    ctx->pc = 0x2E8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8DF4u;
    // 0x2e8df8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2E8DF4u, 0x2E8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8DFCu;
label_2e8dfc:
    // 0x2e8dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E00u;
        // 0x2e8e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8E08u;
}
