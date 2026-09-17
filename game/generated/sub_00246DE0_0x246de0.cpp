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

// Function: sub_00246DE0
// Address: 0x246de0 - 0x246e08
void sub_00246DE0_0x246de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246DE0_0x246de0");
#endif

    switch (ctx->pc) {
        case 0x246df8u: goto label_246df8;
        default: break;
    }

    ctx->pc = 0x246de0u;

    // 0x246de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246df0: 0xc092990  jal         func_24A640
    ctx->pc = 0x246DF0u;
    SET_GPR_U32(ctx, 31, 0x246DF8u);
    ctx->pc = 0x246DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DF0u;
    // 0x246df4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A640u, 0x246DF0u, 0x246DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DF8u;
label_246df8:
    // 0x246df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x246DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DFCu;
        // 0x246e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246E04u;
    // 0x246e04: 0x0  nop
    ctx->pc = 0x246e04u;
    // NOP
    ctx->pc = 0x246e08u;
}
