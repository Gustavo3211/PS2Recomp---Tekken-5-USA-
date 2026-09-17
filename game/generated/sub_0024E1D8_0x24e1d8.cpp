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

// Function: sub_0024E1D8
// Address: 0x24e1d8 - 0x24e210
void sub_0024E1D8_0x24e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E1D8_0x24e1d8");
#endif

    ctx->pc = 0x24e1d8u;

    // 0x24e1d8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x24e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x24e1dc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x24e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x24e1e0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x24e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24e1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1e8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x24e1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24e1ec: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x24e1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x24e1f0: 0x84a9000c  lh          $t1, 0xC($a1)
    ctx->pc = 0x24e1f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24e1f4: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x24e1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x24e1f8: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x24e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x24e1fc: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x24e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x24e200: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x24e200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x24e204: 0x3e00008  jr          $ra
    ctx->pc = 0x24E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E204u;
        // 0x24e208: 0xa489000c  sh          $t1, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E20Cu;
    // 0x24e20c: 0x0  nop
    ctx->pc = 0x24e20cu;
    // NOP
    ctx->pc = 0x24e210u;
}
