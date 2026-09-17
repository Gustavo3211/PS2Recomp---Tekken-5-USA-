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

// Function: sub_004E98C8
// Address: 0x4e98c8 - 0x4e98e0
void sub_004E98C8_0x4e98c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E98C8_0x4e98c8");
#endif

    ctx->pc = 0x4e98c8u;

    // 0x4e98c8: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x4e98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4e98cc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e98ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e98d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4e98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4e98d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E98D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98D4u;
        // 0x4e98d8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E98D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E98DCu;
    // 0x4e98dc: 0x0  nop
    ctx->pc = 0x4e98dcu;
    // NOP
    ctx->pc = 0x4e98e0u;
}
