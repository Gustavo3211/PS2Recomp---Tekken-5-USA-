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

// Function: sub_001252E8
// Address: 0x1252e8 - 0x125408
void sub_001252E8_0x1252e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001252E8_0x1252e8");
#endif

    switch (ctx->pc) {
        case 0x1252e8u: goto label_1252e8;
        case 0x1252ecu: goto label_1252ec;
        case 0x1252f0u: goto label_1252f0;
        case 0x1252f4u: goto label_1252f4;
        case 0x1252f8u: goto label_1252f8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125300u: goto label_125300;
        case 0x125304u: goto label_125304;
        case 0x125308u: goto label_125308;
        case 0x12530cu: goto label_12530c;
        case 0x125310u: goto label_125310;
        case 0x125314u: goto label_125314;
        case 0x125318u: goto label_125318;
        case 0x12531cu: goto label_12531c;
        case 0x125320u: goto label_125320;
        case 0x125324u: goto label_125324;
        case 0x125328u: goto label_125328;
        case 0x12532cu: goto label_12532c;
        case 0x125330u: goto label_125330;
        case 0x125334u: goto label_125334;
        case 0x125338u: goto label_125338;
        case 0x12533cu: goto label_12533c;
        case 0x125340u: goto label_125340;
        case 0x125344u: goto label_125344;
        case 0x125348u: goto label_125348;
        case 0x12534cu: goto label_12534c;
        case 0x125350u: goto label_125350;
        case 0x125354u: goto label_125354;
        case 0x125358u: goto label_125358;
        case 0x12535cu: goto label_12535c;
        case 0x125360u: goto label_125360;
        case 0x125364u: goto label_125364;
        case 0x125368u: goto label_125368;
        case 0x12536cu: goto label_12536c;
        case 0x125370u: goto label_125370;
        case 0x125374u: goto label_125374;
        case 0x125378u: goto label_125378;
        case 0x12537cu: goto label_12537c;
        case 0x125380u: goto label_125380;
        case 0x125384u: goto label_125384;
        case 0x125388u: goto label_125388;
        case 0x12538cu: goto label_12538c;
        case 0x125390u: goto label_125390;
        case 0x125394u: goto label_125394;
        case 0x125398u: goto label_125398;
        case 0x12539cu: goto label_12539c;
        case 0x1253a0u: goto label_1253a0;
        case 0x1253a4u: goto label_1253a4;
        case 0x1253a8u: goto label_1253a8;
        case 0x1253acu: goto label_1253ac;
        case 0x1253b0u: goto label_1253b0;
        case 0x1253b4u: goto label_1253b4;
        case 0x1253b8u: goto label_1253b8;
        case 0x1253bcu: goto label_1253bc;
        case 0x1253c0u: goto label_1253c0;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253c8u: goto label_1253c8;
        case 0x1253ccu: goto label_1253cc;
        case 0x1253d0u: goto label_1253d0;
        case 0x1253d4u: goto label_1253d4;
        case 0x1253d8u: goto label_1253d8;
        case 0x1253dcu: goto label_1253dc;
        case 0x1253e0u: goto label_1253e0;
        case 0x1253e4u: goto label_1253e4;
        case 0x1253e8u: goto label_1253e8;
        case 0x1253ecu: goto label_1253ec;
        case 0x1253f0u: goto label_1253f0;
        case 0x1253f4u: goto label_1253f4;
        case 0x1253f8u: goto label_1253f8;
        case 0x1253fcu: goto label_1253fc;
        case 0x125400u: goto label_125400;
        case 0x125404u: goto label_125404;
        default: break;
    }

    ctx->pc = 0x1252e8u;

