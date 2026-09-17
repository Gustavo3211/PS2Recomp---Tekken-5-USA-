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

// Function: sub_00261160
// Address: 0x261160 - 0x261178
void sub_00261160_0x261160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261160_0x261160");
#endif

    ctx->pc = 0x261160u;

    // 0x261160: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x261160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x261164: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x261168: 0xac40e7b4  sw          $zero, -0x184C($v0)
    ctx->pc = 0x261168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x16E7B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16E7B4u, _value); } while (0);
    // 0x26116c: 0x3e00008  jr          $ra
    ctx->pc = 0x26116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26116Cu;
        // 0x261170: 0xac60eb90  sw          $zero, -0x1470($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261174u;
    // 0x261174: 0x0  nop
    ctx->pc = 0x261174u;
    // NOP
    ctx->pc = 0x261178u;
}
