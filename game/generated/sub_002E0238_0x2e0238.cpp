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

// Function: sub_002E0238
// Address: 0x2e0238 - 0x2e0260
void sub_002E0238_0x2e0238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0238_0x2e0238");
#endif

    switch (ctx->pc) {
        case 0x2e0250u: goto label_2e0250;
        default: break;
    }

    ctx->pc = 0x2e0238u;

    // 0x2e0238: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e023c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e023cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e0240: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e0244: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x2e0248: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E0248u;
    SET_GPR_U32(ctx, 31, 0x2E0250u);
    ctx->pc = 0x2E024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0248u;
    // 0x2e024c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E0248u, 0x2E0250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0250u;
label_2e0250:
    // 0x2e0250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e0250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0254: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0254u;
        // 0x2e0258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E025Cu;
    // 0x2e025c: 0x0  nop
    ctx->pc = 0x2e025cu;
    // NOP
    ctx->pc = 0x2e0260u;
}
