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

// Function: sub_00251C70
// Address: 0x251c70 - 0x251d58
void sub_00251C70_0x251c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251C70_0x251c70");
#endif

    switch (ctx->pc) {
        case 0x251c94u: goto label_251c94;
        case 0x251ca8u: goto label_251ca8;
        case 0x251ce0u: goto label_251ce0;
        case 0x251ce8u: goto label_251ce8;
        case 0x251d20u: goto label_251d20;
        default: break;
    }

    ctx->pc = 0x251c70u;

    // 0x251c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251c78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x251c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x251c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251c80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251c84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x251c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x251c88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x251c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x251c8c: 0xc040540  jal         func_101500
    ctx->pc = 0x251C8Cu;
    SET_GPR_U32(ctx, 31, 0x251C94u);
    ctx->pc = 0x101500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101500u, 0x251C8Cu, 0x251C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C94u;
label_251c94:
    // 0x251c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x251c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x251c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x251ca0: 0xc0940ec  jal         func_2503B0
    ctx->pc = 0x251CA0u;
    SET_GPR_U32(ctx, 31, 0x251CA8u);
    ctx->pc = 0x251CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CA0u;
    // 0x251ca4: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2503B0u, 0x251CA0u, 0x251CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CA8u;
label_251ca8:
    // 0x251ca8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x251ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x251cac: 0x284200d7  slti        $v0, $v0, 0xD7
    ctx->pc = 0x251cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)215) ? 1 : 0);
    // 0x251cb0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x251CB0u;
    {
        const bool branch_taken_0x251cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CB0u;
        // 0x251cb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cb0) {
            ctx->pc = 0x251D38u;
            goto label_251d38;
        }
    }
    ctx->pc = 0x251CB8u;
    // 0x251cb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x251cbc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x251cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x251cc0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x251cc4: 0x24727f70  addiu       $s2, $v1, 0x7F70
    ctx->pc = 0x251cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32624));
    // 0x251cc8: 0x248685e0  addiu       $a2, $a0, -0x7A20
    ctx->pc = 0x251cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936032));
    // 0x251ccc: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x251CCCu;
    {
        const bool branch_taken_0x251ccc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CCCu;
        // 0x251cd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ccc) {
            ctx->pc = 0x251D34u;
            goto label_251d34;
        }
    }
    ctx->pc = 0x251CD4u;
    // 0x251cd4: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x251cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x251cd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x251cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251cdc: 0x0  nop
    ctx->pc = 0x251cdcu;
    // NOP
label_251ce0:
    // 0x251ce0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251CE0u;
    {
        const bool branch_taken_0x251ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CE0u;
        // 0x251ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ce0) {
            ctx->pc = 0x251D04u;
            goto label_251d04;
        }
    }
    ctx->pc = 0x251CE8u;
label_251ce8:
    // 0x251ce8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251cec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x251cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x251cf0: 0xf0182b  sltu        $v1, $a3, $s0
    ctx->pc = 0x251cf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x251cf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x251cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x251cf8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x251cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x251cfc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x251CFCu;
    {
        const bool branch_taken_0x251cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CFCu;
        // 0x251d00: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cfc) {
            ctx->pc = 0x251CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251ce8;
        }
    }
    ctx->pc = 0x251D04u;
label_251d04:
    // 0x251d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d08: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x251d0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x251d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d10: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x251d14: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x251d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d18: 0xc093884  jal         func_24E210
    ctx->pc = 0x251D18u;
    SET_GPR_U32(ctx, 31, 0x251D20u);
    ctx->pc = 0x251D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D18u;
    // 0x251d1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E210u, 0x251D18u, 0x251D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D20u;
label_251d20:
    // 0x251d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x251d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x251d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x251d28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x251d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251d2c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x251D2Cu;
    {
        const bool branch_taken_0x251d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D2Cu;
        // 0x251d30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d2c) {
            ctx->pc = 0x251CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251ce0;
        }
    }
    ctx->pc = 0x251D34u;
label_251d34:
    // 0x251d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251d38:
    // 0x251d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x251d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251d44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x251d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251d48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x251d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x251D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D4Cu;
        // 0x251d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251D54u;
    // 0x251d54: 0x0  nop
    ctx->pc = 0x251d54u;
    // NOP
    ctx->pc = 0x251d58u;
}
