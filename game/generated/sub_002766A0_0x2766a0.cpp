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

// Function: sub_002766A0
// Address: 0x2766a0 - 0x2766d8
void sub_002766A0_0x2766a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766A0_0x2766a0");
#endif

    ctx->pc = 0x2766a0u;

    // 0x2766a0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2766a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2766a4: 0x8f87ca68  lw          $a3, -0x3598($gp)
    ctx->pc = 0x2766a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2766a8: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x2766a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1701C8u));
    // 0x2766ac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2766acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2766b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2766b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2766b4: 0xa3302a  slt         $a2, $a1, $v1
    ctx->pc = 0x2766b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2766b8: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x2766b8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2766bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2766bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2766c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2766c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2766c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2766cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2766ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2766d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2766D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766D0u;
        // 0x2766d4: 0x848200a8  lh          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766D8u;
}
