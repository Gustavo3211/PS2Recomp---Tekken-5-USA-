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

// Function: sub_002DF200
// Address: 0x2df200 - 0x2df220
void sub_002DF200_0x2df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF200_0x2df200");
#endif

    ctx->pc = 0x2df200u;

    // 0x2df200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF204u;
    {
        const bool branch_taken_0x2df204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF204u;
        // 0x2df208: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df204) {
            ctx->pc = 0x2DF214u;
            goto label_2df214;
        }
    }
    ctx->pc = 0x2DF20Cu;
    // 0x2df20c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2df20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2df210: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2df210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2df214:
    // 0x2df214: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF21Cu;
    // 0x2df21c: 0x0  nop
    ctx->pc = 0x2df21cu;
    // NOP
    ctx->pc = 0x2df220u;
}
