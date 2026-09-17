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

// Function: sub_001003F0
// Address: 0x1003f0 - 0x100410
void sub_001003F0_0x1003f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003F0_0x1003f0");
#endif

    ctx->pc = 0x1003f0u;

    // 0x1003f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1003f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1003f4: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x1003f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x1003f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1003fc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1003fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x100400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100404: 0x3e00008  jr          $ra
    ctx->pc = 0x100404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100404u;
        // 0x100408: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10040Cu;
    // 0x10040c: 0x0  nop
    ctx->pc = 0x10040cu;
    // NOP
    ctx->pc = 0x100410u;
}
