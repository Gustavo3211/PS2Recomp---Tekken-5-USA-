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

// Function: sub_00201DC0
// Address: 0x201dc0 - 0x201de0
void sub_00201DC0_0x201dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201DC0_0x201dc0");
#endif

    ctx->pc = 0x201dc0u;

    // 0x201dc0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x201dc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201dc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x201dcc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x201dd0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x201dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x201dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x201DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DD4u;
        // 0x201dd8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201DDCu;
    // 0x201ddc: 0x0  nop
    ctx->pc = 0x201ddcu;
    // NOP
    ctx->pc = 0x201de0u;
}
