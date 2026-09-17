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

// Function: sub_002E1628
// Address: 0x2e1628 - 0x2e1650
void sub_002E1628_0x2e1628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1628_0x2e1628");
#endif

    switch (ctx->pc) {
        case 0x2e1640u: goto label_2e1640;
        default: break;
    }

    ctx->pc = 0x2e1628u;

    // 0x2e1628: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e162c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e162cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e1630: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e1634: 0x248403bc  addiu       $a0, $a0, 0x3BC
    ctx->pc = 0x2e1634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 956));
    // 0x2e1638: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E1638u;
    SET_GPR_U32(ctx, 31, 0x2E1640u);
    ctx->pc = 0x2E163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1638u;
    // 0x2e163c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E1638u, 0x2E1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1640u;
label_2e1640:
    // 0x2e1640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1644: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1644u;
        // 0x2e1648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E164Cu;
    // 0x2e164c: 0x0  nop
    ctx->pc = 0x2e164cu;
    // NOP
    ctx->pc = 0x2e1650u;
}
