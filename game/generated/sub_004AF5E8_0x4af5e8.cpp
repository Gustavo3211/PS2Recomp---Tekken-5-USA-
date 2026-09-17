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

// Function: sub_004AF5E8
// Address: 0x4af5e8 - 0x4af610
void sub_004AF5E8_0x4af5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF5E8_0x4af5e8");
#endif

    ctx->pc = 0x4af5e8u;

    // 0x4af5e8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4af5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4af5ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4af5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af5f0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4af5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4af5f4: 0xa443231c  sh          $v1, 0x231C($v0)
    ctx->pc = 0x4af5f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F99Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F99Cu, _value); } while (0);
    // 0x4af5f8: 0xa444231a  sh          $a0, 0x231A($v0)
    ctx->pc = 0x4af5f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F99Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F99Au, _value); } while (0);
    // 0x4af5fc: 0xa440231e  sh          $zero, 0x231E($v0)
    ctx->pc = 0x4af5fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F99Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F99Eu, _value); } while (0);
    // 0x4af600: 0xa4402320  sh          $zero, 0x2320($v0)
    ctx->pc = 0x4af600u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9A0u, _value); } while (0);
    // 0x4af604: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF604u;
        // 0x4af608: 0xa4402322  sh          $zero, 0x2322($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8994), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF60Cu;
    // 0x4af60c: 0x0  nop
    ctx->pc = 0x4af60cu;
    // NOP
    ctx->pc = 0x4af610u;
}
