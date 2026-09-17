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

// Function: sub_002EDEA8
// Address: 0x2edea8 - 0x2edec0
void sub_002EDEA8_0x2edea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDEA8_0x2edea8");
#endif

    ctx->pc = 0x2edea8u;

    // 0x2edea8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2edea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2edeac: 0xac860164  sw          $a2, 0x164($a0)
    ctx->pc = 0x2edeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 6));
    // 0x2edeb0: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x2edeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x2edeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEB4u;
        // 0x2edeb8: 0xac850160  sw          $a1, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDEBCu;
    // 0x2edebc: 0x0  nop
    ctx->pc = 0x2edebcu;
    // NOP
    ctx->pc = 0x2edec0u;
}
