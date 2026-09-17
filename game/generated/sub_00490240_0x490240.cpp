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

// Function: sub_00490240
// Address: 0x490240 - 0x490260
void sub_00490240_0x490240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490240_0x490240");
#endif

    ctx->pc = 0x490240u;

    // 0x490240: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x490240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x490244: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x490244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x490248: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x490248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49024c: 0x944321fc  lhu         $v1, 0x21FC($v0)
    ctx->pc = 0x49024cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F87Cu));
    // 0x490250: 0xa444007c  sh          $a0, 0x7C($v0)
    ctx->pc = 0x490250u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72D6FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6FCu, _value); } while (0);
    // 0x490254: 0xa4432214  sh          $v1, 0x2214($v0)
    ctx->pc = 0x490254u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F894u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F894u, _value); } while (0);
    // 0x490258: 0x3e00008  jr          $ra
    ctx->pc = 0x490258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490258u;
        // 0x49025c: 0xa440220a  sh          $zero, 0x220A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8714), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490260u;
}
