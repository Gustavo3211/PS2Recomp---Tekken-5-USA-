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

// Function: sub_00326598
// Address: 0x326598 - 0x3267a8
void sub_00326598_0x326598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326598_0x326598");
#endif

    switch (ctx->pc) {
        case 0x326598u: goto label_326598;
        case 0x32659cu: goto label_32659c;
        case 0x3265a0u: goto label_3265a0;
        case 0x3265a4u: goto label_3265a4;
        case 0x3265a8u: goto label_3265a8;
        case 0x3265acu: goto label_3265ac;
        case 0x3265b0u: goto label_3265b0;
        case 0x3265b4u: goto label_3265b4;
        case 0x3265b8u: goto label_3265b8;
        case 0x3265bcu: goto label_3265bc;
        case 0x3265c0u: goto label_3265c0;
        case 0x3265c4u: goto label_3265c4;
        case 0x3265c8u: goto label_3265c8;
        case 0x3265ccu: goto label_3265cc;
        case 0x3265d0u: goto label_3265d0;
        case 0x3265d4u: goto label_3265d4;
        case 0x3265d8u: goto label_3265d8;
        case 0x3265dcu: goto label_3265dc;
        case 0x3265e0u: goto label_3265e0;
        case 0x3265e4u: goto label_3265e4;
        case 0x3265e8u: goto label_3265e8;
        case 0x3265ecu: goto label_3265ec;
        case 0x3265f0u: goto label_3265f0;
        case 0x3265f4u: goto label_3265f4;
        case 0x3265f8u: goto label_3265f8;
        case 0x3265fcu: goto label_3265fc;
        case 0x326600u: goto label_326600;
        case 0x326604u: goto label_326604;
        case 0x326608u: goto label_326608;
        case 0x32660cu: goto label_32660c;
        case 0x326610u: goto label_326610;
        case 0x326614u: goto label_326614;
        case 0x326618u: goto label_326618;
        case 0x32661cu: goto label_32661c;
        case 0x326620u: goto label_326620;
        case 0x326624u: goto label_326624;
        case 0x326628u: goto label_326628;
        case 0x32662cu: goto label_32662c;
        case 0x326630u: goto label_326630;
        case 0x326634u: goto label_326634;
        case 0x326638u: goto label_326638;
        case 0x32663cu: goto label_32663c;
        case 0x326640u: goto label_326640;
        case 0x326644u: goto label_326644;
        case 0x326648u: goto label_326648;
        case 0x32664cu: goto label_32664c;
        case 0x326650u: goto label_326650;
        case 0x326654u: goto label_326654;
        case 0x326658u: goto label_326658;
        case 0x32665cu: goto label_32665c;
        case 0x326660u: goto label_326660;
        case 0x326664u: goto label_326664;
        case 0x326668u: goto label_326668;
        case 0x32666cu: goto label_32666c;
        case 0x326670u: goto label_326670;
        case 0x326674u: goto label_326674;
        case 0x326678u: goto label_326678;
        case 0x32667cu: goto label_32667c;
        case 0x326680u: goto label_326680;
        case 0x326684u: goto label_326684;
        case 0x326688u: goto label_326688;
        case 0x32668cu: goto label_32668c;
        case 0x326690u: goto label_326690;
        case 0x326694u: goto label_326694;
        case 0x326698u: goto label_326698;
        case 0x32669cu: goto label_32669c;
        case 0x3266a0u: goto label_3266a0;
        case 0x3266a4u: goto label_3266a4;
        case 0x3266a8u: goto label_3266a8;
        case 0x3266acu: goto label_3266ac;
        case 0x3266b0u: goto label_3266b0;
        case 0x3266b4u: goto label_3266b4;
        case 0x3266b8u: goto label_3266b8;
        case 0x3266bcu: goto label_3266bc;
        case 0x3266c0u: goto label_3266c0;
        case 0x3266c4u: goto label_3266c4;
        case 0x3266c8u: goto label_3266c8;
        case 0x3266ccu: goto label_3266cc;
        case 0x3266d0u: goto label_3266d0;
        case 0x3266d4u: goto label_3266d4;
        case 0x3266d8u: goto label_3266d8;
        case 0x3266dcu: goto label_3266dc;
        case 0x3266e0u: goto label_3266e0;
        case 0x3266e4u: goto label_3266e4;
        case 0x3266e8u: goto label_3266e8;
        case 0x3266ecu: goto label_3266ec;
        case 0x3266f0u: goto label_3266f0;
        case 0x3266f4u: goto label_3266f4;
        case 0x3266f8u: goto label_3266f8;
        case 0x3266fcu: goto label_3266fc;
        case 0x326700u: goto label_326700;
        case 0x326704u: goto label_326704;
        case 0x326708u: goto label_326708;
        case 0x32670cu: goto label_32670c;
        case 0x326710u: goto label_326710;
        case 0x326714u: goto label_326714;
        case 0x326718u: goto label_326718;
        case 0x32671cu: goto label_32671c;
        case 0x326720u: goto label_326720;
        case 0x326724u: goto label_326724;
        case 0x326728u: goto label_326728;
        case 0x32672cu: goto label_32672c;
        case 0x326730u: goto label_326730;
        case 0x326734u: goto label_326734;
        case 0x326738u: goto label_326738;
        case 0x32673cu: goto label_32673c;
        case 0x326740u: goto label_326740;
        case 0x326744u: goto label_326744;
        case 0x326748u: goto label_326748;
        case 0x32674cu: goto label_32674c;
        case 0x326750u: goto label_326750;
        case 0x326754u: goto label_326754;
        case 0x326758u: goto label_326758;
        case 0x32675cu: goto label_32675c;
        case 0x326760u: goto label_326760;
        case 0x326764u: goto label_326764;
        case 0x326768u: goto label_326768;
        case 0x32676cu: goto label_32676c;
        case 0x326770u: goto label_326770;
        case 0x326774u: goto label_326774;
        case 0x326778u: goto label_326778;
        case 0x32677cu: goto label_32677c;
        case 0x326780u: goto label_326780;
        case 0x326784u: goto label_326784;
        case 0x326788u: goto label_326788;
        case 0x32678cu: goto label_32678c;
        case 0x326790u: goto label_326790;
        case 0x326794u: goto label_326794;
        case 0x326798u: goto label_326798;
        case 0x32679cu: goto label_32679c;
        case 0x3267a0u: goto label_3267a0;
        case 0x3267a4u: goto label_3267a4;
        default: break;
    }

    ctx->pc = 0x326598u;

