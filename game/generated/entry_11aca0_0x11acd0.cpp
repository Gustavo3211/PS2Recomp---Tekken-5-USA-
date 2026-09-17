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

// Function: entry_11aca0
// Address: 0x11aca0 - 0x11acd0
void entry_11aca0_0x11acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11aca0_0x11acd0");
#endif

    switch (ctx->pc) {
        case 0x11acc4u: goto label_11acc4;
        default: break;
    }

    ctx->pc = 0x11aca0u;

    // 0x11aca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aca4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11aca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11aca8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x11aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x11acac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11acb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11acb8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11acbc: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x11ACBCu;
    SET_GPR_U32(ctx, 31, 0x11ACC4u);
    ctx->pc = 0x11ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACBCu;
    // 0x11acc0: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x11ACBCu, 0x11ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACC4u;
label_11acc4:
    // 0x11acc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11acc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11acc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC8u;
        // 0x11accc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ACD0u;
}
