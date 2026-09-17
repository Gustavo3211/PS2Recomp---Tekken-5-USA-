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

// Function: sub_00260C50
// Address: 0x260c50 - 0x260c80
void sub_00260C50_0x260c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260C50_0x260c50");
#endif

    switch (ctx->pc) {
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        default: break;
    }

    ctx->pc = 0x260c50u;

label_260c50:
    // 0x260c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260c54:
    // 0x260c54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x260c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260c58:
    // 0x260c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260c5c:
    // 0x260c5c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x260c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260c60:
    // 0x260c60: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_260c64:
    // 0x260c64: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x260c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260c68:
    // 0x260c68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_260c6c:
    // 0x260c6c: 0x40f809  jalr        $v0
label_260c70:
    if (ctx->pc == 0x260C70u) {
        ctx->pc = 0x260C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C6Cu;
        // 0x260c70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C74u;
        goto label_260c74;
    }
    ctx->pc = 0x260C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260C74u);
        ctx->pc = 0x260C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C6Cu;
        // 0x260c70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260C6Cu, 0x260C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260C74u;
label_260c74:
    // 0x260c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260c78:
    // 0x260c78: 0x3e00008  jr          $ra
label_260c7c:
    if (ctx->pc == 0x260C7Cu) {
        ctx->pc = 0x260C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C78u;
        // 0x260c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C80u;
        goto label_fallthrough_0x260c78;
    }
    ctx->pc = 0x260C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C78u;
        // 0x260c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x260c78:
    ctx->pc = 0x260C80u;
}
