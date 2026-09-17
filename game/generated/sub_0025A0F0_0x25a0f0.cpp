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

// Function: sub_0025A0F0
// Address: 0x25a0f0 - 0x25a118
void sub_0025A0F0_0x25a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A0F0_0x25a0f0");
#endif

    switch (ctx->pc) {
        case 0x25a100u: goto label_25a100;
        default: break;
    }

    ctx->pc = 0x25a0f0u;

    // 0x25a0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a0f8: 0xc0967e4  jal         func_259F90
    ctx->pc = 0x25A0F8u;
    SET_GPR_U32(ctx, 31, 0x25A100u);
    ctx->pc = 0x259F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F90u, 0x25A0F8u, 0x25A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A100u;
label_25a100:
    // 0x25a100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a108: 0xac4305bc  sw          $v1, 0x5BC($v0)
    ctx->pc = 0x25a108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1468), GPR_U32(ctx, 3));
    // 0x25a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A10Cu;
        // 0x25a110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A114u;
    // 0x25a114: 0x0  nop
    ctx->pc = 0x25a114u;
    // NOP
    ctx->pc = 0x25a118u;
}
