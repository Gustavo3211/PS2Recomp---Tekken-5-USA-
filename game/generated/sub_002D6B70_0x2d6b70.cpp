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

// Function: sub_002D6B70
// Address: 0x2d6b70 - 0x2d6ec0
void sub_002D6B70_0x2d6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B70_0x2d6b70");
#endif

    switch (ctx->pc) {
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c94u: goto label_2d6c94;
        case 0x2d6cb0u: goto label_2d6cb0;
        case 0x2d6d38u: goto label_2d6d38;
        case 0x2d6d6cu: goto label_2d6d6c;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e7cu: goto label_2d6e7c;
        default: break;
    }

    ctx->pc = 0x2d6b70u;

    // 0x2d6b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d6b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d6b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d6b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d6b7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d6b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b80: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d6b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d6b84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d6b84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6b8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d6b90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d6b94: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d6b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d6b98: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d6b9c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d6ba0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d6ba4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d6ba8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d6bac: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2d6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2d6bb0: 0x946394e4  lhu         $v1, -0x6B1C($v1)
    ctx->pc = 0x2d6bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939876)));
    // 0x2d6bb4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2d6bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2d6bb8: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2D6BB8u;
    {
        const bool branch_taken_0x2d6bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BB8u;
        // 0x2d6bbc: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bb8) {
            ctx->pc = 0x2D6E90u;
            goto label_2d6e90;
        }
    }
    ctx->pc = 0x2D6BC0u;
    // 0x2d6bc0: 0x3c150002  lui         $s5, 0x2
    ctx->pc = 0x2d6bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)2 << 16));
    // 0x2d6bc4: 0x2b6a821  addu        $s5, $s5, $s6
    ctx->pc = 0x2d6bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x2d6bc8: 0x8eb594ec  lw          $s5, -0x6B14($s5)
    ctx->pc = 0x2d6bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939884)));
    // 0x2d6bcc: 0x12a000b0  beqz        $s5, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D6BCCu;
    {
        const bool branch_taken_0x2d6bcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BCCu;
        // 0x2d6bd0: 0x26b0000c  addiu       $s0, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bcc) {
            ctx->pc = 0x2D6E90u;
            goto label_2d6e90;
        }
    }
    ctx->pc = 0x2D6BD4u;
    // 0x2d6bd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d6bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d6bd8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d6bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6bdc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6BDCu;
    {
        const bool branch_taken_0x2d6bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d6bdc) {
            ctx->pc = 0x2D6BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6BDCu;
            // 0x2d6be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6BF0u;
            goto label_2d6bf0;
        }
    }
    ctx->pc = 0x2D6BE4u;
    // 0x2d6be4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2D6BE4u;
    {
        const bool branch_taken_0x2d6be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BE4u;
        // 0x2d6be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6be4) {
            ctx->pc = 0x2D6E90u;
            goto label_2d6e90;
        }
    }
    ctx->pc = 0x2D6BECu;
    // 0x2d6bec: 0x0  nop
    ctx->pc = 0x2d6becu;
    // NOP
label_2d6bf0:
    // 0x2d6bf0: 0x54c2001b  bnel        $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D6BF0u;
    {
        const bool branch_taken_0x2d6bf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d6bf0) {
            ctx->pc = 0x2D6BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6BF0u;
            // 0x2d6bf4: 0x96a2000c  lhu         $v0, 0xC($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C60u;
            goto label_2d6c60;
        }
    }
    ctx->pc = 0x2D6BF8u;
    // 0x2d6bf8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d6bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6bfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d6bfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6c04: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x2d6c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d6c08: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2d6c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d6c0c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d6c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6c10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d6c14: 0x43a025  or          $s4, $v0, $v1
    ctx->pc = 0x2d6c14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d6c18: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D6C18u;
    {
        const bool branch_taken_0x2d6c18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C18u;
        // 0x2d6c1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c18) {
            ctx->pc = 0x2D6C5Cu;
            goto label_2d6c5c;
        }
    }
    ctx->pc = 0x2D6C20u;
    // 0x2d6c20: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x2d6c20u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6c24: 0x0  nop
    ctx->pc = 0x2d6c24u;
    // NOP
