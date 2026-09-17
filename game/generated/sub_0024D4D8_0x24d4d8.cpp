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

// Function: sub_0024D4D8
// Address: 0x24d4d8 - 0x24d508
void sub_0024D4D8_0x24d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D4D8_0x24d4d8");
#endif

    switch (ctx->pc) {
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f8u: goto label_24d4f8;
        default: break;
    }

    ctx->pc = 0x24d4d8u;

    // 0x24d4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d4e0: 0xc091a4c  jal         func_246930
    ctx->pc = 0x24D4E0u;
    SET_GPR_U32(ctx, 31, 0x24D4E8u);
    ctx->pc = 0x246930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246930u, 0x24D4E0u, 0x24D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4E8u;
label_24d4e8:
    // 0x24d4e8: 0xc092486  jal         func_249218
    ctx->pc = 0x24D4E8u;
    SET_GPR_U32(ctx, 31, 0x24D4F0u);
    ctx->pc = 0x24D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4E8u;
    // 0x24d4ec: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x24D4E8u, 0x24D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4F0u;
label_24d4f0:
    // 0x24d4f0: 0xc092490  jal         func_249240
    ctx->pc = 0x24D4F0u;
    SET_GPR_U32(ctx, 31, 0x24D4F8u);
    ctx->pc = 0x24D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4F0u;
    // 0x24d4f4: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x24D4F0u, 0x24D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4F8u;
label_24d4f8:
    // 0x24d4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24D4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4FCu;
        // 0x24d500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D504u;
    // 0x24d504: 0x0  nop
    ctx->pc = 0x24d504u;
    // NOP
    ctx->pc = 0x24d508u;
}
