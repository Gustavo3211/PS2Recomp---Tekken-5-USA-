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

// Function: sub_00315AF0
// Address: 0x315af0 - 0x315b08
void sub_00315AF0_0x315af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315AF0_0x315af0");
#endif

    ctx->pc = 0x315af0u;

    // 0x315af0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x315af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x315af4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x315af8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x315af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x315afc: 0x3e00008  jr          $ra
    ctx->pc = 0x315AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AFCu;
        // 0x315b00: 0x8ca2007c  lw          $v0, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315B04u;
    // 0x315b04: 0x0  nop
    ctx->pc = 0x315b04u;
    // NOP
    ctx->pc = 0x315b08u;
}
