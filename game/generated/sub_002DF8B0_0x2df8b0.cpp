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

// Function: sub_002DF8B0
// Address: 0x2df8b0 - 0x2df8d0
void sub_002DF8B0_0x2df8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF8B0_0x2df8b0");
#endif

    switch (ctx->pc) {
        case 0x2df8c4u: goto label_2df8c4;
        default: break;
    }

    ctx->pc = 0x2df8b0u;

    // 0x2df8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df8bc: 0xc0b7e3c  jal         func_2DF8F0
    ctx->pc = 0x2DF8BCu;
    SET_GPR_U32(ctx, 31, 0x2DF8C4u);
    ctx->pc = 0x2DF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8BCu;
    // 0x2df8c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8F0u, 0x2DF8BCu, 0x2DF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8C4u;
label_2df8c4:
    // 0x2df8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8C8u;
        // 0x2df8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF8D0u;
}
