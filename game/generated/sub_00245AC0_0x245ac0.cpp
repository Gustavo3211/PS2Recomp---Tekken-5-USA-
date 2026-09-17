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

// Function: sub_00245AC0
// Address: 0x245ac0 - 0x245ae0
void sub_00245AC0_0x245ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245AC0_0x245ac0");
#endif

    ctx->pc = 0x245ac0u;

    // 0x245ac0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x245ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x245ac4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245acc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x245ad0: 0x242109c0  addiu       $at, $at, 0x9C0
    ctx->pc = 0x245ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2496));
    // 0x245ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x245AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD4u;
        // 0x245ad8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245ADCu;
    // 0x245adc: 0x0  nop
    ctx->pc = 0x245adcu;
    // NOP
    ctx->pc = 0x245ae0u;
}
