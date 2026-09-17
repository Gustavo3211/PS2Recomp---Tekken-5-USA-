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

// Function: sub_00253088
// Address: 0x253088 - 0x2530a8
void sub_00253088_0x253088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253088_0x253088");
#endif

    ctx->pc = 0x253088u;

    // 0x253088: 0x2c820067  sltiu       $v0, $a0, 0x67
    ctx->pc = 0x253088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)103) ? 1 : 0);
    // 0x25308c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x25308cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x253090: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x253094: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x253098: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x253098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25309c: 0x8c427f70  lw          $v0, 0x7F70($v0)
    ctx->pc = 0x25309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32624)));
    // 0x2530a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2530A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2530A8u;
}
