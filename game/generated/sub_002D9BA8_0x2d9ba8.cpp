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

// Function: sub_002D9BA8
// Address: 0x2d9ba8 - 0x2d9be0
void sub_002D9BA8_0x2d9ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9BA8_0x2d9ba8");
#endif

    ctx->pc = 0x2d9ba8u;

    // 0x2d9ba8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d9bac: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d9bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d9bb0: 0x2463e7e0  addiu       $v1, $v1, -0x1820
    ctx->pc = 0x2d9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961120));
    // 0x2d9bb4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d9bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d9bb8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d9bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9bc0: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d9bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d9bc4: 0x3042ff3f  andi        $v0, $v0, 0xFF3F
    ctx->pc = 0x2d9bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65343);
    // 0x2d9bc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d9bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d9bcc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d9bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d9bd0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2d9bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2d9bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BD4u;
        // 0x2d9bd8: 0xa42294e4  sh          $v0, -0x6B1C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9BDCu;
    // 0x2d9bdc: 0x0  nop
    ctx->pc = 0x2d9bdcu;
    // NOP
    ctx->pc = 0x2d9be0u;
}
