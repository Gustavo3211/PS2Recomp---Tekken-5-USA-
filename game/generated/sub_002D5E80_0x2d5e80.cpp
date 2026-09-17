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

// Function: sub_002D5E80
// Address: 0x2d5e80 - 0x2d5ea0
void sub_002D5E80_0x2d5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5E80_0x2d5e80");
#endif

    switch (ctx->pc) {
        case 0x2d5e94u: goto label_2d5e94;
        default: break;
    }

    ctx->pc = 0x2d5e80u;

    // 0x2d5e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5e84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5e8c: 0xc0b5794  jal         func_2D5E50
    ctx->pc = 0x2D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E94u);
    ctx->pc = 0x2D5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E8Cu;
    // 0x2d5e90: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E50u, 0x2D5E8Cu, 0x2D5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E94u;
label_2d5e94:
    // 0x2d5e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E98u;
        // 0x2d5e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5EA0u;
}
