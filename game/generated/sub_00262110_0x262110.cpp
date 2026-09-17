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

// Function: sub_00262110
// Address: 0x262110 - 0x262138
void sub_00262110_0x262110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262110_0x262110");
#endif

    switch (ctx->pc) {
        case 0x262128u: goto label_262128;
        default: break;
    }

    ctx->pc = 0x262110u;

    // 0x262110: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262114: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26211c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262120: 0xc098af8  jal         func_262BE0
    ctx->pc = 0x262120u;
    SET_GPR_U32(ctx, 31, 0x262128u);
    ctx->pc = 0x262124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262120u;
    // 0x262124: 0x2484ec30  addiu       $a0, $a0, -0x13D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262BE0u, 0x262120u, 0x262128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262128u;
label_262128:
    // 0x262128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26212c: 0x3e00008  jr          $ra
    ctx->pc = 0x26212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26212Cu;
        // 0x262130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262134u;
    // 0x262134: 0x0  nop
    ctx->pc = 0x262134u;
    // NOP
    ctx->pc = 0x262138u;
}
