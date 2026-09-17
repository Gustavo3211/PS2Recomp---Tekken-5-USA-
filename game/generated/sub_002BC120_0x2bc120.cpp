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

// Function: sub_002BC120
// Address: 0x2bc120 - 0x2bc140
void sub_002BC120_0x2bc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC120_0x2bc120");
#endif

    switch (ctx->pc) {
        case 0x2bc134u: goto label_2bc134;
        default: break;
    }

    ctx->pc = 0x2bc120u;

    // 0x2bc120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bc124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc12c: 0xc0af030  jal         func_2BC0C0
    ctx->pc = 0x2BC12Cu;
    SET_GPR_U32(ctx, 31, 0x2BC134u);
    ctx->pc = 0x2BC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC12Cu;
    // 0x2bc130: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0C0u, 0x2BC12Cu, 0x2BC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC134u;
label_2bc134:
    // 0x2bc134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc138: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC138u;
        // 0x2bc13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC140u;
}
