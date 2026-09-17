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

// Function: sub_002FFCF0
// Address: 0x2ffcf0 - 0x2ffe00
void sub_002FFCF0_0x2ffcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFCF0_0x2ffcf0");
#endif

    switch (ctx->pc) {
        case 0x2ffd00u: goto label_2ffd00;
        case 0x2ffd4cu: goto label_2ffd4c;
        case 0x2ffda0u: goto label_2ffda0;
        default: break;
    }

    ctx->pc = 0x2ffcf0u;

    // 0x2ffcf0: 0x248d0008  addiu       $t5, $a0, 0x8
    ctx->pc = 0x2ffcf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ffcf4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2ffcf4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcf8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x2ffcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd00:
    // 0x2ffd00: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ffd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ffd04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ffd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ffd08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ffd0c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2ffd0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ffd10: 0x0  nop
    ctx->pc = 0x2ffd10u;
    // NOP
    // 0x2ffd14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FFD14u;
    {
        const bool branch_taken_0x2ffd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD14u;
        // 0x2ffd18: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd14) {
            ctx->pc = 0x2FFD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffd00;
        }
    }
    ctx->pc = 0x2FFD1Cu;
    // 0x2ffd1c: 0x8dc708c4  lw          $a3, 0x8C4($t6)
    ctx->pc = 0x2ffd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 2244)));
    // 0x2ffd20: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFDF4u;
            goto label_2ffdf4;
        }
    }
    ctx->pc = 0x2FFD28u;
    // 0x2ffd28: 0x248c0038  addiu       $t4, $a0, 0x38
    ctx->pc = 0x2ffd28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2ffd2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ffd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ffd30: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2ffd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2ffd34: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2ffd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2ffd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffd3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ffd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffd40: 0x1485002c  bne         $a0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FFD40u;
    {
        const bool branch_taken_0x2ffd40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ffd40) {
            ctx->pc = 0x2FFDF4u;
            goto label_2ffdf4;
        }
    }
    ctx->pc = 0x2FFD48u;
    // 0x2ffd48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ffd48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd4c:
    // 0x2ffd4c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x2ffd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2ffd50: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ffd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ffd54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ffd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ffd58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ffd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffd5c: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x2ffd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ffd60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFD60u;
    {
        const bool branch_taken_0x2ffd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd60) {
            ctx->pc = 0x2FFD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD60u;
            // 0x2ffd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD78u;
            goto label_2ffd78;
        }
    }
    ctx->pc = 0x2FFD68u;
    // 0x2ffd68: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2ffd6c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ffd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ffd70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFD70u;
    {
        const bool branch_taken_0x2ffd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD70u;
        // 0x2ffd74: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd70) {
            ctx->pc = 0x2FFD7Cu;
            goto label_2ffd7c;
        }
    }
    ctx->pc = 0x2FFD78u;
label_2ffd78:
    // 0x2ffd78: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2ffd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_2ffd7c:
    // 0x2ffd7c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2ffd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ffd80: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2ffd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ffd84: 0x1a25821  addu        $t3, $t5, $v0
    ctx->pc = 0x2ffd84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2ffd88: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FFD88u;
    {
        const bool branch_taken_0x2ffd88 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2FFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD88u;
        // 0x2ffd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd88) {
            ctx->pc = 0x2FFDDCu;
            goto label_2ffddc;
        }
    }
    ctx->pc = 0x2FFD90u;
    // 0x2ffd90: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ffd94: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd98: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ffd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ffd9c: 0x0  nop
    ctx->pc = 0x2ffd9cu;
    // NOP
label_2ffda0:
    // 0x2ffda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ffda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffda4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ffda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ffda8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ffda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ffdac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ffdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ffdb0: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x2ffdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2ffdb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ffdb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFDB8u;
    {
        const bool branch_taken_0x2ffdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDB8u;
        // 0x2ffdbc: 0xa8382a  slt         $a3, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdb8) {
            ctx->pc = 0x2FFDCCu;
            goto label_2ffdcc;
        }
    }
    ctx->pc = 0x2FFDC0u;
    // 0x2ffdc0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ffdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffdc4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2ffdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2ffdc8: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2ffdc8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ffdcc:
    // 0x2ffdcc: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFDCCu;
    {
        const bool branch_taken_0x2ffdcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDCCu;
        // 0x2ffdd0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdcc) {
            ctx->pc = 0x2FFDE0u;
            goto label_2ffde0;
        }
    }
    ctx->pc = 0x2FFDD4u;
    // 0x2ffdd4: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FFDD4u;
    {
        const bool branch_taken_0x2ffdd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD4u;
        // 0x2ffdd8: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd4) {
            ctx->pc = 0x2FFDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffda0;
        }
    }
    ctx->pc = 0x2FFDDCu;
label_2ffddc:
    // 0x2ffddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ffddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffde0:
    // 0x2ffde0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2ffde0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2ffde4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x2ffde4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x2ffde8: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x2ffde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ffdec: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2FFDECu;
    {
        const bool branch_taken_0x2ffdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdec) {
            ctx->pc = 0x2FFDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFDECu;
            // 0x2ffdf0: 0x8dc708c4  lw          $a3, 0x8C4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 2244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffd4c;
        }
    }
    ctx->pc = 0x2FFDF4u;
label_2ffdf4:
    // 0x2ffdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFDFCu;
    // 0x2ffdfc: 0x0  nop
    ctx->pc = 0x2ffdfcu;
    // NOP
    ctx->pc = 0x2ffe00u;
}
