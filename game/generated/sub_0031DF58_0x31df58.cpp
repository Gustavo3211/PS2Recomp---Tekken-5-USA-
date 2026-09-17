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

// Function: sub_0031DF58
// Address: 0x31df58 - 0x31df88
void sub_0031DF58_0x31df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DF58_0x31df58");
#endif

    switch (ctx->pc) {
        case 0x31df6cu: goto label_31df6c;
        case 0x31df74u: goto label_31df74;
        default: break;
    }

    ctx->pc = 0x31df58u;

    // 0x31df58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31df5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31df60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31df64: 0xc0c7980  jal         func_31E600
    ctx->pc = 0x31DF64u;
    SET_GPR_U32(ctx, 31, 0x31DF6Cu);
    ctx->pc = 0x31DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF64u;
    // 0x31df68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E600u, 0x31DF64u, 0x31DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF6Cu;
label_31df6c:
    // 0x31df6c: 0xc0c7896  jal         func_31E258
    ctx->pc = 0x31DF6Cu;
    SET_GPR_U32(ctx, 31, 0x31DF74u);
    ctx->pc = 0x31DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF6Cu;
    // 0x31df70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E258u, 0x31DF6Cu, 0x31DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF74u;
label_31df74:
    // 0x31df74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31df74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31df78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31df78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31df7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31DF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF7Cu;
        // 0x31df80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DF84u;
    // 0x31df84: 0x0  nop
    ctx->pc = 0x31df84u;
    // NOP
    ctx->pc = 0x31df88u;
}