label_2d6c28:
    // 0x2d6c28: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x2d6c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2d6c2c: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x2d6c2cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6c30: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2d6c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2d6c34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6C34u;
    {
        const bool branch_taken_0x2d6c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C34u;
        // 0x2d6c38: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c34) {
            ctx->pc = 0x2D6C4Cu;
            goto label_2d6c4c;
        }
    }
    ctx->pc = 0x2D6C3Cu;
    // 0x2d6c3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d6c40: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2d6c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d6c44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6C44u;
    {
        const bool branch_taken_0x2d6c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c44) {
            ctx->pc = 0x2D6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6C44u;
            // 0x2d6c48: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C5Cu;
            goto label_2d6c5c;
        }
    }
    ctx->pc = 0x2D6C4Cu;
label_2d6c4c:
    // 0x2d6c4c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2d6c4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2d6c50: 0x2f4102b  sltu        $v0, $s7, $s4
    ctx->pc = 0x2d6c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2d6c54: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D6C54u;
    {
        const bool branch_taken_0x2d6c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c54) {
            ctx->pc = 0x2D6C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6C54u;
            // 0x2d6c58: 0x86110000  lh          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6c28;
        }
    }
    ctx->pc = 0x2D6C5Cu;
label_2d6c5c:
    // 0x2d6c5c: 0x96a2000c  lhu         $v0, 0xC($s5)
    ctx->pc = 0x2d6c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_2d6c60:
    // 0x2d6c60: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2d6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2d6c64: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2d6c68: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x2d6c6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6c70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2d6c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2d6c74: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d6c78: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2d6c78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c7c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2d6c7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d6c80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d6c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6c84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d6c88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d6c8c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2D6C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6C94u);
    ctx->pc = 0x2D6C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C8Cu;
    // 0x2d6c90: 0x62a025  or          $s4, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2D6C8Cu, 0x2D6C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C94u;
label_2d6c94:
    // 0x2d6c94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D6C98u;
    {
        const bool branch_taken_0x2d6c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c98) {
            ctx->pc = 0x2D6C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6C98u;
            // 0x2d6c9c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6CA0u;
            goto label_2d6ca0;
        }
    }
    ctx->pc = 0x2D6CA0u;
label_2d6ca0:
    // 0x2d6ca0: 0x1280007a  beqz        $s4, . + 4 + (0x7A << 2)
    ctx->pc = 0x2D6CA0u;
    {
        const bool branch_taken_0x2d6ca0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CA0u;
        // 0x2d6ca4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ca0) {
            ctx->pc = 0x2D6E8Cu;
            goto label_2d6e8c;
        }
    }
    ctx->pc = 0x2D6CA8u;
    // 0x2d6ca8: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x2d6ca8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6cac: 0x0  nop
    ctx->pc = 0x2d6cacu;
    // NOP
