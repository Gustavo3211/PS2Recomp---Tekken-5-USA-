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

// Function: sub_00123A90
// Address: 0x123a90 - 0x124008
void sub_00123A90_0x123a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123A90_0x123a90");
#endif

    switch (ctx->pc) {
        case 0x123ad4u: goto label_123ad4;
        case 0x123b10u: goto label_123b10;
        case 0x123b50u: goto label_123b50;
        case 0x123bb8u: goto label_123bb8;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c30u: goto label_123c30;
        case 0x123c40u: goto label_123c40;
        case 0x123d10u: goto label_123d10;
        case 0x123d38u: goto label_123d38;
        case 0x123e00u: goto label_123e00;
        case 0x123e08u: goto label_123e08;
        case 0x123e20u: goto label_123e20;
        case 0x123e30u: goto label_123e30;
        case 0x123f00u: goto label_123f00;
        case 0x123f28u: goto label_123f28;
        default: break;
    }

    ctx->pc = 0x123a90u;

    // 0x123a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x123aa0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123aac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123ab0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x123ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x123ab4: 0x8e180000  lw          $t8, 0x0($s0)
    ctx->pc = 0x123ab4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123ab8: 0x13000007  beqz        $t8, . + 4 + (0x7 << 2)
    ctx->pc = 0x123AB8u;
    {
        const bool branch_taken_0x123ab8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x123ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AB8u;
        // 0x123abc: 0x300602d  daddu       $t4, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ab8) {
            ctx->pc = 0x123AD8u;
            goto label_123ad8;
        }
    }
    ctx->pc = 0x123AC0u;
    // 0x123ac0: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x123ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123ac4: 0x51d40006  beql        $t6, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x123AC4u;
    {
        const bool branch_taken_0x123ac4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 20));
        if (branch_taken_0x123ac4) {
            ctx->pc = 0x123AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123AC4u;
            // 0x123ac8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123AE0u;
            goto label_123ae0;
        }
    }
    ctx->pc = 0x123ACCu;
    // 0x123acc: 0xc049d4a  jal         func_127528
    ctx->pc = 0x123ACCu;
    SET_GPR_U32(ctx, 31, 0x123AD4u);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x123ACCu, 0x123AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AD4u;
label_123ad4:
    // 0x123ad4: 0x0  nop
    ctx->pc = 0x123ad4u;
    // NOP
label_123ad8:
    // 0x123ad8: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123adc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_123ae0:
    // 0x123ae0: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x123AE0u;
    {
        const bool branch_taken_0x123ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AE0u;
        // 0x123ae4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ae0) {
            ctx->pc = 0x123E10u;
            goto label_123e10;
        }
    }
    ctx->pc = 0x123AE8u;
    // 0x123ae8: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x123ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x123aec: 0x2447fc74  addiu       $a3, $v0, -0x38C
    ctx->pc = 0x123aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966388));
    // 0x123af0: 0x11c00029  beqz        $t6, . + 4 + (0x29 << 2)
    ctx->pc = 0x123AF0u;
    {
        const bool branch_taken_0x123af0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AF0u;
        // 0x123af4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123af0) {
            ctx->pc = 0x123B98u;
            goto label_123b98;
        }
    }
    ctx->pc = 0x123AF8u;
    // 0x123af8: 0x8e380000  lw          $t8, 0x0($s1)
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123afc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x123afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x123b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b04: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x123b04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b08: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x123b08u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x123b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123b10:
    // 0x123b10: 0x50f2001b  beql        $a3, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x123B10u;
    {
        const bool branch_taken_0x123b10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x123b10) {
            ctx->pc = 0x123B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B10u;
            // 0x123b14: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B18u;
    // 0x123b18: 0x14b3021  addu        $a2, $t2, $t3
    ctx->pc = 0x123b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x123b1c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x123b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123b20: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123b24: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x123b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123b28: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123b2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x123b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x123b30: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x123B30u;
    {
        const bool branch_taken_0x123b30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x123b30) {
            ctx->pc = 0x123B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B30u;
            // 0x123b34: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B38u;
    // 0x123b38: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x123b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b3c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x123b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b40: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x123b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b44: 0x266dfc74  addiu       $t5, $s3, -0x38C
    ctx->pc = 0x123b44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966388));
    // 0x123b48: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x123b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x123b4c: 0x0  nop
    ctx->pc = 0x123b4cu;
    // NOP
