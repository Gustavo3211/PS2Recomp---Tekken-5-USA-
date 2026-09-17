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

// Function: sub_002A1F70
// Address: 0x2a1f70 - 0x2a1f90
void sub_002A1F70_0x2a1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F70_0x2a1f70");
#endif

    ctx->pc = 0x2a1f70u;

    // 0x2a1f70: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2a1f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a1f74: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x2a1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x2a1f78: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1f7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2a1f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a1f80: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a1f84: 0x8cc200b8  lw          $v0, 0xB8($a2)
    ctx->pc = 0x2a1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2a1f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F88u;
        // 0x2a1f8c: 0xac430078  sw          $v1, 0x78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1F90u;
}
