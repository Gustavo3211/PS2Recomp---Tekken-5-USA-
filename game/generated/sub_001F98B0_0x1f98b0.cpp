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

// Function: sub_001F98B0
// Address: 0x1f98b0 - 0x1f98d8
void sub_001F98B0_0x1f98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98B0_0x1f98b0");
#endif

    ctx->pc = 0x1f98b0u;

    // 0x1f98b0: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x1f98b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1f98b4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1f98b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f98b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f98bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f98c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1f98c4: 0x2421b400  addiu       $at, $at, -0x4C00
    ctx->pc = 0x1f98c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947840));
    // 0x1f98c8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f98cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98CCu;
        // 0x1f98d0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98D4u;
    // 0x1f98d4: 0x0  nop
    ctx->pc = 0x1f98d4u;
    // NOP
    ctx->pc = 0x1f98d8u;
}
