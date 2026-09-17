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

// Function: sub_002A7C40
// Address: 0x2a7c40 - 0x2a7c68
void sub_002A7C40_0x2a7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7C40_0x2a7c40");
#endif

    ctx->pc = 0x2a7c40u;

    // 0x2a7c40: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2a7c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2a7c44: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2a7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2a7c48: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x2a7c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a7c4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7c50: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a7c54: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a7c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c58: 0xa4a20190  sh          $v0, 0x190($a1)
    ctx->pc = 0x2a7c58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 400), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c5c: 0xa4e20192  sh          $v0, 0x192($a3)
    ctx->pc = 0x2a7c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 402), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C60u;
        // 0x2a7c64: 0xac8601a0  sw          $a2, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C68u;
}
