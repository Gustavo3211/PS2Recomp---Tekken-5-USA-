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

// Function: sub_00210CD0
// Address: 0x210cd0 - 0x210d68
void sub_00210CD0_0x210cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210CD0_0x210cd0");
#endif

    switch (ctx->pc) {
        case 0x210cf8u: goto label_210cf8;
        case 0x210d2cu: goto label_210d2c;
        default: break;
    }

    ctx->pc = 0x210cd0u;

    // 0x210cd0: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x210cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x210cd4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x210cd8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x210CD8u;
    {
        const bool branch_taken_0x210cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cd8) {
            ctx->pc = 0x210CECu;
            goto label_210cec;
        }
    }
    ctx->pc = 0x210CE0u;
    // 0x210ce0: 0x84820148  lh          $v0, 0x148($a0)
    ctx->pc = 0x210ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x210ce4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x210CE4u;
    {
        const bool branch_taken_0x210ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ce4) {
            ctx->pc = 0x210CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210CE4u;
            // 0x210ce8: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210D54u;
            goto label_210d54;
        }
    }
    ctx->pc = 0x210CECu;
label_210cec:
    // 0x210cec: 0x3e00008  jr          $ra
    ctx->pc = 0x210CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CECu;
        // 0x210cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210CF4u;
    // 0x210cf4: 0x0  nop
    ctx->pc = 0x210cf4u;
    // NOP
label_210cf8:
    // 0x210cf8: 0x24427fc5  addiu       $v0, $v0, 0x7FC5
    ctx->pc = 0x210cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32709));
    // 0x210cfc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x210cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x210d00: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x210d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x210d04: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x210D04u;
    {
        const bool branch_taken_0x210d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d04) {
            ctx->pc = 0x210D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D04u;
            // 0x210d08: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210D50u;
            goto label_210d50;
        }
    }
    ctx->pc = 0x210D0Cu;
    // 0x210d0c: 0x84820146  lh          $v0, 0x146($a0)
    ctx->pc = 0x210d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 326)));
    // 0x210d10: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x210D10u;
    {
        const bool branch_taken_0x210d10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x210d10) {
            ctx->pc = 0x210D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D10u;
            // 0x210d14: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210D38u;
            goto label_210d38;
        }
    }
    ctx->pc = 0x210D18u;
    // 0x210d18: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x210d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210d1c: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x210d1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x210d20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x210d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210d24: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x210D24u;
    {
        const bool branch_taken_0x210d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d24) {
            ctx->pc = 0x210D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D24u;
            // 0x210d28: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210D50u;
            goto label_210d50;
        }
    }
    ctx->pc = 0x210D2Cu;
label_210d2c:
    // 0x210d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x210D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D2Cu;
        // 0x210d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D34u;
    // 0x210d34: 0x0  nop
    ctx->pc = 0x210d34u;
    // NOP
label_210d38:
    // 0x210d38: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x210d38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x210d3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x210d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210d40: 0x0  nop
    ctx->pc = 0x210d40u;
    // NOP
    // 0x210d44: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x210D44u;
    {
        const bool branch_taken_0x210d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210d44) {
            ctx->pc = 0x210D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210d2c;
        }
    }
    ctx->pc = 0x210D4Cu;
    // 0x210d4c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x210d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_210d50:
    // 0x210d50: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x210d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_210d54:
    // 0x210d54: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x210D54u;
    {
        const bool branch_taken_0x210d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210d54) {
            ctx->pc = 0x210D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D54u;
            // 0x210d58: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210cf8;
        }
    }
    ctx->pc = 0x210D5Cu;
    // 0x210d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x210D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D5Cu;
        // 0x210d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D64u;
    // 0x210d64: 0x0  nop
    ctx->pc = 0x210d64u;
    // NOP
    ctx->pc = 0x210d68u;
}
