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

// Function: sub_0031BD60
// Address: 0x31bd60 - 0x31bd80
void sub_0031BD60_0x31bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BD60_0x31bd60");
#endif

    switch (ctx->pc) {
        case 0x31bd70u: goto label_31bd70;
        default: break;
    }

    ctx->pc = 0x31bd60u;

    // 0x31bd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31bd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bd68: 0xc0cd638  jal         func_3358E0
    ctx->pc = 0x31BD68u;
    SET_GPR_U32(ctx, 31, 0x31BD70u);
    ctx->pc = 0x31BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD68u;
    // 0x31bd6c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358E0u, 0x31BD68u, 0x31BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD70u;
label_31bd70:
    // 0x31bd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD74u;
        // 0x31bd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD7Cu;
    // 0x31bd7c: 0x0  nop
    ctx->pc = 0x31bd7cu;
    // NOP
    ctx->pc = 0x31bd80u;
}
