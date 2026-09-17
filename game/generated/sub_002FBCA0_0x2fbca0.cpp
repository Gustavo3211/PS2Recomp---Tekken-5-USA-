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

// Function: sub_002FBCA0
// Address: 0x2fbca0 - 0x2fbd70
void sub_002FBCA0_0x2fbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBCA0_0x2fbca0");
#endif

    switch (ctx->pc) {
        case 0x2fbcf8u: goto label_2fbcf8;
        case 0x2fbd0cu: goto label_2fbd0c;
        default: break;
    }

    ctx->pc = 0x2fbca0u;

    // 0x2fbca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbcac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbcb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fbcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fbcb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fbcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fbcb8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2fbcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fbcbc: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FBCBCu;
    {
        const bool branch_taken_0x2fbcbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCBCu;
        // 0x2fbcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcbc) {
            ctx->pc = 0x2FBD58u;
            goto label_2fbd58;
        }
    }
    ctx->pc = 0x2FBCC4u;
    // 0x2fbcc4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2fbcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2fbcc8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBCC8u;
    {
        const bool branch_taken_0x2fbcc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbcc8) {
            ctx->pc = 0x2FBCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBCC8u;
            // 0x2fbccc: 0x9625000e  lhu         $a1, 0xE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBCD8u;
            goto label_2fbcd8;
        }
    }
    ctx->pc = 0x2FBCD0u;
    // 0x2fbcd0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2FBCD0u;
    {
        const bool branch_taken_0x2fbcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCD0u;
        // 0x2fbcd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcd0) {
            ctx->pc = 0x2FBD5Cu;
            goto label_2fbd5c;
        }
    }
    ctx->pc = 0x2FBCD8u;
label_2fbcd8:
    // 0x2fbcd8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2fbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fbcdc: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FBCDCu;
    {
        const bool branch_taken_0x2fbcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCDCu;
        // 0x2fbce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcdc) {
            ctx->pc = 0x2FBD58u;
            goto label_2fbd58;
        }
    }
    ctx->pc = 0x2FBCE4u;
    // 0x2fbce4: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FBCE4u;
    {
        const bool branch_taken_0x2fbce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCE4u;
        // 0x2fbce8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbce4) {
            ctx->pc = 0x2FBD54u;
            goto label_2fbd54;
        }
    }
    ctx->pc = 0x2FBCECu;
    // 0x2fbcec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBCECu;
    {
        const bool branch_taken_0x2fbcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCECu;
        // 0x2fbcf0: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcec) {
            ctx->pc = 0x2FBD00u;
            goto label_2fbd00;
        }
    }
    ctx->pc = 0x2FBCF4u;
    // 0x2fbcf4: 0x0  nop
    ctx->pc = 0x2fbcf4u;
    // NOP
label_2fbcf8:
    // 0x2fbcf8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2fbcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2fbcfc: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2fbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fbd00:
    // 0x2fbd00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fbd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd04: 0xc0bf3e0  jal         func_2FCF80
    ctx->pc = 0x2FBD04u;
    SET_GPR_U32(ctx, 31, 0x2FBD0Cu);
    ctx->pc = 0x2FBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD04u;
    // 0x2fbd08: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF80u, 0x2FBD04u, 0x2FBD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD0Cu;
label_2fbd0c:
    // 0x2fbd0c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2fbd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2fbd10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fbd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbd14: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2fbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x2fbd18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fbd18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fbd1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fbd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd24: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbd24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbd28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2fbd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbd2c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fbd2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2fbd30: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBD30u;
    {
        const bool branch_taken_0x2fbd30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD30u;
        // 0x2fbd34: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd30) {
            ctx->pc = 0x2FBD40u;
            goto label_2fbd40;
        }
    }
    ctx->pc = 0x2FBD38u;
    // 0x2fbd38: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2fbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fbd3c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2fbd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fbd40:
    // 0x2fbd40: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x2fbd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x2fbd44: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbd44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbd48: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2fbd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbd4c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2FBD4Cu;
    {
        const bool branch_taken_0x2fbd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbd4c) {
            ctx->pc = 0x2FBD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBD4Cu;
            // 0x2fbd50: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbcf8;
        }
    }
    ctx->pc = 0x2FBD54u;
label_2fbd54:
    // 0x2fbd54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbd58:
    // 0x2fbd58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbd5c:
    // 0x2fbd5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbd5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbd60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fbd60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbd64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fbd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fbd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD68u;
        // 0x2fbd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBD70u;
}
