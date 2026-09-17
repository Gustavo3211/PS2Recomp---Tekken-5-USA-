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

// Function: sub_0028A060
// Address: 0x28a060 - 0x28a088
void sub_0028A060_0x28a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A060_0x28a060");
#endif

    switch (ctx->pc) {
        case 0x28a078u: goto label_28a078;
        default: break;
    }

    ctx->pc = 0x28a060u;

    // 0x28a060: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28a064: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28a064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28a068: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x28a06c: 0x2484fd3c  addiu       $a0, $a0, -0x2C4
    ctx->pc = 0x28a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966588));
    // 0x28a070: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28A070u;
    SET_GPR_U32(ctx, 31, 0x28A078u);
    ctx->pc = 0x28A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A070u;
    // 0x28a074: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28A070u, 0x28A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A078u;
label_28a078:
    // 0x28a078: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A07Cu;
        // 0x28a080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A084u;
    // 0x28a084: 0x0  nop
    ctx->pc = 0x28a084u;
    // NOP
    ctx->pc = 0x28a088u;
}
