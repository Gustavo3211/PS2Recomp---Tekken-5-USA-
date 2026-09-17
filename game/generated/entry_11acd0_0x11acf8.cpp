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

// Function: entry_11acd0
// Address: 0x11acd0 - 0x11acf8
void entry_11acd0_0x11acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11acd0_0x11acf8");
#endif

    switch (ctx->pc) {
        case 0x11ace8u: goto label_11ace8;
        default: break;
    }

    ctx->pc = 0x11acd0u;

    // 0x11acd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11acd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11acd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11acd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ace0: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x11ACE0u;
    SET_GPR_U32(ctx, 31, 0x11ACE8u);
    ctx->pc = 0x11ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACE0u;
    // 0x11ace4: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x11ACE0u, 0x11ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACE8u;
label_11ace8:
    // 0x11ace8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11acec: 0x3e00008  jr          $ra
    ctx->pc = 0x11ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACECu;
        // 0x11acf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ACF4u;
    // 0x11acf4: 0x0  nop
    ctx->pc = 0x11acf4u;
    // NOP
    ctx->pc = 0x11acf8u;
}