label_326598:
    // 0x326598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32659c:
    // 0x32659c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3265a0:
    // 0x3265a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3265a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3265a4:
    // 0x3265a4: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x3265a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_3265a8:
    // 0x3265a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3265a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3265ac:
    // 0x3265ac: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3265acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_3265b0:
    // 0x3265b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3265b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3265b4:
    // 0x3265b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3265b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3265b8:
    // 0x3265b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3265b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3265bc:
    // 0x3265bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3265bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3265c0:
    // 0x3265c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3265c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3265c4:
    // 0x3265c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3265c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_3265c8:
    // 0x3265c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3265c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3265cc:
    // 0x3265cc: 0xc0c952e  jal         func_3254B8
label_3265d0:
    if (ctx->pc == 0x3265D0u) {
        ctx->pc = 0x3265D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265CCu;
        // 0x3265d0: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3265D4u;
        goto label_3265d4;
    }
    ctx->pc = 0x3265CCu;
    SET_GPR_U32(ctx, 31, 0x3265D4u);
    ctx->pc = 0x3265D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265CCu;
    // 0x3265d0: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x3265CCu, 0x3265D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3265D4u;
label_3265d4:
    // 0x3265d4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3265d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3265d8:
    // 0x3265d8: 0x26a30d00  addiu       $v1, $s5, 0xD00
    ctx->pc = 0x3265d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
label_3265dc:
    // 0x3265dc: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x3265dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_3265e0:
    // 0x3265e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3265e4:
    // 0x3265e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3265e8:
    if (ctx->pc == 0x3265E8u) {
        ctx->pc = 0x3265E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265E4u;
        // 0x3265e8: 0x24730068  addiu       $s3, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3265ECu;
        goto label_3265ec;
    }
    ctx->pc = 0x3265E4u;
    {
        const bool branch_taken_0x3265e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265E4u;
        // 0x3265e8: 0x24730068  addiu       $s3, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265e4) {
            ctx->pc = 0x3265F8u;
            goto label_3265f8;
        }
    }
    ctx->pc = 0x3265ECu;
label_3265ec:
    // 0x3265ec: 0xc0c8ae2  jal         func_322B88
