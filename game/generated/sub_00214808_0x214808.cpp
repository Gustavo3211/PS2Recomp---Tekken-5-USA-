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

// Function: sub_00214808
// Address: 0x214808 - 0x214830
void sub_00214808_0x214808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214808_0x214808");
#endif

    ctx->pc = 0x214808u;

    // 0x214808: 0x8f82c90c  lw          $v0, -0x36F4($gp)
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953228)));
    // 0x21480c: 0x2783c908  addiu       $v1, $gp, -0x36F8
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953224));
    // 0x214810: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x214810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214814: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x214818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x214818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x21481c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x21481cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x214820: 0xaf86c90c  sw          $a2, -0x36F4($gp)
    ctx->pc = 0x214820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953228), GPR_U32(ctx, 6));
    // 0x214824: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x214824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x214828: 0x3e00008  jr          $ra
    ctx->pc = 0x214828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214828u;
        // 0x21482c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214830u;
}
