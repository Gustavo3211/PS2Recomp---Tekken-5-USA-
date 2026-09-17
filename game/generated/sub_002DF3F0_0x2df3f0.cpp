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

// Function: sub_002DF3F0
// Address: 0x2df3f0 - 0x2df410
void sub_002DF3F0_0x2df3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF3F0_0x2df3f0");
#endif

    ctx->pc = 0x2df3f0u;

    // 0x2df3f0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2df3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2df3f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df3f8: 0x248400cc  addiu       $a0, $a0, 0xCC
    ctx->pc = 0x2df3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x2df3fc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2df3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2df400: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2df400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2df404: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF404u;
        // 0x2df408: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF40Cu;
    // 0x2df40c: 0x0  nop
    ctx->pc = 0x2df40cu;
    // NOP
    ctx->pc = 0x2df410u;
}
