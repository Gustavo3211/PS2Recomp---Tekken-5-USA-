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

// Function: sub_00248500
// Address: 0x248500 - 0x248528
void sub_00248500_0x248500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248500_0x248500");
#endif

    switch (ctx->pc) {
        case 0x248510u: goto label_248510;
        case 0x248518u: goto label_248518;
        default: break;
    }

    ctx->pc = 0x248500u;

    // 0x248500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248508: 0xc092138  jal         func_2484E0
    ctx->pc = 0x248508u;
    SET_GPR_U32(ctx, 31, 0x248510u);
    ctx->pc = 0x2484E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2484E0u, 0x248508u, 0x248510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248510u;
label_248510:
    // 0x248510: 0xc0d5f7a  jal         func_357DE8
    ctx->pc = 0x248510u;
    SET_GPR_U32(ctx, 31, 0x248518u);
    ctx->pc = 0x248514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248510u;
    // 0x248514: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x357DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357DE8u, 0x248510u, 0x248518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248518u;
label_248518:
    // 0x248518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24851c: 0x3e00008  jr          $ra
    ctx->pc = 0x24851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24851Cu;
        // 0x248520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248524u;
    // 0x248524: 0x0  nop
    ctx->pc = 0x248524u;
    // NOP
    ctx->pc = 0x248528u;
}
