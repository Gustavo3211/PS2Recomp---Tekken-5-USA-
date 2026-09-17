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

// Function: sub_002F5B40
// Address: 0x2f5b40 - 0x2f5b58
void sub_002F5B40_0x2f5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5B40_0x2f5b40");
#endif

    ctx->pc = 0x2f5b40u;

    // 0x2f5b40: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2f5b44: 0x90625638  lbu         $v0, 0x5638($v1)
    ctx->pc = 0x2f5b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3E5638u));
    // 0x2f5b48: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2f5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2f5b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B4Cu;
        // 0x2f5b50: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5B54u;
    // 0x2f5b54: 0x0  nop
    ctx->pc = 0x2f5b54u;
    // NOP
    ctx->pc = 0x2f5b58u;
}
