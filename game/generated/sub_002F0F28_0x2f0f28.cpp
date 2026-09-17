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

// Function: sub_002F0F28
// Address: 0x2f0f28 - 0x2f0f50
void sub_002F0F28_0x2f0f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F28_0x2f0f28");
#endif

    switch (ctx->pc) {
        case 0x2f0f40u: goto label_2f0f40;
        default: break;
    }

    ctx->pc = 0x2f0f28u;

    // 0x2f0f28: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2f0f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0f30: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f0f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0f38: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F0F38u;
    SET_GPR_U32(ctx, 31, 0x2F0F40u);
    ctx->pc = 0x2F0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F38u;
    // 0x2f0f3c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F0F38u, 0x2F0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F40u;
label_2f0f40:
    // 0x2f0f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0f44: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F44u;
        // 0x2f0f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0F4Cu;
    // 0x2f0f4c: 0x0  nop
    ctx->pc = 0x2f0f4cu;
    // NOP
    ctx->pc = 0x2f0f50u;
}
