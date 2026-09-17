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

// Function: sub_00127040
// Address: 0x127040 - 0x127080
void sub_00127040_0x127040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127040_0x127040");
#endif

    switch (ctx->pc) {
        case 0x127040u: goto label_127040;
        case 0x127044u: goto label_127044;
        case 0x127048u: goto label_127048;
        case 0x12704cu: goto label_12704c;
        case 0x127050u: goto label_127050;
        case 0x127054u: goto label_127054;
        case 0x127058u: goto label_127058;
        case 0x12705cu: goto label_12705c;
        case 0x127060u: goto label_127060;
        case 0x127064u: goto label_127064;
        case 0x127068u: goto label_127068;
        case 0x12706cu: goto label_12706c;
        case 0x127070u: goto label_127070;
        case 0x127074u: goto label_127074;
        case 0x127078u: goto label_127078;
        case 0x12707cu: goto label_12707c;
        default: break;
    }

    ctx->pc = 0x127040u;

label_127040:
    // 0x127040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_127044:
    // 0x127044: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_127048:
    if (ctx->pc == 0x127048u) {
        ctx->pc = 0x127048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127044u;
        // 0x127048: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12704Cu;
        goto label_12704c;
    }
    ctx->pc = 0x127044u;
    {
        const bool branch_taken_0x127044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127044u;
        // 0x127048: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127044) {
            ctx->pc = 0x127068u;
            goto label_127068;
        }
    }
    ctx->pc = 0x12704Cu;
label_12704c:
    // 0x12704c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127050:
    // 0x127050: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_127054:
    // 0x127054: 0x40f809  jalr        $v0
label_127058:
    if (ctx->pc == 0x127058u) {
        ctx->pc = 0x12705Cu;
        goto label_12705c;
    }
    ctx->pc = 0x127054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12705Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127054u, 0x12705Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12705Cu;
label_12705c:
    // 0x12705c: 0x10000005  b           . + 4 + (0x5 << 2)
label_127060:
    if (ctx->pc == 0x127060u) {
        ctx->pc = 0x127060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12705Cu;
        // 0x127060: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127064u;
        goto label_127064;
    }
    ctx->pc = 0x12705Cu;
    {
        const bool branch_taken_0x12705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12705Cu;
        // 0x127060: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12705c) {
            ctx->pc = 0x127074u;
            goto label_127074;
        }
    }
    ctx->pc = 0x127064u;
label_127064:
    // 0x127064: 0x0  nop
    ctx->pc = 0x127064u;
    // NOP
label_127068:
    // 0x127068: 0xc049be8  jal         func_126FA0
label_12706c:
    if (ctx->pc == 0x12706Cu) {
        ctx->pc = 0x127070u;
        goto label_127070;
    }
    ctx->pc = 0x127068u;
    SET_GPR_U32(ctx, 31, 0x127070u);
    ctx->pc = 0x126FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FA0u, 0x127068u, 0x127070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127070u;
label_127070:
    // 0x127070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127074:
    // 0x127074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127078:
    // 0x127078: 0x3e00008  jr          $ra
label_12707c:
    if (ctx->pc == 0x12707Cu) {
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127080u;
        goto label_fallthrough_0x127078;
    }
    ctx->pc = 0x127078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127078:
    ctx->pc = 0x127080u;
}
