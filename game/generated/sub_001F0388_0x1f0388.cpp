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

// Function: sub_001F0388
// Address: 0x1f0388 - 0x1f03a8
void sub_001F0388_0x1f0388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0388_0x1f0388");
#endif

    switch (ctx->pc) {
        case 0x1f0398u: goto label_1f0398;
        default: break;
    }

    ctx->pc = 0x1f0388u;

    // 0x1f0388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f038c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0390: 0xc0b7ab4  jal         func_2DEAD0
    ctx->pc = 0x1F0390u;
    SET_GPR_U32(ctx, 31, 0x1F0398u);
    ctx->pc = 0x1F0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0390u;
    // 0x1f0394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAD0u, 0x1F0390u, 0x1F0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0398u;
label_1f0398:
    // 0x1f0398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f039c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F039Cu;
        // 0x1f03a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F03A4u;
    // 0x1f03a4: 0x0  nop
    ctx->pc = 0x1f03a4u;
    // NOP
    ctx->pc = 0x1f03a8u;
}
