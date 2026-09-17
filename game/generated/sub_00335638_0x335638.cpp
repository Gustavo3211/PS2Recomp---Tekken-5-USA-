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

// Function: sub_00335638
// Address: 0x335638 - 0x335660
void sub_00335638_0x335638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335638_0x335638");
#endif

    ctx->pc = 0x335638u;

    // 0x335638: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33563c: 0x2786c6e0  addiu       $a2, $gp, -0x3920
    ctx->pc = 0x33563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952672));
    // 0x335640: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x335644: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x335644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x400414u));
    // 0x335648: 0x248500a0  addiu       $a1, $a0, 0xA0
    ctx->pc = 0x335648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x33564c: 0x24820140  addiu       $v0, $a0, 0x140
    ctx->pc = 0x33564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x335650: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x335650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x335654: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x335654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x335658: 0x3e00008  jr          $ra
    ctx->pc = 0x335658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335658u;
        // 0x33565c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335660u;
}