label_2d6cb0:
    // 0x2d6cb0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2d6cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d6cb4: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x2d6cb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6cb8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2d6cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d6cbc: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x2d6cbcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6cc0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d6cc4: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x2d6cc4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6cc8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2d6cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d6ccc: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2d6cd0: 0x62302  srl         $a0, $a2, 12
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x2d6cd4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2d6cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2d6cd8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d6cdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6ce0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2d6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d6ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d6ce8: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2d6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2d6cec: 0x620c2  srl         $a0, $a2, 3
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2d6cf0: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d6cf4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2d6cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2d6cf8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D6CF8u;
    {
        const bool branch_taken_0x2d6cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CF8u;
        // 0x2d6cfc: 0x59040  sll         $s2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cf8) {
            ctx->pc = 0x2D6D78u;
            goto label_2d6d78;
        }
    }
    ctx->pc = 0x2D6D00u;
    // 0x2d6d00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d6d04: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2d6d08: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x2d6d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d6d0c: 0x1624000b  bne         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6D0Cu;
    {
        const bool branch_taken_0x2d6d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D0Cu;
        // 0x2d6d10: 0x62f00a  movz        $fp, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d0c) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6D14u;
    // 0x2d6d14: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d6d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d6d18: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2d6d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d6d20: 0x2464c450  addiu       $a0, $v1, -0x3BB0
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
    // 0x2d6d24: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2d6d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d30: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2D6D30u;
    SET_GPR_U32(ctx, 31, 0x2D6D38u);
    ctx->pc = 0x2D6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D30u;
    // 0x2d6d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2D6D30u, 0x2D6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D38u;
label_2d6d38:
    // 0x2d6d38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6d3c:
    // 0x2d6d3c: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2d6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d6d40: 0x5444004f  bnel        $v0, $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D6D40u;
    {
        const bool branch_taken_0x2d6d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d6d40) {
            ctx->pc = 0x2D6D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6D40u;
            // 0x2d6d44: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6D48u;
    // 0x2d6d48: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d6d4c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2d6d50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d6d54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d58: 0x2444c450  addiu       $a0, $v0, -0x3BB0
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x2d6d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d64: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2D6D64u;
    SET_GPR_U32(ctx, 31, 0x2D6D6Cu);
    ctx->pc = 0x2D6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D64u;
    // 0x2d6d68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2D6D64u, 0x2D6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D6Cu;
label_2d6d6c:
    // 0x2d6d6c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2D6D6Cu;
    {
        const bool branch_taken_0x2d6d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D6Cu;
        // 0x2d6d70: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d6c) {
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6D74u;
    // 0x2d6d74: 0x0  nop
    ctx->pc = 0x2d6d74u;
    // NOP
label_2d6d78:
    // 0x2d6d78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d6d7c: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x2d6d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d6d80: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D6D80u;
    {
        const bool branch_taken_0x2d6d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d80) {
            ctx->pc = 0x2D6D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6D80u;
            // 0x2d6d84: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6D88u;
    // 0x2d6d88: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2d6d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d6d8c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D6D8Cu;
    {
        const bool branch_taken_0x2d6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d8c) {
            ctx->pc = 0x2D6D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6D8Cu;
            // 0x2d6d90: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6D94u;
    // 0x2d6d94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6d98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6D98u;
    {
        const bool branch_taken_0x2d6d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D98u;
        // 0x2d6d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d98) {
            ctx->pc = 0x2D6DA4u;
            goto label_2d6da4;
        }
    }
    ctx->pc = 0x2D6DA0u;
    // 0x2d6da0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d6da4:
    // 0x2d6da4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2d6da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2d6da8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d6dac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D6DACu;
    {
        const bool branch_taken_0x2d6dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6dac) {
            ctx->pc = 0x2D6DCCu;
            goto label_2d6dcc;
        }
    }
    ctx->pc = 0x2D6DB4u;
    // 0x2d6db4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d6db8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2d6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2d6dbc: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d6dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d6dc0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d6dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d6dc4: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D6DC4u;
    {
        const bool branch_taken_0x2d6dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6dc4) {
            ctx->pc = 0x2D6DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6DC4u;
            // 0x2d6dc8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6DCCu;
label_2d6dcc:
    // 0x2d6dcc: 0x55200010  bnel        $t1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D6DCCu;
    {
        const bool branch_taken_0x2d6dcc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6dcc) {
            ctx->pc = 0x2D6DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6DCCu;
            // 0x2d6dd0: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E10u;
            goto label_2d6e10;
        }
    }
    ctx->pc = 0x2D6DD4u;
    // 0x2d6dd4: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D6DD4u;
    {
        const bool branch_taken_0x2d6dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6dd4) {
            ctx->pc = 0x2D6DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6DD4u;
            // 0x2d6dd8: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E10u;
            goto label_2d6e10;
        }
    }
    ctx->pc = 0x2D6DDCu;
    // 0x2d6ddc: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x2d6ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d6de0: 0x2402018e  addiu       $v0, $zero, 0x18E
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
    // 0x2d6de4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d6de8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6dec: 0x360821  addu        $at, $at, $s6
    ctx->pc = 0x2d6decu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 22)));
    // 0x2d6df0: 0xac3594ec  sw          $s5, -0x6B14($at)
    ctx->pc = 0x2d6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 21));
    // 0x2d6df4: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x2d6df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d6df8: 0x2464edf0  addiu       $a0, $v1, -0x1210
    ctx->pc = 0x2d6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962672));
    // 0x2d6dfc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d6e00: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2D6E00u;
    SET_GPR_U32(ctx, 31, 0x2D6E08u);
    ctx->pc = 0x2D6E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E00u;
    // 0x2d6e04: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2D6E00u, 0x2D6E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E08u;