label_123b50:
    // 0x123b50: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x123b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x123b54: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123b58: 0x10ed0008  beq         $a3, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x123B58u;
    {
        const bool branch_taken_0x123b58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x123B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B58u;
        // 0x123b5c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b58) {
            ctx->pc = 0x123B7Cu;
            goto label_123b7c;
        }
    }
    ctx->pc = 0x123B60u;
    // 0x123b60: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x123b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x123b64: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x123b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123b68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123b6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123b70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123b74: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x123B74u;
    {
        const bool branch_taken_0x123b74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B74u;
        // 0x123b78: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b74) {
            ctx->pc = 0x123B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b50;
        }
    }
    ctx->pc = 0x123B7Cu;
label_123b7c:
    // 0x123b7c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x123b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_123b80:
    // 0x123b80: 0x1591021  addu        $v0, $t2, $t9
    ctx->pc = 0x123b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x123b84: 0x1ee182b  sltu        $v1, $t7, $t6
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x123b88: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x123b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x123b8c: 0x16a3821  addu        $a3, $t3, $t2
    ctx->pc = 0x123b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x123b90: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x123B90u;
    {
        const bool branch_taken_0x123b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B90u;
        // 0x123b94: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b90) {
            ctx->pc = 0x123B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b10;
        }
    }
    ctx->pc = 0x123B98u;
label_123b98:
    // 0x123b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b9c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x123b9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ba0: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x123BA0u;
    {
        const bool branch_taken_0x123ba0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BA0u;
        // 0x123ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ba0) {
            ctx->pc = 0x123BF8u;
            goto label_123bf8;
        }
    }
    ctx->pc = 0x123BA8u;
    // 0x123ba8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x123ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123bac: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bb0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x123bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x123bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123bb8:
    // 0x123bb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123BBCu;
    {
        const bool branch_taken_0x123bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BBCu;
        // 0x123bc0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bbc) {
            ctx->pc = 0x123BD8u;
            goto label_123bd8;
        }
    }
    ctx->pc = 0x123BC4u;
    // 0x123bc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123bc8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x123bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x123bcc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x123bccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x123bd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x123BD0u;
    {
        const bool branch_taken_0x123bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BD0u;
        // 0x123bd4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bd0) {
            ctx->pc = 0x123BE8u;
            goto label_123be8;
        }
    }
    ctx->pc = 0x123BD8u;
label_123bd8:
    // 0x123bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123bdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x123bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x123be0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x123be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x123be4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x123be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_123be8:
    // 0x123be8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x123be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x123bec: 0x1ee102b  sltu        $v0, $t7, $t6
    ctx->pc = 0x123becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x123bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x123BF0u;
    {
        const bool branch_taken_0x123bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BF0u;
        // 0x123bf4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bf0) {
            ctx->pc = 0x123BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123bb8;
        }
    }
    ctx->pc = 0x123BF8u;
label_123bf8:
    // 0x123bf8: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x123bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x123bfc: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x123bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x123c00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123c04: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x123c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123c0c: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x123C0Cu;
    {
        const bool branch_taken_0x123c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x123C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C0Cu;
        // 0x123c10: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c0c) {
            ctx->pc = 0x123C20u;
            goto label_123c20;
        }
    }
    ctx->pc = 0x123C14u;
    // 0x123c14: 0xc049d4a  jal         func_127528
    ctx->pc = 0x123C14u;
    SET_GPR_U32(ctx, 31, 0x123C1Cu);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x123C14u, 0x123C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C1Cu;
