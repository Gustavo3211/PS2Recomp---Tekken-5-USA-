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

// Function: sub_00375D08
// Address: 0x375d08 - 0x375e28
void sub_00375D08_0x375d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375D08_0x375d08");
#endif

    switch (ctx->pc) {
        case 0x375d88u: goto label_375d88;
        case 0x375e00u: goto label_375e00;
        default: break;
    }

    ctx->pc = 0x375d08u;

    // 0x375d08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375d0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375d10: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x375d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
    // 0x375d14: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375d1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375D1Cu;
    {
        const bool branch_taken_0x375d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D1Cu;
        // 0x375d20: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d1c) {
            ctx->pc = 0x375D30u;
            goto label_375d30;
        }
    }
    ctx->pc = 0x375D24u;
    // 0x375d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375d28: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375D28u;
    ctx->pc = 0x375D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D28u;
    // 0x375d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375D30u;
label_375d30:
    // 0x375d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375d34: 0x3e00008  jr          $ra
    ctx->pc = 0x375D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D34u;
        // 0x375d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375D3Cu;
    // 0x375d3c: 0x0  nop
    ctx->pc = 0x375d3cu;
    // NOP
    // 0x375d40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x375d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d44: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x375d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x375d48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375d4c: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x375d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x375d50: 0x24e3001c  addiu       $v1, $a3, 0x1C
    ctx->pc = 0x375d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x375d54: 0x24422520  addiu       $v0, $v0, 0x2520
    ctx->pc = 0x375d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
    // 0x375d58: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x375d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x375d5c: 0x24e90038  addiu       $t1, $a3, 0x38
    ctx->pc = 0x375d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x375d60: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x375d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x375d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x375d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d68: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x375d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x375d6c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x375d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d70: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x375d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x375d74: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x375d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x375d78: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x375d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x375d7c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x375d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x375d80: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x375d80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x375d84: 0x0  nop
    ctx->pc = 0x375d84u;
    // NOP
label_375d88:
    // 0x375d88: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x375d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x375d8c: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x375d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x375d90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x375d90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x375d94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x375d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x375d98: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x375d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x375d9c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x375d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x375da0: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x375da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x375da4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x375DA4u;
    {
        const bool branch_taken_0x375da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DA4u;
        // 0x375da8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375da4) {
            ctx->pc = 0x375D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375d88;
        }
    }
    ctx->pc = 0x375DACu;
    // 0x375dac: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x375dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x375db0: 0x24e50178  addiu       $a1, $a3, 0x178
    ctx->pc = 0x375db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 376));
    // 0x375db4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x375db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x375db8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x375db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375dbc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x375dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x375dc0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x375dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x375dc4: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x375dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x375dc8: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x375dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x375dcc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x375dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x375dd0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x375dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x375dd4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x375dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x375dd8: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x375dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x375ddc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x375ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x375de0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x375de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x375de4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x375de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x375de8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x375de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x375dec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x375decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375df0: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x375df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x375df4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x375df4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x375df8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x375df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x375dfc: 0x0  nop
    ctx->pc = 0x375dfcu;
    // NOP
label_375e00:
    // 0x375e00: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x375e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x375e04: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x375e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x375e08: 0x0  nop
    ctx->pc = 0x375e08u;
    // NOP
    // 0x375e0c: 0x0  nop
    ctx->pc = 0x375e0cu;
    // NOP
    // 0x375e10: 0x0  nop
    ctx->pc = 0x375e10u;
    // NOP
    // 0x375e14: 0x14e8fffa  bne         $a3, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x375E14u;
    {
        const bool branch_taken_0x375e14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x375E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E14u;
        // 0x375e18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e14) {
            ctx->pc = 0x375E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375e00;
        }
    }
    ctx->pc = 0x375E1Cu;
    // 0x375e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x375E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375E24u;
    // 0x375e24: 0x0  nop
    ctx->pc = 0x375e24u;
    // NOP
    ctx->pc = 0x375e28u;
}
