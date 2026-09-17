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

// Function: sub_0022A8B0
// Address: 0x22a8b0 - 0x22a8f0
void sub_0022A8B0_0x22a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A8B0_0x22a8b0");
#endif

    switch (ctx->pc) {
        case 0x22a8e0u: goto label_22a8e0;
        default: break;
    }

    ctx->pc = 0x22a8b0u;

    // 0x22a8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a8b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a8bc: 0x84880006  lh          $t0, 0x6($a0)
    ctx->pc = 0x22a8bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22a8c0: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x22a8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22a8c4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x22a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x22a8c8: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x22a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x22a8cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22a8d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a8d4: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x22a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x22a8d8: 0xc0923a2  jal         func_248E88
    ctx->pc = 0x22A8D8u;
    SET_GPR_U32(ctx, 31, 0x22A8E0u);
    ctx->pc = 0x22A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D8u;
    // 0x22a8dc: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E88u, 0x22A8D8u, 0x22A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8E0u;
label_22a8e0:
    // 0x22a8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E4u;
        // 0x22a8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A8ECu;
    // 0x22a8ec: 0x0  nop
    ctx->pc = 0x22a8ecu;
    // NOP
    ctx->pc = 0x22a8f0u;
}
