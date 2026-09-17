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

// Function: sub_00215890
// Address: 0x215890 - 0x2158a8
void sub_00215890_0x215890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215890_0x215890");
#endif

    ctx->pc = 0x215890u;

    // 0x215890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215894: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x215898: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x215898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x21589c: 0x3e00008  jr          $ra
    ctx->pc = 0x21589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2158A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21589Cu;
        // 0x2158a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158A4u;
    // 0x2158a4: 0x0  nop
    ctx->pc = 0x2158a4u;
    // NOP
    ctx->pc = 0x2158a8u;
}
