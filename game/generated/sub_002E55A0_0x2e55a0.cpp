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

// Function: sub_002E55A0
// Address: 0x2e55a0 - 0x2e55c8
void sub_002E55A0_0x2e55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E55A0_0x2e55a0");
#endif

    switch (ctx->pc) {
        case 0x2e55b8u: goto label_2e55b8;
        default: break;
    }

    ctx->pc = 0x2e55a0u;

    // 0x2e55a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e55a4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e55a8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e55ac: 0x24840510  addiu       $a0, $a0, 0x510
    ctx->pc = 0x2e55acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x2e55b0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E55B0u;
    SET_GPR_U32(ctx, 31, 0x2E55B8u);
    ctx->pc = 0x2E55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55B0u;
    // 0x2e55b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E55B0u, 0x2E55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55B8u;
label_2e55b8:
    // 0x2e55b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e55b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e55bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55BCu;
        // 0x2e55c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E55C4u;
    // 0x2e55c4: 0x0  nop
    ctx->pc = 0x2e55c4u;
    // NOP
    ctx->pc = 0x2e55c8u;
}
