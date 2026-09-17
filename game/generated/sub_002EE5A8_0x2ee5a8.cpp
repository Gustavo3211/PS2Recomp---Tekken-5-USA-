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

// Function: sub_002EE5A8
// Address: 0x2ee5a8 - 0x2ee5d0
void sub_002EE5A8_0x2ee5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE5A8_0x2ee5a8");
#endif

    ctx->pc = 0x2ee5a8u;

    // 0x2ee5a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ee5ac: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x2ee5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2ee5b0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2ee5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ee5b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ee5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5b8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2ee5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2ee5bc: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x2ee5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x2ee5c0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2ee5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2ee5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5C8u;
        // 0x2ee5cc: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE5D0u;
}
