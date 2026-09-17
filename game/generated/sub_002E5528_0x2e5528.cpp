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

// Function: sub_002E5528
// Address: 0x2e5528 - 0x2e5550
void sub_002E5528_0x2e5528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5528_0x2e5528");
#endif

    switch (ctx->pc) {
        case 0x2e5540u: goto label_2e5540;
        default: break;
    }

    ctx->pc = 0x2e5528u;

    // 0x2e5528: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e552c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e552cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e5530: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e5534: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x2e5534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x2e5538: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E5538u;
    SET_GPR_U32(ctx, 31, 0x2E5540u);
    ctx->pc = 0x2E553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5538u;
    // 0x2e553c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E5538u, 0x2E5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5540u;
label_2e5540:
    // 0x2e5540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e5540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5544: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5544u;
        // 0x2e5548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E554Cu;
    // 0x2e554c: 0x0  nop
    ctx->pc = 0x2e554cu;
    // NOP
    ctx->pc = 0x2e5550u;
}
