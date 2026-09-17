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

// Function: sub_005150E0
// Address: 0x5150e0 - 0x515a3c
void sub_005150E0_0x5150e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005150E0_0x5150e0");
#endif

    switch (ctx->pc) {
        case 0x515198u: goto label_515198;
        case 0x5151c8u: goto label_5151c8;
        case 0x515208u: goto label_515208;
        case 0x515238u: goto label_515238;
        case 0x515260u: goto label_515260;
        case 0x515270u: goto label_515270;
        case 0x5152b4u: goto label_5152b4;
        case 0x5152c0u: goto label_5152c0;
        case 0x515318u: goto label_515318;
        case 0x515328u: goto label_515328;
        case 0x51536cu: goto label_51536c;
        case 0x515378u: goto label_515378;
        case 0x5153d0u: goto label_5153d0;
        case 0x5153e0u: goto label_5153e0;
        case 0x515404u: goto label_515404;
        case 0x515410u: goto label_515410;
        case 0x515488u: goto label_515488;
        case 0x515498u: goto label_515498;
        case 0x51552cu: goto label_51552c;
        case 0x515560u: goto label_515560;
        case 0x515580u: goto label_515580;
        case 0x51562cu: goto label_51562c;
        case 0x51563cu: goto label_51563c;
        case 0x515654u: goto label_515654;
        case 0x515678u: goto label_515678;
        case 0x515718u: goto label_515718;
        case 0x51574cu: goto label_51574c;
        case 0x515768u: goto label_515768;
        case 0x515808u: goto label_515808;
        case 0x515840u: goto label_515840;
        case 0x515860u: goto label_515860;
        case 0x5158fcu: goto label_5158fc;
        case 0x515938u: goto label_515938;
        case 0x515950u: goto label_515950;
        case 0x5159ecu: goto label_5159ec;
        case 0x515a24u: goto label_515a24;
        default: break;
    }

    ctx->pc = 0x5150e0u;

label_5150e0:
    // 0x5150e0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x5150E0u;
    {
        const bool branch_taken_0x5150e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5150E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5150E0u;
        // 0x5150e4: 0x250b0006  addiu       $t3, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5150e0) {
            ctx->pc = 0x515128u;
            goto label_515128;
        }
    }
    ctx->pc = 0x5150E8u;
    // 0x5150e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x5150e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x5150ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x5150ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x5150f0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x5150f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x5150f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x5150F4u;
    {
        const bool branch_taken_0x5150f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5150F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5150F4u;
        // 0x5150f8: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5150f4) {
            ctx->pc = 0x515128u;
            goto label_515128;
        }
    }
    ctx->pc = 0x5150FCu;
    // 0x5150fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x5150fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x515100: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x515100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x515104: 0x2503000e  addiu       $v1, $t0, 0xE
    ctx->pc = 0x515104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 14));
    // 0x515108: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x515108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x51510c: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x51510cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x515110: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x515110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x515114: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x515114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x515118: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x515118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x51511c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x51511cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x515120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515120u;
    {
        const bool branch_taken_0x515120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x515124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515120u;
        // 0x515124: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515120) {
            ctx->pc = 0x515130u;
            goto label_515130;
        }
    }
    ctx->pc = 0x515128u;
label_515128:
    // 0x515128: 0x3e00008  jr          $ra
    ctx->pc = 0x515128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515128u;
        // 0x51512c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515130u;
label_515130:
    // 0x515130: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x515130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x515134: 0x1424821  addu        $t1, $t2, $v0
    ctx->pc = 0x515134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x515138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x515138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51513c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x51513cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x515140: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x515140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x515144: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x515144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515148: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x515148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x51514c: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x51514cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x515150: 0x62e02  srl         $a1, $a2, 24
    ctx->pc = 0x515150u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x515154: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x515154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515158: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x515158u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x51515c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x51515cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515160: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x515160u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x515164: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x515164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515168: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x515168u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x51516c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x51516cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515170: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x515170u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x515174: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x515174u;
    {
        const bool branch_taken_0x515174 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x515178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515174u;
        // 0x515178: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515174) {
            ctx->pc = 0x5151B4u;
            goto label_5151b4;
        }
    }
    ctx->pc = 0x51517Cu;
    // 0x51517c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x51517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x515180: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x515180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x515184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x515184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x515188: 0x5102000b  beql        $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x515188u;
    {
        const bool branch_taken_0x515188 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x515188) {
            ctx->pc = 0x51518Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x515188u;
            // 0x51518c: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5151B8u;
            goto label_5151b8;
        }
    }
    ctx->pc = 0x515190u;
    // 0x515190: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x515190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x515194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x515194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_515198:
    // 0x515198: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x515198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x51519c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x51519cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x5151a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x5151a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x5151a4: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x5151a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5151a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x5151a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x5151ac: 0x1503fffa  bne         $t0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5151ACu;
    {
        const bool branch_taken_0x5151ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x5151ac) {
            ctx->pc = 0x515198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515198;
        }
    }
    ctx->pc = 0x5151B4u;
