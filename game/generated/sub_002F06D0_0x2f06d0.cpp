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

// Function: sub_002F06D0
// Address: 0x2f06d0 - 0x2f0700
void sub_002F06D0_0x2f06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06D0_0x2f06d0");
#endif

    switch (ctx->pc) {
        case 0x2f06e0u: goto label_2f06e0;
        case 0x2f06ecu: goto label_2f06ec;
        case 0x2f06f4u: goto label_2f06f4;
        default: break;
    }

    ctx->pc = 0x2f06d0u;

    // 0x2f06d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f06d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f06d8: 0xc0bc180  jal         func_2F0600
    ctx->pc = 0x2F06D8u;
    SET_GPR_U32(ctx, 31, 0x2F06E0u);
    ctx->pc = 0x2F0600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0600u, 0x2F06D8u, 0x2F06E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06E0u;
label_2f06e0:
    // 0x2f06e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f06e4: 0xc0bc1d6  jal         func_2F0758
    ctx->pc = 0x2F06E4u;
    SET_GPR_U32(ctx, 31, 0x2F06ECu);
    ctx->pc = 0x2F06E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06E4u;
    // 0x2f06e8: 0x2484f450  addiu       $a0, $a0, -0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0758u, 0x2F06E4u, 0x2F06ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06ECu;
label_2f06ec:
    // 0x2f06ec: 0xc087f20  jal         func_21FC80
    ctx->pc = 0x2F06ECu;
    SET_GPR_U32(ctx, 31, 0x2F06F4u);
    ctx->pc = 0x21FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC80u, 0x2F06ECu, 0x2F06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06F4u;
label_2f06f4:
    // 0x2f06f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f06f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f06f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06F8u;
        // 0x2f06fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F06F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0700u;
}
