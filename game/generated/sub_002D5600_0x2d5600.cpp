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

// Function: sub_002D5600
// Address: 0x2d5600 - 0x2d5640
void sub_002D5600_0x2d5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5600_0x2d5600");
#endif

    switch (ctx->pc) {
        case 0x2d5610u: goto label_2d5610;
        case 0x2d5624u: goto label_2d5624;
        case 0x2d5630u: goto label_2d5630;
        default: break;
    }

    ctx->pc = 0x2d5600u;

    // 0x2d5600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5608: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D5608u;
    SET_GPR_U32(ctx, 31, 0x2D5610u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D5608u, 0x2D5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5610u;
label_2d5610:
    // 0x2d5610: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2d5610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2d5614: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5614u;
    {
        const bool branch_taken_0x2d5614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5614u;
        // 0x2d5618: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5614) {
            ctx->pc = 0x2D5630u;
            goto label_2d5630;
        }
    }
    ctx->pc = 0x2D561Cu;
    // 0x2d561c: 0xc0b55cc  jal         func_2D5730
    ctx->pc = 0x2D561Cu;
    SET_GPR_U32(ctx, 31, 0x2D5624u);
    ctx->pc = 0x2D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5730u, 0x2D561Cu, 0x2D5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5624u;
label_2d5624:
    // 0x2d5624: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2d5624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2d5628: 0xc0b55cc  jal         func_2D5730
    ctx->pc = 0x2D5628u;
    SET_GPR_U32(ctx, 31, 0x2D5630u);
    ctx->pc = 0x2D562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5628u;
    // 0x2d562c: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5730u, 0x2D5628u, 0x2D5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5630u;
label_2d5630:
    // 0x2d5630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5634: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5634u;
        // 0x2d5638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D563Cu;
    // 0x2d563c: 0x0  nop
    ctx->pc = 0x2d563cu;
    // NOP
    ctx->pc = 0x2d5640u;
}
