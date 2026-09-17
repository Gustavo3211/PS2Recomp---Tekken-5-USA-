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

// Function: sub_00321030
// Address: 0x321030 - 0x321040
void sub_00321030_0x321030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321030_0x321030");
#endif

    ctx->pc = 0x321030u;

    // 0x321030: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321034: 0x3e00008  jr          $ra
    ctx->pc = 0x321034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321034u;
        // 0x321038: 0x34424001  ori         $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16385);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32103Cu;
    // 0x32103c: 0x0  nop
    ctx->pc = 0x32103cu;
    // NOP
    ctx->pc = 0x321040u;
}
