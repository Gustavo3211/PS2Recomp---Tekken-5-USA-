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

// Function: sub_002A7D18
// Address: 0x2a7d18 - 0x2a7eb0
void sub_002A7D18_0x2a7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D18_0x2a7d18");
#endif

    switch (ctx->pc) {
        case 0x2a7d60u: goto label_2a7d60;
        case 0x2a7dc0u: goto label_2a7dc0;
        case 0x2a7e48u: goto label_2a7e48;
        case 0x2a7e60u: goto label_2a7e60;
        default: break;
    }

    ctx->pc = 0x2a7d18u;

    // 0x2a7d18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2a7d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d1c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a7d20: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A7D20u;
    {
        const bool branch_taken_0x2a7d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D20u;
        // 0x2a7d24: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d20) {
            ctx->pc = 0x2A7E00u;
            goto label_2a7e00;
        }
    }
    ctx->pc = 0x2A7D28u;
    // 0x2a7d28: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x2a7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2a7d2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a7d30: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x2a7d30u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7d34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a7d38: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x2a7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2a7d3c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2a7d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a7d40: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2a7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a7d44: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2a7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2a7d48: 0x2484019c  addiu       $a0, $a0, 0x19C
    ctx->pc = 0x2a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 412));
    // 0x2a7d4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2a7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a7d50: 0x1100002a  beqz        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A7D50u;
    {
        const bool branch_taken_0x2a7d50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D50u;
        // 0x2a7d54: 0x244b0010  addiu       $t3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d50) {
            ctx->pc = 0x2A7DFCu;
            goto label_2a7dfc;
        }
    }
    ctx->pc = 0x2A7D58u;
    // 0x2a7d58: 0x2502007f  addiu       $v0, $t0, 0x7F
    ctx->pc = 0x2a7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x2a7d5c: 0x0  nop
    ctx->pc = 0x2a7d5cu;
    // NOP
label_2a7d60:
    // 0x2a7d60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7d64: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2a7d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x2a7d68: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7D68u;
    {
        const bool branch_taken_0x2a7d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d68) {
            ctx->pc = 0x2A7D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D68u;
            // 0x2a7d6c: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7D88u;
            goto label_2a7d88;
        }
    }
    ctx->pc = 0x2A7D70u;
    // 0x2a7d70: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x2a7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2a7d74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7d78: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x2a7d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a7d7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7D7Cu;
    {
        const bool branch_taken_0x2a7d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d7c) {
            ctx->pc = 0x2A7D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D7Cu;
            // 0x2a7d80: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DA0u;
            goto label_2a7da0;
        }
    }
    ctx->pc = 0x2A7D84u;
    // 0x2a7d84: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2a7d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_2a7d88:
    // 0x2a7d88: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2a7d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7d8c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2a7d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2a7d90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2a7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2a7d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7D94u;
    {
        const bool branch_taken_0x2a7d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D94u;
        // 0x2a7d98: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d94) {
            ctx->pc = 0x2A7DA4u;
            goto label_2a7da4;
        }
    }
    ctx->pc = 0x2A7D9Cu;
    // 0x2a7d9c: 0x0  nop
    ctx->pc = 0x2a7d9cu;
    // NOP
label_2a7da0:
    // 0x2a7da0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a7da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a7da4:
    // 0x2a7da4: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x2a7da4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a7da8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dac: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7DACu;
    {
        const bool branch_taken_0x2a7dac = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2A7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DACu;
        // 0x2a7db0: 0x8d680008  lw          $t0, 0x8($t3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7dac) {
            ctx->pc = 0x2A7DF0u;
            goto label_2a7df0;
        }
    }
    ctx->pc = 0x2A7DB4u;
    // 0x2a7db4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7DB4u;
    {
        const bool branch_taken_0x2a7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DB4u;
        // 0x2a7db8: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7db4) {
            ctx->pc = 0x2A7DD0u;
            goto label_2a7dd0;
        }
    }
    ctx->pc = 0x2A7DBCu;
    // 0x2a7dbc: 0x0  nop
    ctx->pc = 0x2a7dbcu;
    // NOP
