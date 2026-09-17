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

// Function: sub_00492600
// Address: 0x492600 - 0x492620
void sub_00492600_0x492600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492600_0x492600");
#endif

    ctx->pc = 0x492600u;

    // 0x492600: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x492600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x492604: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x492604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x492608: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x492608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49260c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x492610: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x492610u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x492614: 0xa443009c  sh          $v1, 0x9C($v0)
    ctx->pc = 0x492614u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D71Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D71Cu, _value); } while (0);
    // 0x492618: 0x3e00008  jr          $ra
    ctx->pc = 0x492618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492618u;
        // 0x49261c: 0xaca4fd0c  sw          $a0, -0x2F4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294966540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492620u;
}
