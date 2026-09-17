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

// Function: sub_0025FDA0
// Address: 0x25fda0 - 0x25fdb8
void sub_0025FDA0_0x25fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FDA0_0x25fda0");
#endif

    ctx->pc = 0x25fda0u;

    // 0x25fda0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25fda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25fda8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25fdac: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDACu;
        // 0x25fdb0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FDB4u;
    // 0x25fdb4: 0x0  nop
    ctx->pc = 0x25fdb4u;
    // NOP
    ctx->pc = 0x25fdb8u;
}
