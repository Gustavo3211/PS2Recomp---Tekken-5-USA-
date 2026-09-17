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

// Function: sub_00248B58
// Address: 0x248b58 - 0x248bd0
void sub_00248B58_0x248b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248B58_0x248b58");
#endif

    switch (ctx->pc) {
        case 0x248b68u: goto label_248b68;
        case 0x248b78u: goto label_248b78;
        case 0x248ba0u: goto label_248ba0;
        default: break;
    }

    ctx->pc = 0x248b58u;

    // 0x248b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248b60: 0xc0d647e  jal         func_3591F8
    ctx->pc = 0x248B60u;
    SET_GPR_U32(ctx, 31, 0x248B68u);
    ctx->pc = 0x248B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B60u;
    // 0x248b64: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3591F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3591F8u, 0x248B60u, 0x248B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B68u;
label_248b68:
    // 0x248b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x248b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x248b70: 0x3e00008  jr          $ra
    ctx->pc = 0x248B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B70u;
        // 0x248b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B78u;
label_248b78:
    // 0x248b78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248b7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248B7Cu;
    {
        const bool branch_taken_0x248b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B7Cu;
        // 0x248b80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b7c) {
            ctx->pc = 0x248B8Cu;
            goto label_248b8c;
        }
    }
    ctx->pc = 0x248B84u;
    // 0x248b84: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248B84u;
    {
        const bool branch_taken_0x248b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248b84) {
            ctx->pc = 0x248B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248B84u;
            // 0x248b88: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248B98u;
            goto label_248b98;
        }
    }
    ctx->pc = 0x248B8Cu;
label_248b8c:
    // 0x248b8c: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x248b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x248b90: 0x3e00008  jr          $ra
    ctx->pc = 0x248B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B90u;
        // 0x248b94: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B98u;
label_248b98:
    // 0x248b98: 0x3e00008  jr          $ra
    ctx->pc = 0x248B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B98u;
        // 0x248b9c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BA0u;
label_248ba0:
    // 0x248ba0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248ba4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BA4u;
    {
        const bool branch_taken_0x248ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BA4u;
        // 0x248ba8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ba4) {
            ctx->pc = 0x248BB4u;
            goto label_248bb4;
        }
    }
    ctx->pc = 0x248BACu;
    // 0x248bac: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248BACu;
    {
        const bool branch_taken_0x248bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248bac) {
            ctx->pc = 0x248BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BACu;
            // 0x248bb0: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BC8u;
            goto label_248bc8;
        }
    }
    ctx->pc = 0x248BB4u;
label_248bb4:
    // 0x248bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248bb8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x248bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x248bbc: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x248bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x248bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x248BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BC0u;
        // 0x248bc4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BC8u;
label_248bc8:
    // 0x248bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x248BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BC8u;
        // 0x248bcc: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BD0u;
}