label_3265f0:
    if (ctx->pc == 0x3265F0u) {
        ctx->pc = 0x3265F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265ECu;
        // 0x3265f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3265F4u;
        goto label_3265f4;
    }
    ctx->pc = 0x3265ECu;
    SET_GPR_U32(ctx, 31, 0x3265F4u);
    ctx->pc = 0x3265F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265ECu;
    // 0x3265f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B88u, 0x3265ECu, 0x3265F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3265F4u;
label_3265f4:
    // 0x3265f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3265f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3265f8:
    // 0x3265f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3265f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3265fc:
    // 0x3265fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_326600:
    // 0x326600: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x326600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_326604:
    // 0x326604: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_326608:
    if (ctx->pc == 0x326608u) {
        ctx->pc = 0x326608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326604u;
        // 0x326608: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32660Cu;
        goto label_32660c;
    }
    ctx->pc = 0x326604u;
    {
        const bool branch_taken_0x326604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326604) {
            ctx->pc = 0x326608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326604u;
            // 0x326608: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326620u;
            goto label_326620;
        }
    }
    ctx->pc = 0x32660Cu;
label_32660c:
    // 0x32660c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_326610:
    // 0x326610: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_326614:
    // 0x326614: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_326618:
    // 0x326618: 0x10000005  b           . + 4 + (0x5 << 2)
label_32661c:
    if (ctx->pc == 0x32661Cu) {
        ctx->pc = 0x32661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326618u;
        // 0x32661c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326620u;
        goto label_326620;
    }
    ctx->pc = 0x326618u;
    {
        const bool branch_taken_0x326618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326618u;
        // 0x32661c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326618) {
            ctx->pc = 0x326630u;
            goto label_326630;
        }
    }
    ctx->pc = 0x326620u;
label_326620:
    // 0x326620: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_326624:
    // 0x326624: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_326628:
    // 0x326628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32662c:
    // 0x32662c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_326630:
    // 0x326630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_326634:
    // 0x326634: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x326634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_326638:
    // 0x326638: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x326638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32663c:
    // 0x32663c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x32663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_326640:
    // 0x326640: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x326640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_326644:
    // 0x326644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x326644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_326648:
    // 0x326648: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32664c:
    // 0x32664c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x32664cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_326650:
    // 0x326650: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x326650u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_326654:
    // 0x326654: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x326654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326658:
    // 0x326658: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_32665c:
    // 0x32665c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x32665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_326660:
    // 0x326660: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326664:
    // 0x326664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326668:
    // 0x326668: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_32666c:
    if (ctx->pc == 0x32666Cu) {
        ctx->pc = 0x32666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326668u;
        // 0x32666c: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326670u;
        goto label_326670;
    }
    ctx->pc = 0x326668u;
    {
        const bool branch_taken_0x326668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326668u;
        // 0x32666c: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326668) {
            ctx->pc = 0x32667Cu;
            goto label_32667c;
        }
    }
    ctx->pc = 0x326670u;
label_326670:
    // 0x326670: 0xc0c8b02  jal         func_322C08
label_326674:
    if (ctx->pc == 0x326674u) {
        ctx->pc = 0x326674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326670u;
        // 0x326674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326678u;
        goto label_326678;
    }
    ctx->pc = 0x326670u;
    SET_GPR_U32(ctx, 31, 0x326678u);
    ctx->pc = 0x326674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326670u;
    // 0x326674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C08u, 0x326670u, 0x326678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326678u;
label_326678:
    // 0x326678: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x326678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32667c:
    // 0x32667c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_326680:
    // 0x326680: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x326680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_326684:
    // 0x326684: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x326684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_326688:
    // 0x326688: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_32668c:
    if (ctx->pc == 0x32668Cu) {
        ctx->pc = 0x32668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326688u;
        // 0x32668c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326690u;
        goto label_326690;
    }
    ctx->pc = 0x326688u;
    {
        const bool branch_taken_0x326688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326688) {
            ctx->pc = 0x32668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326688u;
            // 0x32668c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3266A8u;
            goto label_3266a8;
        }
    }
    ctx->pc = 0x326690u;
label_326690:
    // 0x326690: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x326690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_326694:
    // 0x326694: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_326698:
    // 0x326698: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_32669c:
    // 0x32669c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3266a0:
    if (ctx->pc == 0x3266A0u) {
        ctx->pc = 0x3266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32669Cu;
        // 0x3266a0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3266A4u;
        goto label_3266a4;
    }
    ctx->pc = 0x32669Cu;
    {
        const bool branch_taken_0x32669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32669Cu;
        // 0x3266a0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32669c) {
            ctx->pc = 0x3266B8u;
            goto label_3266b8;
        }
    }
    ctx->pc = 0x3266A4u;
