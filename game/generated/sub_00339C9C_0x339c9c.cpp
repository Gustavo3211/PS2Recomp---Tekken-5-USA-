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

// Function: sub_00339C9C
// Address: 0x339c9c - 0x339cc0
void sub_00339C9C_0x339c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339C9C_0x339c9c");
#endif

    switch (ctx->pc) {
        case 0x339c9cu: goto label_339c9c;
        case 0x339ca0u: goto label_339ca0;
        case 0x339ca4u: goto label_339ca4;
        case 0x339ca8u: goto label_339ca8;
        case 0x339cacu: goto label_339cac;
        case 0x339cb0u: goto label_339cb0;
        case 0x339cb4u: goto label_339cb4;
        case 0x339cb8u: goto label_339cb8;
        case 0x339cbcu: goto label_339cbc;
        default: break;
    }

    ctx->pc = 0x339c9cu;

label_339c9c:
    // 0x339c9c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x339c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_339ca0:
    // 0x339ca0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x339ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_339ca4:
    // 0x339ca4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339ca8:
    // 0x339ca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339cac:
    // 0x339cac: 0x40f809  jalr        $v0
label_339cb0:
    if (ctx->pc == 0x339CB0u) {
        ctx->pc = 0x339CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CACu;
        // 0x339cb0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339CB4u;
        goto label_339cb4;
    }
    ctx->pc = 0x339CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339CB4u);
        ctx->pc = 0x339CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CACu;
        // 0x339cb0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339CACu, 0x339CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339CB4u;
label_339cb4:
    // 0x339cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339cb8:
    // 0x339cb8: 0x3e00008  jr          $ra
label_339cbc:
    if (ctx->pc == 0x339CBCu) {
        ctx->pc = 0x339CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CB8u;
        // 0x339cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339CC0u;
        goto label_fallthrough_0x339cb8;
    }
    ctx->pc = 0x339CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CB8u;
        // 0x339cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339cb8:
    ctx->pc = 0x339CC0u;
}
