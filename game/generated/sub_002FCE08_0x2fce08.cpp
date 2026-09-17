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

// Function: sub_002FCE08
// Address: 0x2fce08 - 0x2fcef8
void sub_002FCE08_0x2fce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCE08_0x2fce08");
#endif

    switch (ctx->pc) {
        case 0x2fce28u: goto label_2fce28;
        case 0x2fce40u: goto label_2fce40;
        case 0x2fce90u: goto label_2fce90;
        case 0x2fce9cu: goto label_2fce9c;
        case 0x2fced0u: goto label_2fced0;
        default: break;
    }

    ctx->pc = 0x2fce08u;

    // 0x2fce08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fce0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fce10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fce14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fce18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fce1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fce20: 0xc0bf354  jal         func_2FCD50
    ctx->pc = 0x2FCE20u;
    SET_GPR_U32(ctx, 31, 0x2FCE28u);
    ctx->pc = 0x2FCE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE20u;
    // 0x2fce24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD50u, 0x2FCE20u, 0x2FCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE28u;
label_2fce28:
    // 0x2fce28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fce28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce30: 0x1623002a  bne         $s1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FCE30u;
    {
        const bool branch_taken_0x2fce30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE30u;
        // 0x2fce34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce30) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCE38u;
    // 0x2fce38: 0xc0bf36e  jal         func_2FCDB8
    ctx->pc = 0x2FCE38u;
    SET_GPR_U32(ctx, 31, 0x2FCE40u);
    ctx->pc = 0x2FCE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE38u;
    // 0x2fce3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCDB8u, 0x2FCE38u, 0x2FCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE40u;
label_2fce40:
    // 0x2fce40: 0x14510026  bne         $v0, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FCE40u;
    {
        const bool branch_taken_0x2fce40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE40u;
        // 0x2fce44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce40) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCE48u;
    // 0x2fce48: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2fce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fce4c: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FCE4Cu;
    {
        const bool branch_taken_0x2fce4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fce4c) {
            ctx->pc = 0x2FCE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCE4Cu;
            // 0x2fce50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCEE0u;
            goto label_2fcee0;
        }
    }
    ctx->pc = 0x2FCE54u;
    // 0x2fce54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2fce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fce58: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FCE58u;
    {
        const bool branch_taken_0x2fce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE58u;
        // 0x2fce5c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce58) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCE60u;
    // 0x2fce60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2fce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fce64: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fce68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fce6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2fce70: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2fce70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2fce74: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2fce74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2fce78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fce78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce7c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2fce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x2fce80: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FCE80u;
    {
        const bool branch_taken_0x2fce80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE80u;
        // 0x2fce84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce80) {
            ctx->pc = 0x2FCEB8u;
            goto label_2fceb8;
        }
    }
    ctx->pc = 0x2FCE88u;
    // 0x2fce88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fce88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce8c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2fce90:
    // 0x2fce90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce94: 0xc0bf2fe  jal         func_2FCBF8
    ctx->pc = 0x2FCE94u;
    SET_GPR_U32(ctx, 31, 0x2FCE9Cu);
    ctx->pc = 0x2FCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE94u;
    // 0x2fce98: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCBF8u, 0x2FCE94u, 0x2FCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE9Cu;
label_2fce9c:
    // 0x2fce9c: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2FCE9Cu;
    {
        const bool branch_taken_0x2fce9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2FCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE9Cu;
        // 0x2fcea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce9c) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCEA4u;
    // 0x2fcea4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fcea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fcea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fceac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2fceacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fceb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FCEB0u;
    {
        const bool branch_taken_0x2fceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fceb0) {
            ctx->pc = 0x2FCEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCEB0u;
            // 0x2fceb4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fce90;
        }
    }
    ctx->pc = 0x2FCEB8u;
label_2fceb8:
    // 0x2fceb8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2fceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fcebc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2fcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2fcec0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCEC0u;
    {
        const bool branch_taken_0x2fcec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEC0u;
        // 0x2fcec4: 0x24454d58  addiu       $a1, $v0, 0x4D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcec0) {
            ctx->pc = 0x2FCED8u;
            goto label_2fced8;
        }
    }
    ctx->pc = 0x2FCEC8u;
    // 0x2fcec8: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2FCEC8u;
    SET_GPR_U32(ctx, 31, 0x2FCED0u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2FCEC8u, 0x2FCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCED0u;
label_2fced0:
    // 0x2fced0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCED0u;
    {
        const bool branch_taken_0x2fced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCED0u;
        // 0x2fced4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fced0) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCED8u;
label_2fced8:
    // 0x2fced8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcedc:
    // 0x2fcedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcee0:
    // 0x2fcee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fcee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fcee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fcee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fcee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fceec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEF0u;
        // 0x2fcef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCEF8u;
}
