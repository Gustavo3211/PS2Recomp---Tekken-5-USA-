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

// Function: sub_004E72F0
// Address: 0x4e72f0 - 0x4e7500
void sub_004E72F0_0x4e72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E72F0_0x4e72f0");
#endif

    switch (ctx->pc) {
        case 0x4e72f0u: goto label_4e72f0;
        case 0x4e72f4u: goto label_4e72f4;
        case 0x4e72f8u: goto label_4e72f8;
        case 0x4e72fcu: goto label_4e72fc;
        case 0x4e7300u: goto label_4e7300;
        case 0x4e7304u: goto label_4e7304;
        case 0x4e7308u: goto label_4e7308;
        case 0x4e730cu: goto label_4e730c;
        case 0x4e7310u: goto label_4e7310;
        case 0x4e7314u: goto label_4e7314;
        case 0x4e7318u: goto label_4e7318;
        case 0x4e731cu: goto label_4e731c;
        case 0x4e7320u: goto label_4e7320;
        case 0x4e7324u: goto label_4e7324;
        case 0x4e7328u: goto label_4e7328;
        case 0x4e732cu: goto label_4e732c;
        case 0x4e7330u: goto label_4e7330;
        case 0x4e7334u: goto label_4e7334;
        case 0x4e7338u: goto label_4e7338;
        case 0x4e733cu: goto label_4e733c;
        case 0x4e7340u: goto label_4e7340;
        case 0x4e7344u: goto label_4e7344;
        case 0x4e7348u: goto label_4e7348;
        case 0x4e734cu: goto label_4e734c;
        case 0x4e7350u: goto label_4e7350;
        case 0x4e7354u: goto label_4e7354;
        case 0x4e7358u: goto label_4e7358;
        case 0x4e735cu: goto label_4e735c;
        case 0x4e7360u: goto label_4e7360;
        case 0x4e7364u: goto label_4e7364;
        case 0x4e7368u: goto label_4e7368;
        case 0x4e736cu: goto label_4e736c;
        case 0x4e7370u: goto label_4e7370;
        case 0x4e7374u: goto label_4e7374;
        case 0x4e7378u: goto label_4e7378;
        case 0x4e737cu: goto label_4e737c;
        case 0x4e7380u: goto label_4e7380;
        case 0x4e7384u: goto label_4e7384;
        case 0x4e7388u: goto label_4e7388;
        case 0x4e738cu: goto label_4e738c;
        case 0x4e7390u: goto label_4e7390;
        case 0x4e7394u: goto label_4e7394;
        case 0x4e7398u: goto label_4e7398;
        case 0x4e739cu: goto label_4e739c;
        case 0x4e73a0u: goto label_4e73a0;
        case 0x4e73a4u: goto label_4e73a4;
        case 0x4e73a8u: goto label_4e73a8;
        case 0x4e73acu: goto label_4e73ac;
        case 0x4e73b0u: goto label_4e73b0;
        case 0x4e73b4u: goto label_4e73b4;
        case 0x4e73b8u: goto label_4e73b8;
        case 0x4e73bcu: goto label_4e73bc;
        case 0x4e73c0u: goto label_4e73c0;
        case 0x4e73c4u: goto label_4e73c4;
        case 0x4e73c8u: goto label_4e73c8;
        case 0x4e73ccu: goto label_4e73cc;
        case 0x4e73d0u: goto label_4e73d0;
        case 0x4e73d4u: goto label_4e73d4;
        case 0x4e73d8u: goto label_4e73d8;
        case 0x4e73dcu: goto label_4e73dc;
        case 0x4e73e0u: goto label_4e73e0;
        case 0x4e73e4u: goto label_4e73e4;
        case 0x4e73e8u: goto label_4e73e8;
        case 0x4e73ecu: goto label_4e73ec;
        case 0x4e73f0u: goto label_4e73f0;
        case 0x4e73f4u: goto label_4e73f4;
        case 0x4e73f8u: goto label_4e73f8;
        case 0x4e73fcu: goto label_4e73fc;
        case 0x4e7400u: goto label_4e7400;
        case 0x4e7404u: goto label_4e7404;
        case 0x4e7408u: goto label_4e7408;
        case 0x4e740cu: goto label_4e740c;
        case 0x4e7410u: goto label_4e7410;
        case 0x4e7414u: goto label_4e7414;
        case 0x4e7418u: goto label_4e7418;
        case 0x4e741cu: goto label_4e741c;
        case 0x4e7420u: goto label_4e7420;
        case 0x4e7424u: goto label_4e7424;
        case 0x4e7428u: goto label_4e7428;
        case 0x4e742cu: goto label_4e742c;
        case 0x4e7430u: goto label_4e7430;
        case 0x4e7434u: goto label_4e7434;
        case 0x4e7438u: goto label_4e7438;
        case 0x4e743cu: goto label_4e743c;
        case 0x4e7440u: goto label_4e7440;
        case 0x4e7444u: goto label_4e7444;
        case 0x4e7448u: goto label_4e7448;
        case 0x4e744cu: goto label_4e744c;
        case 0x4e7450u: goto label_4e7450;
        case 0x4e7454u: goto label_4e7454;
        case 0x4e7458u: goto label_4e7458;
        case 0x4e745cu: goto label_4e745c;
        case 0x4e7460u: goto label_4e7460;
        case 0x4e7464u: goto label_4e7464;
        case 0x4e7468u: goto label_4e7468;
        case 0x4e746cu: goto label_4e746c;
        case 0x4e7470u: goto label_4e7470;
        case 0x4e7474u: goto label_4e7474;
        case 0x4e7478u: goto label_4e7478;
        case 0x4e747cu: goto label_4e747c;
        case 0x4e7480u: goto label_4e7480;
        case 0x4e7484u: goto label_4e7484;
        case 0x4e7488u: goto label_4e7488;
        case 0x4e748cu: goto label_4e748c;
        case 0x4e7490u: goto label_4e7490;
        case 0x4e7494u: goto label_4e7494;
        case 0x4e7498u: goto label_4e7498;
        case 0x4e749cu: goto label_4e749c;
        case 0x4e74a0u: goto label_4e74a0;
        case 0x4e74a4u: goto label_4e74a4;
        case 0x4e74a8u: goto label_4e74a8;
        case 0x4e74acu: goto label_4e74ac;
        case 0x4e74b0u: goto label_4e74b0;
        case 0x4e74b4u: goto label_4e74b4;
        case 0x4e74b8u: goto label_4e74b8;
        case 0x4e74bcu: goto label_4e74bc;
        case 0x4e74c0u: goto label_4e74c0;
        case 0x4e74c4u: goto label_4e74c4;
        case 0x4e74c8u: goto label_4e74c8;
        case 0x4e74ccu: goto label_4e74cc;
        case 0x4e74d0u: goto label_4e74d0;
        case 0x4e74d4u: goto label_4e74d4;
        case 0x4e74d8u: goto label_4e74d8;
        case 0x4e74dcu: goto label_4e74dc;
        case 0x4e74e0u: goto label_4e74e0;
        case 0x4e74e4u: goto label_4e74e4;
        case 0x4e74e8u: goto label_4e74e8;
        case 0x4e74ecu: goto label_4e74ec;
        case 0x4e74f0u: goto label_4e74f0;
        case 0x4e74f4u: goto label_4e74f4;
        case 0x4e74f8u: goto label_4e74f8;
        case 0x4e74fcu: goto label_4e74fc;
        default: break;
    }

    ctx->pc = 0x4e72f0u;

