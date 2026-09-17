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

// Function: sub_00248C80
// Address: 0x248c80 - 0x248d38
void sub_00248C80_0x248c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248C80_0x248c80");
#endif

    switch (ctx->pc) {
        case 0x248cb0u: goto label_248cb0;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cd8u: goto label_248cd8;
        case 0x248d00u: goto label_248d00;
        case 0x248d14u: goto label_248d14;
        default: break;
    }

    ctx->pc = 0x248c80u;

    // 0x248c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248c84: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x248c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x248c88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x248c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x248c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248c90: 0x24507000  addiu       $s0, $v0, 0x7000
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x248c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248c98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x248c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x248c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ca4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x248ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248ca8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248cac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x248cacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x167008u));
label_248cb0:
    // 0x248cb0: 0x5453000a  bnel        $v0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x248CB0u;
    {
        const bool branch_taken_0x248cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x248cb0) {
            ctx->pc = 0x248CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CB0u;
            // 0x248cb4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248CDCu;
            goto label_248cdc;
        }
    }
    ctx->pc = 0x248CB8u;
    // 0x248cb8: 0xc0922d6  jal         func_248B58
    ctx->pc = 0x248CB8u;
    SET_GPR_U32(ctx, 31, 0x248CC0u);
    ctx->pc = 0x248CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CB8u;
    // 0x248cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B58u, 0x248CB8u, 0x248CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CC0u;
label_248cc0:
    // 0x248cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248CC0u;
    {
        const bool branch_taken_0x248cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CC0u;
        // 0x248cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cc0) {
            ctx->pc = 0x248CD0u;
            goto label_248cd0;
        }
    }
    ctx->pc = 0x248CC8u;
    // 0x248cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248CC8u;
    {
        const bool branch_taken_0x248cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CC8u;
        // 0x248ccc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cc8) {
            ctx->pc = 0x248CD8u;
            goto label_248cd8;
        }
    }
    ctx->pc = 0x248CD0u;
label_248cd0:
    // 0x248cd0: 0xc0922f4  jal         func_248BD0
    ctx->pc = 0x248CD0u;
    SET_GPR_U32(ctx, 31, 0x248CD8u);
    ctx->pc = 0x248BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BD0u, 0x248CD0u, 0x248CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CD8u;
label_248cd8:
    // 0x248cd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_248cdc:
    // 0x248cdc: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x248cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x248ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248CE0u;
    {
        const bool branch_taken_0x248ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CE0u;
        // 0x248ce4: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ce0) {
            ctx->pc = 0x248CF0u;
            goto label_248cf0;
        }
    }
    ctx->pc = 0x248CE8u;
    // 0x248ce8: 0x5240fff1  beql        $s2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x248CE8u;
    {
        const bool branch_taken_0x248ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ce8) {
            ctx->pc = 0x248CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CE8u;
            // 0x248cec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248cb0;
        }
    }
    ctx->pc = 0x248CF0u;
label_248cf0:
    // 0x248cf0: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x248CF0u;
    {
        const bool branch_taken_0x248cf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x248CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CF0u;
        // 0x248cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cf0) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248CF8u;
    // 0x248cf8: 0xc09230c  jal         func_248C30
    ctx->pc = 0x248CF8u;
    SET_GPR_U32(ctx, 31, 0x248D00u);
    ctx->pc = 0x248C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C30u, 0x248CF8u, 0x248D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D00u;
label_248d00:
    // 0x248d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x248d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d04: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x248D04u;
    {
        const bool branch_taken_0x248d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d04) {
            ctx->pc = 0x248D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D04u;
            // 0x248d08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248D0Cu;
    // 0x248d0c: 0xc0922ba  jal         func_248AE8
    ctx->pc = 0x248D0Cu;
    SET_GPR_U32(ctx, 31, 0x248D14u);
    ctx->pc = 0x248D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D0Cu;
    // 0x248d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248AE8u, 0x248D0Cu, 0x248D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D14u;
label_248d14:
    // 0x248d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248d18: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x248d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x248d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248d20:
    // 0x248d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248d28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x248d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x248d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248d30: 0x3e00008  jr          $ra
    ctx->pc = 0x248D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D30u;
        // 0x248d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D38u;
}
