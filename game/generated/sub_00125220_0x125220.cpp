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

// Function: sub_00125220
// Address: 0x125220 - 0x125238
void sub_00125220_0x125220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125220_0x125220");
#endif

    ctx->pc = 0x125220u;

    // 0x125220: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x125220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x125224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125228: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12522c: 0x3e00008  jr          $ra
    ctx->pc = 0x12522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12522Cu;
        // 0x125230: 0x67100b  movn        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12522Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125234u;
    // 0x125234: 0x0  nop
    ctx->pc = 0x125234u;
    // NOP
    ctx->pc = 0x125238u;
}