label_4e72f0:
    // 0x4e72f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e72f4:
    // 0x4e72f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4e72f8:
    // 0x4e72f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e72f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e72fc:
    // 0x4e72fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4e7300:
    // 0x4e7300: 0x267401b4  addiu       $s4, $s3, 0x1B4
    ctx->pc = 0x4e7300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
label_4e7304:
    // 0x4e7304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e7308:
    // 0x4e7308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e7308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e730c:
    // 0x4e730c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4e7310:
    // 0x4e7310: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4e7310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_4e7314:
    // 0x4e7314: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e7314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e7318:
    // 0x4e7318: 0x442006d  bltzl       $v0, . + 4 + (0x6D << 2)
label_4e731c:
    if (ctx->pc == 0x4E731Cu) {
        ctx->pc = 0x4E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7318u;
        // 0x4e731c: 0x966201bc  lhu         $v0, 0x1BC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7320u;
        goto label_4e7320;
    }
    ctx->pc = 0x4E7318u;
    {
        const bool branch_taken_0x4e7318 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e7318) {
            ctx->pc = 0x4E731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7318u;
            // 0x4e731c: 0x966201bc  lhu         $v0, 0x1BC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E74D0u;
            goto label_4e74d0;
        }
    }
    ctx->pc = 0x4E7320u;
