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

// Function: sub_00342530
// Address: 0x342530 - 0x342560
void sub_00342530_0x342530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342530_0x342530");
#endif

    switch (ctx->pc) {
        case 0x342554u: goto label_342554;
        default: break;
    }

    ctx->pc = 0x342530u;

    // 0x342530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342534: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x342534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x342538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34253c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x34253cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342540: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x342540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x342544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x342544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x342548: 0x3442c003  ori         $v0, $v0, 0xC003
    ctx->pc = 0x342548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49155);
    // 0x34254c: 0xc0d0786  jal         func_341E18
    ctx->pc = 0x34254Cu;
    SET_GPR_U32(ctx, 31, 0x342554u);
    ctx->pc = 0x342550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34254Cu;
    // 0x342550: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E18u, 0x34254Cu, 0x342554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342554u;
label_342554:
    // 0x342554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342558: 0x3e00008  jr          $ra
    ctx->pc = 0x342558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342558u;
        // 0x34255c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342560u;
}
