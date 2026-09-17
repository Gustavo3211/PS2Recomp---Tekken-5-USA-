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

// Function: sub_001006C8
// Address: 0x1006c8 - 0x1006f0
void sub_001006C8_0x1006c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001006C8_0x1006c8");
#endif

    ctx->pc = 0x1006c8u;

    // 0x1006c8: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1006c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1006cc: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1006d0: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x1006d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA29Cu, _value); } while (0);
    // 0x1006d4: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x1006d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA240u, _value); } while (0);
    // 0x1006d8: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1006d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA244u, _value); } while (0);
    // 0x1006dc: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x1006dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA290u, _value); } while (0);
    // 0x1006e0: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x1006e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA294u, _value); } while (0);
    // 0x1006e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1006E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0xac4000d8  sw          $zero, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1006ECu;
    // 0x1006ec: 0x0  nop
    ctx->pc = 0x1006ecu;
    // NOP
    ctx->pc = 0x1006f0u;
}