label_4e7320:
    // 0x4e7320: 0xc12b642  jal         func_4AD908
label_4e7324:
    if (ctx->pc == 0x4E7324u) {
        ctx->pc = 0x4E7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7320u;
        // 0x4e7324: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7328u;
        goto label_4e7328;
    }
    ctx->pc = 0x4E7320u;
    SET_GPR_U32(ctx, 31, 0x4E7328u);
    ctx->pc = 0x4E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7320u;
    // 0x4e7324: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E7320u, 0x4E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7328u;
label_4e7328:
    // 0x4e7328: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e732c:
    // 0x4e732c: 0x94437f00  lhu         $v1, 0x7F00($v0)
    ctx->pc = 0x4e732cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32512)));
label_4e7330:
    // 0x4e7330: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e7330u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4e7334:
    // 0x4e7334: 0x258c11d0  addiu       $t4, $t4, 0x11D0
    ctx->pc = 0x4e7334u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4560));
label_4e7338:
    // 0x4e7338: 0x266f01be  addiu       $t7, $s3, 0x1BE
    ctx->pc = 0x4e7338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 446));
label_4e733c:
    // 0x4e733c: 0xa663000c  sh          $v1, 0xC($s3)
    ctx->pc = 0x4e733cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
label_4e7340:
    // 0x4e7340: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4e7340u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
label_4e7344:
    // 0x4e7344: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e7344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
label_4e7348:
    // 0x4e7348: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4e7348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_4e734c:
    // 0x4e734c: 0x265211dc  addiu       $s2, $s2, 0x11DC
    ctx->pc = 0x4e734cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4572));
label_4e7350:
    // 0x4e7350: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4e7350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4e7354:
    // 0x4e7354: 0x261011e0  addiu       $s0, $s0, 0x11E0
    ctx->pc = 0x4e7354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4576));
label_4e7358:
    // 0x4e7358: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e735c:
    // 0x4e735c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e735cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
label_4e7360:
    // 0x4e7360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e7364:
    // 0x4e7364: 0x263111e4  addiu       $s1, $s1, 0x11E4
    ctx->pc = 0x4e7364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4580));
label_4e7368:
    // 0x4e7368: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e736c:
    // 0x4e736c: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x4e736cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_4e7370:
    // 0x4e7370: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e7370u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e7374:
    // 0x4e7374: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e7378:
    // 0x4e7378: 0x35ce004d  ori         $t6, $t6, 0x4D
    ctx->pc = 0x4e7378u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)77);
label_4e737c:
    // 0x4e737c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e737cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4e7380:
    // 0x4e7380: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e7380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e7384:
    // 0x4e7384: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e7384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4e7388:
    // 0x4e7388: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x4e7388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4e738c:
    // 0x4e738c: 0x24c611d4  addiu       $a2, $a2, 0x11D4
    ctx->pc = 0x4e738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4564));