label_123c1c:
    // 0x123c1c: 0x0  nop
    ctx->pc = 0x123c1cu;
    // NOP
label_123c20:
    // 0x123c20: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123c24: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x123C24u;
    {
        const bool branch_taken_0x123c24 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C24u;
        // 0x123c28: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c24) {
            ctx->pc = 0x123CF4u;
            goto label_123cf4;
        }
    }
    ctx->pc = 0x123C2Cu;
    // 0x123c2c: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_123c30:
    // 0x123c30: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x123c34: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x123C34u;
    {
        const bool branch_taken_0x123c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C34u;
        // 0x123c38: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c34) {
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123C3Cu;
    // 0x123c3c: 0x0  nop
    ctx->pc = 0x123c3cu;
    // NOP
label_123c40:
    // 0x123c40: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x123c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x123c44: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x123c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123c48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x123C48u;
    {
        const bool branch_taken_0x123c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C48u;
        // 0x123c4c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c48) {
            ctx->pc = 0x123CA0u;
            goto label_123ca0;
        }
    }
    ctx->pc = 0x123C50u;
    // 0x123c50: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x123c54: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x123c58: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x123c5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123c60: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x123c64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123c68: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x123c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123c6c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123c70: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123C70u;
    {
        const bool branch_taken_0x123c70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C70u;
        // 0x123c74: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c70) {
            ctx->pc = 0x123CA4u;
            goto label_123ca4;
        }
    }
    ctx->pc = 0x123C78u;
    // 0x123c78: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123c7c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123c80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123c84: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123c88: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123C88u;
    {
        const bool branch_taken_0x123c88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C88u;
        // 0x123c8c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c88) {
            ctx->pc = 0x123CA8u;
            goto label_123ca8;
        }
    }
    ctx->pc = 0x123C90u;
    // 0x123c90: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x123c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x123c94: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x123c94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x123c98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x123C98u;
    {
        const bool branch_taken_0x123c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C98u;
        // 0x123c9c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c98) {
            ctx->pc = 0x123CD8u;
            goto label_123cd8;
        }
    }
    ctx->pc = 0x123CA0u;
label_123ca0:
    // 0x123ca0: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_123ca4:
    // 0x123ca4: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_123ca8:
    // 0x123ca8: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x123ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123cac: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x123cb0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x123cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123cb4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x123cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123cb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123cbc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123cc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x123cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123cc4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123CC4u;
    {
        const bool branch_taken_0x123cc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x123cc4) {
            ctx->pc = 0x123CECu;
            goto label_123cec;
        }
    }
    ctx->pc = 0x123CCCu;
    // 0x123ccc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x123cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x123cd0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x123cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x123cd4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x123cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_123cd8:
    // 0x123cd8: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_123cdc:
    // 0x123cdc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x123cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x123ce0: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x123ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123ce4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x123CE4u;
    {
        const bool branch_taken_0x123ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CE4u;
        // 0x123ce8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ce4) {
            ctx->pc = 0x123C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c40;
        }
    }
    ctx->pc = 0x123CECu;
label_123cec:
    // 0x123cec: 0x55c0ffd0  bnel        $t6, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x123CECu;
    {
        const bool branch_taken_0x123cec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x123cec) {
            ctx->pc = 0x123CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123CECu;
            // 0x123cf0: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c30;
        }
    }
    ctx->pc = 0x123CF4u;
