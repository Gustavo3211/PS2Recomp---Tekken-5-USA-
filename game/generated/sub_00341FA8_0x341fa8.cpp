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

// Function: sub_00341FA8
// Address: 0x341fa8 - 0x341fc0
void sub_00341FA8_0x341fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341FA8_0x341fa8");
#endif

    ctx->pc = 0x341fa8u;

    // 0x341fa8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x341fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x341fac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x341facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341fb0: 0x24632d08  addiu       $v1, $v1, 0x2D08
    ctx->pc = 0x341fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11528));
    // 0x341fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x341FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FB4u;
        // 0x341fb8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341FBCu;
    // 0x341fbc: 0x0  nop
    ctx->pc = 0x341fbcu;
    // NOP
    ctx->pc = 0x341fc0u;
}