label_1252e8:
    // 0x1252e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1252ec:
    // 0x1252ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1252ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1252f0:
    // 0x1252f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1252f4:
    // 0x1252f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1252f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1252f8:
    // 0x1252f8: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1252f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1252fc:
    // 0x1252fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1252fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125300:
    // 0x125300: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125304:
    // 0x125304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125308:
    // 0x125308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12530c:
    // 0x12530c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125310:
    // 0x125310: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x125310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_125314:
    // 0x125314: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125318:
    // 0x125318: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x125318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12531c:
    // 0x12531c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_125320:
    // 0x125320: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x125320u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_125324:
    // 0x125324: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x125324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_125328:
    // 0x125328: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12532c:
    // 0x12532c: 0x16750008  bne         $s3, $s5, . + 4 + (0x8 << 2)
label_125330:
    if (ctx->pc == 0x125330u) {
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12532Cu;
        // 0x125330: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125334u;
        goto label_125334;
    }
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12532Cu;
        // 0x125330: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12532c) {
            ctx->pc = 0x125350u;
            goto label_125350;
        }
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0xc0493b0  jal         func_124EC0
label_125338:
    if (ctx->pc == 0x125338u) {
        ctx->pc = 0x125338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125334u;
        // 0x125338: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12533Cu;
        goto label_12533c;
    }
    ctx->pc = 0x125334u;
    SET_GPR_U32(ctx, 31, 0x12533Cu);
    ctx->pc = 0x125338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125334u;
    // 0x125338: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125334u, 0x12533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12533Cu;
label_12533c:
    // 0x12533c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_125340:
    if (ctx->pc == 0x125340u) {
        ctx->pc = 0x125340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12533Cu;
        // 0x125340: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125344u;
        goto label_125344;
    }
    ctx->pc = 0x12533Cu;
    {
        const bool branch_taken_0x12533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12533c) {
            ctx->pc = 0x125340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12533Cu;
            // 0x125340: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125354u;
            goto label_125354;
        }
    }
    ctx->pc = 0x125344u;
label_125344:
    // 0x125344: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x125344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_125348:
    // 0x125348: 0x10000024  b           . + 4 + (0x24 << 2)
label_12534c:
    if (ctx->pc == 0x12534Cu) {
        ctx->pc = 0x12534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125348u;
        // 0x12534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125350u;
        goto label_125350;
    }
    ctx->pc = 0x125348u;
    {
        const bool branch_taken_0x125348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125348u;
        // 0x12534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125348) {
            ctx->pc = 0x1253DCu;
            goto label_1253dc;
        }
    }
    ctx->pc = 0x125350u;
label_125350:
    // 0x125350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125354:
    // 0x125354: 0xc0493b0  jal         func_124EC0
label_125358:
    if (ctx->pc == 0x125358u) {
        ctx->pc = 0x125358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125354u;
        // 0x125358: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12535Cu;
        goto label_12535c;
    }
    ctx->pc = 0x125354u;
    SET_GPR_U32(ctx, 31, 0x12535Cu);
    ctx->pc = 0x125358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125354u;
    // 0x125358: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125354u, 0x12535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12535Cu;
label_12535c:
    // 0x12535c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_125360:
    if (ctx->pc == 0x125360u) {
        ctx->pc = 0x125360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12535Cu;
        // 0x125360: 0x8e8c0008  lw          $t4, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125364u;
        goto label_125364;
    }
    ctx->pc = 0x12535Cu;
    {
        const bool branch_taken_0x12535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12535c) {
            ctx->pc = 0x125360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12535Cu;
            // 0x125360: 0x8e8c0008  lw          $t4, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1253A8u;
            goto label_1253a8;
        }
    }
    ctx->pc = 0x125364u;
label_125364:
    // 0x125364: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x125364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_125368:
    // 0x125368: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_12536c:
    if (ctx->pc == 0x12536Cu) {
        ctx->pc = 0x12536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125368u;
        // 0x12536c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125370u;
        goto label_125370;
    }
    ctx->pc = 0x125368u;
    {
        const bool branch_taken_0x125368 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125368u;
        // 0x12536c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125368) {
            ctx->pc = 0x125390u;
            goto label_125390;
        }
    }
    ctx->pc = 0x125370u;