label_3266a4:
    // 0x3266a4: 0x0  nop
    ctx->pc = 0x3266a4u;
    // NOP
label_3266a8:
    // 0x3266a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3266a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_3266ac:
    // 0x3266ac: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3266acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_3266b0:
    // 0x3266b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3266b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3266b4:
    // 0x3266b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3266b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3266b8:
    // 0x3266b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3266b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3266bc:
    // 0x3266bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3266bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3266c0:
    // 0x3266c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3266c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3266c4:
    // 0x3266c4: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x3266c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_3266c8:
    // 0x3266c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3266c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3266cc:
    // 0x3266cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3266ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3266d0:
    // 0x3266d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3266d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3266d4:
    // 0x3266d4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3266d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_3266d8:
    // 0x3266d8: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x3266d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
label_3266dc:
    // 0x3266dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3266dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3266e0:
    // 0x3266e0: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x3266e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3266e4:
    // 0x3266e4: 0x26a40d00  addiu       $a0, $s5, 0xD00
    ctx->pc = 0x3266e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
label_3266e8:
    // 0x3266e8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3266e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3266ec:
    // 0x3266ec: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3266ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3266f0:
    // 0x3266f0: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x3266f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_3266f4:
    // 0x3266f4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3266f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3266f8:
    // 0x3266f8: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_3266fc:
    // 0x3266fc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x3266fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_326700:
    // 0x326700: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x326700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_326704:
    // 0x326704: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x326704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_326708:
    // 0x326708: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x326708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_32670c:
    // 0x32670c: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x32670cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_326710:
    // 0x326710: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x326710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_326714:
    // 0x326714: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_326718:
    // 0x326718: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x326718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_32671c:
    // 0x32671c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_326720:
    // 0x326720: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x326720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_326724:
    // 0x326724: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x326724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_326728:
    // 0x326728: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x326728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_32672c:
    // 0x32672c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x32672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_326730:
    // 0x326730: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x326730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_326734:
    // 0x326734: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x326734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_326738:
    // 0x326738: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x326738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_32673c:
    // 0x32673c: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x32673cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_326740:
    // 0x326740: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x326740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_326744:
    // 0x326744: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x326744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326748:
    // 0x326748: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x326748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_32674c:
    // 0x32674c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_326750:
    // 0x326750: 0x70463389  pcpyld      $a2, $v0, $a2
    ctx->pc = 0x326750u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_326754:
    // 0x326754: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x326754u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
label_326758:
    // 0x326758: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x326758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32675c:
    // 0x32675c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x32675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_326760:
    // 0x326760: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x326760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_326764:
    // 0x326764: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x326764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_326768:
    // 0x326768: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_32676c:
    if (ctx->pc == 0x32676Cu) {
        ctx->pc = 0x32676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326768u;
        // 0x32676c: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326770u;
        goto label_326770;
    }
    ctx->pc = 0x326768u;
    {
        const bool branch_taken_0x326768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326768u;
        // 0x32676c: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326768) {
            ctx->pc = 0x326784u;
            goto label_326784;
        }
    }
    ctx->pc = 0x326770u;
label_326770:
    // 0x326770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x326770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326774:
    // 0x326774: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326778:
    // 0x326778: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x326778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32677c:
    // 0x32677c: 0x60f809  jalr        $v1
label_326780:
    if (ctx->pc == 0x326780u) {
        ctx->pc = 0x326780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32677Cu;
        // 0x326780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326784u;
        goto label_326784;
    }
    ctx->pc = 0x32677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x326784u);
        ctx->pc = 0x326780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32677Cu;
        // 0x326780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32677Cu, 0x326784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326784u;
label_326784:
    // 0x326784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326788:
    // 0x326788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32678c:
    // 0x32678c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32678cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326790:
    // 0x326790: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x326790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_326794:
    // 0x326794: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x326794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326798:
    // 0x326798: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x326798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32679c:
    // 0x32679c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3267a0:
    // 0x3267a0: 0x3e00008  jr          $ra
label_3267a4:
    if (ctx->pc == 0x3267A4u) {
        ctx->pc = 0x3267A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267A0u;
        // 0x3267a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3267A8u;
        goto label_fallthrough_0x3267a0;
    }
    ctx->pc = 0x3267A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3267A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267A0u;
        // 0x3267a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3267a0:
    ctx->pc = 0x3267A8u;
}
