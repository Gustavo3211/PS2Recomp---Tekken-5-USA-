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

// Function: sub_004C8350
// Address: 0x4c8350 - 0x4c8460
void sub_004C8350_0x4c8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8350_0x4c8350");
#endif

    switch (ctx->pc) {
        case 0x4c8350u: goto label_4c8350;
        case 0x4c8354u: goto label_4c8354;
        case 0x4c8358u: goto label_4c8358;
        case 0x4c835cu: goto label_4c835c;
        case 0x4c8360u: goto label_4c8360;
        case 0x4c8364u: goto label_4c8364;
        case 0x4c8368u: goto label_4c8368;
        case 0x4c836cu: goto label_4c836c;
        case 0x4c8370u: goto label_4c8370;
        case 0x4c8374u: goto label_4c8374;
        case 0x4c8378u: goto label_4c8378;
        case 0x4c837cu: goto label_4c837c;
        case 0x4c8380u: goto label_4c8380;
        case 0x4c8384u: goto label_4c8384;
        case 0x4c8388u: goto label_4c8388;
        case 0x4c838cu: goto label_4c838c;
        case 0x4c8390u: goto label_4c8390;
        case 0x4c8394u: goto label_4c8394;
        case 0x4c8398u: goto label_4c8398;
        case 0x4c839cu: goto label_4c839c;
        case 0x4c83a0u: goto label_4c83a0;
        case 0x4c83a4u: goto label_4c83a4;
        case 0x4c83a8u: goto label_4c83a8;
        case 0x4c83acu: goto label_4c83ac;
        case 0x4c83b0u: goto label_4c83b0;
        case 0x4c83b4u: goto label_4c83b4;
        case 0x4c83b8u: goto label_4c83b8;
        case 0x4c83bcu: goto label_4c83bc;
        case 0x4c83c0u: goto label_4c83c0;
        case 0x4c83c4u: goto label_4c83c4;
        case 0x4c83c8u: goto label_4c83c8;
        case 0x4c83ccu: goto label_4c83cc;
        case 0x4c83d0u: goto label_4c83d0;
        case 0x4c83d4u: goto label_4c83d4;
        case 0x4c83d8u: goto label_4c83d8;
        case 0x4c83dcu: goto label_4c83dc;
        case 0x4c83e0u: goto label_4c83e0;
        case 0x4c83e4u: goto label_4c83e4;
        case 0x4c83e8u: goto label_4c83e8;
        case 0x4c83ecu: goto label_4c83ec;
        case 0x4c83f0u: goto label_4c83f0;
        case 0x4c83f4u: goto label_4c83f4;
        case 0x4c83f8u: goto label_4c83f8;
        case 0x4c83fcu: goto label_4c83fc;
        case 0x4c8400u: goto label_4c8400;
        case 0x4c8404u: goto label_4c8404;
        case 0x4c8408u: goto label_4c8408;
        case 0x4c840cu: goto label_4c840c;
        case 0x4c8410u: goto label_4c8410;
        case 0x4c8414u: goto label_4c8414;
        case 0x4c8418u: goto label_4c8418;
        case 0x4c841cu: goto label_4c841c;
        case 0x4c8420u: goto label_4c8420;
        case 0x4c8424u: goto label_4c8424;
        case 0x4c8428u: goto label_4c8428;
        case 0x4c842cu: goto label_4c842c;
        case 0x4c8430u: goto label_4c8430;
        case 0x4c8434u: goto label_4c8434;
        case 0x4c8438u: goto label_4c8438;
        case 0x4c843cu: goto label_4c843c;
        case 0x4c8440u: goto label_4c8440;
        case 0x4c8444u: goto label_4c8444;
        case 0x4c8448u: goto label_4c8448;
        case 0x4c844cu: goto label_4c844c;
        case 0x4c8450u: goto label_4c8450;
        case 0x4c8454u: goto label_4c8454;
        case 0x4c8458u: goto label_4c8458;
        case 0x4c845cu: goto label_4c845c;
        default: break;
    }

    ctx->pc = 0x4c8350u;

label_4c8350:
    // 0x4c8350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c8350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c8354:
    // 0x4c8354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c8358:
    // 0x4c8358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c835c:
    // 0x4c835c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c8360:
    // 0x4c8360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c8364:
    // 0x4c8364: 0xc1232f2  jal         func_48CBC8
label_4c8368:
    if (ctx->pc == 0x4C8368u) {
        ctx->pc = 0x4C8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8364u;
        // 0x4c8368: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C836Cu;
        goto label_4c836c;
    }
    ctx->pc = 0x4C8364u;
    SET_GPR_U32(ctx, 31, 0x4C836Cu);
    ctx->pc = 0x4C8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8364u;
    // 0x4c8368: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C8364u, 0x4C836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C836Cu;
label_4c836c:
    // 0x4c836c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4c8370:
    // 0x4c8370: 0xac620f48  sw          $v0, 0xF48($v1)
    ctx->pc = 0x4c8370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3912), GPR_U32(ctx, 2));
label_4c8374:
    // 0x4c8374: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c8374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c8378:
    // 0x4c8378: 0x442002f  bltzl       $v0, . + 4 + (0x2F << 2)