label_2a7dc0:
    // 0x2a7dc0: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x2a7dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2a7dc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7DC4u;
    {
        const bool branch_taken_0x2a7dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DC4u;
        // 0x2a7dc8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7dc4) {
            ctx->pc = 0x2A7DF0u;
            goto label_2a7df0;
        }
    }
    ctx->pc = 0x2A7DCCu;
    // 0x2a7dcc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2a7dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2a7dd0:
    // 0x2a7dd0: 0x0  nop
    ctx->pc = 0x2a7dd0u;
    // NOP
    // 0x2a7dd4: 0x0  nop
    ctx->pc = 0x2a7dd4u;
    // NOP
    // 0x2a7dd8: 0x0  nop
    ctx->pc = 0x2a7dd8u;
    // NOP
    // 0x2a7ddc: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A7DDCu;
    {
        const bool branch_taken_0x2a7ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a7ddc) {
            ctx->pc = 0x2A7DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7DDCu;
            // 0x2a7de0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7dc0;
        }
    }
    ctx->pc = 0x2A7DE4u;
    // 0x2a7de4: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2a7de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2a7de8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2a7de8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7dec: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2a7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2a7df0:
    // 0x2a7df0: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x2a7df0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7df4: 0x1500ffda  bnez        $t0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2A7DF4u;
    {
        const bool branch_taken_0x2a7df4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DF4u;
        // 0x2a7df8: 0x2502007f  addiu       $v0, $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7df4) {
            ctx->pc = 0x2A7D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7d60;
        }
    }
    ctx->pc = 0x2A7DFCu;
label_2a7dfc:
    // 0x2a7dfc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2a7dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2a7e00:
    // 0x2a7e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7E08u;
    // 0x2a7e08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a7e0c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A7E0Cu;
    {
        const bool branch_taken_0x2a7e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E0Cu;
        // 0x2a7e10: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e0c) {
            ctx->pc = 0x2A7EA4u;
            goto label_2a7ea4;
        }
    }
    ctx->pc = 0x2A7E14u;
    // 0x2a7e14: 0x94cc0000  lhu         $t4, 0x0($a2)
    ctx->pc = 0x2a7e14u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7e18: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a7e1c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x2a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2a7e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a7e24: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2a7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a7e28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a7e2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7e30: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2a7e30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e34: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x2a7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2a7e38: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x2a7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a7e3c: 0x2465019c  addiu       $a1, $v1, 0x19C
    ctx->pc = 0x2a7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 412));
    // 0x2a7e40: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A7E40u;
    {
        const bool branch_taken_0x2a7e40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E40u;
        // 0x2a7e44: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e40) {
            ctx->pc = 0x2A7EA0u;
            goto label_2a7ea0;
        }
    }
    ctx->pc = 0x2A7E48u;
label_2a7e48:
    // 0x2a7e48: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x2a7e48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a7e4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e50: 0x1960000f  blez        $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7E50u;
    {
        const bool branch_taken_0x2a7e50 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2A7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E50u;
        // 0x2a7e54: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e50) {
            ctx->pc = 0x2A7E90u;
            goto label_2a7e90;
        }
    }
    ctx->pc = 0x2A7E58u;
    // 0x2a7e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7E58u;
    {
        const bool branch_taken_0x2a7e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E58u;
        // 0x2a7e5c: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e58) {
            ctx->pc = 0x2A7E70u;
            goto label_2a7e70;
        }
    }
    ctx->pc = 0x2A7E60u;
label_2a7e60:
    // 0x2a7e60: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x2a7e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2a7e64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7E64u;
    {
        const bool branch_taken_0x2a7e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E64u;
        // 0x2a7e68: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e64) {
            ctx->pc = 0x2A7E90u;
            goto label_2a7e90;
        }
    }
    ctx->pc = 0x2A7E6Cu;
    // 0x2a7e6c: 0xc1400  sll         $v0, $t4, 16
    ctx->pc = 0x2a7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_2a7e70:
    // 0x2a7e70: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2a7e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a7e74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a7e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7e78: 0x0  nop
    ctx->pc = 0x2a7e78u;
    // NOP
    // 0x2a7e7c: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A7E7Cu;
    {
        const bool branch_taken_0x2a7e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a7e7c) {
            ctx->pc = 0x2A7E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7E7Cu;
            // 0x2a7e80: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7e60;
        }
    }
    ctx->pc = 0x2A7E84u;
    // 0x2a7e84: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2a7e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2a7e88: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2a7e88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7e8c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2a7e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2a7e90:
    // 0x2a7e90: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2a7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2a7e94: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x2a7e94u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7e98: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A7E98u;
    {
        const bool branch_taken_0x2a7e98 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E98u;
        // 0x2a7e9c: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e98) {
            ctx->pc = 0x2A7E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7e48;
        }
    }
    ctx->pc = 0x2A7EA0u;
label_2a7ea0:
    // 0x2a7ea0: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x2a7ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_2a7ea4:
    // 0x2a7ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7EACu;
    // 0x2a7eac: 0x0  nop
    ctx->pc = 0x2a7eacu;
    // NOP
    ctx->pc = 0x2a7eb0u;
}