label_123cf4:
    // 0x123cf4: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x123cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x123cf8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x123CF8u;
    {
        const bool branch_taken_0x123cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CF8u;
        // 0x123cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cf8) {
            ctx->pc = 0x123DF8u;
            goto label_123df8;
        }
    }
    ctx->pc = 0x123D00u;
    // 0x123d00: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x123d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x123d04: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123d04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123d08: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x123d08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x123d0c: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x123d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_123d10:
    // 0x123d10: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x123d14: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x123d18: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x123d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x123d1c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x123d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x123d20: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x123d20u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x123d24: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x123d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123d28: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x123D28u;
    {
        const bool branch_taken_0x123d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D28u;
        // 0x123d2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d28) {
            ctx->pc = 0x123DE8u;
            goto label_123de8;
        }
    }
    ctx->pc = 0x123D30u;
    // 0x123d30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123d30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d34: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x123d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_123d38:
    // 0x123d38: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x123d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123d3c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x123D3Cu;
    {
        const bool branch_taken_0x123d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D3Cu;
        // 0x123d40: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d3c) {
            ctx->pc = 0x123D98u;
            goto label_123d98;
        }
    }
    ctx->pc = 0x123D44u;
    // 0x123d44: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123d44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x123d48: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x123d4c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x123d50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123d54: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x123d58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123d5c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123d60: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123d64: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123D64u;
    {
        const bool branch_taken_0x123d64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D64u;
        // 0x123d68: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d64) {
            ctx->pc = 0x123D9Cu;
            goto label_123d9c;
        }
    }
    ctx->pc = 0x123D6Cu;
    // 0x123d6c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x123d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123d70: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123d74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123d78: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123d7c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123D7Cu;
    {
        const bool branch_taken_0x123d7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D7Cu;
        // 0x123d80: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d7c) {
            ctx->pc = 0x123DA0u;
            goto label_123da0;
        }
    }
    ctx->pc = 0x123D84u;
    // 0x123d84: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x123d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x123d88: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x123d88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x123d8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x123D8Cu;
    {
        const bool branch_taken_0x123d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D8Cu;
        // 0x123d90: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d8c) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123D94u;
    // 0x123d94: 0x0  nop
    ctx->pc = 0x123d94u;
    // NOP
label_123d98:
    // 0x123d98: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_123d9c:
    // 0x123d9c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_123da0:
    // 0x123da0: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x123da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123da4: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x123da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x123da8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x123da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123dac: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x123dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123db0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123db4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123db8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x123db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123dbc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123DBCu;
    {
        const bool branch_taken_0x123dbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DBCu;
        // 0x123dc0: 0x2da20002  sltiu       $v0, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dbc) {
            ctx->pc = 0x123DECu;
            goto label_123dec;
        }
    }
    ctx->pc = 0x123DC4u;
    // 0x123dc4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x123dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x123dc8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x123dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x123dcc: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x123dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_123dd0:
    // 0x123dd0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x123dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x123dd4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x123dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123dd8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x123ddc: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x123ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123de0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x123DE0u;
    {
        const bool branch_taken_0x123de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DE0u;
        // 0x123de4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123de0) {
            ctx->pc = 0x123D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123d38;
        }
    }
    ctx->pc = 0x123DE8u;
label_123de8:
    // 0x123de8: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x123de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_123dec:
    // 0x123dec: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x123DECu;
    {
        const bool branch_taken_0x123dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dec) {
            ctx->pc = 0x123D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123d10;
        }
    }
    ctx->pc = 0x123DF4u;
    // 0x123df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123df8:
    // 0x123df8: 0xc048e66  jal         func_123998
    ctx->pc = 0x123DF8u;
    SET_GPR_U32(ctx, 31, 0x123E00u);
    ctx->pc = 0x123DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DF8u;
    // 0x123dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123998u, 0x123DF8u, 0x123E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E00u;
label_123e00:
    // 0x123e00: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x123E00u;
    SET_GPR_U32(ctx, 31, 0x123E08u);
    ctx->pc = 0x123E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E00u;
    // 0x123e04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x123E00u, 0x123E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E08u;
label_123e08:
    // 0x123e08: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x123E08u;
    {
        const bool branch_taken_0x123e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E08u;
        // 0x123e0c: 0x8e180000  lw          $t8, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e08) {
            ctx->pc = 0x123FE4u;
            goto label_123fe4;
        }
    }
    ctx->pc = 0x123E10u;
