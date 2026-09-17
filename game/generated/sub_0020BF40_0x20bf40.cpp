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

// Function: sub_0020BF40
// Address: 0x20bf40 - 0x20bf60
void sub_0020BF40_0x20bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF40_0x20bf40");
#endif

    ctx->pc = 0x20bf40u;

    // 0x20bf40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bf44: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x20bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x20bf48: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x20bf48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83DBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83DBu, _value); } while (0);
    // 0x20bf4c: 0xa0400017  sb          $zero, 0x17($v0)
    ctx->pc = 0x20bf4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83D7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D7u, _value); } while (0);
    // 0x20bf50: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x20bf50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D8u, _value); } while (0);
    // 0x20bf54: 0xa0400019  sb          $zero, 0x19($v0)
    ctx->pc = 0x20bf54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D9u, _value); } while (0);
    // 0x20bf58: 0x3e00008  jr          $ra
    ctx->pc = 0x20BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF58u;
        // 0x20bf5c: 0xa040001a  sb          $zero, 0x1A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BF60u;
}
