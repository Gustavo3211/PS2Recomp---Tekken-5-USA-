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

// Function: sub_00320638
// Address: 0x320638 - 0x320670
void sub_00320638_0x320638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320638_0x320638");
#endif

    switch (ctx->pc) {
        case 0x320664u: goto label_320664;
        default: break;
    }

    ctx->pc = 0x320638u;

    // 0x320638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32063c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320640: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x320640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x320644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x320648: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32064c: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x32064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x320650: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x320650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x320654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x320654u;
    {
        const bool branch_taken_0x320654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320654) {
            ctx->pc = 0x320658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320654u;
            // 0x320658: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320668u;
            goto label_320668;
        }
    }
    ctx->pc = 0x32065Cu;
    // 0x32065c: 0xc0cfaf8  jal         func_33EBE0
    ctx->pc = 0x32065Cu;
    SET_GPR_U32(ctx, 31, 0x320664u);
    ctx->pc = 0x33EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBE0u, 0x32065Cu, 0x320664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320664u;
label_320664:
    // 0x320664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320668:
    // 0x320668: 0x3e00008  jr          $ra
    ctx->pc = 0x320668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320668u;
        // 0x32066c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320670u;
}
