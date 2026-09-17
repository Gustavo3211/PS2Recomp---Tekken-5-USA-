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

// Function: sub_0028B678
// Address: 0x28b678 - 0x28b740
void sub_0028B678_0x28b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B678_0x28b678");
#endif

    switch (ctx->pc) {
        case 0x28b690u: goto label_28b690;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6f8u: goto label_28b6f8;
        default: break;
    }

    ctx->pc = 0x28b678u;

    // 0x28b678: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28b67c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b680: 0x244b7068  addiu       $t3, $v0, 0x7068
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 28776));
    // 0x28b684: 0x240aefff  addiu       $t2, $zero, -0x1001
    ctx->pc = 0x28b684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28b688: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x28b688u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x28b68c: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_28b690:
    // 0x28b690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b694: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x28b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28b698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b69c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x28b69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28b6a0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x28b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x28b6a4: 0x0  nop
    ctx->pc = 0x28b6a4u;
    // NOP
label_28b6a8:
    // 0x28b6a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28b6ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b6b0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x28b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x28b6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B6B8u;
    {
        const bool branch_taken_0x28b6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6B8u;
        // 0x28b6bc: 0x28a40005  slti        $a0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6b8) {
            ctx->pc = 0x28B6D0u;
            goto label_28b6d0;
        }
    }
    ctx->pc = 0x28B6C0u;
    // 0x28b6c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28b6c4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28b6c8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x28b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x28b6cc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28b6d0:
    // 0x28b6d0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28B6D0u;
    {
        const bool branch_taken_0x28b6d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6D0u;
        // 0x28b6d4: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6d0) {
            ctx->pc = 0x28B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b6a8;
        }
    }
    ctx->pc = 0x28B6D8u;
    // 0x28b6d8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x28b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28b6dc: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x28b6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28b6e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b6e8: 0x2589706c  addiu       $t1, $t4, 0x706C
    ctx->pc = 0x28b6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 28780));
    // 0x28b6ec: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x28b6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28b6f0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x28b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x28b6f4: 0x0  nop
    ctx->pc = 0x28b6f4u;
    // NOP
label_28b6f8:
    // 0x28b6f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28b6fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b700: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x28b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28b704: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x28b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28b708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B708u;
    {
        const bool branch_taken_0x28b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B708u;
        // 0x28b70c: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b708) {
            ctx->pc = 0x28B720u;
            goto label_28b720;
        }
    }
    ctx->pc = 0x28B710u;
    // 0x28b710: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28b714: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28b718: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x28b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x28b71c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28b720:
    // 0x28b720: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28B720u;
    {
        const bool branch_taken_0x28b720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B720u;
        // 0x28b724: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b720) {
            ctx->pc = 0x28B6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B728u;
    // 0x28b728: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28b728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b72c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b730: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x28B730u;
    {
        const bool branch_taken_0x28b730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b730) {
            ctx->pc = 0x28B734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B730u;
            // 0x28b734: 0x64040  sll         $t0, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b690;
        }
    }
    ctx->pc = 0x28B738u;
    // 0x28b738: 0x3e00008  jr          $ra
    ctx->pc = 0x28B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B740u;
}
