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

// Function: sub_002DEB60
// Address: 0x2deb60 - 0x2debc0
void sub_002DEB60_0x2deb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEB60_0x2deb60");
#endif

    switch (ctx->pc) {
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb90u: goto label_2deb90;
        default: break;
    }

    ctx->pc = 0x2deb60u;

    // 0x2deb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2deb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2deb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2deb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2deb68: 0xc0b7af0  jal         func_2DEBC0
    ctx->pc = 0x2DEB68u;
    SET_GPR_U32(ctx, 31, 0x2DEB70u);
    ctx->pc = 0x2DEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEBC0u, 0x2DEB68u, 0x2DEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB70u;
label_2deb70:
    // 0x2deb70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2deb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2deb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deb78: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB78u;
        // 0x2deb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEB80u;
    // 0x2deb80: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2deb84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DEB84u;
    {
        const bool branch_taken_0x2deb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB84u;
        // 0x2deb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb84) {
            ctx->pc = 0x2DEBB8u;
            goto label_2debb8;
        }
    }
    ctx->pc = 0x2DEB8Cu;
    // 0x2deb8c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2deb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2deb90:
    // 0x2deb90: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEB90u;
    {
        const bool branch_taken_0x2deb90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB90u;
        // 0x2deb94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb90) {
            ctx->pc = 0x2DEBB8u;
            goto label_2debb8;
        }
    }
    ctx->pc = 0x2DEB98u;
    // 0x2deb98: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2deb9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2deba0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2deba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2deba4: 0x0  nop
    ctx->pc = 0x2deba4u;
    // NOP
    // 0x2deba8: 0x0  nop
    ctx->pc = 0x2deba8u;
    // NOP
    // 0x2debac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DEBACu;
    {
        const bool branch_taken_0x2debac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2debac) {
            ctx->pc = 0x2DEBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEBACu;
            // 0x2debb0: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2deb90;
        }
    }
    ctx->pc = 0x2DEBB4u;
    // 0x2debb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2debb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2debb8:
    // 0x2debb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEBC0u;
}
