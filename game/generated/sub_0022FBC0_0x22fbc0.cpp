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

// Function: sub_0022FBC0
// Address: 0x22fbc0 - 0x22fbe8
void sub_0022FBC0_0x22fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FBC0_0x22fbc0");
#endif

    ctx->pc = 0x22fbc0u;

    // 0x22fbc0: 0x24060e54  addiu       $a2, $zero, 0xE54
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3668));
    // 0x22fbc4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x22fbc8: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x22fbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22fbcc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22fbd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22fbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fbd8: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22fbdc: 0x2421b33c  addiu       $at, $at, -0x4CC4
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947644));
    // 0x22fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x22FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE0u;
        // 0x22fbe4: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FBE8u;
}
