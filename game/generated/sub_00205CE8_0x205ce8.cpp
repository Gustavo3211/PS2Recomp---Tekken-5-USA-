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

// Function: sub_00205CE8
// Address: 0x205ce8 - 0x205da8
void sub_00205CE8_0x205ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205CE8_0x205ce8");
#endif

    switch (ctx->pc) {
        case 0x205d20u: goto label_205d20;
        case 0x205d60u: goto label_205d60;
        default: break;
    }

    ctx->pc = 0x205ce8u;

    // 0x205ce8: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x205ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x205cec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x205cecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x205cf0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x205cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x205cf4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x205CF4u;
    {
        const bool branch_taken_0x205cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CF4u;
        // 0x205cf8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cf4) {
            ctx->pc = 0x205DA0u;
            goto label_205da0;
        }
    }
    ctx->pc = 0x205CFCu;
    // 0x205cfc: 0x948a003c  lhu         $t2, 0x3C($a0)
    ctx->pc = 0x205cfcu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x205d00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x205d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d04: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x205d08: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x205d0c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x205d10: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x205d10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x205d14: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
    // 0x205d18: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x205d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x205d1c: 0x0  nop
    ctx->pc = 0x205d1cu;
    // NOP
label_205d20:
    // 0x205d20: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x205d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205D24u;
    {
        const bool branch_taken_0x205d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D24u;
        // 0x205d28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d24) {
            ctx->pc = 0x205D38u;
            goto label_205d38;
        }
    }
    ctx->pc = 0x205D2Cu;
    // 0x205d2c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x205d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x205d30: 0x1046001b  beq         $v0, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x205D30u;
    {
        const bool branch_taken_0x205d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x205d30) {
            ctx->pc = 0x205DA0u;
            goto label_205da0;
        }
    }
    ctx->pc = 0x205D38u;
label_205d38:
    // 0x205d38: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x205d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x205d3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x205D3Cu;
    {
        const bool branch_taken_0x205d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D3Cu;
        // 0x205d40: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d3c) {
            ctx->pc = 0x205D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205d20;
        }
    }
    ctx->pc = 0x205D44u;
    // 0x205d44: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x205d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x205d48: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x205d4c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x205d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x205d50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205d50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d54: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x205d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
    // 0x205d58: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x205d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x205d5c: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x205d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205d60:
    // 0x205d60: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x205d64: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x205D64u;
    {
        const bool branch_taken_0x205d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D64u;
        // 0x205d68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d64) {
            ctx->pc = 0x205D94u;
            goto label_205d94;
        }
    }
    ctx->pc = 0x205D6Cu;
    // 0x205d6c: 0xa5250002  sh          $a1, 0x2($t1)
    ctx->pc = 0x205d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x205d70: 0x94820220  lhu         $v0, 0x220($a0)
    ctx->pc = 0x205d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x205d74: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x205d74u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x205d78: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x205d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x205d7c: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x205d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x205d80: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x205d80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x205d84: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x205d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x205d88: 0x7d220010  sq          $v0, 0x10($t1)
    ctx->pc = 0x205d88u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 2));
    // 0x205d8c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x205d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x205d90: 0x7d230020  sq          $v1, 0x20($t1)
    ctx->pc = 0x205d90u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 3));
label_205d94:
    // 0x205d94: 0x29420008  slti        $v0, $t2, 0x8
    ctx->pc = 0x205d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x205d98: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x205D98u;
    {
        const bool branch_taken_0x205d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D98u;
        // 0x205d9c: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d98) {
            ctx->pc = 0x205D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205d60;
        }
    }
    ctx->pc = 0x205DA0u;
label_205da0:
    // 0x205da0: 0x3e00008  jr          $ra
    ctx->pc = 0x205DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205DA8u;
}
