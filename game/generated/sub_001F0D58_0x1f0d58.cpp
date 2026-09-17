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

// Function: sub_001F0D58
// Address: 0x1f0d58 - 0x1f0e40
void sub_001F0D58_0x1f0d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0D58_0x1f0d58");
#endif

    switch (ctx->pc) {
        case 0x1f0d98u: goto label_1f0d98;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0e10u: goto label_1f0e10;
        default: break;
    }

    ctx->pc = 0x1f0d58u;

    // 0x1f0d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0d5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f0d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0d64: 0x2451f4fc  addiu       $s1, $v0, -0xB04
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964476));
    // 0x1f0d68: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f0d6c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f0d70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f0d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0d80: 0x24723288  addiu       $s2, $v1, 0x3288
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12936));
    // 0x1f0d84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0d88: 0x263300c0  addiu       $s3, $s1, 0xC0
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1f0d8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f0d90: 0x24948818  addiu       $s4, $a0, -0x77E8
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936600));
    // 0x1f0d94: 0x104840  sll         $t1, $s0, 1
    ctx->pc = 0x1f0d94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1f0d98:
    // 0x1f0d98: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x1f0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1f0d9c: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x1f0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1f0da0: 0x543821  addu        $a3, $v0, $s4
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f0da4: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1f0da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dac: 0x0  nop
    ctx->pc = 0x1f0dacu;
    // NOP
label_1f0db0:
    // 0x1f0db0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1f0db4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f0db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f0db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f0dbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0dc0: 0x28c50008  slti        $a1, $a2, 0x8
    ctx->pc = 0x1f0dc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f0dc4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1f0dc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f0dcc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f0dd0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f0dd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0dd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f0ddc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f0ddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0de0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1f0de0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0de4: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F0DE4u;
    {
        const bool branch_taken_0x1f0de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DE4u;
        // 0x1f0de8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0de4) {
            ctx->pc = 0x1F0DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0db0;
        }
    }
    ctx->pc = 0x1F0DECu;
    // 0x1f0dec: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1f0df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0df4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0df8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f0dfc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1f0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1f0e00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f0e04: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0e08: 0xc08e714  jal         func_239C50
    ctx->pc = 0x1F0E08u;
    SET_GPR_U32(ctx, 31, 0x1F0E10u);
    ctx->pc = 0x1F0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E08u;
    // 0x1f0e0c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C50u, 0x1F0E08u, 0x1F0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E10u;
label_1f0e10:
    // 0x1f0e10: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f0e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f0e14: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1F0E14u;
    {
        const bool branch_taken_0x1f0e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E14u;
        // 0x1f0e18: 0x104840  sll         $t1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e14) {
            ctx->pc = 0x1F0D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0d98;
        }
    }
    ctx->pc = 0x1F0E1Cu;
    // 0x1f0e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f0e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0e2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0e30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f0e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E34u;
        // 0x1f0e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E3Cu;
    // 0x1f0e3c: 0x0  nop
    ctx->pc = 0x1f0e3cu;
    // NOP
    ctx->pc = 0x1f0e40u;
}
