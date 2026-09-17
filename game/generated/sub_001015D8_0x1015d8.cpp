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

// Function: sub_001015D8
// Address: 0x1015d8 - 0x1015f8
void sub_001015D8_0x1015d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001015D8_0x1015d8");
#endif

    ctx->pc = 0x1015d8u;

    // 0x1015d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1015dc: 0x3463f640  ori         $v1, $v1, 0xF640
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63040);
    // 0x1015e0: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x1015e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1015e4: 0x3c01007d  lui         $at, 0x7D
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)125 << 16));
    // 0x1015e8: 0x24219ec0  addiu       $at, $at, -0x6140
    ctx->pc = 0x1015e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294942400));
    // 0x1015ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1015ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1015F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015ECu;
        // 0x1015f0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1015ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1015F4u;
    // 0x1015f4: 0x0  nop
    ctx->pc = 0x1015f4u;
    // NOP
    ctx->pc = 0x1015f8u;
}
