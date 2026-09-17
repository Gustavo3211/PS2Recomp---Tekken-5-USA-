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

// Function: sub_0025DE60
// Address: 0x25de60 - 0x25de80
void sub_0025DE60_0x25de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE60_0x25de60");
#endif

    ctx->pc = 0x25de60u;

    // 0x25de60: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x25de60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x25de64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25de68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25de68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25de6c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x25de6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25de70: 0xac23ca20  sw          $v1, -0x35E0($at)
    ctx->pc = 0x25de70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953504), GPR_U32(ctx, 3));
    // 0x25de74: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE7Cu;
    // 0x25de7c: 0x0  nop
    ctx->pc = 0x25de7cu;
    // NOP
    ctx->pc = 0x25de80u;
}
