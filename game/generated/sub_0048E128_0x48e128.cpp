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

// Function: sub_0048E128
// Address: 0x48e128 - 0x48e148
void sub_0048E128_0x48e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E128_0x48e128");
#endif

    ctx->pc = 0x48e128u;

    // 0x48e128: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e12c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e130: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e134: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e138: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x48e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x48e13c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E13Cu;
        // 0x48e140: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E144u;
    // 0x48e144: 0x0  nop
    ctx->pc = 0x48e144u;
    // NOP
    ctx->pc = 0x48e148u;
}
