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

// Function: sub_00298040
// Address: 0x298040 - 0x298128
void sub_00298040_0x298040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298040_0x298040");
#endif

    switch (ctx->pc) {
        case 0x29807cu: goto label_29807c;
        case 0x298088u: goto label_298088;
        case 0x298098u: goto label_298098;
        case 0x2980a4u: goto label_2980a4;
        case 0x2980bcu: goto label_2980bc;
        case 0x2980d0u: goto label_2980d0;
        case 0x2980f0u: goto label_2980f0;
        case 0x2980f8u: goto label_2980f8;
        case 0x298104u: goto label_298104;
        default: break;
    }

    ctx->pc = 0x298040u;

    // 0x298040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298044: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x298044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x298048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x298048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29804c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29804cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298050: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x298050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x298054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29805c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29805cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x298060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x298064: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x298064u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x298068: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x298068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29806c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x298070: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x298070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x298074: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x298074u;
    SET_GPR_U32(ctx, 31, 0x29807Cu);
    ctx->pc = 0x298078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298074u;
    // 0x298078: 0x36311401  ori         $s1, $s1, 0x1401 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)5121);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x298074u, 0x29807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29807Cu;
label_29807c:
    // 0x29807c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298080: 0xc097d14  jal         func_25F450
    ctx->pc = 0x298080u;
    SET_GPR_U32(ctx, 31, 0x298088u);
    ctx->pc = 0x298084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298080u;
    // 0x298084: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x298080u, 0x298088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298088u;
label_298088:
    // 0x298088: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x298088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29808c: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x29808Cu;
    {
        const bool branch_taken_0x29808c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x29808c) {
            ctx->pc = 0x2980DCu;
            goto label_2980dc;
        }
    }
    ctx->pc = 0x298094u;
    // 0x298094: 0x0  nop
    ctx->pc = 0x298094u;
    // NOP
label_298098:
    // 0x298098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29809c: 0xc097d16  jal         func_25F458
    ctx->pc = 0x29809Cu;
    SET_GPR_U32(ctx, 31, 0x2980A4u);
    ctx->pc = 0x2980A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29809Cu;
    // 0x2980a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x29809Cu, 0x2980A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980A4u;
label_2980a4:
    // 0x2980a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2980a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2980a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2980ACu;
    {
        const bool branch_taken_0x2980ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2980B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980ACu;
        // 0x2980b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980ac) {
            ctx->pc = 0x2980D0u;
            goto label_2980d0;
        }
    }
    ctx->pc = 0x2980B4u;
    // 0x2980b4: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2980B4u;
    SET_GPR_U32(ctx, 31, 0x2980BCu);
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2980B4u, 0x2980BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980BCu;
label_2980bc:
    // 0x2980bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2980bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2980c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2980c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2980c8: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2980C8u;
    SET_GPR_U32(ctx, 31, 0x2980D0u);
    ctx->pc = 0x2980CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980C8u;
    // 0x2980cc: 0x240700f5  addiu       $a3, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2980C8u, 0x2980D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980D0u;
label_2980d0:
    // 0x2980d0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2980d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2980d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2980D4u;
    {
        const bool branch_taken_0x2980d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980D4u;
        // 0x2980d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980d4) {
            ctx->pc = 0x298098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298098;
        }
    }
    ctx->pc = 0x2980DCu;
label_2980dc:
    // 0x2980dc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2980DCu;
    {
        const bool branch_taken_0x2980dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2980E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980DCu;
        // 0x2980e0: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980dc) {
            ctx->pc = 0x2980FCu;
            goto label_2980fc;
        }
    }
    ctx->pc = 0x2980E4u;
    // 0x2980e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2980e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980e8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2980E8u;
    SET_GPR_U32(ctx, 31, 0x2980F0u);
    ctx->pc = 0x2980ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980E8u;
    // 0x2980ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2980E8u, 0x2980F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980F0u;
label_2980f0:
    // 0x2980f0: 0xc0a5f7c  jal         func_297DF0
    ctx->pc = 0x2980F0u;
    SET_GPR_U32(ctx, 31, 0x2980F8u);
    ctx->pc = 0x2980F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980F0u;
    // 0x2980f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DF0u, 0x2980F0u, 0x2980F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980F8u;
label_2980f8:
    // 0x2980f8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2980f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2980fc:
    // 0x2980fc: 0xc0a5fd8  jal         func_297F60
    ctx->pc = 0x2980FCu;
    SET_GPR_U32(ctx, 31, 0x298104u);
    ctx->pc = 0x298100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980FCu;
    // 0x298100: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F60u, 0x2980FCu, 0x298104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298104u;
label_298104:
    // 0x298104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29810c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29810cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x298110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x298114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298118: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x298118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29811c: 0x3e00008  jr          $ra
    ctx->pc = 0x29811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29811Cu;
        // 0x298120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29811Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298124u;
    // 0x298124: 0x0  nop
    ctx->pc = 0x298124u;
    // NOP
    ctx->pc = 0x298128u;
}
