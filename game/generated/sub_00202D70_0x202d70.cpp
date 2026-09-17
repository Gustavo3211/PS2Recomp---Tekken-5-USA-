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

// Function: sub_00202D70
// Address: 0x202d70 - 0x202e10
void sub_00202D70_0x202d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D70_0x202d70");
#endif

    switch (ctx->pc) {
        case 0x202d88u: goto label_202d88;
        case 0x202dd8u: goto label_202dd8;
        default: break;
    }

    ctx->pc = 0x202d70u;

    // 0x202d70: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x202d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202d74: 0x24020141  addiu       $v0, $zero, 0x141
    ctx->pc = 0x202d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202d78: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202d7c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202D7Cu;
    {
        const bool branch_taken_0x202d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D7Cu;
        // 0x202d80: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d7c) {
            ctx->pc = 0x202DACu;
            goto label_202dac;
        }
    }
    ctx->pc = 0x202D84u;
    // 0x202d84: 0x24060141  addiu       $a2, $zero, 0x141
    ctx->pc = 0x202d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_202d88:
    // 0x202d88: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x202D88u;
    {
        const bool branch_taken_0x202d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x202D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D88u;
        // 0x202d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d88) {
            ctx->pc = 0x202DB0u;
            goto label_202db0;
        }
    }
    ctx->pc = 0x202D90u;
    // 0x202d90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x202d94: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202d98: 0x0  nop
    ctx->pc = 0x202d98u;
    // NOP
    // 0x202d9c: 0x0  nop
    ctx->pc = 0x202d9cu;
    // NOP
    // 0x202da0: 0x0  nop
    ctx->pc = 0x202da0u;
    // NOP
    // 0x202da4: 0x1466fff8  bne         $v1, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202DA4u;
    {
        const bool branch_taken_0x202da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x202da4) {
            ctx->pc = 0x202D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d88;
        }
    }
    ctx->pc = 0x202DACu;
label_202dac:
    // 0x202dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202db0:
    // 0x202db0: 0x3e00008  jr          $ra
    ctx->pc = 0x202DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202DB8u;
    // 0x202db8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x202db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202dbc: 0x24020141  addiu       $v0, $zero, 0x141
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202dc0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x202dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x202dc4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202dc8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x202DC8u;
    {
        const bool branch_taken_0x202dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DC8u;
        // 0x202dcc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dc8) {
            ctx->pc = 0x202E04u;
            goto label_202e04;
        }
    }
    ctx->pc = 0x202DD0u;
    // 0x202dd0: 0x24070141  addiu       $a3, $zero, 0x141
    ctx->pc = 0x202dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202dd4: 0x0  nop
    ctx->pc = 0x202dd4u;
    // NOP
label_202dd8:
    // 0x202dd8: 0x54650005  bnel        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202DD8u;
    {
        const bool branch_taken_0x202dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x202dd8) {
            ctx->pc = 0x202DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202DD8u;
            // 0x202ddc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202DF0u;
            goto label_202df0;
        }
    }
    ctx->pc = 0x202DE0u;
    // 0x202de0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x202de0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x202de4: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x202DE4u;
    {
        const bool branch_taken_0x202de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x202DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DE4u;
        // 0x202de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202de4) {
            ctx->pc = 0x202E08u;
            goto label_202e08;
        }
    }
    ctx->pc = 0x202DECu;
    // 0x202dec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x202decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_202df0:
    // 0x202df0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202df4: 0x0  nop
    ctx->pc = 0x202df4u;
    // NOP
    // 0x202df8: 0x0  nop
    ctx->pc = 0x202df8u;
    // NOP
    // 0x202dfc: 0x1467fff6  bne         $v1, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x202DFCu;
    {
        const bool branch_taken_0x202dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x202dfc) {
            ctx->pc = 0x202DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202dd8;
        }
    }
    ctx->pc = 0x202E04u;
label_202e04:
    // 0x202e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e08:
    // 0x202e08: 0x3e00008  jr          $ra
    ctx->pc = 0x202E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202E10u;
}
