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

// Function: sub_001F0BF0
// Address: 0x1f0bf0 - 0x1f0ca0
void sub_001F0BF0_0x1f0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0BF0_0x1f0bf0");
#endif

    ctx->pc = 0x1f0bf0u;

    // 0x1f0bf0: 0x8ca7069c  lw          $a3, 0x69C($a1)
    ctx->pc = 0x1f0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x1f0bf4: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x1f0bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x1f0bf8: 0x14c20027  bne         $a2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F0BF8u;
    {
        const bool branch_taken_0x1f0bf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF8u;
        // 0x1f0bfc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bf8) {
            ctx->pc = 0x1F0C98u;
            goto label_1f0c98;
        }
    }
    ctx->pc = 0x1F0C00u;
    // 0x1f0c00: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x1f0c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x1f0c04: 0x14c20024  bne         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0C04u;
    {
        const bool branch_taken_0x1f0c04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0c04) {
            ctx->pc = 0x1F0C98u;
            goto label_1f0c98;
        }
    }
    ctx->pc = 0x1F0C0Cu;
    // 0x1f0c0c: 0x18e00022  blez        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F0C0Cu;
    {
        const bool branch_taken_0x1f0c0c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1f0c0c) {
            ctx->pc = 0x1F0C98u;
            goto label_1f0c98;
        }
    }
    ctx->pc = 0x1F0C14u;
    // 0x1f0c14: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0c18: 0x2c62012c  sltiu       $v0, $v1, 0x12C
    ctx->pc = 0x1f0c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)300) ? 1 : 0);
    // 0x1f0c1c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0C1Cu;
    {
        const bool branch_taken_0x1f0c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C1Cu;
        // 0x1f0c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c1c) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C24u;
    // 0x1f0c24: 0x2c620258  sltiu       $v0, $v1, 0x258
    ctx->pc = 0x1f0c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0c28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0C28u;
    {
        const bool branch_taken_0x1f0c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C28u;
        // 0x1f0c2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c28) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C30u;
    // 0x1f0c30: 0x2c620384  sltiu       $v0, $v1, 0x384
    ctx->pc = 0x1f0c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
    // 0x1f0c34: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F0C34u;
    {
        const bool branch_taken_0x1f0c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C34u;
        // 0x1f0c38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c34) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C3Cu;
    // 0x1f0c3c: 0x2c6204b0  sltiu       $v0, $v1, 0x4B0
    ctx->pc = 0x1f0c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1200) ? 1 : 0);
    // 0x1f0c40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0C40u;
    {
        const bool branch_taken_0x1f0c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C40u;
        // 0x1f0c44: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c40) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C48u;
    // 0x1f0c48: 0x2c6205dc  sltiu       $v0, $v1, 0x5DC
    ctx->pc = 0x1f0c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1500) ? 1 : 0);
    // 0x1f0c4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0C4Cu;
    {
        const bool branch_taken_0x1f0c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C4Cu;
        // 0x1f0c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c4c) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C54u;
    // 0x1f0c54: 0x2c620708  sltiu       $v0, $v1, 0x708
    ctx->pc = 0x1f0c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1800) ? 1 : 0);
    // 0x1f0c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0C58u;
    {
        const bool branch_taken_0x1f0c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C58u;
        // 0x1f0c5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c58) {
            ctx->pc = 0x1F0C70u;
            goto label_1f0c70;
        }
    }
    ctx->pc = 0x1F0C60u;
    // 0x1f0c60: 0x2c630834  sltiu       $v1, $v1, 0x834
    ctx->pc = 0x1f0c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2100) ? 1 : 0);
    // 0x1f0c64: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0c68: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f0c6c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1f0c6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1f0c70:
    // 0x1f0c70: 0x8ca306a0  lw          $v1, 0x6A0($a1)
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1696)));
    // 0x1f0c74: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f0c78: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1f0c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1f0c7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0c80: 0x8c843268  lw          $a0, 0x3268($a0)
    ctx->pc = 0x1f0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12904)));
    // 0x1f0c84: 0x33a03  sra         $a3, $v1, 8
    ctx->pc = 0x1f0c84u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f0c88: 0xe41018  mult        $v0, $a3, $a0
    ctx->pc = 0x1f0c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0c8c: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x1f0c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f0c90: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x1f0c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f0c94: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1f0c94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1f0c98:
    // 0x1f0c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C98u;
        // 0x1f0c9c: 0xaca706a4  sw          $a3, 0x6A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1700), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0CA0u;
}
