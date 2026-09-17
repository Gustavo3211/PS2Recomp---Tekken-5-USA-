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

// Function: sub_002E2F08
// Address: 0x2e2f08 - 0x2e2f38
void sub_002E2F08_0x2e2f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2F08_0x2e2f08");
#endif

    switch (ctx->pc) {
        case 0x2e2f1cu: goto label_2e2f1c;
        case 0x2e2f24u: goto label_2e2f24;
        default: break;
    }

    ctx->pc = 0x2e2f08u;

    // 0x2e2f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e2f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e2f14: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2E2F14u;
    SET_GPR_U32(ctx, 31, 0x2E2F1Cu);
    ctx->pc = 0x2E2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F14u;
    // 0x2e2f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2E2F14u, 0x2E2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F1Cu;
label_2e2f1c:
    // 0x2e2f1c: 0xc0be9d0  jal         func_2FA740
    ctx->pc = 0x2E2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F24u);
    ctx->pc = 0x2E2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F1Cu;
    // 0x2e2f20: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA740u, 0x2E2F1Cu, 0x2E2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F24u;
label_2e2f24:
    // 0x2e2f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2f28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F2Cu;
        // 0x2e2f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F34u;
    // 0x2e2f34: 0x0  nop
    ctx->pc = 0x2e2f34u;
    // NOP
    ctx->pc = 0x2e2f38u;
}
