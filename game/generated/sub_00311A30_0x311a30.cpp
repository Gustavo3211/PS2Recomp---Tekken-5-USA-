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

// Function: sub_00311A30
// Address: 0x311a30 - 0x311a58
void sub_00311A30_0x311a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311A30_0x311a30");
#endif

    switch (ctx->pc) {
        case 0x311a44u: goto label_311a44;
        default: break;
    }

    ctx->pc = 0x311a30u;

    // 0x311a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311a34: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x311a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x311a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311a3c: 0xc0cc106  jal         func_330418
    ctx->pc = 0x311A3Cu;
    SET_GPR_U32(ctx, 31, 0x311A44u);
    ctx->pc = 0x311A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A3Cu;
    // 0x311a40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x311A3Cu, 0x311A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A44u;
label_311a44:
    // 0x311a44: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x311a48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311a4c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x311a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x311a50: 0x3e00008  jr          $ra
    ctx->pc = 0x311A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A50u;
        // 0x311a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311A58u;
}