label_123e10:
    // 0x123e10: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x123e10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e14: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x123E14u;
    {
        const bool branch_taken_0x123e14 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E14u;
        // 0x123e18: 0x1a0782d  daddu       $t7, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e14) {
            ctx->pc = 0x123EE4u;
            goto label_123ee4;
        }
    }
    ctx->pc = 0x123E1Cu;
    // 0x123e1c: 0x25e4ffff  addiu       $a0, $t7, -0x1
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_123e20:
    // 0x123e20: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x123e24: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x123E24u;
    {
        const bool branch_taken_0x123e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E24u;
        // 0x123e28: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e24) {
            ctx->pc = 0x123ECCu;
            goto label_123ecc;
        }
    }
    ctx->pc = 0x123E2Cu;
    // 0x123e2c: 0x0  nop
    ctx->pc = 0x123e2cu;
    // NOP
label_123e30:
    // 0x123e30: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x123e30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x123e34: 0x16e102b  sltu        $v0, $t3, $t6
    ctx->pc = 0x123e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x123e38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x123E38u;
    {
        const bool branch_taken_0x123e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E38u;
        // 0x123e3c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e38) {
            ctx->pc = 0x123E90u;
            goto label_123e90;
        }
    }
    ctx->pc = 0x123E40u;
    // 0x123e40: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x123e44: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x123e48: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x123e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x123e4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x123e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123e50: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x123e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x123e54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123e58: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123e5c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123e60: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123E60u;
    {
        const bool branch_taken_0x123e60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E60u;
        // 0x123e64: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e60) {
            ctx->pc = 0x123E94u;
            goto label_123e94;
        }
    }
    ctx->pc = 0x123E68u;
    // 0x123e68: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123e6c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x123e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123e70: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123e74: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123e78: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123E78u;
    {
        const bool branch_taken_0x123e78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E78u;
        // 0x123e7c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e78) {
            ctx->pc = 0x123E98u;
            goto label_123e98;
        }
    }
    ctx->pc = 0x123E80u;
    // 0x123e80: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x123e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x123e84: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x123e84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x123e88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x123E88u;
    {
        const bool branch_taken_0x123e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E88u;
        // 0x123e8c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e88) {
            ctx->pc = 0x123EC8u;
            goto label_123ec8;
        }
    }
    ctx->pc = 0x123E90u;
label_123e90:
    // 0x123e90: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_123e94:
    // 0x123e94: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_123e98:
    // 0x123e98: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x123e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123e9c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x123e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x123ea0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123ea4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x123ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123ea8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123eac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123eb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x123eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123eb4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123EB4u;
    {
        const bool branch_taken_0x123eb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x123eb4) {
            ctx->pc = 0x123EDCu;
            goto label_123edc;
        }
    }
    ctx->pc = 0x123EBCu;
    // 0x123ebc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x123ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x123ec0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x123ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x123ec4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_123ec8:
    // 0x123ec8: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x123ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_123ecc:
    // 0x123ecc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x123eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x123ed0: 0x4e102b  sltu        $v0, $v0, $t6
    ctx->pc = 0x123ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x123ed4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x123ED4u;
    {
        const bool branch_taken_0x123ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED4u;
        // 0x123ed8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed4) {
            ctx->pc = 0x123E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123e30;
        }
    }
    ctx->pc = 0x123EDCu;
label_123edc:
    // 0x123edc: 0x55e0ffd0  bnel        $t7, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x123EDCu;
    {
        const bool branch_taken_0x123edc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x123edc) {
            ctx->pc = 0x123EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123EDCu;
            // 0x123ee0: 0x25e4ffff  addiu       $a0, $t7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123e20;
        }
    }
    ctx->pc = 0x123EE4u;
