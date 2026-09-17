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

// Function: sub_0024D4B0
// Address: 0x24d4b0 - 0x24d4d8
void sub_0024D4B0_0x24d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D4B0_0x24d4b0");
#endif

    switch (ctx->pc) {
        case 0x24d4c4u: goto label_24d4c4;
        case 0x24d4ccu: goto label_24d4cc;
        default: break;
    }

    ctx->pc = 0x24d4b0u;

    // 0x24d4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d4bc: 0xc092460  jal         func_249180
    ctx->pc = 0x24D4BCu;
    SET_GPR_U32(ctx, 31, 0x24D4C4u);
    ctx->pc = 0x24D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4BCu;
    // 0x24d4c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x24D4BCu, 0x24D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4C4u;
label_24d4c4:
    // 0x24d4c4: 0xc092490  jal         func_249240
    ctx->pc = 0x24D4C4u;
    SET_GPR_U32(ctx, 31, 0x24D4CCu);
    ctx->pc = 0x24D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4C4u;
    // 0x24d4c8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x24D4C4u, 0x24D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4CCu;
label_24d4cc:
    // 0x24d4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4D0u;
        // 0x24d4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D4D8u;
}
