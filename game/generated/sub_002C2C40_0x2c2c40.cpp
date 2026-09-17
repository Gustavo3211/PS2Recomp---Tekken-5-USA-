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

// Function: sub_002C2C40
// Address: 0x2c2c40 - 0x2c2c88
void sub_002C2C40_0x2c2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2C40_0x2c2c40");
#endif

    ctx->pc = 0x2c2c40u;

    // 0x2c2c40: 0x84860012  lh          $a2, 0x12($a0)
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2c2c44: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c2c48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2c4c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2c2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c2c50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2c54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c2c58: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2c2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2c60: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2c2c64: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c2c68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c2c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2c70: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2c2c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2c2c74: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2c2c74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c2c78: 0xac207ea4  sw          $zero, 0x7EA4($at)
    ctx->pc = 0x2c2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32420), GPR_U32(ctx, 0));
    // 0x2c2c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2C84u;
    // 0x2c2c84: 0x0  nop
    ctx->pc = 0x2c2c84u;
    // NOP
    ctx->pc = 0x2c2c88u;
}
