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

// Function: sub_00320CA0
// Address: 0x320ca0 - 0x320ce0
void sub_00320CA0_0x320ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320CA0_0x320ca0");
#endif

    switch (ctx->pc) {
        case 0x320ca0u: goto label_320ca0;
        case 0x320ca4u: goto label_320ca4;
        case 0x320ca8u: goto label_320ca8;
        case 0x320cacu: goto label_320cac;
        case 0x320cb0u: goto label_320cb0;
        case 0x320cb4u: goto label_320cb4;
        case 0x320cb8u: goto label_320cb8;
        case 0x320cbcu: goto label_320cbc;
        case 0x320cc0u: goto label_320cc0;
        case 0x320cc4u: goto label_320cc4;
        case 0x320cc8u: goto label_320cc8;
        case 0x320cccu: goto label_320ccc;
        case 0x320cd0u: goto label_320cd0;
        case 0x320cd4u: goto label_320cd4;
        case 0x320cd8u: goto label_320cd8;
        case 0x320cdcu: goto label_320cdc;
        default: break;
    }

    ctx->pc = 0x320ca0u;

label_320ca0:
    // 0x320ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320ca4:
    // 0x320ca4: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x320ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_320ca8:
    // 0x320ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320cac:
    // 0x320cac: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_320cb0:
    // 0x320cb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320cb4:
    // 0x320cb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320cb8:
    // 0x320cb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x320cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320cbc:
    // 0x320cbc: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x320cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_320cc0:
    // 0x320cc0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320cc4:
    // 0x320cc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320cc8:
    // 0x320cc8: 0x40f809  jalr        $v0
label_320ccc:
    if (ctx->pc == 0x320CCCu) {
        ctx->pc = 0x320CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CC8u;
        // 0x320ccc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320CD0u;
        goto label_320cd0;
    }
    ctx->pc = 0x320CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320CD0u);
        ctx->pc = 0x320CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CC8u;
        // 0x320ccc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320CC8u, 0x320CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320CD0u;
label_320cd0:
    // 0x320cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320cd4:
    // 0x320cd4: 0x3e00008  jr          $ra
label_320cd8:
    if (ctx->pc == 0x320CD8u) {
        ctx->pc = 0x320CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CD4u;
        // 0x320cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320CDCu;
        goto label_320cdc;
    }
    ctx->pc = 0x320CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CD4u;
        // 0x320cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320CDCu;
label_320cdc:
    // 0x320cdc: 0x0  nop
    ctx->pc = 0x320cdcu;
    // NOP
    ctx->pc = 0x320ce0u;
}