label_123ee4:
    // 0x123ee4: 0x2dc20002  sltiu       $v0, $t6, 0x2
    ctx->pc = 0x123ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x123ee8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x123EE8u;
    {
        const bool branch_taken_0x123ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EE8u;
        // 0x123eec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ee8) {
            ctx->pc = 0x123FE8u;
            goto label_123fe8;
        }
    }
    ctx->pc = 0x123EF0u;
    // 0x123ef0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x123ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x123ef4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123ef8: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x123ef8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x123efc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_123f00:
    // 0x123f00: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x123f04: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x123f08: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x123f0c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x123f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x123f10: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x123f10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x123f14: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x123f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123f18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x123F18u;
    {
        const bool branch_taken_0x123f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F18u;
        // 0x123f1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f18) {
            ctx->pc = 0x123FD8u;
            goto label_123fd8;
        }
    }
    ctx->pc = 0x123F20u;
    // 0x123f20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123f20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f24: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_123f28:
    // 0x123f28: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x123f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123f2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x123F2Cu;
    {
        const bool branch_taken_0x123f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F2Cu;
        // 0x123f30: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f2c) {
            ctx->pc = 0x123F88u;
            goto label_123f88;
        }
    }
    ctx->pc = 0x123F34u;
    // 0x123f34: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x123f38: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x123f3c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x123f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x123f40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x123f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123f44: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x123f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x123f48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123f4c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x123f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123f50: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123f54: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123F54u;
    {
        const bool branch_taken_0x123f54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F54u;
        // 0x123f58: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f54) {
            ctx->pc = 0x123F8Cu;
            goto label_123f8c;
        }
    }
    ctx->pc = 0x123F5Cu;
    // 0x123f5c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123f60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123f64: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123f68: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x123f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123f6c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123F6Cu;
    {
        const bool branch_taken_0x123f6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F6Cu;
        // 0x123f70: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f6c) {
            ctx->pc = 0x123F90u;
            goto label_123f90;
        }
    }
    ctx->pc = 0x123F74u;
    // 0x123f74: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x123f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x123f78: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x123f78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x123f7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F7Cu;
        // 0x123f80: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x123FC0u;
            goto label_123fc0;
        }
    }
    ctx->pc = 0x123F84u;
    // 0x123f84: 0x0  nop
    ctx->pc = 0x123f84u;
    // NOP
label_123f88:
    // 0x123f88: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x123f88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_123f8c:
    // 0x123f8c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x123f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_123f90:
    // 0x123f90: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x123f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x123f94: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x123f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x123f98: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x123f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123f9c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123fa0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123fa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123fa8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123fac: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123FACu;
    {
        const bool branch_taken_0x123fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FACu;
        // 0x123fb0: 0x2da20002  sltiu       $v0, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fac) {
            ctx->pc = 0x123FDCu;
            goto label_123fdc;
        }
    }
    ctx->pc = 0x123FB4u;
    // 0x123fb4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x123fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x123fb8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x123fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x123fbc: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x123fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_123fc0:
    // 0x123fc0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x123fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x123fc4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x123fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fc8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x123fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x123fcc: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x123fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123fd0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x123FD0u;
    {
        const bool branch_taken_0x123fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FD0u;
        // 0x123fd4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fd0) {
            ctx->pc = 0x123F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123f28;
        }
    }
    ctx->pc = 0x123FD8u;
label_123fd8:
    // 0x123fd8: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x123fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_123fdc:
    // 0x123fdc: 0x5040ffc8  beql        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x123FDCu;
    {
        const bool branch_taken_0x123fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fdc) {
            ctx->pc = 0x123FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123FDCu;
            // 0x123fe0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123f00;
        }
    }
    ctx->pc = 0x123FE4u;
label_123fe4:
    // 0x123fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123fe8:
    // 0x123fe8: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x123fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123ff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123ff4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123ff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123ffc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x123ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124000: 0x3e00008  jr          $ra
    ctx->pc = 0x124000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124000u;
        // 0x124004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124008u;
}
