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

// Function: sub_0022A7E0
// Address: 0x22a7e0 - 0x22a808
void sub_0022A7E0_0x22a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A7E0_0x22a7e0");
#endif

    switch (ctx->pc) {
        case 0x22a7fcu: goto label_22a7fc;
        default: break;
    }

    ctx->pc = 0x22a7e0u;

    // 0x22a7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a7e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a7ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a7f0: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x22a7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22a7f4: 0xc0923a2  jal         func_248E88
    ctx->pc = 0x22A7F4u;
    SET_GPR_U32(ctx, 31, 0x22A7FCu);
    ctx->pc = 0x22A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7F4u;
    // 0x22a7f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E88u, 0x22A7F4u, 0x22A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7FCu;
label_22a7fc:
    // 0x22a7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a800: 0x3e00008  jr          $ra
    ctx->pc = 0x22A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A800u;
        // 0x22a804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A808u;
}
