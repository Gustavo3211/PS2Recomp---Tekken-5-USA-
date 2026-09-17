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

// Function: sub_002FF878
// Address: 0x2ff878 - 0x2ff898
void sub_002FF878_0x2ff878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF878_0x2ff878");
#endif

    switch (ctx->pc) {
        case 0x2ff888u: goto label_2ff888;
        default: break;
    }

    ctx->pc = 0x2ff878u;

    // 0x2ff878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff880: 0xc0b2c5a  jal         func_2CB168
    ctx->pc = 0x2FF880u;
    SET_GPR_U32(ctx, 31, 0x2FF888u);
    ctx->pc = 0x2FF884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF880u;
    // 0x2ff884: 0x24840084  addiu       $a0, $a0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB168u, 0x2FF880u, 0x2FF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF888u;
label_2ff888:
    // 0x2ff888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff88c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF88Cu;
        // 0x2ff890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF894u;
    // 0x2ff894: 0x0  nop
    ctx->pc = 0x2ff894u;
    // NOP
    ctx->pc = 0x2ff898u;
}
