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

// Function: sub_001FC310
// Address: 0x1fc310 - 0x1fc330
void sub_001FC310_0x1fc310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC310_0x1fc310");
#endif

    ctx->pc = 0x1fc310u;

    // 0x1fc310: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fc314: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fc314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc318: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1fc318u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1fc31c: 0x1810  mfhi        $v1
    ctx->pc = 0x1fc31cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1fc320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc324: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc328: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC328u;
        // 0x1fc32c: 0x8c6200cc  lw          $v0, 0xCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC330u;
}
