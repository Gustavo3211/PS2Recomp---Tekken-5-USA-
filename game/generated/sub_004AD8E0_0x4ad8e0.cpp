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

// Function: sub_004AD8E0
// Address: 0x4ad8e0 - 0x4ad908
void sub_004AD8E0_0x4ad8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD8E0_0x4ad8e0");
#endif

    ctx->pc = 0x4ad8e0u;

    // 0x4ad8e0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ad8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ad8e4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4ad8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad8e8: 0x9464f9f2  lhu         $a0, -0x60E($v1)
    ctx->pc = 0x4ad8e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965746)));
    // 0x4ad8ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad8f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ad8f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad8f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad8f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8FCu;
        // 0x4ad900: 0x28420060  slti        $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD904u;
    // 0x4ad904: 0x0  nop
    ctx->pc = 0x4ad904u;
    // NOP
    ctx->pc = 0x4ad908u;
}
