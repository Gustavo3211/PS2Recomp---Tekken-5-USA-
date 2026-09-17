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

// Function: sub_002DF1D0
// Address: 0x2df1d0 - 0x2df200
void sub_002DF1D0_0x2df1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1D0_0x2df1d0");
#endif

    ctx->pc = 0x2df1d0u;

    // 0x2df1d0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2df1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df1d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2df1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2df1d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2df1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2df1dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2df1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2df1e0: 0x2484006c  addiu       $a0, $a0, 0x6C
    ctx->pc = 0x2df1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x2df1e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2df1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df1e8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2df1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2df1ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2df1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2df1f0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2df1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2df1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1F4u;
        // 0x2df1f8: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF1FCu;
    // 0x2df1fc: 0x0  nop
    ctx->pc = 0x2df1fcu;
    // NOP
    ctx->pc = 0x2df200u;
}
