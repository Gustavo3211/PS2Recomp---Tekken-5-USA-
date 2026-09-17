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

// Function: sub_0028EA20
// Address: 0x28ea20 - 0x28ea48
void sub_0028EA20_0x28ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA20_0x28ea20");
#endif

    switch (ctx->pc) {
        case 0x28ea38u: goto label_28ea38;
        default: break;
    }

    ctx->pc = 0x28ea20u;

    // 0x28ea20: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x28ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x28ea24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ea24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ea28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28ea2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ea30: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x28EA30u;
    SET_GPR_U32(ctx, 31, 0x28EA38u);
    ctx->pc = 0x28EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA30u;
    // 0x28ea34: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x28EA30u, 0x28EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA38u;
label_28ea38:
    // 0x28ea38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea3c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA3Cu;
        // 0x28ea40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA44u;
    // 0x28ea44: 0x0  nop
    ctx->pc = 0x28ea44u;
    // NOP
    ctx->pc = 0x28ea48u;
}
