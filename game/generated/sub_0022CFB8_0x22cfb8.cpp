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

// Function: sub_0022CFB8
// Address: 0x22cfb8 - 0x22cfd0
void sub_0022CFB8_0x22cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CFB8_0x22cfb8");
#endif

    ctx->pc = 0x22cfb8u;

    // 0x22cfb8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x22cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22cfbc: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22cfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22cfc0: 0x24219300  addiu       $at, $at, -0x6D00
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294939392));
    // 0x22cfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFC4u;
        // 0x22cfc8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CFCCu;
    // 0x22cfcc: 0x0  nop
    ctx->pc = 0x22cfccu;
    // NOP
    ctx->pc = 0x22cfd0u;
}
