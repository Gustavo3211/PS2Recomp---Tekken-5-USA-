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

// Function: sub_00100590
// Address: 0x100590 - 0x1005b0
void sub_00100590_0x100590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100590_0x100590");
#endif

    switch (ctx->pc) {
        case 0x100598u: goto label_100598;
        case 0x1005a0u: goto label_1005a0;
        default: break;
    }

    ctx->pc = 0x100590u;

    // 0x100590: 0xc089280  jal         func_224A00
    ctx->pc = 0x100590u;
    SET_GPR_U32(ctx, 31, 0x100598u);
    ctx->pc = 0x100594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100590u;
    // 0x100594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A00u, 0x100590u, 0x100598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100598u;
label_100598:
    // 0x100598: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x100598u;
    SET_GPR_U32(ctx, 31, 0x1005A0u);
    ctx->pc = 0x10059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100598u;
    // 0x10059c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x100598u, 0x1005A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005A0u;
label_1005a0:
    // 0x1005a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1005a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1005a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1005a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1005A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005A8u;
        // 0x1005ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1005B0u;
}
