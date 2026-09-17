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

// Function: sub_004923A8
// Address: 0x4923a8 - 0x4923c0
void sub_004923A8_0x4923a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004923A8_0x4923a8");
#endif

    ctx->pc = 0x4923a8u;

    // 0x4923a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4923a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4923ac: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4923acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4923b0: 0x9443d602  lhu         $v1, -0x29FE($v0)
    ctx->pc = 0x4923b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D602u));
    // 0x4923b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4923b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4923b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4923B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4923BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923B8u;
        // 0x4923bc: 0xa483d6f8  sh          $v1, -0x2908($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294956792), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4923B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4923C0u;
}
