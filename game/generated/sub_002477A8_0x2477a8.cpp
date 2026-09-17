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

// Function: sub_002477A8
// Address: 0x2477a8 - 0x2477d0
void sub_002477A8_0x2477a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477A8_0x2477a8");
#endif

    ctx->pc = 0x2477a8u;

    // 0x2477a8: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2477ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2477acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2477b0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2477b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2477b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2477b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2477bc: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2477c0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2477c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2477c4: 0xac246efc  sw          $a0, 0x6EFC($at)
    ctx->pc = 0x2477c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28412), GPR_U32(ctx, 4));
    // 0x2477c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2477C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477D0u;
}