label_5151b4:
    // 0x5151b4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x5151b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_5151b8:
    // 0x5151b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5151b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5151bc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x5151bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x5151c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5151C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5151C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5151C0u;
        // 0x5151c4: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5151C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5151C8u;
label_5151c8:
    // 0x5151c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5151c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5151cc: 0x30e300f0  andi        $v1, $a3, 0xF0
    ctx->pc = 0x5151ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x5151d0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x5151d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x5151d4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x5151d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x5151d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5151d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5151dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x5151dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5151e0: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x5151e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x5151e4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x5151e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x5151e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5151E8u;
    {
        const bool branch_taken_0x5151e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5151ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5151E8u;
        // 0x5151ec: 0x27ab0014  addiu       $t3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5151e8) {
            ctx->pc = 0x5151F8u;
            goto label_5151f8;
        }
    }
    ctx->pc = 0x5151F0u;
    // 0x5151f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x5151F0u;
    {
        const bool branch_taken_0x5151f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5151F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5151F0u;
        // 0x5151f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5151f0) {
            ctx->pc = 0x515260u;
            goto label_515260;
        }
    }
    ctx->pc = 0x5151F8u;
label_5151f8:
    // 0x5151f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x5151f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x5151fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5151fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515200: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x515200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x515204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x515204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_515208:
    // 0x515208: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x515208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x51520c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x51520cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x515210: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x515210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x515214: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x515214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x515218: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x515218u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x51521c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x51521cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x515220: 0x1543fff9  bne         $t2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x515220u;
    {
        const bool branch_taken_0x515220 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x515220) {
            ctx->pc = 0x515208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515208;
        }
    }
    ctx->pc = 0x515228u;
    // 0x515228: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x515228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x51522c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x51522cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x515230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x515230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x515234: 0x0  nop
    ctx->pc = 0x515234u;
    // NOP
label_515238:
    // 0x515238: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x515238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x51523c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x51523cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x515240: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x515240u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x515244: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x515244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x515248: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x515248u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x51524c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x51524cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x515250: 0x1523fff9  bne         $t1, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x515250u;
    {
        const bool branch_taken_0x515250 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x515250) {
            ctx->pc = 0x515238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515238;
        }
    }
    ctx->pc = 0x515258u;
    // 0x515258: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515258u;
    SET_GPR_U32(ctx, 31, 0x515260u);
    ctx->pc = 0x51525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515258u;
    // 0x51525c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515260u;
label_515260:
    // 0x515260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x515260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515264: 0x3e00008  jr          $ra
    ctx->pc = 0x515264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515264u;
        // 0x515268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51526Cu;
    // 0x51526c: 0x0  nop
    ctx->pc = 0x51526cu;
    // NOP
label_515270:
    // 0x515270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x515270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x515274: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x515274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515278u;
    {
        const bool branch_taken_0x515278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515278u;
        // 0x51527c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515278) {
            ctx->pc = 0x515288u;
            goto label_515288;
        }
    }
    ctx->pc = 0x515280u;
    // 0x515280: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x515280u;
    {
        const bool branch_taken_0x515280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515280u;
        // 0x515284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515280) {
            ctx->pc = 0x5152B4u;
            goto label_5152b4;
        }
    }
    ctx->pc = 0x515288u;
label_515288:
    // 0x515288: 0x34e200a0  ori         $v0, $a3, 0xA0
    ctx->pc = 0x515288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)160);
    // 0x51528c: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x51528cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x515290: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x515290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x515294: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x515294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515298: 0xa3a90002  sb          $t1, 0x2($sp)
    ctx->pc = 0x515298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x51529c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x51529cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5152a0: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x5152a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x5152a4: 0xa3ab0004  sb          $t3, 0x4($sp)
    ctx->pc = 0x5152a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x5152a8: 0xa3a00005  sb          $zero, 0x5($sp)
    ctx->pc = 0x5152a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x5152ac: 0xc145438  jal         func_5150E0
    ctx->pc = 0x5152ACu;
    SET_GPR_U32(ctx, 31, 0x5152B4u);
    ctx->pc = 0x5152B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5152ACu;
    // 0x5152b0: 0xa3a00006  sb          $zero, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x5152B4u;
