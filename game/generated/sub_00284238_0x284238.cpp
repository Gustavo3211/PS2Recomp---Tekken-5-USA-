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

// Function: sub_00284238
// Address: 0x284238 - 0x284270
void sub_00284238_0x284238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284238_0x284238");
#endif

    ctx->pc = 0x284238u;

    // 0x284238: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x284238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x28423c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284240: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x284240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x284244: 0x8c42caa0  lw          $v0, -0x3560($v0)
    ctx->pc = 0x284244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953632)));
    // 0x284248: 0x3e00008  jr          $ra
    ctx->pc = 0x284248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284250u;
    // 0x284250: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x284250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x284254: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x284254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28425c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x28425cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284260: 0xac23caa0  sw          $v1, -0x3560($at)
    ctx->pc = 0x284260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 3));
    // 0x284264: 0x3e00008  jr          $ra
    ctx->pc = 0x284264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28426Cu;
    // 0x28426c: 0x0  nop
    ctx->pc = 0x28426cu;
    // NOP
    ctx->pc = 0x284270u;
}