label_125370:
    // 0x125370: 0x2b31023  subu        $v0, $s5, $s3
    ctx->pc = 0x125370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_125374:
    // 0x125374: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125378:
    // 0x125378: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x125378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
label_12537c:
    // 0x12537c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125380:
    // 0x125380: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x125380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_125384:
    // 0x125384: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_125388:
    if (ctx->pc == 0x125388u) {
        ctx->pc = 0x125388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125384u;
        // 0x125388: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12538Cu;
        goto label_12538c;
    }
    ctx->pc = 0x125384u;
    {
        const bool branch_taken_0x125384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125384u;
        // 0x125388: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125384) {
            ctx->pc = 0x125348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125348;
        }
    }
    ctx->pc = 0x12538Cu;
label_12538c:
    // 0x12538c: 0x0  nop
    ctx->pc = 0x12538cu;
    // NOP
label_125390:
    // 0x125390: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_125394:
    // 0x125394: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
label_125398:
    if (ctx->pc == 0x125398u) {
        ctx->pc = 0x125398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125394u;
        // 0x125398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12539Cu;
        goto label_12539c;
    }
    ctx->pc = 0x125394u;
    {
        const bool branch_taken_0x125394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x125394) {
            ctx->pc = 0x125398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125394u;
            // 0x125398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1253DCu;
            goto label_1253dc;
        }
    }
    ctx->pc = 0x12539Cu;
label_12539c:
    // 0x12539c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1253a0:
    // 0x1253a0: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_1253a4:
    if (ctx->pc == 0x1253A4u) {
        ctx->pc = 0x1253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253A0u;
        // 0x1253a4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253A8u;
        goto label_1253a8;
    }
    ctx->pc = 0x1253A0u;
    {
        const bool branch_taken_0x1253a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253A0u;
        // 0x1253a4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253a0) {
            ctx->pc = 0x125348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125348;
        }
    }
    ctx->pc = 0x1253A8u;
label_1253a8:
    // 0x1253a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1253a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1253ac:
    // 0x1253ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1253acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1253b0:
    // 0x1253b0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1253b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1253b4:
    // 0x1253b4: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1253b8:
    // 0x1253b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1253b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1253bc:
    // 0x1253bc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1253bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1253c0:
    // 0x1253c0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1253c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1253c4:
    // 0x1253c4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1253c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1253c8:
    // 0x1253c8: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x1253c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1253cc:
    // 0x1253cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1253ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1253d0:
    // 0x1253d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1253d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1253d4:
    // 0x1253d4: 0x40f809  jalr        $v0
label_1253d8:
    if (ctx->pc == 0x1253D8u) {
        ctx->pc = 0x1253D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D4u;
        // 0x1253d8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253DCu;
        goto label_1253dc;
    }
    ctx->pc = 0x1253D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1253DCu);
        ctx->pc = 0x1253D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D4u;
        // 0x1253d8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253D4u, 0x1253DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1253DCu;
label_1253dc:
    // 0x1253dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1253dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1253e0:
    // 0x1253e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1253e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1253e4:
    // 0x1253e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1253e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1253e8:
    // 0x1253e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1253e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1253ec:
    // 0x1253ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1253ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1253f0:
    // 0x1253f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1253f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1253f4:
    // 0x1253f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1253f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1253f8:
    // 0x1253f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1253f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1253fc:
    // 0x1253fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1253fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125400:
    // 0x125400: 0x3e00008  jr          $ra
label_125404:
    if (ctx->pc == 0x125404u) {
        ctx->pc = 0x125404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125400u;
        // 0x125404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125408u;
        goto label_fallthrough_0x125400;
    }
    ctx->pc = 0x125400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125400u;
        // 0x125404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125400:
    ctx->pc = 0x125408u;
}
