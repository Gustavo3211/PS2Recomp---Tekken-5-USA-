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

// Function: sub_00246B68
// Address: 0x246b68 - 0x246c80
void sub_00246B68_0x246b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246B68_0x246b68");
#endif

    switch (ctx->pc) {
        case 0x246b78u: goto label_246b78;
        case 0x246b90u: goto label_246b90;
        case 0x246bb0u: goto label_246bb0;
        case 0x246be0u: goto label_246be0;
        case 0x246c10u: goto label_246c10;
        case 0x246c18u: goto label_246c18;
        default: break;
    }

    ctx->pc = 0x246b68u;

    // 0x246b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246b70: 0xc04054c  jal         func_101530
    ctx->pc = 0x246B70u;
    SET_GPR_U32(ctx, 31, 0x246B78u);
    ctx->pc = 0x101530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101530u, 0x246B70u, 0x246B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B78u;
label_246b78:
    // 0x246b78: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x246b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x246b7c: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x246b80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x246b80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b84: 0x246e6928  addiu       $t6, $v1, 0x6928
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 26920));
    // 0x246b88: 0x3c0d0047  lui         $t5, 0x47
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)71 << 16));
    // 0x246b8c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x246b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_246b90:
    // 0x246b90: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x246b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x246b94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x246b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x246b98: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x246b9c: 0xa4aa0016  sh          $t2, 0x16($a1)
    ctx->pc = 0x246b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 10));
    // 0x246ba0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x246ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x246ba4: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x246ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x246ba8: 0x144a0008  bne         $v0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x246BA8u;
    {
        const bool branch_taken_0x246ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x246BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA8u;
        // 0x246bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ba8) {
            ctx->pc = 0x246BCCu;
            goto label_246bcc;
        }
    }
    ctx->pc = 0x246BB0u;
label_246bb0:
    // 0x246bb0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x246bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x246bb4: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x246bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x246bb8: 0x0  nop
    ctx->pc = 0x246bb8u;
    // NOP
    // 0x246bbc: 0x0  nop
    ctx->pc = 0x246bbcu;
    // NOP
    // 0x246bc0: 0x0  nop
    ctx->pc = 0x246bc0u;
    // NOP
    // 0x246bc4: 0x104afffa  beq         $v0, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x246BC4u;
    {
        const bool branch_taken_0x246bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x246BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BC4u;
        // 0x246bc8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bc4) {
            ctx->pc = 0x246BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246bb0;
        }
    }
    ctx->pc = 0x246BCCu;
label_246bcc:
    // 0x246bcc: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x246bd0: 0xa4ab0014  sh          $t3, 0x14($a1)
    ctx->pc = 0x246bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 11));
    // 0x246bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bd8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x246bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bdc: 0x0  nop
    ctx->pc = 0x246bdcu;
    // NOP
label_246be0:
    // 0x246be0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x246be4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x246be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x246be8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x246be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x246bec: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x246becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x246bf0: 0x0  nop
    ctx->pc = 0x246bf0u;
    // NOP
    // 0x246bf4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x246BF4u;
    {
        const bool branch_taken_0x246bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF4u;
        // 0x246bf8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bf4) {
            ctx->pc = 0x246BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246be0;
        }
    }
    ctx->pc = 0x246BFCu;
    // 0x246bfc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x246bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x246c00: 0x19600017  blez        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x246C00u;
    {
        const bool branch_taken_0x246c00 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x246C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C00u;
        // 0x246c04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c00) {
            ctx->pc = 0x246C60u;
            goto label_246c60;
        }
    }
    ctx->pc = 0x246C08u;
    // 0x246c08: 0x25ac0e18  addiu       $t4, $t5, 0xE18
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 3608));
    // 0x246c0c: 0x0  nop
    ctx->pc = 0x246c0cu;
    // NOP
label_246c10:
    // 0x246c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c14: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x246c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_246c18:
    // 0x246c18: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x246c18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x246c1c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x246c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x246c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246c24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x246c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x246c28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246C28u;
    {
        const bool branch_taken_0x246c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C28u;
        // 0x246c2c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c28) {
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C30u;
    // 0x246c30: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x246c34: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x246c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246c38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246c3c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x246c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_246c40:
    // 0x246c40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x246c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x246c44: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x246c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x246c48: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x246C48u;
    {
        const bool branch_taken_0x246c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C48u;
        // 0x246c4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c48) {
            ctx->pc = 0x246C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246c18;
        }
    }
    ctx->pc = 0x246C50u;
    // 0x246c50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x246c54: 0x12b102a  slt         $v0, $t1, $t3
    ctx->pc = 0x246c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x246c58: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x246C58u;
    {
        const bool branch_taken_0x246c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C58u;
        // 0x246c5c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c58) {
            ctx->pc = 0x246C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246c10;
        }
    }
    ctx->pc = 0x246C60u;
label_246c60:
    // 0x246c60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x246c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x246c64: 0x29420021  slti        $v0, $t2, 0x21
    ctx->pc = 0x246c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x246c68: 0x5440ffc9  bnel        $v0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x246C68u;
    {
        const bool branch_taken_0x246c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246c68) {
            ctx->pc = 0x246C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C68u;
            // 0x246c6c: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246b90;
        }
    }
    ctx->pc = 0x246C70u;
    // 0x246c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246c74: 0x3e00008  jr          $ra
    ctx->pc = 0x246C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C74u;
        // 0x246c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246C7Cu;
    // 0x246c7c: 0x0  nop
    ctx->pc = 0x246c7cu;
    // NOP
    ctx->pc = 0x246c80u;
}
