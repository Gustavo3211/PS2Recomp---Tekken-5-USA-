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

// Function: sub_0024D888
// Address: 0x24d888 - 0x24d8a8
void sub_0024D888_0x24d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D888_0x24d888");
#endif

    ctx->pc = 0x24d888u;

    // 0x24d888: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24d88c: 0x2442fb00  addiu       $v0, $v0, -0x500
    ctx->pc = 0x24d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x24d890: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x24d890u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFB0Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3AFB0Eu, _value); } while (0);
    // 0x24d894: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24d894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFB00u, _value); } while (0);
    // 0x24d898: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24d898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFB04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFB04u, _value); } while (0);
    // 0x24d89c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24d89cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFB08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFB08u, _value); } while (0);
    // 0x24d8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A0u;
        // 0x24d8a4: 0xa440000c  sh          $zero, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D8A8u;
}
