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

// Function: sub_002DADE8
// Address: 0x2dade8 - 0x2dae10
void sub_002DADE8_0x2dade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DADE8_0x2dade8");
#endif

    ctx->pc = 0x2dade8u;

    // 0x2dade8: 0x2ca200d9  sltiu       $v0, $a1, 0xD9
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)217) ? 1 : 0);
    // 0x2dadec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DADECu;
    {
        const bool branch_taken_0x2dadec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dadec) {
            ctx->pc = 0x2DAE04u;
            goto label_2dae04;
        }
    }
    ctx->pc = 0x2DADF4u;
    // 0x2dadf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dadf8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2dadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2dadfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2dadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2dae00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dae00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2dae04:
    // 0x2dae04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAE0Cu;
    // 0x2dae0c: 0x0  nop
    ctx->pc = 0x2dae0cu;
    // NOP
    ctx->pc = 0x2dae10u;
}
