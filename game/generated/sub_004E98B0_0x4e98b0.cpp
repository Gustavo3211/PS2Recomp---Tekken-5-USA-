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

// Function: sub_004E98B0
// Address: 0x4e98b0 - 0x4e98c8
void sub_004E98B0_0x4e98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E98B0_0x4e98b0");
#endif

    ctx->pc = 0x4e98b0u;

    // 0x4e98b0: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x4e98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4e98b4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e98b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e98b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4e98b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4e98bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E98BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98BCu;
        // 0x4e98c0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E98BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E98C4u;
    // 0x4e98c4: 0x0  nop
    ctx->pc = 0x4e98c4u;
    // NOP
    ctx->pc = 0x4e98c8u;
}
