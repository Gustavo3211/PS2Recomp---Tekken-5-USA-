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

// Function: sub_001FC2F0
// Address: 0x1fc2f0 - 0x1fc310
void sub_001FC2F0_0x1fc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC2F0_0x1fc2f0");
#endif

    ctx->pc = 0x1fc2f0u;

    // 0x1fc2f0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1fc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fc2f4: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc2f8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1fc2f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1fc2fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1fc2fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1fc300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc304: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc308: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC308u;
        // 0x1fc30c: 0xac4500cc  sw          $a1, 0xCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC310u;
}
