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

// Function: sub_0032C9C0
// Address: 0x32c9c0 - 0x32c9f8
void sub_0032C9C0_0x32c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C9C0_0x32c9c0");
#endif

    switch (ctx->pc) {
        case 0x32c9ecu: goto label_32c9ec;
        default: break;
    }

    ctx->pc = 0x32c9c0u;

    // 0x32c9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c9c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32c9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c9cc: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x32c9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x32c9d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c9d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32c9d8: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x32c9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x32c9dc: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x32c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x32c9e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x32c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x32c9e4: 0xc0cfdce  jal         func_33F738
    ctx->pc = 0x32C9E4u;
    SET_GPR_U32(ctx, 31, 0x32C9ECu);
    ctx->pc = 0x32C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9E4u;
    // 0x32c9e8: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F738u, 0x32C9E4u, 0x32C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9ECu;
label_32c9ec:
    // 0x32c9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9F0u;
        // 0x32c9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C9F8u;
}
