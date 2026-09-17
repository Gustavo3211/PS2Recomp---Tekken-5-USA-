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

// Function: sub_004955D8
// Address: 0x4955d8 - 0x4955f0
void sub_004955D8_0x4955d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004955D8_0x4955d8");
#endif

    switch (ctx->pc) {
        case 0x4955e8u: goto label_4955e8;
        default: break;
    }

    ctx->pc = 0x4955d8u;

    // 0x4955d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4955d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4955dc: 0x812553c  j           func_4954F0
    ctx->pc = 0x4955DCu;
    ctx->pc = 0x4955E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4955DCu;
    // 0x4955e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4954F0u, 0x4955DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4955E4u;
    // 0x4955e4: 0x0  nop
    ctx->pc = 0x4955e4u;
    // NOP
label_4955e8:
    // 0x4955e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4955E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4955ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955E8u;
        // 0x4955ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4955E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4955F0u;
}
