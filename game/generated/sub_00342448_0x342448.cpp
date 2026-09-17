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

// Function: sub_00342448
// Address: 0x342448 - 0x342460
void sub_00342448_0x342448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342448_0x342448");
#endif

    ctx->pc = 0x342448u;

    // 0x342448: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x34244c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342450: 0x24632e48  addiu       $v1, $v1, 0x2E48
    ctx->pc = 0x342450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11848));
    // 0x342454: 0x3e00008  jr          $ra
    ctx->pc = 0x342454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342454u;
        // 0x342458: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34245Cu;
    // 0x34245c: 0x0  nop
    ctx->pc = 0x34245cu;
    // NOP
    ctx->pc = 0x342460u;
}
