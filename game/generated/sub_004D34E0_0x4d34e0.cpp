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

// Function: sub_004D34E0
// Address: 0x4d34e0 - 0x4d3500
void sub_004D34E0_0x4d34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D34E0_0x4d34e0");
#endif

    ctx->pc = 0x4d34e0u;

    // 0x4d34e0: 0x24830160  addiu       $v1, $a0, 0x160
    ctx->pc = 0x4d34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4d34e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4d34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d34e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d34e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d34ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d34ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d34f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d34f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d34f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D34F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D34F4u;
        // 0x4d34f8: 0xa485000e  sh          $a1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D34F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D34FCu;
    // 0x4d34fc: 0x0  nop
    ctx->pc = 0x4d34fcu;
    // NOP
    ctx->pc = 0x4d3500u;
}
