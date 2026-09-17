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

// Function: sub_002EE4D0
// Address: 0x2ee4d0 - 0x2ee4f8
void sub_002EE4D0_0x2ee4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE4D0_0x2ee4d0");
#endif

    switch (ctx->pc) {
        case 0x2ee4e0u: goto label_2ee4e0;
        default: break;
    }

    ctx->pc = 0x2ee4d0u;

    // 0x2ee4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee4d8: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x2EE4D8u;
    SET_GPR_U32(ctx, 31, 0x2EE4E0u);
    ctx->pc = 0x2EE4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4D8u;
    // 0x2ee4dc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x2EE4D8u, 0x2EE4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4E0u;
label_2ee4e0:
    // 0x2ee4e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2ee4e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ee4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee4e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ee4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ee4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4ECu;
        // 0x2ee4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE4F4u;
    // 0x2ee4f4: 0x0  nop
    ctx->pc = 0x2ee4f4u;
    // NOP
    ctx->pc = 0x2ee4f8u;
}