label_4e7390:
    // 0x4e7390: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4e7390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_4e7394:
    // 0x4e7394: 0x24e711d8  addiu       $a3, $a3, 0x11D8
    ctx->pc = 0x4e7394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4568));
label_4e7398:
    // 0x4e7398: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e7398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e739c:
    // 0x4e739c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e73a0:
    // 0x4e73a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e73a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e73a4:
    // 0x4e73a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4e73a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e73a8:
    // 0x4e73a8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e73ac:
    // 0x4e73ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e73acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e73b0:
    // 0x4e73b0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4e73b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e73b4:
    // 0x4e73b4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4e73b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e73b8:
    // 0x4e73b8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e73b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e73bc:
    // 0x4e73bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e73c0:
    // 0x4e73c0: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4e73c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_4e73c4:
    // 0x4e73c4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e73c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e73c8:
    // 0x4e73c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e73c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e73cc:
    // 0x4e73cc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e73d0:
    // 0x4e73d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e73d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e73d4:
    // 0x4e73d4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e73d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e73d8:
    // 0x4e73d8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4e73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4e73dc:
    // 0x4e73dc: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e73e0:
    // 0x4e73e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e73e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e73e4:
    // 0x4e73e4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e73e8:
    // 0x4e73e8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e73e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e73ec:
    // 0x4e73ec: 0xa6620160  sh          $v0, 0x160($s3)
    ctx->pc = 0x4e73ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 2));
label_4e73f0:
    // 0x4e73f0: 0x85eb0000  lh          $t3, 0x0($t7)
    ctx->pc = 0x4e73f0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_4e73f4:
    // 0x4e73f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4e73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4e73f8:
    // 0x4e73f8: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x4e73f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
label_4e73fc:
    // 0x4e73fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e73fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e7400:
    // 0x4e7400: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4e7400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
label_4e7404:
    // 0x4e7404: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e7404u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e7408:
    // 0x4e7408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e740c:
    // 0x4e740c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e740cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e7410:
    // 0x4e7410: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4e7410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4e7414:
    // 0x4e7414: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e7414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e7418:
    // 0x4e7418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e741c:
    // 0x4e741c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e741cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e7420:
    // 0x4e7420: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e7420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e7424:
    // 0x4e7424: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x4e7424u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e7428:
    // 0x4e7428: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x4e7428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_4e742c:
    // 0x4e742c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4e742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_4e7430:
    // 0x4e7430: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e7430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e7434:
    // 0x4e7434: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e7434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4e7438:
    // 0x4e7438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e7438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e743c:
    // 0x4e743c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4e743cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4e7440:
    // 0x4e7440: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e7440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e7444:
    // 0x4e7444: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e7444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e7448:
    // 0x4e7448: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e7448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e744c:
    // 0x4e744c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e7450:
    // 0x4e7450: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e7450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4e7454:
    // 0x4e7454: 0x24217f10  addiu       $at, $at, 0x7F10
    ctx->pc = 0x4e7454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32528));
label_4e7458:
    // 0x4e7458: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4e745c:
    // 0x4e745c: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x4e745cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7460:
    // 0x4e7460: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4e7464:
    // 0x4e7464: 0xa66b0118  sh          $t3, 0x118($s3)
    ctx->pc = 0x4e7464u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 11));
label_4e7468:
    // 0x4e7468: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e7468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4e746c:
    // 0x4e746c: 0xa663011c  sh          $v1, 0x11C($s3)
    ctx->pc = 0x4e746cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 3));
label_4e7470:
    // 0x4e7470: 0x944b0002  lhu         $t3, 0x2($v0)
    ctx->pc = 0x4e7470u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4e7474:
    // 0x4e7474: 0xa66b0120  sh          $t3, 0x120($s3)
    ctx->pc = 0x4e7474u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 11));
