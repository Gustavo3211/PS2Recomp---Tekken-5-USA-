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

// Function: sub_0032C910
// Address: 0x32c910 - 0x32c938
void sub_0032C910_0x32c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C910_0x32c910");
#endif

    switch (ctx->pc) {
        case 0x32c928u: goto label_32c928;
        default: break;
    }

    ctx->pc = 0x32c910u;

    // 0x32c910: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32c910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c914: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32c914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c920: 0xc0cb270  jal         func_32C9C0
    ctx->pc = 0x32C920u;
    SET_GPR_U32(ctx, 31, 0x32C928u);
    ctx->pc = 0x32C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C920u;
    // 0x32c924: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C9C0u, 0x32C920u, 0x32C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C928u;
label_32c928:
    // 0x32c928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C92Cu;
        // 0x32c930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C934u;
    // 0x32c934: 0x0  nop
    ctx->pc = 0x32c934u;
    // NOP
    ctx->pc = 0x32c938u;
}
