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

// Function: sub_0033D0E0
// Address: 0x33d0e0 - 0x33d110
void sub_0033D0E0_0x33d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D0E0_0x33d0e0");
#endif

    ctx->pc = 0x33d0e0u;

    // 0x33d0e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x33d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33d0e4: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x33d0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x33d0e8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x33d0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x33d0ec: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x33d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x33d0f0: 0x31c82  srl         $v1, $v1, 18
    ctx->pc = 0x33d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
    // 0x33d0f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d0fc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x33d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x33d100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33d100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33d104: 0x3e00008  jr          $ra
    ctx->pc = 0x33D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D104u;
        // 0x33d108: 0xa4820010  sh          $v0, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D10Cu;
    // 0x33d10c: 0x0  nop
    ctx->pc = 0x33d10cu;
    // NOP
    ctx->pc = 0x33d110u;
}