label_4e7478:
    // 0x4e7478: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4e7478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4e747c:
    // 0x4e747c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7480:
    // 0x4e7480: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e7480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7484:
    // 0x4e7484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e7484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e7488:
    // 0x4e7488: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e7488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e748c:
    // 0x4e748c: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x4e748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
label_4e7490:
    // 0x4e7490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e7490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e7494:
    // 0x4e7494: 0xc12b7ee  jal         func_4ADFB8
label_4e7498:
    if (ctx->pc == 0x4E7498u) {
        ctx->pc = 0x4E7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7494u;
        // 0x4e7498: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E749Cu;
        goto label_4e749c;
    }
    ctx->pc = 0x4E7494u;
    SET_GPR_U32(ctx, 31, 0x4E749Cu);
    ctx->pc = 0x4E7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7494u;
    // 0x4e7498: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4E7494u, 0x4E749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E749Cu;
label_4e749c:
    // 0x4e749c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e749cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4e74a0:
    // 0x4e74a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e74a4:
    // 0x4e74a4: 0xa6630136  sh          $v1, 0x136($s3)
    ctx->pc = 0x4e74a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 310), (uint16_t)GPR_U32(ctx, 3));
label_4e74a8:
    // 0x4e74a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e74a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e74ac:
    // 0x4e74ac: 0xa6620138  sh          $v0, 0x138($s3)
    ctx->pc = 0x4e74acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 312), (uint16_t)GPR_U32(ctx, 2));
label_4e74b0:
    // 0x4e74b0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e74b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e74b4:
    // 0x4e74b4: 0xc127e84  jal         func_49FA10
label_4e74b8:
    if (ctx->pc == 0x4E74B8u) {
        ctx->pc = 0x4E74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E74B4u;
        // 0x4e74b8: 0xa663013a  sh          $v1, 0x13A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E74BCu;
        goto label_4e74bc;
    }
    ctx->pc = 0x4E74B4u;
    SET_GPR_U32(ctx, 31, 0x4E74BCu);
    ctx->pc = 0x4E74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E74B4u;
    // 0x4e74b8: 0xa663013a  sh          $v1, 0x13A($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E74B4u, 0x4E74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E74BCu;
label_4e74bc:
    // 0x4e74bc: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4e74bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
label_4e74c0:
    // 0x4e74c0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e74c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e74c4:
    // 0x4e74c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4e74c8:
    // 0x4e74c8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4e74c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e74cc:
    // 0x4e74cc: 0x966201bc  lhu         $v0, 0x1BC($s3)
    ctx->pc = 0x4e74ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_4e74d0:
    // 0x4e74d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e74d4:
    // 0x4e74d4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e74d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e74d8:
    // 0x4e74d8: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x4e74d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4e74dc:
    // 0x4e74dc: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_4e74e0:
    if (ctx->pc == 0x4E74E0u) {
        ctx->pc = 0x4E74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E74DCu;
        // 0x4e74e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E74E4u;
        goto label_4e74e4;
    }
    ctx->pc = 0x4E74DCu;
    {
        const bool branch_taken_0x4e74dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E74DCu;
        // 0x4e74e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e74dc) {
            ctx->pc = 0x4E7690u;
            return;
        }
    }
    ctx->pc = 0x4E74E4u;
label_4e74e4:
    // 0x4e74e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e74e8:
    // 0x4e74e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4e74ec:
    // 0x4e74ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e74f0:
    // 0x4e74f0: 0x8c63ba40  lw          $v1, -0x45C0($v1)
    ctx->pc = 0x4e74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949440)));
label_4e74f4:
    // 0x4e74f4: 0x600008  jr          $v1
label_4e74f8:
    if (ctx->pc == 0x4E74F8u) {
        ctx->pc = 0x4E74FCu;
        goto label_4e74fc;
    }
    ctx->pc = 0x4E74F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E74F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E74FCu;
label_4e74fc:
    // 0x4e74fc: 0x0  nop
    ctx->pc = 0x4e74fcu;
    // NOP
    ctx->pc = 0x4e7500u;
}
