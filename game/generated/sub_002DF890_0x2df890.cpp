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

// Function: sub_002DF890
// Address: 0x2df890 - 0x2df8b0
void sub_002DF890_0x2df890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF890_0x2df890");
#endif

    ctx->pc = 0x2df890u;

    // 0x2df890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2df890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df894: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF894u;
    {
        const bool branch_taken_0x2df894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2df894) {
            ctx->pc = 0x2DF8A4u;
            goto label_2df8a4;
        }
    }
    ctx->pc = 0x2DF89Cu;
    // 0x2df89c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2df89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2df8a0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2df8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2df8a4:
    // 0x2df8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF8ACu;
    // 0x2df8ac: 0x0  nop
    ctx->pc = 0x2df8acu;
    // NOP
    ctx->pc = 0x2df8b0u;
}
