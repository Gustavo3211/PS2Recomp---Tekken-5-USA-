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

// Function: sub_00214A28
// Address: 0x214a28 - 0x214b40
void sub_00214A28_0x214a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214A28_0x214a28");
#endif

    switch (ctx->pc) {
        case 0x214a60u: goto label_214a60;
        case 0x214a80u: goto label_214a80;
        case 0x214ab8u: goto label_214ab8;
        default: break;
    }

    ctx->pc = 0x214a28u;

    // 0x214a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214a38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x214a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214a40: 0x1464003b  bne         $v1, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x214A40u;
    {
        const bool branch_taken_0x214a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x214A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A40u;
        // 0x214a44: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a40) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214A48u;
    // 0x214a48: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x214a4c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x214a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214a50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214A50u;
    {
        const bool branch_taken_0x214a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A50u;
        // 0x214a54: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a50) {
            ctx->pc = 0x214A78u;
            goto label_214a78;
        }
    }
    ctx->pc = 0x214A58u;
    // 0x214a58: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x214A58u;
    {
        const bool branch_taken_0x214a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214a58) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214A60u;
label_214a60:
    // 0x214a60: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x214a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x214a64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x214a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x214a68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214a6c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x214a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214a70: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x214A70u;
    {
        const bool branch_taken_0x214a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A70u;
        // 0x214a74: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a70) {
            ctx->pc = 0x214ADCu;
            goto label_214adc;
        }
    }
    ctx->pc = 0x214A78u;
label_214a78:
    // 0x214a78: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214A78u;
    SET_GPR_U32(ctx, 31, 0x214A80u);
    ctx->pc = 0x214A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A78u;
    // 0x214a7c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214A78u, 0x214A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A80u;
label_214a80:
    // 0x214a80: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x214a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x214a84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214a88: 0x2463b708  addiu       $v1, $v1, -0x48F8
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948616));
    // 0x214a8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x214a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a94: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214aa0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x214aa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214aa4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214AA4u;
    {
        const bool branch_taken_0x214aa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AA4u;
        // 0x214aa8: 0x8c67000c  lw          $a3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214aa4) {
            ctx->pc = 0x214ADCu;
            goto label_214adc;
        }
    }
    ctx->pc = 0x214AACu;
    // 0x214aac: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x214aacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x214ab0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x214ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ab4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_214ab8:
    // 0x214ab8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x214ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x214ac0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x214ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214ac4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x214ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x214ac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214acc: 0x106affe4  beq         $v1, $t2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x214ACCu;
    {
        const bool branch_taken_0x214acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x214AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ACCu;
        // 0x214ad0: 0xc9202a  slt         $a0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214acc) {
            ctx->pc = 0x214A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214a60;
        }
    }
    ctx->pc = 0x214AD4u;
    // 0x214ad4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214AD4u;
    {
        const bool branch_taken_0x214ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AD4u;
        // 0x214ad8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ad4) {
            ctx->pc = 0x214AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214ab8;
        }
    }
    ctx->pc = 0x214ADCu;
label_214adc:
    // 0x214adc: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x214ADCu;
    {
        const bool branch_taken_0x214adc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ADCu;
        // 0x214ae0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214adc) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214AE4u;
    // 0x214ae4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x214ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x214ae8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x214aec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x214aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x214af0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x214af4: 0x9044005d  lbu         $a0, 0x5D($v0)
    ctx->pc = 0x214af4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
    // 0x214af8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x214af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x214afc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x214AFCu;
    {
        const bool branch_taken_0x214afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214afc) {
            ctx->pc = 0x214B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214AFCu;
            // 0x214b00: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214B04u;
    // 0x214b04: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x214B04u;
    {
        const bool branch_taken_0x214b04 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x214b04) {
            ctx->pc = 0x214B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214B04u;
            // 0x214b08: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214B0Cu;
    // 0x214b0c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x214b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x214b10: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x214b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x214b14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x214b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214b18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x214b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214b1c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214b20: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x214b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214b24: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x214B24u;
    {
        const bool branch_taken_0x214b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x214B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B24u;
        // 0x214b28: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b24) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214B2Cu;
    // 0x214b2c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x214b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_214b30:
    // 0x214b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214b38: 0x3e00008  jr          $ra
    ctx->pc = 0x214B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B38u;
        // 0x214b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B40u;
}
