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

// Function: sub_002989B8
// Address: 0x2989b8 - 0x2989d8
void sub_002989B8_0x2989b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002989B8_0x2989b8");
#endif

    switch (ctx->pc) {
        case 0x2989ccu: goto label_2989cc;
        default: break;
    }

    ctx->pc = 0x2989b8u;

    // 0x2989b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2989b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2989bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2989bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2989c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2989c4: 0xc0a622e  jal         func_2988B8
    ctx->pc = 0x2989C4u;
    SET_GPR_U32(ctx, 31, 0x2989CCu);
    ctx->pc = 0x2989C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989C4u;
    // 0x2989c8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2988B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988B8u, 0x2989C4u, 0x2989CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989CCu;
label_2989cc:
    // 0x2989cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2989ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2989d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2989D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2989D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989D0u;
        // 0x2989d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2989D8u;
}
