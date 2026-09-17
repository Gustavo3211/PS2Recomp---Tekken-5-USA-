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

// Function: sub_003351B0
// Address: 0x3351b0 - 0x3351e8
void sub_003351B0_0x3351b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003351B0_0x3351b0");
#endif

    switch (ctx->pc) {
        case 0x3351b0u: goto label_3351b0;
        case 0x3351b4u: goto label_3351b4;
        case 0x3351b8u: goto label_3351b8;
        case 0x3351bcu: goto label_3351bc;
        case 0x3351c0u: goto label_3351c0;
        case 0x3351c4u: goto label_3351c4;
        case 0x3351c8u: goto label_3351c8;
        case 0x3351ccu: goto label_3351cc;
        case 0x3351d0u: goto label_3351d0;
        case 0x3351d4u: goto label_3351d4;
        case 0x3351d8u: goto label_3351d8;
        case 0x3351dcu: goto label_3351dc;
        case 0x3351e0u: goto label_3351e0;
        case 0x3351e4u: goto label_3351e4;
        default: break;
    }

    ctx->pc = 0x3351b0u;

label_3351b0:
    // 0x3351b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3351b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3351b4:
    // 0x3351b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3351b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3351b8:
    // 0x3351b8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3351b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_3351bc:
    // 0x3351bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3351bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3351c0:
    // 0x3351c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3351c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3351c4:
    // 0x3351c4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_3351c8:
    // 0x3351c8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3351c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3351cc:
    // 0x3351cc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3351ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3351d0:
    // 0x3351d0: 0xc0f809  jalr        $a2
label_3351d4:
    if (ctx->pc == 0x3351D4u) {
        ctx->pc = 0x3351D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351D0u;
        // 0x3351d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3351D8u;
        goto label_3351d8;
    }
    ctx->pc = 0x3351D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3351D8u);
        ctx->pc = 0x3351D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351D0u;
        // 0x3351d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3351D0u, 0x3351D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3351D8u;
label_3351d8:
    // 0x3351d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3351d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3351dc:
    // 0x3351dc: 0x3e00008  jr          $ra
label_3351e0:
    if (ctx->pc == 0x3351E0u) {
        ctx->pc = 0x3351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351DCu;
        // 0x3351e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3351E4u;
        goto label_3351e4;
    }
    ctx->pc = 0x3351DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351DCu;
        // 0x3351e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3351DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3351E4u;
label_3351e4:
    // 0x3351e4: 0x0  nop
    ctx->pc = 0x3351e4u;
    // NOP
    ctx->pc = 0x3351e8u;
}