label_5152b4:
    // 0x5152b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5152b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5152b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5152B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5152B8u;
        // 0x5152bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5152B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5152C0u;
label_5152c0:
    // 0x5152c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5152c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5152c4: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x5152c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5152c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5152c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5152cc: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x5152ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x5152d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5152D0u;
    {
        const bool branch_taken_0x5152d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5152D0u;
        // 0x5152d4: 0x8fa90020  lw          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5152d0) {
            ctx->pc = 0x5152E0u;
            goto label_5152e0;
        }
    }
    ctx->pc = 0x5152D8u;
    // 0x5152d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x5152D8u;
    {
        const bool branch_taken_0x5152d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5152D8u;
        // 0x5152dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5152d8) {
            ctx->pc = 0x515318u;
            goto label_515318;
        }
    }
    ctx->pc = 0x5152E0u;
label_5152e0:
    // 0x5152e0: 0x31223f80  andi        $v0, $t1, 0x3F80
    ctx->pc = 0x5152e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16256);
    // 0x5152e4: 0x34e300a0  ori         $v1, $a3, 0xA0
    ctx->pc = 0x5152e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)160);
    // 0x5152e8: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x5152e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x5152ec: 0x3129007f  andi        $t1, $t1, 0x7F
    ctx->pc = 0x5152ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)127);
    // 0x5152f0: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x5152f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5152f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x5152f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5152f8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x5152f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x5152fc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x5152fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x515300: 0xa3ac0002  sb          $t4, 0x2($sp)
    ctx->pc = 0x515300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 12));
    // 0x515304: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x515304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x515308: 0xa3ab0004  sb          $t3, 0x4($sp)
    ctx->pc = 0x515308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x51530c: 0xa3a90005  sb          $t1, 0x5($sp)
    ctx->pc = 0x51530cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x515310: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515310u;
    SET_GPR_U32(ctx, 31, 0x515318u);
    ctx->pc = 0x515314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515310u;
    // 0x515314: 0xa3a20006  sb          $v0, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515318u;
label_515318:
    // 0x515318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x515318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51531c: 0x3e00008  jr          $ra
    ctx->pc = 0x51531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51531Cu;
        // 0x515320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515324u;
    // 0x515324: 0x0  nop
    ctx->pc = 0x515324u;
    // NOP
label_515328:
    // 0x515328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x515328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51532c: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x51532cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515330u;
    {
        const bool branch_taken_0x515330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515330u;
        // 0x515334: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515330) {
            ctx->pc = 0x515340u;
            goto label_515340;
        }
    }
    ctx->pc = 0x515338u;
    // 0x515338: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x515338u;
    {
        const bool branch_taken_0x515338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515338u;
        // 0x51533c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515338) {
            ctx->pc = 0x51536Cu;
            goto label_51536c;
        }
    }
    ctx->pc = 0x515340u;
label_515340:
    // 0x515340: 0x34e20090  ori         $v0, $a3, 0x90
    ctx->pc = 0x515340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)144);
    // 0x515344: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x515344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x515348: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x515348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x51534c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x51534cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515350: 0xa3a90002  sb          $t1, 0x2($sp)
    ctx->pc = 0x515350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x515354: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x515354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x515358: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x515358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x51535c: 0xa3ab0004  sb          $t3, 0x4($sp)
    ctx->pc = 0x51535cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x515360: 0xa3a00005  sb          $zero, 0x5($sp)
    ctx->pc = 0x515360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x515364: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515364u;
    SET_GPR_U32(ctx, 31, 0x51536Cu);
    ctx->pc = 0x515368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515364u;
    // 0x515368: 0xa3a00006  sb          $zero, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x51536Cu;
label_51536c:
    // 0x51536c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515370: 0x3e00008  jr          $ra
    ctx->pc = 0x515370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515370u;
        // 0x515374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515378u;
label_515378:
    // 0x515378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x515378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51537c: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x51537cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x515380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x515384: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x515384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515388: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515388u;
    {
        const bool branch_taken_0x515388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515388u;
        // 0x51538c: 0x8fa90020  lw          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515388) {
            ctx->pc = 0x515398u;
            goto label_515398;
        }
    }
    ctx->pc = 0x515390u;
    // 0x515390: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x515390u;
    {
        const bool branch_taken_0x515390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515390u;
        // 0x515394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515390) {
            ctx->pc = 0x5153D0u;
            goto label_5153d0;
        }
    }
    ctx->pc = 0x515398u;
