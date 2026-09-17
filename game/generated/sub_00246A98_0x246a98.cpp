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

// Function: sub_00246A98
// Address: 0x246a98 - 0x246ac8
void sub_00246A98_0x246a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A98_0x246a98");
#endif

    switch (ctx->pc) {
        case 0x246ab8u: goto label_246ab8;
        default: break;
    }

    ctx->pc = 0x246a98u;

    // 0x246a98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x246a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x246a9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246aa0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x246aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x246aa4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x246aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x246aa8: 0x8c240b18  lw          $a0, 0xB18($at)
    ctx->pc = 0x246aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2840)));
    // 0x246aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246ab0: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x246AB0u;
    SET_GPR_U32(ctx, 31, 0x246AB8u);
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x246AB0u, 0x246AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246abc: 0x3e00008  jr          $ra
    ctx->pc = 0x246ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ABCu;
        // 0x246ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246AC4u;
    // 0x246ac4: 0x0  nop
    ctx->pc = 0x246ac4u;
    // NOP
    ctx->pc = 0x246ac8u;
}