label_4c837c:
    if (ctx->pc == 0x4C837Cu) {
        ctx->pc = 0x4C837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8378u;
        // 0x4c837c: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8380u;
        goto label_4c8380;
    }
    ctx->pc = 0x4C8378u;
    {
        const bool branch_taken_0x4c8378 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c8378) {
            ctx->pc = 0x4C837Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C8378u;
            // 0x4c837c: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C8438u;
            goto label_4c8438;
        }
    }
    ctx->pc = 0x4C8380u;
label_4c8380:
    // 0x4c8380: 0xc12b642  jal         func_4AD908
label_4c8384:
    if (ctx->pc == 0x4C8384u) {
        ctx->pc = 0x4C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8380u;
        // 0x4c8384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8388u;
        goto label_4c8388;
    }
    ctx->pc = 0x4C8380u;
    SET_GPR_U32(ctx, 31, 0x4C8388u);
    ctx->pc = 0x4C8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8380u;
    // 0x4c8384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C8380u, 0x4C8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8388u;
label_4c8388:
    // 0x4c8388: 0x240204f3  addiu       $v0, $zero, 0x4F3
    ctx->pc = 0x4c8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1267));
label_4c838c:
    // 0x4c838c: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x4c838cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_4c8390:
    // 0x4c8390: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4c8390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4c8394:
    // 0x4c8394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c8394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c8398:
    // 0x4c8398: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c8398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_4c839c:
    // 0x4c839c: 0xa606015a  sh          $a2, 0x15A($s0)
    ctx->pc = 0x4c839cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 6));
label_4c83a0:
    // 0x4c83a0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4c83a4:
    // 0x4c83a4: 0xa60501c2  sh          $a1, 0x1C2($s0)
    ctx->pc = 0x4c83a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 5));
label_4c83a8:
    // 0x4c83a8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c83a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c83ac:
    // 0x4c83ac: 0xa606015c  sh          $a2, 0x15C($s0)
    ctx->pc = 0x4c83acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 6));
label_4c83b0:
    // 0x4c83b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c83b4:
    // 0x4c83b4: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c83b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
label_4c83b8:
    // 0x4c83b8: 0x24840f24  addiu       $a0, $a0, 0xF24
    ctx->pc = 0x4c83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3876));
label_4c83bc:
    // 0x4c83bc: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4c83bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4c83c0:
    // 0x4c83c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c83c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4c83c4:
    // 0x4c83c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c83c8:
    // 0x4c83c8: 0x24a50f4c  addiu       $a1, $a1, 0xF4C
    ctx->pc = 0x4c83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3916));
label_4c83cc:
    // 0x4c83cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c83ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4c83d0:
    // 0x4c83d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c83d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c83d4:
    // 0x4c83d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c83d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c83d8:
    // 0x4c83d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c83dc:
    // 0x4c83dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c83e0:
    // 0x4c83e0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c83e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4c83e4:
    // 0x4c83e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c83e8:
    // 0x4c83e8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c83e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4c83ec:
    // 0x4c83ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c83ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c83f0:
    // 0x4c83f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c83f4:
    // 0x4c83f4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c83f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4c83f8:
    // 0x4c83f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c83fc:
    // 0x4c83fc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c83fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4c8400:
    // 0x4c8400: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c8400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c8404:
    // 0x4c8404: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c8404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4c8408:
    // 0x4c8408: 0x242171b0  addiu       $at, $at, 0x71B0
    ctx->pc = 0x4c8408u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29104));
label_4c840c:
    // 0x4c840c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4c8410:
    // 0x4c8410: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c8410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8414:
    // 0x4c8414: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4c8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4c8418:
    // 0x4c8418: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c8418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c841c:
    // 0x4c841c: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4c841cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
label_4c8420:
    // 0x4c8420: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c8420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c8424:
    // 0x4c8424: 0xa60601b6  sh          $a2, 0x1B6($s0)
    ctx->pc = 0x4c8424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 6));
label_4c8428:
    // 0x4c8428: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c8428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c842c:
    // 0x4c842c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4c8430:
    // 0x4c8430: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4c8430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c8434:
    // 0x4c8434: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c8434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4c8438:
    // 0x4c8438: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4c8438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4c843c:
    // 0x4c843c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_4c8440:
    if (ctx->pc == 0x4C8440u) {
        ctx->pc = 0x4C8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C843Cu;
        // 0x4c8440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8444u;
        goto label_4c8444;
    }
    ctx->pc = 0x4C843Cu;
    {
        const bool branch_taken_0x4c843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c843c) {
            ctx->pc = 0x4C8440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C843Cu;
            // 0x4c8440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C84DCu;
            return;
        }
    }
    ctx->pc = 0x4C8444u;
label_4c8444:
    // 0x4c8444: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c8444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c8448:
    // 0x4c8448: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c844c:
    // 0x4c844c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c8450:
    // 0x4c8450: 0x8c63b580  lw          $v1, -0x4A80($v1)
    ctx->pc = 0x4c8450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948224)));
label_4c8454:
    // 0x4c8454: 0x600008  jr          $v1
label_4c8458:
    if (ctx->pc == 0x4C8458u) {
        ctx->pc = 0x4C845Cu;
        goto label_4c845c;
    }
    ctx->pc = 0x4C8454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8454u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C845Cu;
label_4c845c:
    // 0x4c845c: 0x0  nop
    ctx->pc = 0x4c845cu;
    // NOP
    ctx->pc = 0x4c8460u;
}
