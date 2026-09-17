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

// Function: sub_00335660
// Address: 0x335660 - 0x335698
void sub_00335660_0x335660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335660_0x335660");
#endif

    switch (ctx->pc) {
        case 0x33567cu: goto label_33567c;
        case 0x335688u: goto label_335688;
        default: break;
    }

    ctx->pc = 0x335660u;

    // 0x335660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335668: 0x2790c6e0  addiu       $s0, $gp, -0x3920
    ctx->pc = 0x335668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952672));
    // 0x33566c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335674: 0xc0cd5e0  jal         func_335780
    ctx->pc = 0x335674u;
    SET_GPR_U32(ctx, 31, 0x33567Cu);
    ctx->pc = 0x335678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335674u;
    // 0x335678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335780u, 0x335674u, 0x33567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33567Cu;
label_33567c:
    // 0x33567c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335680: 0xc0cd5e0  jal         func_335780
    ctx->pc = 0x335680u;
    SET_GPR_U32(ctx, 31, 0x335688u);
    ctx->pc = 0x335684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335680u;
    // 0x335684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335780u, 0x335680u, 0x335688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335688u;
label_335688:
    // 0x335688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33568c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335690: 0x3e00008  jr          $ra
    ctx->pc = 0x335690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335690u;
        // 0x335694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335698u;
}