label_515398:
    // 0x515398: 0x31223f80  andi        $v0, $t1, 0x3F80
    ctx->pc = 0x515398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16256);
    // 0x51539c: 0x34e30090  ori         $v1, $a3, 0x90
    ctx->pc = 0x51539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)144);
    // 0x5153a0: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x5153a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x5153a4: 0x3129007f  andi        $t1, $t1, 0x7F
    ctx->pc = 0x5153a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)127);
    // 0x5153a8: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x5153a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5153ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x5153acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5153b0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x5153b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x5153b4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x5153b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5153b8: 0xa3ac0002  sb          $t4, 0x2($sp)
    ctx->pc = 0x5153b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 12));
    // 0x5153bc: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x5153bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x5153c0: 0xa3ab0004  sb          $t3, 0x4($sp)
    ctx->pc = 0x5153c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x5153c4: 0xa3a90005  sb          $t1, 0x5($sp)
    ctx->pc = 0x5153c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x5153c8: 0xc145438  jal         func_5150E0
    ctx->pc = 0x5153C8u;
    SET_GPR_U32(ctx, 31, 0x5153D0u);
    ctx->pc = 0x5153CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5153C8u;
    // 0x5153cc: 0xa3a20006  sb          $v0, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x5153D0u;
label_5153d0:
    // 0x5153d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5153d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5153d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5153D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5153D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5153D4u;
        // 0x5153d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5153D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5153DCu;
    // 0x5153dc: 0x0  nop
    ctx->pc = 0x5153dcu;
    // NOP
label_5153e0:
    // 0x5153e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5153e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5153e4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x5153e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x5153e8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x5153e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x5153ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5153ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5153f0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x5153f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5153f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x5153f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5153f8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x5153f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x5153fc: 0xc145438  jal         func_5150E0
    ctx->pc = 0x5153FCu;
    SET_GPR_U32(ctx, 31, 0x515404u);
    ctx->pc = 0x515400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5153FCu;
    // 0x515400: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515404u;
label_515404:
    // 0x515404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x515404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515408: 0x3e00008  jr          $ra
    ctx->pc = 0x515408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515408u;
        // 0x51540c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515410u;
label_515410:
    // 0x515410: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x515410u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515414: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x515414u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515418: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x515418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x51541c: 0x3168ff00  andi        $t0, $t3, 0xFF00
    ctx->pc = 0x51541cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65280);
    // 0x515420: 0x1875024  and         $t2, $t4, $a3
    ctx->pc = 0x515420u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x515424: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x515424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x515428: 0x1673824  and         $a3, $t3, $a3
    ctx->pc = 0x515428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x51542c: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x51542cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x515430: 0x73c02  srl         $a3, $a3, 16
    ctx->pc = 0x515430u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x515434: 0x3189ff00  andi        $t1, $t4, 0xFF00
    ctx->pc = 0x515434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x515438: 0xb6e02  srl         $t5, $t3, 24
    ctx->pc = 0x515438u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x51543c: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x51543cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x515440: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x515440u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x515444: 0xc7602  srl         $t6, $t4, 24
    ctx->pc = 0x515444u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x515448: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x515448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x51544c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x51544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x515450: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x515450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x515454: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x515454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x515458: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x515458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x51545c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x515460: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x515460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515464: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x515464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x515468: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x515468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x51546c: 0xa3ad0005  sb          $t5, 0x5($sp)
    ctx->pc = 0x51546cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x515470: 0xa3a90007  sb          $t1, 0x7($sp)
    ctx->pc = 0x515470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 9));
    // 0x515474: 0xa3aa0008  sb          $t2, 0x8($sp)
    ctx->pc = 0x515474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x515478: 0xa3ae0009  sb          $t6, 0x9($sp)
    ctx->pc = 0x515478u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x51547c: 0xa3ab0002  sb          $t3, 0x2($sp)
    ctx->pc = 0x51547cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 11));
    // 0x515480: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515480u;
    SET_GPR_U32(ctx, 31, 0x515488u);
    ctx->pc = 0x515484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515480u;
    // 0x515484: 0xa3ac0006  sb          $t4, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515488u;
label_515488:
    // 0x515488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x515488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51548c: 0x3e00008  jr          $ra
    ctx->pc = 0x51548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51548Cu;
        // 0x515490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51548Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515494u;
    // 0x515494: 0x0  nop
    ctx->pc = 0x515494u;
    // NOP
