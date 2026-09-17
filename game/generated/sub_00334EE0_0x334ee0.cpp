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

// Function: sub_00334EE0
// Address: 0x334ee0 - 0x334f00
void sub_00334EE0_0x334ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334EE0_0x334ee0");
#endif

    switch (ctx->pc) {
        case 0x334ef0u: goto label_334ef0;
        default: break;
    }

    ctx->pc = 0x334ee0u;

    // 0x334ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334ee8: 0xc043fba  jal         func_10FEE8
    ctx->pc = 0x334EE8u;
    SET_GPR_U32(ctx, 31, 0x334EF0u);
    ctx->pc = 0x334EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EE8u;
    // 0x334eec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEE8u, 0x334EE8u, 0x334EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EF0u;
label_334ef0:
    // 0x334ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x334EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EF4u;
        // 0x334ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334EFCu;
    // 0x334efc: 0x0  nop
    ctx->pc = 0x334efcu;
    // NOP
    ctx->pc = 0x334f00u;
}
