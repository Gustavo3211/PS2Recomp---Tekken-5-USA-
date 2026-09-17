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

// Function: sub_0022AB70
// Address: 0x22ab70 - 0x22ab90
void sub_0022AB70_0x22ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AB70_0x22ab70");
#endif

    switch (ctx->pc) {
        case 0x22ab84u: goto label_22ab84;
        default: break;
    }

    ctx->pc = 0x22ab70u;

    // 0x22ab70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ab74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ab7c: 0xc091680  jal         func_245A00
    ctx->pc = 0x22AB7Cu;
    SET_GPR_U32(ctx, 31, 0x22AB84u);
    ctx->pc = 0x22AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB7Cu;
    // 0x22ab80: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245A00u, 0x22AB7Cu, 0x22AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB84u;
label_22ab84:
    // 0x22ab84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ab88: 0x3e00008  jr          $ra
    ctx->pc = 0x22AB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB88u;
        // 0x22ab8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AB90u;
}