label_515498:
    // 0x515498: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x515498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x51549c: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x51549cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x5154a0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x5154a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x5154a4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x5154a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x5154a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5154a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5154ac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x5154acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x5154b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5154b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5154b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x5154b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x5154b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x5154b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5154bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5154bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x5154c0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x5154c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5154c4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x5154c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5154c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5154C8u;
    {
        const bool branch_taken_0x5154c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5154CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5154C8u;
        // 0x5154cc: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5154c8) {
            ctx->pc = 0x5154D8u;
            goto label_5154d8;
        }
    }
    ctx->pc = 0x5154D0u;
    // 0x5154d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x5154D0u;
    {
        const bool branch_taken_0x5154d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5154D0u;
        // 0x5154d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5154d0) {
            ctx->pc = 0x515560u;
            goto label_515560;
        }
    }
    ctx->pc = 0x5154D8u;
label_5154d8:
    // 0x5154d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5154d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5154dc: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x5154dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x5154e0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x5154e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5154e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x5154e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x5154e8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x5154e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5154ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5154ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5154f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5154f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5154f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5154f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5154f8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5154f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5154fc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x5154fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515500: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x515500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x515504: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x515504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515508: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x515508u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x51550c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x51550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515510: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x515510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515514: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x515514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515518: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x515518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x51551c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x51551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x515520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x515524: 0xc14540c  jal         func_515030
    ctx->pc = 0x515524u;
    SET_GPR_U32(ctx, 31, 0x51552Cu);
    ctx->pc = 0x515528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515524u;
    // 0x515528: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x515524u, 0x51552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51552Cu;
label_51552c:
    // 0x51552c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x51552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515530: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x515530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x515534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x515534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515538: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51553c: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x51553cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x515540: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x515540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x515544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515548: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x515548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51554c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x51554cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x515550: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x515550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515554: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x515554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x515558: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515558u;
    SET_GPR_U32(ctx, 31, 0x515560u);
    ctx->pc = 0x51555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515558u;
    // 0x51555c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515560u;
label_515560:
    // 0x515560: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x515560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x515564: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x515564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x515568: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x515568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51556c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x51556cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x515570: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x515570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515574: 0x3e00008  jr          $ra
    ctx->pc = 0x515574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515574u;
        // 0x515578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51557Cu;
    // 0x51557c: 0x0  nop
    ctx->pc = 0x51557cu;
    // NOP
label_515580:
    // 0x515580: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x515580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x515584: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x515584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515588: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x515588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x51558c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x51558cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515590: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x515590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x515594: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x515594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x515598: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x515598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51559c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x51559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x5155a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x5155a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5155a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x5155a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x5155a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x5155a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5155ac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x5155acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x5155b0: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x5155b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5155b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x5155b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x5155b8: 0x8faa0090  lw          $t2, 0x90($sp)
    ctx->pc = 0x5155b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x5155bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5155BCu;
    {
        const bool branch_taken_0x5155bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5155C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5155BCu;
        // 0x5155c0: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5155bc) {
            ctx->pc = 0x5155D4u;
            goto label_5155d4;
        }
    }
    ctx->pc = 0x5155C4u;
    // 0x5155c4: 0x2542fff6  addiu       $v0, $t2, -0xA
    ctx->pc = 0x5155c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967286));
    // 0x5155c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x5155c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x5155cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5155CCu;
    {
        const bool branch_taken_0x5155cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5155D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5155CCu;
        // 0x5155d0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5155cc) {
            ctx->pc = 0x5155DCu;
            goto label_5155dc;
        }
    }
    ctx->pc = 0x5155D4u;
label_5155d4:
    // 0x5155d4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x5155D4u;
    {
        const bool branch_taken_0x5155d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5155D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5155D4u;
        // 0x5155d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5155d4) {
            ctx->pc = 0x515654u;
            goto label_515654;
        }
    }
    ctx->pc = 0x5155DCu;
label_5155dc:
    // 0x5155dc: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x5155dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x5155e0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x5155e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x5155e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x5155e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5155e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5155e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5155ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5155ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5155f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5155f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5155f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5155f8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5155f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5155fc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x5155fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515600: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x515600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x515604: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x515604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515608: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x515608u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x51560c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x51560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515610: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x515610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515614: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x515614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515618: 0xa06a0001  sb          $t2, 0x1($v1)
    ctx->pc = 0x515618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x51561c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x51561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x515620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x515620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x515624: 0xc14540c  jal         func_515030
    ctx->pc = 0x515624u;
    SET_GPR_U32(ctx, 31, 0x51562Cu);
    ctx->pc = 0x515628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515624u;
    // 0x515628: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x515624u, 0x51562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51562Cu;
label_51562c:
    // 0x51562c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x51562cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x515630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x515630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515634: 0xc14540c  jal         func_515030
    ctx->pc = 0x515634u;
    SET_GPR_U32(ctx, 31, 0x51563Cu);
    ctx->pc = 0x515638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515634u;
    // 0x515638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x515634u, 0x51563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51563Cu;
