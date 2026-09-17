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

// Function: sub_00294060
// Address: 0x294060 - 0x294120
void sub_00294060_0x294060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294060_0x294060");
#endif

    switch (ctx->pc) {
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        default: break;
    }

    ctx->pc = 0x294060u;

label_294060:
    // 0x294060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_294064:
    // 0x294064: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x294064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_294068:
    // 0x294068: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x294068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_29406c:
    // 0x29406c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_294070:
    // 0x294070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294074:
    // 0x294074: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294078:
    // 0x294078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29407c:
    // 0x29407c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294080:
    // 0x294080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x294080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_294084:
    // 0x294084: 0x2472bed8  addiu       $s2, $v1, -0x4128
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950616));
label_294088:
    // 0x294088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x294088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29408c:
    // 0x29408c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_294090:
    // 0x294090: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x294090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_294094:
    // 0x294094: 0x2454b710  addiu       $s4, $v0, -0x48F0
    ctx->pc = 0x294094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_294098:
    // 0x294098: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x294098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29409c:
    // 0x29409c: 0x0  nop
    ctx->pc = 0x29409cu;
    // NOP
label_2940a0:
    // 0x2940a0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_2940a4:
    // 0x2940a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2940a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2940a8:
    // 0x2940a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2940a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2940ac:
    // 0x2940ac: 0x40f809  jalr        $v0
label_2940b0:
    if (ctx->pc == 0x2940B0u) {
        ctx->pc = 0x2940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940ACu;
        // 0x2940b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2940B4u;
        goto label_2940b4;
    }
    ctx->pc = 0x2940ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2940B4u);
        ctx->pc = 0x2940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940ACu;
        // 0x2940b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940ACu, 0x2940B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2940B4u;
label_2940b4:
    // 0x2940b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2940b8:
    if (ctx->pc == 0x2940B8u) {
        ctx->pc = 0x2940BCu;
        goto label_2940bc;
    }
    ctx->pc = 0x2940B4u;
    {
        const bool branch_taken_0x2940b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2940b4) {
            ctx->pc = 0x2940E8u;
            goto label_2940e8;
        }
    }
    ctx->pc = 0x2940BCu;
label_2940bc:
    // 0x2940bc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2940bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2940c0:
    // 0x2940c0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_2940c4:
    if (ctx->pc == 0x2940C4u) {
        ctx->pc = 0x2940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940C0u;
        // 0x2940c4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2940C8u;
        goto label_2940c8;
    }
    ctx->pc = 0x2940C0u;
    {
        const bool branch_taken_0x2940c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940C0u;
        // 0x2940c4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940c0) {
            ctx->pc = 0x2940D8u;
            goto label_2940d8;
        }
    }
    ctx->pc = 0x2940C8u;
label_2940c8:
    // 0x2940c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2940c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2940cc:
    // 0x2940cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2940d0:
    if (ctx->pc == 0x2940D0u) {
        ctx->pc = 0x2940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940CCu;
        // 0x2940d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2940D4u;
        goto label_2940d4;
    }
    ctx->pc = 0x2940CCu;
    {
        const bool branch_taken_0x2940cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940CCu;
        // 0x2940d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940cc) {
            ctx->pc = 0x2940F0u;
            goto label_2940f0;
        }
    }
    ctx->pc = 0x2940D4u;
label_2940d4:
    // 0x2940d4: 0x0  nop
    ctx->pc = 0x2940d4u;
    // NOP
label_2940d8:
    // 0x2940d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2940dc:
    // 0x2940dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2940e0:
    if (ctx->pc == 0x2940E0u) {
        ctx->pc = 0x2940E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940DCu;
        // 0x2940e0: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2940E4u;
        goto label_2940e4;
    }
    ctx->pc = 0x2940DCu;
    {
        const bool branch_taken_0x2940dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940DCu;
        // 0x2940e0: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940dc) {
            ctx->pc = 0x2940F0u;
            goto label_2940f0;
        }
    }
    ctx->pc = 0x2940E4u;
label_2940e4:
    // 0x2940e4: 0x0  nop
    ctx->pc = 0x2940e4u;
    // NOP
label_2940e8:
    // 0x2940e8: 0xc087a30  jal         func_21E8C0
label_2940ec:
    if (ctx->pc == 0x2940ECu) {
        ctx->pc = 0x2940F0u;
        goto label_2940f0;
    }
    ctx->pc = 0x2940E8u;
    SET_GPR_U32(ctx, 31, 0x2940F0u);
    ctx->pc = 0x21E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E8C0u, 0x2940E8u, 0x2940F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940F0u;
label_2940f0:
    // 0x2940f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2940f4:
    // 0x2940f4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2940f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2940f8:
    // 0x2940f8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
label_2940fc:
    if (ctx->pc == 0x2940FCu) {
        ctx->pc = 0x2940FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940F8u;
        // 0x2940fc: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294100u;
        goto label_294100;
    }
    ctx->pc = 0x2940F8u;
    {
        const bool branch_taken_0x2940f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2940f8) {
            ctx->pc = 0x2940FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2940F8u;
            // 0x2940fc: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2940A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2940a0;
        }
    }
    ctx->pc = 0x294100u;
label_294100:
    // 0x294100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294104:
    // 0x294104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_294108:
    // 0x294108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x294108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29410c:
    // 0x29410c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29410cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_294110:
    // 0x294110: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x294110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_294114:
    // 0x294114: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x294114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_294118:
    // 0x294118: 0x3e00008  jr          $ra
label_29411c:
    if (ctx->pc == 0x29411Cu) {
        ctx->pc = 0x29411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294118u;
        // 0x29411c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294120u;
        goto label_fallthrough_0x294118;
    }
    ctx->pc = 0x294118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294118u;
        // 0x29411c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294118:
    ctx->pc = 0x294120u;
}
