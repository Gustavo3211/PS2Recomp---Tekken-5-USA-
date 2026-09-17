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

// Function: sub_00260B28
// Address: 0x260b28 - 0x260b58
void sub_00260B28_0x260b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260B28_0x260b28");
#endif

    switch (ctx->pc) {
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        default: break;
    }

    ctx->pc = 0x260b28u;

label_260b28:
    // 0x260b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260b2c:
    // 0x260b2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x260b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260b30:
    // 0x260b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260b34:
    // 0x260b34: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x260b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260b38:
    // 0x260b38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x260b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_260b3c:
    // 0x260b3c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x260b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260b40:
    // 0x260b40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_260b44:
    // 0x260b44: 0x40f809  jalr        $v0
label_260b48:
    if (ctx->pc == 0x260B48u) {
        ctx->pc = 0x260B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B44u;
        // 0x260b48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B4Cu;
        goto label_260b4c;
    }
    ctx->pc = 0x260B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260B4Cu);
        ctx->pc = 0x260B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B44u;
        // 0x260b48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B44u, 0x260B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260B4Cu;
label_260b4c:
    // 0x260b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260b50:
    // 0x260b50: 0x3e00008  jr          $ra
label_260b54:
    if (ctx->pc == 0x260B54u) {
        ctx->pc = 0x260B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B50u;
        // 0x260b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B58u;
        goto label_fallthrough_0x260b50;
    }
    ctx->pc = 0x260B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B50u;
        // 0x260b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x260b50:
    ctx->pc = 0x260B58u;
}
