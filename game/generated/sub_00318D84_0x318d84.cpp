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

// Function: sub_00318D84
// Address: 0x318d84 - 0x318dd8
void sub_00318D84_0x318d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318D84_0x318d84");
#endif

    ctx->pc = 0x318d84u;

    // 0x318d84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318d88: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x318d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x318d8c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318d8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318d90: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x318d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x318d94: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x318d94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x318d98: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x318d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318d9c: 0x8c624190  lw          $v0, 0x4190($v1)
    ctx->pc = 0x318d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
    // 0x318da0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318DA0u;
    {
        const bool branch_taken_0x318da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318da0) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318DA8u;
    // 0x318da8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x318da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318dac: 0x8c624194  lw          $v0, 0x4194($v1)
    ctx->pc = 0x318dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16788)));
    // 0x318db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318DB0u;
    {
        const bool branch_taken_0x318db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318db0) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318DB8u;
    // 0x318db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318dbc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318dc0:
    // 0x318dc0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318dc4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318dc4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318dc8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x318dc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318dcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x318dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x318DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318DD8u;
}
