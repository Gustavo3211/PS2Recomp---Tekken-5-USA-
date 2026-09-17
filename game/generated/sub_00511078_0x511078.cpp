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

// Function: sub_00511078
// Address: 0x511078 - 0x5110a0
void sub_00511078_0x511078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511078_0x511078");
#endif

    ctx->pc = 0x511078u;

    // 0x511078: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x511078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51107c: 0x24a7000c  addiu       $a3, $a1, 0xC
    ctx->pc = 0x51107cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x511080: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x511080u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511084: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x511084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x511088: 0xa4a60028  sh          $a2, 0x28($a1)
    ctx->pc = 0x511088u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x51108c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x51108cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x511090: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x511090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x511094: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x511094u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x511098: 0x3e00008  jr          $ra
    ctx->pc = 0x511098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511098u;
        // 0x51109c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5110A0u;
}
