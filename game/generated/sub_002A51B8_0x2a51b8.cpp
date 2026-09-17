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

// Function: sub_002A51B8
// Address: 0x2a51b8 - 0x2a51e0
void sub_002A51B8_0x2a51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A51B8_0x2a51b8");
#endif

    ctx->pc = 0x2a51b8u;

    // 0x2a51b8: 0x9382b85d  lbu         $v0, -0x47A3($gp)
    ctx->pc = 0x2a51b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a51bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a51bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a51c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51C0u;
        // 0x2a51c4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51C8u;
    // 0x2a51c8: 0x9382b85d  lbu         $v0, -0x47A3($gp)
    ctx->pc = 0x2a51c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a51cc: 0x244200fd  addiu       $v0, $v0, 0xFD
    ctx->pc = 0x2a51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 253));
    // 0x2a51d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a51d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51D4u;
        // 0x2a51d8: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51DCu;
    // 0x2a51dc: 0x0  nop
    ctx->pc = 0x2a51dcu;
    // NOP
    ctx->pc = 0x2a51e0u;
}
