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

// Function: sub_00245AE0
// Address: 0x245ae0 - 0x245af8
void sub_00245AE0_0x245ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245AE0_0x245ae0");
#endif

    ctx->pc = 0x245ae0u;

    // 0x245ae0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x245ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x245ae4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x245ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x245ae8: 0x24210a18  addiu       $at, $at, 0xA18
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2584));
    // 0x245aec: 0x3e00008  jr          $ra
    ctx->pc = 0x245AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AECu;
        // 0x245af0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245AF4u;
    // 0x245af4: 0x0  nop
    ctx->pc = 0x245af4u;
    // NOP
    ctx->pc = 0x245af8u;
}
