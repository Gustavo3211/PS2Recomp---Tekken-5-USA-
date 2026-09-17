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

// Function: sub_00489FF8
// Address: 0x489ff8 - 0x48a010
void sub_00489FF8_0x489ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489FF8_0x489ff8");
#endif

    ctx->pc = 0x489ff8u;

    // 0x489ff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x489ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x489ffc: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x489ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x48a000: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x48a000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x48a004: 0xa4625800  sh          $v0, 0x5800($v1)
    ctx->pc = 0x48a004u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5800u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7C5800u, _value); } while (0);
    // 0x48a008: 0x3e00008  jr          $ra
    ctx->pc = 0x48A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A008u;
        // 0x48a00c: 0xa482d6f2  sh          $v0, -0x290E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294956786), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A010u;
}