label_51563c:
    // 0x51563c: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x51563cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x515640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515644: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x515644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515648: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x515648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51564c: 0xc145438  jal         func_5150E0
    ctx->pc = 0x51564Cu;
    SET_GPR_U32(ctx, 31, 0x515654u);
    ctx->pc = 0x515650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51564Cu;
    // 0x515650: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515654u;
label_515654:
    // 0x515654: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x515654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x515658: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x515658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x51565c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x51565cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x515660: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x515660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x515664: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x515664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x515668: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x515668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51566c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x51566cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515670: 0x3e00008  jr          $ra
    ctx->pc = 0x515670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515670u;
        // 0x515674: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515678u;
label_515678:
    // 0x515678: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x515678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x51567c: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x51567cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515680: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x515680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x515684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x515684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515688: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x515688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x51568c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x51568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x515690: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x515690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515694: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x515694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x515698: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x515698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51569c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x51569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x5156a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5156a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5156a4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x5156a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5156a8: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x5156a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5156ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5156ACu;
    {
        const bool branch_taken_0x5156ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5156B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5156ACu;
        // 0x5156b0: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5156ac) {
            ctx->pc = 0x5156C4u;
            goto label_5156c4;
        }
    }
    ctx->pc = 0x5156B4u;
    // 0x5156b4: 0x2542fff4  addiu       $v0, $t2, -0xC
    ctx->pc = 0x5156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967284));
    // 0x5156b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x5156b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x5156bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5156BCu;
    {
        const bool branch_taken_0x5156bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5156C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5156BCu;
        // 0x5156c0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5156bc) {
            ctx->pc = 0x5156CCu;
            goto label_5156cc;
        }
    }
    ctx->pc = 0x5156C4u;
label_5156c4:
    // 0x5156c4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x5156C4u;
    {
        const bool branch_taken_0x5156c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5156C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5156C4u;
        // 0x5156c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5156c4) {
            ctx->pc = 0x51574Cu;
            goto label_51574c;
        }
    }
    ctx->pc = 0x5156CCu;
label_5156cc:
    // 0x5156cc: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x5156ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x5156d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x5156d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x5156d4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x5156d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5156d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5156dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5156dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5156e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5156e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5156e4: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5156e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5156e8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x5156e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5156ec: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x5156ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x5156f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5156f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5156f4: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x5156f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x5156f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5156f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5156fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515700: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x515700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515704: 0xa06a0001  sb          $t2, 0x1($v1)
    ctx->pc = 0x515704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x515708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x515708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51570c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x51570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x515710: 0xc14540c  jal         func_515030
    ctx->pc = 0x515710u;
    SET_GPR_U32(ctx, 31, 0x515718u);
    ctx->pc = 0x515714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515710u;
    // 0x515714: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x515710u, 0x515718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x515718u;
label_515718:
    // 0x515718: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x515718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51571c: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x51571cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x515720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x515720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515724: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515728: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x515728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x51572c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x51572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x515730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515734: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x515734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515738: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x515738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x51573c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x51573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515740: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x515740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x515744: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515744u;
    SET_GPR_U32(ctx, 31, 0x51574Cu);
    ctx->pc = 0x515748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515744u;
    // 0x515748: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x51574Cu;
label_51574c:
    // 0x51574c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x51574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x515750: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x515750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x515754: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x515754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x515758: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x515758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51575c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x51575cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515760: 0x3e00008  jr          $ra
    ctx->pc = 0x515760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515760u;
        // 0x515764: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515768u;
label_515768:
    // 0x515768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x515768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x51576c: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x51576cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515770: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x515770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x515774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x515774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515778: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x515778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x51577c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x51577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x515780: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x515780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515784: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x515784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x515788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x515788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51578c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x51578cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x515790: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x515790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515794: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x515794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515798: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x515798u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x51579c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x51579Cu;
    {
        const bool branch_taken_0x51579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5157A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51579Cu;
        // 0x5157a0: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51579c) {
            ctx->pc = 0x5157B4u;
            goto label_5157b4;
        }
    }
    ctx->pc = 0x5157A4u;
    // 0x5157a4: 0x2542fff2  addiu       $v0, $t2, -0xE
    ctx->pc = 0x5157a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967282));
    // 0x5157a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x5157a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x5157ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5157ACu;
    {
        const bool branch_taken_0x5157ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5157B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5157ACu;
        // 0x5157b0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5157ac) {
            ctx->pc = 0x5157BCu;
            goto label_5157bc;
        }
    }
    ctx->pc = 0x5157B4u;
