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

// Function: sub_002A3C20
// Address: 0x2a3c20 - 0x2a3d08
void sub_002A3C20_0x2a3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3C20_0x2a3c20");
#endif

    switch (ctx->pc) {
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3cc0u: goto label_2a3cc0;
        default: break;
    }

    ctx->pc = 0x2a3c20u;

    // 0x2a3c20: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a3c24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3c28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C28u;
    {
        const bool branch_taken_0x2a3c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C28u;
        // 0x2a3c2c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c28) {
            ctx->pc = 0x2A3C40u;
            goto label_2a3c40;
        }
    }
    ctx->pc = 0x2A3C30u;
    // 0x2a3c30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3c34: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a3c38: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C38u;
    {
        const bool branch_taken_0x2a3c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3c38) {
            ctx->pc = 0x2A3C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3C38u;
            // 0x2a3c3c: 0x8c830158  lw          $v1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3C40u;
label_2a3c40:
    // 0x2a3c40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a3c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a3c44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a3c4c: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x2a3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_2a3c50:
    // 0x2a3c50: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2a3c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a3c54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A3C54u;
    {
        const bool branch_taken_0x2a3c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C54u;
        // 0x2a3c58: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c54) {
            ctx->pc = 0x2A3CB8u;
            goto label_2a3cb8;
        }
    }
    ctx->pc = 0x2A3C5Cu;
    // 0x2a3c5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a3c60: 0x2442d610  addiu       $v0, $v0, -0x29F0
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x2a3c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3c70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2a3c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c78: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A3C78u;
    {
        const bool branch_taken_0x2a3c78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C78u;
        // 0x2a3c7c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c78) {
            ctx->pc = 0x2A3CB8u;
            goto label_2a3cb8;
        }
    }
    ctx->pc = 0x2A3C80u;
    // 0x2a3c80: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2a3c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2a3c84: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a3c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3c88: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3c8c: 0x0  nop
    ctx->pc = 0x2a3c8cu;
    // NOP
label_2a3c90:
    // 0x2a3c90: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C90u;
    {
        const bool branch_taken_0x2a3c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2A3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C90u;
        // 0x2a3c94: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c90) {
            ctx->pc = 0x2A3CA8u;
            goto label_2a3ca8;
        }
    }
    ctx->pc = 0x2A3C98u;
    // 0x2a3c98: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a3c9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a3c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a3ca0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a3ca4: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x2a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_2a3ca8:
    // 0x2a3ca8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a3cac: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2a3cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a3cb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A3CB0u;
    {
        const bool branch_taken_0x2a3cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3cb0) {
            ctx->pc = 0x2A3CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3CB0u;
            // 0x2a3cb4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3c90;
        }
    }
    ctx->pc = 0x2A3CB8u;
label_2a3cb8:
    // 0x2a3cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3CC0u;
label_2a3cc0:
    // 0x2a3cc0: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a3cc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3CC8u;
    {
        const bool branch_taken_0x2a3cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CC8u;
        // 0x2a3ccc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cc8) {
            ctx->pc = 0x2A3CE0u;
            goto label_2a3ce0;
        }
    }
    ctx->pc = 0x2A3CD0u;
    // 0x2a3cd0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3cd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3cd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3CD8u;
    {
        const bool branch_taken_0x2a3cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3cd8) {
            ctx->pc = 0x2A3CECu;
            goto label_2a3cec;
        }
    }
    ctx->pc = 0x2A3CE0u;
label_2a3ce0:
    // 0x2a3ce0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a3ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ce8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a3cec:
    // 0x2a3cec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3CECu;
    {
        const bool branch_taken_0x2a3cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CECu;
        // 0x2a3cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cec) {
            ctx->pc = 0x2A3D00u;
            goto label_2a3d00;
        }
    }
    ctx->pc = 0x2A3CF4u;
    // 0x2a3cf4: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x2a3cf8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3CF8u;
    {
        const bool branch_taken_0x2a3cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3cf8) {
            ctx->pc = 0x2A3CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3CF8u;
            // 0x2a3cfc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3D00u;
            goto label_2a3d00;
        }
    }
    ctx->pc = 0x2A3D00u;
label_2a3d00:
    // 0x2a3d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D08u;
}
