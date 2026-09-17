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

// Function: sub_002E3CB8
// Address: 0x2e3cb8 - 0x2e3ce8
void sub_002E3CB8_0x2e3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3CB8_0x2e3cb8");
#endif

    switch (ctx->pc) {
        case 0x2e3cb8u: goto label_2e3cb8;
        case 0x2e3cbcu: goto label_2e3cbc;
        case 0x2e3cc0u: goto label_2e3cc0;
        case 0x2e3cc4u: goto label_2e3cc4;
        case 0x2e3cc8u: goto label_2e3cc8;
        case 0x2e3cccu: goto label_2e3ccc;
        case 0x2e3cd0u: goto label_2e3cd0;
        case 0x2e3cd4u: goto label_2e3cd4;
        case 0x2e3cd8u: goto label_2e3cd8;
        case 0x2e3cdcu: goto label_2e3cdc;
        case 0x2e3ce0u: goto label_2e3ce0;
        case 0x2e3ce4u: goto label_2e3ce4;
        default: break;
    }

    ctx->pc = 0x2e3cb8u;

label_2e3cb8:
    // 0x2e3cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e3cbc:
    // 0x2e3cbc: 0x24850074  addiu       $a1, $a0, 0x74
    ctx->pc = 0x2e3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
label_2e3cc0:
    // 0x2e3cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e3cc4:
    // 0x2e3cc4: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2e3cc8:
    // 0x2e3cc8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e3ccc:
    // 0x2e3ccc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3cd0:
    // 0x2e3cd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3cd4:
    // 0x2e3cd4: 0x60f809  jalr        $v1
label_2e3cd8:
    if (ctx->pc == 0x2E3CD8u) {
        ctx->pc = 0x2E3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CD4u;
        // 0x2e3cd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CDCu;
        goto label_2e3cdc;
    }
    ctx->pc = 0x2E3CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3CDCu);
        ctx->pc = 0x2E3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CD4u;
        // 0x2e3cd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CD4u, 0x2E3CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3CDCu;
label_2e3cdc:
    // 0x2e3cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3ce0:
    // 0x2e3ce0: 0x3e00008  jr          $ra
label_2e3ce4:
    if (ctx->pc == 0x2E3CE4u) {
        ctx->pc = 0x2E3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CE0u;
        // 0x2e3ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3CE8u;
        goto label_fallthrough_0x2e3ce0;
    }
    ctx->pc = 0x2E3CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CE0u;
        // 0x2e3ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e3ce0:
    ctx->pc = 0x2E3CE8u;
}