label_5157b4:
    // 0x5157b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x5157B4u;
    {
        const bool branch_taken_0x5157b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5157B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5157B4u;
        // 0x5157b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5157b4) {
            ctx->pc = 0x515840u;
            goto label_515840;
        }
    }
    ctx->pc = 0x5157BCu;
label_5157bc:
    // 0x5157bc: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x5157bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x5157c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x5157c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x5157c4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x5157c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5157c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5157c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5157cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5157ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5157d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5157d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5157d4: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5157d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5157d8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x5157d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5157dc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x5157dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x5157e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5157e4: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x5157e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x5157e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5157e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5157ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5157ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5157f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5157f4: 0xa06a0001  sb          $t2, 0x1($v1)
    ctx->pc = 0x5157f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x5157f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x5157f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5157fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5157fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x515800: 0xc14540c  jal         func_515030
    ctx->pc = 0x515800u;
    SET_GPR_U32(ctx, 31, 0x515808u);
    ctx->pc = 0x515804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515800u;
    // 0x515804: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x515800u, 0x515808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x515808u;
label_515808:
    // 0x515808: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x515808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51580c: 0x103a02  srl         $a3, $s0, 8
    ctx->pc = 0x51580cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x515810: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x515810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x515814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x515814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515818: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x515818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x51581c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51581cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x515820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515824: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x515824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515828: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x515828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x51582c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x51582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x515830: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x515830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x515834: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x515834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515838: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515838u;
    SET_GPR_U32(ctx, 31, 0x515840u);
    ctx->pc = 0x51583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515838u;
    // 0x51583c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515840u;
label_515840:
    // 0x515840: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x515840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x515844: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x515844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x515848: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x515848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51584c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x51584cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x515850: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x515850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515854: 0x3e00008  jr          $ra
    ctx->pc = 0x515854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515854u;
        // 0x515858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51585Cu;
    // 0x51585c: 0x0  nop
    ctx->pc = 0x51585cu;
    // NOP
label_515860:
    // 0x515860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x515860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x515864: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x515864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515868: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x515868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x51586c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x51586cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x515870: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x515870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515874: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x515874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x515878: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x515878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51587c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x515880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x515880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x515884u;
    {
        const bool branch_taken_0x515884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x515888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515884u;
        // 0x515888: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515884) {
            ctx->pc = 0x51589Cu;
            goto label_51589c;
        }
    }
    ctx->pc = 0x51588Cu;
    // 0x51588c: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x51588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x515890: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x515890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x515894: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515894u;
    {
        const bool branch_taken_0x515894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515894u;
        // 0x515898: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515894) {
            ctx->pc = 0x5158A4u;
            goto label_5158a4;
        }
    }
    ctx->pc = 0x51589Cu;
label_51589c:
    // 0x51589c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x51589Cu;
    {
        const bool branch_taken_0x51589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5158A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51589Cu;
        // 0x5158a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51589c) {
            ctx->pc = 0x515938u;
            goto label_515938;
        }
    }
    ctx->pc = 0x5158A4u;
label_5158a4:
    // 0x5158a4: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x5158a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x5158a8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x5158a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x5158ac: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x5158acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5158b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5158b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5158b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5158b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5158b8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5158b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5158bc: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5158bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5158c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x5158c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5158c4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x5158c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5158c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5158c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5158cc: 0xa0890001  sb          $t1, 0x1($a0)
    ctx->pc = 0x5158ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x5158d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5158d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5158d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5158d8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5158d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5158dc: 0xa06b0001  sb          $t3, 0x1($v1)
    ctx->pc = 0x5158dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x5158e0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x5158e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5158e4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x5158e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x5158e8: 0x15650006  bne         $t3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5158E8u;
    {
        const bool branch_taken_0x5158e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x5158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5158E8u;
        // 0x5158ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5158e8) {
            ctx->pc = 0x515904u;
            goto label_515904;
        }
    }
    ctx->pc = 0x5158F0u;
    // 0x5158f0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x5158f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5158f4: 0xc14540c  jal         func_515030
    ctx->pc = 0x5158F4u;
    SET_GPR_U32(ctx, 31, 0x5158FCu);
    ctx->pc = 0x5158F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5158F4u;
    // 0x5158f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x5158F4u, 0x5158FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5158FCu;
label_5158fc:
    // 0x5158fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x5158FCu;
    {
        const bool branch_taken_0x5158fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5158FCu;
        // 0x515900: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5158fc) {
            ctx->pc = 0x515924u;
            goto label_515924;
        }
    }
    ctx->pc = 0x515904u;