label_2d6e08:
    // 0x2d6e08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D6E08u;
    {
        const bool branch_taken_0x2d6e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E08u;
        // 0x2d6e0c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e08) {
            ctx->pc = 0x2D6E80u;
            goto label_2d6e80;
        }
    }
    ctx->pc = 0x2D6E10u;
label_2d6e10:
    // 0x2d6e10: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x2d6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d6e14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d6e18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d6e18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d6e1c: 0x49182a  slt         $v1, $v0, $t1
    ctx->pc = 0x2d6e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d6e20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6E20u;
    {
        const bool branch_taken_0x2d6e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E20u;
        // 0x2d6e24: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e20) {
            ctx->pc = 0x2D6E34u;
            goto label_2d6e34;
        }
    }
    ctx->pc = 0x2D6E28u;
    // 0x2d6e28: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2d6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2d6e2c: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2d6e2cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6e30: 0x2812  mflo        $a1
    ctx->pc = 0x2d6e30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2d6e34:
    // 0x2d6e34: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x2d6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2d6e38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d6e3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d6e40: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x2d6e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d6e44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6E44u;
    {
        const bool branch_taken_0x2d6e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E44u;
        // 0x2d6e48: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e44) {
            ctx->pc = 0x2D6E58u;
            goto label_2d6e58;
        }
    }
    ctx->pc = 0x2D6E4Cu;
    // 0x2d6e4c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2d6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2d6e50: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x2d6e50u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6e54: 0x2812  mflo        $a1
    ctx->pc = 0x2d6e54u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2d6e58:
    // 0x2d6e58: 0x2402018e  addiu       $v0, $zero, 0x18E
    ctx->pc = 0x2d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
    // 0x2d6e5c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d6e60: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6e64: 0x360821  addu        $at, $at, $s6
    ctx->pc = 0x2d6e64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 22)));
    // 0x2d6e68: 0xac3594ec  sw          $s5, -0x6B14($at)
    ctx->pc = 0x2d6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 21));
    // 0x2d6e6c: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x2d6e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d6e70: 0x2464edf0  addiu       $a0, $v1, -0x1210
    ctx->pc = 0x2d6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962672));
    // 0x2d6e74: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2D6E74u;
    SET_GPR_U32(ctx, 31, 0x2D6E7Cu);
    ctx->pc = 0x2D6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E74u;
    // 0x2d6e78: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2D6E74u, 0x2D6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E7Cu;
label_2d6e7c:
    // 0x2d6e7c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2d6e80:
    // 0x2d6e80: 0x2f4102b  sltu        $v0, $s7, $s4
    ctx->pc = 0x2d6e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2d6e84: 0x5440ff8a  bnel        $v0, $zero, . + 4 + (-0x76 << 2)
    ctx->pc = 0x2D6E84u;
    {
        const bool branch_taken_0x2d6e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e84) {
            ctx->pc = 0x2D6E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6E84u;
            // 0x2d6e88: 0x86110000  lh          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6cb0;
        }
    }
    ctx->pc = 0x2D6E8Cu;
label_2d6e8c:
    // 0x2d6e8c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2d6e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e90:
    // 0x2d6e90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6e94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d6e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6e98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d6e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6e9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d6e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d6ea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6ea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d6ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ea8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d6ea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6eac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d6eacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d6eb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d6eb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6eb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d6eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EB8u;
        // 0x2d6ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6EC0u;
}
