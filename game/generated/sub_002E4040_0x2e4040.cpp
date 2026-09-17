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

// Function: sub_002E4040
// Address: 0x2e4040 - 0x2e4060
void sub_002E4040_0x2e4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4040_0x2e4040");
#endif

    switch (ctx->pc) {
        case 0x2e4054u: goto label_2e4054;
        default: break;
    }

    ctx->pc = 0x2e4040u;

    // 0x2e4040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e404c: 0xc0b8ffc  jal         func_2E3FF0
    ctx->pc = 0x2E404Cu;
    SET_GPR_U32(ctx, 31, 0x2E4054u);
    ctx->pc = 0x2E4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E404Cu;
    // 0x2e4050: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3FF0u, 0x2E404Cu, 0x2E4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4054u;
label_2e4054:
    // 0x2e4054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4058: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4058u;
        // 0x2e405c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4060u;
}