label_515904:
    // 0x515904: 0xa0ca0001  sb          $t2, 0x1($a2)
    ctx->pc = 0x515904u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x515908: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x515908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x51590c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x51590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515910: 0xa1a02  srl         $v1, $t2, 8
    ctx->pc = 0x515910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x515914: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x515914u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x515918: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x515918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x51591c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x51591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515920: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x515920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_515924:
    // 0x515924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x515924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x515928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51592c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x51592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515930: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515930u;
    SET_GPR_U32(ctx, 31, 0x515938u);
    ctx->pc = 0x515934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515930u;
    // 0x515934: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515938u;
label_515938:
    // 0x515938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x515938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x51593c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x51593cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x515940: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x515940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x515944: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x515944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515948: 0x3e00008  jr          $ra
    ctx->pc = 0x515948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515948u;
        // 0x51594c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515950u;
label_515950:
    // 0x515950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x515950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x515954: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x515954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x515958: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x515958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x51595c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x51595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x515960: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x515960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515964: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x515964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x515968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x515968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51596c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x515970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x515970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x515974u;
    {
        const bool branch_taken_0x515974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x515978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515974u;
        // 0x515978: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515974) {
            ctx->pc = 0x51598Cu;
            goto label_51598c;
        }
    }
    ctx->pc = 0x51597Cu;
    // 0x51597c: 0x2562ffe0  addiu       $v0, $t3, -0x20
    ctx->pc = 0x51597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967264));
    // 0x515980: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x515980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x515984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x515984u;
    {
        const bool branch_taken_0x515984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515984u;
        // 0x515988: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515984) {
            ctx->pc = 0x515994u;
            goto label_515994;
        }
    }
    ctx->pc = 0x51598Cu;
label_51598c:
    // 0x51598c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x51598Cu;
    {
        const bool branch_taken_0x51598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51598Cu;
        // 0x515990: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51598c) {
            ctx->pc = 0x515A24u;
            goto label_515a24;
        }
    }
    ctx->pc = 0x515994u;
label_515994:
    // 0x515994: 0x34e200b0  ori         $v0, $a3, 0xB0
    ctx->pc = 0x515994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    // 0x515998: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x515998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x51599c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x51599cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5159a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5159a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5159a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5159a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5159a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5159ac: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x5159acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x5159b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x5159b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5159b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x5159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5159b8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5159b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5159bc: 0xa0890001  sb          $t1, 0x1($a0)
    ctx->pc = 0x5159bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x5159c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x5159c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5159c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x5159c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5159c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5159c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x5159cc: 0xa06b0001  sb          $t3, 0x1($v1)
    ctx->pc = 0x5159ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x5159d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x5159d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5159d4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x5159d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5159d8: 0x15650006  bne         $t3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5159D8u;
    {
        const bool branch_taken_0x5159d8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x5159DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5159D8u;
        // 0x5159dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5159d8) {
            ctx->pc = 0x5159F4u;
            goto label_5159f4;
        }
    }
    ctx->pc = 0x5159E0u;
    // 0x5159e0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x5159e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5159e4: 0xc14540c  jal         func_515030
    ctx->pc = 0x5159E4u;
    SET_GPR_U32(ctx, 31, 0x5159ECu);
    ctx->pc = 0x5159E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5159E4u;
    // 0x5159e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515030u, 0x5159E4u, 0x5159ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5159ECu;
label_5159ec:
    // 0x5159ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5159ECu;
    {
        const bool branch_taken_0x5159ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5159ECu;
        // 0x5159f0: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5159ec) {
            ctx->pc = 0x515A10u;
            goto label_515a10;
        }
    }
    ctx->pc = 0x5159F4u;
label_5159f4:
    // 0x5159f4: 0xa08a0001  sb          $t2, 0x1($a0)
    ctx->pc = 0x5159f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x5159f8: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x5159f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x5159fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x5159fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x515a00: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x515a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x515a04: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x515a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x515a08: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x515a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x515a0c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x515a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_515a10:
    // 0x515a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x515a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515a14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x515a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515a18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x515a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x515a1c: 0xc145438  jal         func_5150E0
    ctx->pc = 0x515A1Cu;
    SET_GPR_U32(ctx, 31, 0x515A24u);
    ctx->pc = 0x515A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x515A1Cu;
    // 0x515a20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5150E0u;
    goto label_5150e0;
    ctx->pc = 0x515A24u;
label_515a24:
    // 0x515a24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x515a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x515a28: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x515a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x515a2c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x515a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x515a30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x515a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x515a34: 0x3e00008  jr          $ra
    ctx->pc = 0x515A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515A34u;
        // 0x515a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515A3Cu;
}
