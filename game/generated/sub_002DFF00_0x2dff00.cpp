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

// Function: sub_002DFF00
// Address: 0x2dff00 - 0x2dff30
void sub_002DFF00_0x2dff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFF00_0x2dff00");
#endif

    switch (ctx->pc) {
        case 0x2dff00u: goto label_2dff00;
        case 0x2dff04u: goto label_2dff04;
        case 0x2dff08u: goto label_2dff08;
        case 0x2dff0cu: goto label_2dff0c;
        case 0x2dff10u: goto label_2dff10;
        case 0x2dff14u: goto label_2dff14;
        case 0x2dff18u: goto label_2dff18;
        case 0x2dff1cu: goto label_2dff1c;
        case 0x2dff20u: goto label_2dff20;
        case 0x2dff24u: goto label_2dff24;
        case 0x2dff28u: goto label_2dff28;
        case 0x2dff2cu: goto label_2dff2c;
        default: break;
    }

    ctx->pc = 0x2dff00u;

label_2dff00:
    // 0x2dff00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dff04:
    // 0x2dff04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dff08:
    // 0x2dff08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dff0c:
    // 0x2dff0c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2dff10:
    // 0x2dff10: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2dff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2dff14:
    // 0x2dff14: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2dff18:
    // 0x2dff18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2dff1c:
    // 0x2dff1c: 0x40f809  jalr        $v0
label_2dff20:
    if (ctx->pc == 0x2DFF20u) {
        ctx->pc = 0x2DFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF1Cu;
        // 0x2dff20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF24u;
        goto label_2dff24;
    }
    ctx->pc = 0x2DFF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFF24u);
        ctx->pc = 0x2DFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF1Cu;
        // 0x2dff20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF1Cu, 0x2DFF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFF24u;
label_2dff24:
    // 0x2dff24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dff24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dff28:
    // 0x2dff28: 0x3e00008  jr          $ra
label_2dff2c:
    if (ctx->pc == 0x2DFF2Cu) {
        ctx->pc = 0x2DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF28u;
        // 0x2dff2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF30u;
        goto label_fallthrough_0x2dff28;
    }
    ctx->pc = 0x2DFF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF28u;
        // 0x2dff2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dff28:
    ctx->pc = 0x2DFF30u;
}
