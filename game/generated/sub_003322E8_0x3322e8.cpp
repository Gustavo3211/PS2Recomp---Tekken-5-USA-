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

// Function: sub_003322E8
// Address: 0x3322e8 - 0x332c28
void sub_003322E8_0x3322e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003322E8_0x3322e8");
#endif

    switch (ctx->pc) {
        case 0x332374u: goto label_332374;
        case 0x3323acu: goto label_3323ac;
        case 0x3323b8u: goto label_3323b8;
        case 0x3323c4u: goto label_3323c4;
        case 0x332460u: goto label_332460;
        case 0x332468u: goto label_332468;
        case 0x332474u: goto label_332474;
        case 0x332480u: goto label_332480;
        case 0x332530u: goto label_332530;
        case 0x332540u: goto label_332540;
        case 0x33254cu: goto label_33254c;
        case 0x332560u: goto label_332560;
        case 0x332570u: goto label_332570;
        case 0x332580u: goto label_332580;
        case 0x332590u: goto label_332590;
        case 0x3325a0u: goto label_3325a0;
        case 0x3325a8u: goto label_3325a8;
        case 0x3325c4u: goto label_3325c4;
        case 0x3325e0u: goto label_3325e0;
        case 0x3325fcu: goto label_3325fc;
        case 0x332618u: goto label_332618;
        case 0x332634u: goto label_332634;
        case 0x332650u: goto label_332650;
        case 0x33266cu: goto label_33266c;
        case 0x332680u: goto label_332680;
        case 0x3326acu: goto label_3326ac;
        case 0x3326b8u: goto label_3326b8;
        case 0x3326c4u: goto label_3326c4;
        case 0x3326d0u: goto label_3326d0;
        case 0x3326d8u: goto label_3326d8;
        case 0x3326f0u: goto label_3326f0;
        case 0x332718u: goto label_332718;
        case 0x332740u: goto label_332740;
        case 0x332768u: goto label_332768;
        case 0x332790u: goto label_332790;
        case 0x3327b8u: goto label_3327b8;
        case 0x3327e0u: goto label_3327e0;
        case 0x332808u: goto label_332808;
        case 0x332830u: goto label_332830;
        case 0x332858u: goto label_332858;
        case 0x332880u: goto label_332880;
        case 0x3328a8u: goto label_3328a8;
        case 0x3328d0u: goto label_3328d0;
        case 0x3328f8u: goto label_3328f8;
        case 0x332920u: goto label_332920;
        case 0x332960u: goto label_332960;
        case 0x332980u: goto label_332980;
        case 0x3329a8u: goto label_3329a8;
        case 0x3329e0u: goto label_3329e0;
        case 0x332a18u: goto label_332a18;
        case 0x332a60u: goto label_332a60;
        case 0x332a98u: goto label_332a98;
        case 0x332ad0u: goto label_332ad0;
        case 0x332b00u: goto label_332b00;
        case 0x332b60u: goto label_332b60;
        case 0x332b70u: goto label_332b70;
        case 0x332ba8u: goto label_332ba8;
        case 0x332bb4u: goto label_332bb4;
        case 0x332bccu: goto label_332bcc;
        case 0x332c04u: goto label_332c04;
        default: break;
    }

    ctx->pc = 0x3322e8u;

    // 0x3322e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3322e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3322ec: 0x70402004  plzcw       $a0, $v0
    ctx->pc = 0x3322ecu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x3322f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3322f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3322f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3322f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3322f8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3322fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3322fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x332300: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x332300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x332304: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x332304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x332308: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x332308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33230c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x33230cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332310: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x332310u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x332314: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x332314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x332318: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x332318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x33231c: 0x24e78880  addiu       $a3, $a3, -0x7780
    ctx->pc = 0x33231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936704));
    // 0x332320: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x332320u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x332324: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x332324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33232c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332334: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x332334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x332338: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x332338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x33233c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332344: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332348: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x332348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33234c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332350: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332354: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x332354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x332358: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x332358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33235c: 0xaf87ccc4  sw          $a3, -0x333C($gp)
    ctx->pc = 0x33235cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954180), GPR_U32(ctx, 7));
    // 0x332360: 0xaf88ccb4  sw          $t0, -0x334C($gp)
    ctx->pc = 0x332360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954164), GPR_U32(ctx, 8));
    // 0x332364: 0xaf87ccc0  sw          $a3, -0x3340($gp)
    ctx->pc = 0x332364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954176), GPR_U32(ctx, 7));
    // 0x332368: 0xaf83ccb0  sw          $v1, -0x3350($gp)
    ctx->pc = 0x332368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954160), GPR_U32(ctx, 3));
    // 0x33236c: 0xc04a151  jal         func_128544
    ctx->pc = 0x33236Cu;
    SET_GPR_U32(ctx, 31, 0x332374u);
    ctx->pc = 0x332370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33236Cu;
    // 0x332370: 0xaf82ccc8  sw          $v0, -0x3338($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x33236Cu, 0x332374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332374u;
label_332374:
    // 0x332374: 0x8f83ccc4  lw          $v1, -0x333C($gp)
    ctx->pc = 0x332374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954180)));
    // 0x332378: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x332378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33237c: 0x8f85ccc8  lw          $a1, -0x3338($gp)
    ctx->pc = 0x33237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954184)));
    // 0x332380: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332384: 0x24620067  addiu       $v0, $v1, 0x67
    ctx->pc = 0x332384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 103));
    // 0x332388: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x332388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x33238c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x33238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x332390: 0xaf80ccac  sw          $zero, -0x3354($gp)
    ctx->pc = 0x332390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 0));
    // 0x332394: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x332394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332398: 0xaf82cca8  sw          $v0, -0x3358($gp)
    ctx->pc = 0x332398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 2));
    // 0x33239c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x33239cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3323a0: 0xaf85ccb8  sw          $a1, -0x3348($gp)
    ctx->pc = 0x3323a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954168), GPR_U32(ctx, 5));
    // 0x3323a4: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x3323A4u;
    SET_GPR_U32(ctx, 31, 0x3323ACu);
    ctx->pc = 0x3323A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323A4u;
    // 0x3323a8: 0xaf85ccbc  sw          $a1, -0x3344($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x3323A4u, 0x3323ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323ACu;
label_3323ac:
    // 0x3323ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3323acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3323b0: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x3323B0u;
    SET_GPR_U32(ctx, 31, 0x3323B8u);
    ctx->pc = 0x3323B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323B0u;
    // 0x3323b4: 0x24840390  addiu       $a0, $a0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x3323B0u, 0x3323B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323B8u;
label_3323b8:
    // 0x3323b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3323b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3323bc: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x3323BCu;
    SET_GPR_U32(ctx, 31, 0x3323C4u);
    ctx->pc = 0x3323C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323BCu;
    // 0x3323c0: 0x248403a0  addiu       $a0, $a0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x3323BCu, 0x3323C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323C4u;
label_3323c4:
    // 0x3323c4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x3323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x3323c8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x3323c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x3323cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3323ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3323d0: 0xac600404  sw          $zero, 0x404($v1)
    ctx->pc = 0x3323d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440384u, _value); } while (0);
    // 0x3323d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3323d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3323d8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3323d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3323dc: 0x24680414  addiu       $t0, $v1, 0x414
    ctx->pc = 0x3323dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1044));
    // 0x3323e0: 0x8c620404  lw          $v0, 0x404($v1)
    ctx->pc = 0x3323e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x440384u));
    // 0x3323e4: 0x24690424  addiu       $t1, $v1, 0x424
    ctx->pc = 0x3323e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1060));
    // 0x3323e8: 0xac600408  sw          $zero, 0x408($v1)
    ctx->pc = 0x3323e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440388u, _value); } while (0);
    // 0x3323ec: 0x246a0434  addiu       $t2, $v1, 0x434
    ctx->pc = 0x3323ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1076));
    // 0x3323f0: 0x240cfffe  addiu       $t4, $zero, -0x2
    ctx->pc = 0x3323f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3323f4: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x3323f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x3323f8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3323f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x3323fc: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x3323fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x332400: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x332400u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x332404: 0x24a52438  addiu       $a1, $a1, 0x2438
    ctx->pc = 0x332404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9272));
    // 0x332408: 0xdc620408  ld          $v0, 0x408($v1)
    ctx->pc = 0x332408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 1032)));
    // 0x33240c: 0x24c623f0  addiu       $a2, $a2, 0x23F0
    ctx->pc = 0x33240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9200));
    // 0x332410: 0x24842360  addiu       $a0, $a0, 0x2360
    ctx->pc = 0x332410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    // 0x332414: 0x240bfffd  addiu       $t3, $zero, -0x3
    ctx->pc = 0x332414u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x332418: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x332418u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x33241c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x33241cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x332420: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x332420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x332424: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x332424u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x332428: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x332428u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x33242c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x33242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x332430: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x332430u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x332434: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x332434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332438: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x332438u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x33243c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x33243cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x332440: 0xac670400  sw          $a3, 0x400($v1)
    ctx->pc = 0x332440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 7));
    // 0x332444: 0x8c640408  lw          $a0, 0x408($v1)
    ctx->pc = 0x332444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
    // 0x332448: 0xac600410  sw          $zero, 0x410($v1)
    ctx->pc = 0x332448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1040), GPR_U32(ctx, 0));
    // 0x33244c: 0xfc620408  sd          $v0, 0x408($v1)
    ctx->pc = 0x33244cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1032), GPR_U64(ctx, 2));
    // 0x332450: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x332450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x332454: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x332454u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x332458: 0xc0cd03e  jal         func_3340F8
    ctx->pc = 0x332458u;
    SET_GPR_U32(ctx, 31, 0x332460u);
    ctx->pc = 0x33245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332458u;
    // 0x33245c: 0xad400004  sw          $zero, 0x4($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3340F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3340F8u, 0x332458u, 0x332460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332460u;
label_332460:
    // 0x332460: 0xc0c8d60  jal         func_323580
    ctx->pc = 0x332460u;
    SET_GPR_U32(ctx, 31, 0x332468u);
    ctx->pc = 0x323580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323580u, 0x332460u, 0x332468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332468u;
label_332468:
    // 0x332468: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x33246c: 0xc0cc5d4  jal         func_331750
    ctx->pc = 0x33246Cu;
    SET_GPR_U32(ctx, 31, 0x332474u);
    ctx->pc = 0x332470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33246Cu;
    // 0x332470: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331750u, 0x33246Cu, 0x332474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332474u;
label_332474:
    // 0x332474: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332478: 0xc0ce208  jal         func_338820
    ctx->pc = 0x332478u;
    SET_GPR_U32(ctx, 31, 0x332480u);
    ctx->pc = 0x33247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332478u;
    // 0x33247c: 0x248403c0  addiu       $a0, $a0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x332478u, 0x332480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332480u;
label_332480:
    // 0x332480: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x332480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x332484: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332488: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x332488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x33248c: 0x244208c0  addiu       $v0, $v0, 0x8C0
    ctx->pc = 0x33248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x332490: 0x246b003c  addiu       $t3, $v1, 0x3C
    ctx->pc = 0x332490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x332494: 0x24460200  addiu       $a2, $v0, 0x200
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x332498: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x332498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x33249c: 0x24470410  addiu       $a3, $v0, 0x410
    ctx->pc = 0x33249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
    // 0x3324a0: 0x24680024  addiu       $t0, $v1, 0x24
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x3324a4: 0x2469002c  addiu       $t1, $v1, 0x2C
    ctx->pc = 0x3324a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x3324a8: 0x246a0034  addiu       $t2, $v1, 0x34
    ctx->pc = 0x3324a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x3324ac: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x3324acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400428u, _value); } while (0);
    // 0x3324b0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3324b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3324b4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x3324b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400430u, _value); } while (0);
    // 0x3324b8: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x3324b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x3324bc: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x3324bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400438u, _value); } while (0);
    // 0x3324c0: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x3324c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400440u, _value); } while (0);
    // 0x3324c4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3324c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400ACCu, _value); } while (0);
    // 0x3324c8: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x3324c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x400CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CD4u, _value); } while (0);
    // 0x3324cc: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x3324ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CE0u, _value); } while (0);
    // 0x3324d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3324d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400400u, _value); } while (0);
    // 0x3324d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3324d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400404u, _value); } while (0);
    // 0x3324d8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3324d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400410u, _value); } while (0);
    // 0x3324dc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3324dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x3324e0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x3324e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400418u, _value); } while (0);
    // 0x3324e4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3324e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400408u, _value); } while (0);
    // 0x3324e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3324e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40040Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40040Cu, _value); } while (0);
    // 0x3324ec: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3324ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400424u, _value); } while (0);
    // 0x3324f0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x3324f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40042Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40042Cu, _value); } while (0);
    // 0x3324f4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3324f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400434u, _value); } while (0);
    // 0x3324f8: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x3324f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40043Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40043Cu, _value); } while (0);
    // 0x3324fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3324fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C0u, _value); } while (0);
    // 0x332500: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x332500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C4u, _value); } while (0);
    // 0x332504: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x332504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C8u, _value); } while (0);
    // 0x332508: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x332508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008CCu, _value); } while (0);
    // 0x33250c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33250cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC0u, _value); } while (0);
    // 0x332510: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x332510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC4u, _value); } while (0);
    // 0x332514: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x332514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC8u, _value); } while (0);
    // 0x332518: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x332518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CCCu, _value); } while (0);
    // 0x33251c: 0xaca50000  sw          $a1, 0x0($a1)
    ctx->pc = 0x33251cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x400CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CC0u, _value); } while (0);
    // 0x332520: 0xaca50004  sw          $a1, 0x4($a1)
    ctx->pc = 0x332520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x400CC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CC4u, _value); } while (0);
    // 0x332524: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x332524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CDCu, _value); } while (0);
    // 0x332528: 0xc0cb324  jal         func_32CC90
    ctx->pc = 0x332528u;
    SET_GPR_U32(ctx, 31, 0x332530u);
    ctx->pc = 0x33252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332528u;
    // 0x33252c: 0xace70000  sw          $a3, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC90u, 0x332528u, 0x332530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332530u;
label_332530:
    // 0x332530: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x332530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x332534: 0x2471f940  addiu       $s1, $v1, -0x6C0
    ctx->pc = 0x332534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965568));
    // 0x332538: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x332538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332540:
    // 0x332540: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x332544: 0xc0cb632  jal         func_32D8C8
    ctx->pc = 0x332544u;
    SET_GPR_U32(ctx, 31, 0x33254Cu);
    ctx->pc = 0x332548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332544u;
    // 0x332548: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8C8u, 0x332544u, 0x33254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33254Cu;
label_33254c:
    // 0x33254c: 0x1653fffc  bne         $s2, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x33254Cu;
    {
        const bool branch_taken_0x33254c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x332550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33254Cu;
        // 0x332550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33254c) {
            ctx->pc = 0x332540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332540;
        }
    }
    ctx->pc = 0x332554u;
    // 0x332554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332558: 0xc0cb616  jal         func_32D858
    ctx->pc = 0x332558u;
    SET_GPR_U32(ctx, 31, 0x332560u);
    ctx->pc = 0x33255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332558u;
    // 0x33255c: 0x3c110044  lui         $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D858u, 0x332558u, 0x332560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332560u;
label_332560:
    // 0x332560: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332564: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x332564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x332568: 0xc0c69b2  jal         func_31A6C8
    ctx->pc = 0x332568u;
    SET_GPR_U32(ctx, 31, 0x332570u);
    ctx->pc = 0x33256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332568u;
    // 0x33256c: 0x3c100044  lui         $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A6C8u, 0x332568u, 0x332570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332570u;
label_332570:
    // 0x332570: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332574: 0x2484d280  addiu       $a0, $a0, -0x2D80
    ctx->pc = 0x332574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    // 0x332578: 0xc0c79ce  jal         func_31E738
    ctx->pc = 0x332578u;
    SET_GPR_U32(ctx, 31, 0x332580u);
    ctx->pc = 0x33257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332578u;
    // 0x33257c: 0x2610f0c0  addiu       $s0, $s0, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E738u, 0x332578u, 0x332580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332580u;
label_332580:
    // 0x332580: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332584: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x332584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x332588: 0xc0c8138  jal         func_3204E0
    ctx->pc = 0x332588u;
    SET_GPR_U32(ctx, 31, 0x332590u);
    ctx->pc = 0x33258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332588u;
    // 0x33258c: 0x2631f100  addiu       $s1, $s1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3204E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3204E0u, 0x332588u, 0x332590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332590u;
label_332590:
    // 0x332590: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332594: 0x24840440  addiu       $a0, $a0, 0x440
    ctx->pc = 0x332594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
    // 0x332598: 0xc0c68cc  jal         func_31A330
    ctx->pc = 0x332598u;
    SET_GPR_U32(ctx, 31, 0x3325A0u);
    ctx->pc = 0x33259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332598u;
    // 0x33259c: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A330u, 0x332598u, 0x3325A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325A0u;
label_3325a0:
    // 0x3325a0: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3325A0u;
    SET_GPR_U32(ctx, 31, 0x3325A8u);
    ctx->pc = 0x3325A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325A0u;
    // 0x3325a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3325A0u, 0x3325A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325A8u;
label_3325a8:
    // 0x3325a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3325a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3325ac: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x3325acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
    // 0x3325b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3325b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325b4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3325b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3325b8: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3325b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3325bc: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3325BCu;
    SET_GPR_U32(ctx, 31, 0x3325C4u);
    ctx->pc = 0x3325C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325BCu;
    // 0x3325c0: 0x2610f140  addiu       $s0, $s0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3325BCu, 0x3325C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325C4u;
label_3325c4:
    // 0x3325c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3325c8: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x3325c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
    // 0x3325cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3325ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325d0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3325d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3325d4: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x3325d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x3325d8: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3325D8u;
    SET_GPR_U32(ctx, 31, 0x3325E0u);
    ctx->pc = 0x3325DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325D8u;
    // 0x3325dc: 0x2631f180  addiu       $s1, $s1, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3325D8u, 0x3325E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325E0u;
label_3325e0:
    // 0x3325e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3325e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3325e4: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x3325e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x3325e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3325e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325ec: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3325ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3325f0: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3325f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3325f4: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3325F4u;
    SET_GPR_U32(ctx, 31, 0x3325FCu);
    ctx->pc = 0x3325F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325F4u;
    // 0x3325f8: 0x2610f1c0  addiu       $s0, $s0, -0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3325F4u, 0x3325FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325FCu;
label_3325fc:
    // 0x3325fc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3325fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332600: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x332600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x332604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332608: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x332608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x33260c: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x33260cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x332610: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x332610u;
    SET_GPR_U32(ctx, 31, 0x332618u);
    ctx->pc = 0x332614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332610u;
    // 0x332614: 0x2631f200  addiu       $s1, $s1, -0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x332610u, 0x332618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332618u;
label_332618:
    // 0x332618: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x332618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33261c: 0x24632188  addiu       $v1, $v1, 0x2188
    ctx->pc = 0x33261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8584));
    // 0x332620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332624: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x332624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x332628: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33262c: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x33262Cu;
    SET_GPR_U32(ctx, 31, 0x332634u);
    ctx->pc = 0x332630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33262Cu;
    // 0x332630: 0x2610f240  addiu       $s0, $s0, -0xDC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x33262Cu, 0x332634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332634u;
label_332634:
    // 0x332634: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x332634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332638: 0x246321b8  addiu       $v1, $v1, 0x21B8
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8632));
    // 0x33263c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332640: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x332640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x332644: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x332644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x332648: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x332648u;
    SET_GPR_U32(ctx, 31, 0x332650u);
    ctx->pc = 0x33264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332648u;
    // 0x33264c: 0x2631f280  addiu       $s1, $s1, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x332648u, 0x332650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332650u;
label_332650:
    // 0x332650: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x332650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332654: 0x24632240  addiu       $v1, $v1, 0x2240
    ctx->pc = 0x332654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8768));
    // 0x332658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33265c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33265cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x332660: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x332660u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x332664: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x332664u;
    SET_GPR_U32(ctx, 31, 0x33266Cu);
    ctx->pc = 0x332668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332664u;
    // 0x332668: 0x2610f2c0  addiu       $s0, $s0, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x332664u, 0x33266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33266Cu;
label_33266c:
    // 0x33266c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33266cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332670: 0x24632220  addiu       $v1, $v1, 0x2220
    ctx->pc = 0x332670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8736));
    // 0x332674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332678: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x332678u;
    SET_GPR_U32(ctx, 31, 0x332680u);
    ctx->pc = 0x33267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332678u;
    // 0x33267c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x332678u, 0x332680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332680u;
label_332680:
    // 0x332680: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x332680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332684: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x332684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x332688: 0x24632200  addiu       $v1, $v1, 0x2200
    ctx->pc = 0x332688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8704));
    // 0x33268c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x33268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x332690: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x332690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x332694: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x332694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440520u, _value); } while (0);
    // 0x332698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x332698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33269c: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x33269cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4405A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4405A4u, _value); } while (0);
    // 0x3326a0: 0xac4001a8  sw          $zero, 0x1A8($v0)
    ctx->pc = 0x3326a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440628u, _value); } while (0);
    // 0x3326a4: 0xc0c7570  jal         func_31D5C0
    ctx->pc = 0x3326A4u;
    SET_GPR_U32(ctx, 31, 0x3326ACu);
    ctx->pc = 0x3326A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326A4u;
    // 0x3326a8: 0xac40022c  sw          $zero, 0x22C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D5C0u, 0x3326A4u, 0x3326ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326ACu;
label_3326ac:
    // 0x3326ac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x3326acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x3326b0: 0xc0c6faa  jal         func_31BEA8
    ctx->pc = 0x3326B0u;
    SET_GPR_U32(ctx, 31, 0x3326B8u);
    ctx->pc = 0x3326B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326B0u;
    // 0x3326b4: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BEA8u, 0x3326B0u, 0x3326B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326B8u;
label_3326b8:
    // 0x3326b8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3326b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3326bc: 0xc0c8388  jal         func_320E20
    ctx->pc = 0x3326BCu;
    SET_GPR_U32(ctx, 31, 0x3326C4u);
    ctx->pc = 0x3326C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326BCu;
    // 0x3326c0: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E20u, 0x3326BCu, 0x3326C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326C4u;
label_3326c4:
    // 0x3326c4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3326c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3326c8: 0xc0cdbd4  jal         func_336F50
    ctx->pc = 0x3326C8u;
    SET_GPR_U32(ctx, 31, 0x3326D0u);
    ctx->pc = 0x3326CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326C8u;
    // 0x3326cc: 0x2484ec80  addiu       $a0, $a0, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F50u, 0x3326C8u, 0x3326D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326D0u;
label_3326d0:
    // 0x3326d0: 0xc0cfcde  jal         func_33F378
    ctx->pc = 0x3326D0u;
    SET_GPR_U32(ctx, 31, 0x3326D8u);
    ctx->pc = 0x3326D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326D0u;
    // 0x3326d4: 0x26640d00  addiu       $a0, $s3, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F378u, 0x3326D0u, 0x3326D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326D8u;
label_3326d8:
    // 0x3326d8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3326d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3326dc: 0x24860480  addiu       $a2, $a0, 0x480
    ctx->pc = 0x3326dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x3326e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3326e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3326e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3326e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326e8: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3326e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3326ec: 0x0  nop
    ctx->pc = 0x3326ecu;
    // NOP
label_3326f0:
    // 0x3326f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3326f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3326f4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3326f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3326f8: 0x0  nop
    ctx->pc = 0x3326f8u;
    // NOP
    // 0x3326fc: 0x0  nop
    ctx->pc = 0x3326fcu;
    // NOP
    // 0x332700: 0x0  nop
    ctx->pc = 0x332700u;
    // NOP
    // 0x332704: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332704u;
    {
        const bool branch_taken_0x332704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332704u;
        // 0x332708: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332704) {
            ctx->pc = 0x3326F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3326f0;
        }
    }
    ctx->pc = 0x33270Cu;
    // 0x33270c: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x33270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x332710: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332714: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x332714u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332718:
    // 0x332718: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33271c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x33271cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332720: 0x0  nop
    ctx->pc = 0x332720u;
    // NOP
    // 0x332724: 0x0  nop
    ctx->pc = 0x332724u;
    // NOP
    // 0x332728: 0x0  nop
    ctx->pc = 0x332728u;
    // NOP
    // 0x33272c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33272Cu;
    {
        const bool branch_taken_0x33272c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33272Cu;
        // 0x332730: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33272c) {
            ctx->pc = 0x332718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332718;
        }
    }
    ctx->pc = 0x332734u;
    // 0x332734: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x332734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x332738: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33273c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x33273cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332740:
    // 0x332740: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332744: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x332744u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332748: 0x0  nop
    ctx->pc = 0x332748u;
    // NOP
    // 0x33274c: 0x0  nop
    ctx->pc = 0x33274cu;
    // NOP
    // 0x332750: 0x0  nop
    ctx->pc = 0x332750u;
    // NOP
    // 0x332754: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332754u;
    {
        const bool branch_taken_0x332754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332754u;
        // 0x332758: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332754) {
            ctx->pc = 0x332740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332740;
        }
    }
    ctx->pc = 0x33275Cu;
    // 0x33275c: 0x24c200c0  addiu       $v0, $a2, 0xC0
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x332760: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332764: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x332764u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332768:
    // 0x332768: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33276c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x33276cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332770: 0x0  nop
    ctx->pc = 0x332770u;
    // NOP
    // 0x332774: 0x0  nop
    ctx->pc = 0x332774u;
    // NOP
    // 0x332778: 0x0  nop
    ctx->pc = 0x332778u;
    // NOP
    // 0x33277c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33277Cu;
    {
        const bool branch_taken_0x33277c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33277Cu;
        // 0x332780: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33277c) {
            ctx->pc = 0x332768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332768;
        }
    }
    ctx->pc = 0x332784u;
    // 0x332784: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x332784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x332788: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33278c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x33278cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332790:
    // 0x332790: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332794: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x332794u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332798: 0x0  nop
    ctx->pc = 0x332798u;
    // NOP
    // 0x33279c: 0x0  nop
    ctx->pc = 0x33279cu;
    // NOP
    // 0x3327a0: 0x0  nop
    ctx->pc = 0x3327a0u;
    // NOP
    // 0x3327a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3327A4u;
    {
        const bool branch_taken_0x3327a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3327A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327A4u;
        // 0x3327a8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327a4) {
            ctx->pc = 0x332790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332790;
        }
    }
    ctx->pc = 0x3327ACu;
    // 0x3327ac: 0x24c20140  addiu       $v0, $a2, 0x140
    ctx->pc = 0x3327acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x3327b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3327b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3327b4: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3327b4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3327b8:
    // 0x3327b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3327b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3327bc: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3327bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3327c0: 0x0  nop
    ctx->pc = 0x3327c0u;
    // NOP
    // 0x3327c4: 0x0  nop
    ctx->pc = 0x3327c4u;
    // NOP
    // 0x3327c8: 0x0  nop
    ctx->pc = 0x3327c8u;
    // NOP
    // 0x3327cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3327CCu;
    {
        const bool branch_taken_0x3327cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3327D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327CCu;
        // 0x3327d0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327cc) {
            ctx->pc = 0x3327B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3327b8;
        }
    }
    ctx->pc = 0x3327D4u;
    // 0x3327d4: 0x24c20180  addiu       $v0, $a2, 0x180
    ctx->pc = 0x3327d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x3327d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3327dc: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3327dcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3327e0:
    // 0x3327e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3327e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3327e4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3327e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3327e8: 0x0  nop
    ctx->pc = 0x3327e8u;
    // NOP
    // 0x3327ec: 0x0  nop
    ctx->pc = 0x3327ecu;
    // NOP
    // 0x3327f0: 0x0  nop
    ctx->pc = 0x3327f0u;
    // NOP
    // 0x3327f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3327F4u;
    {
        const bool branch_taken_0x3327f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3327F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327F4u;
        // 0x3327f8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327f4) {
            ctx->pc = 0x3327E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3327e0;
        }
    }
    ctx->pc = 0x3327FCu;
    // 0x3327fc: 0x24c201c0  addiu       $v0, $a2, 0x1C0
    ctx->pc = 0x3327fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
    // 0x332800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332804: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x332804u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332808:
    // 0x332808: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33280c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x33280cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332810: 0x0  nop
    ctx->pc = 0x332810u;
    // NOP
    // 0x332814: 0x0  nop
    ctx->pc = 0x332814u;
    // NOP
    // 0x332818: 0x0  nop
    ctx->pc = 0x332818u;
    // NOP
    // 0x33281c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33281Cu;
    {
        const bool branch_taken_0x33281c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33281Cu;
        // 0x332820: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33281c) {
            ctx->pc = 0x332808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332808;
        }
    }
    ctx->pc = 0x332824u;
    // 0x332824: 0x24c20200  addiu       $v0, $a2, 0x200
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x332828: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33282c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x33282cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332830:
    // 0x332830: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332834: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x332834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332838: 0x0  nop
    ctx->pc = 0x332838u;
    // NOP
    // 0x33283c: 0x0  nop
    ctx->pc = 0x33283cu;
    // NOP
    // 0x332840: 0x0  nop
    ctx->pc = 0x332840u;
    // NOP
    // 0x332844: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332844u;
    {
        const bool branch_taken_0x332844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332844u;
        // 0x332848: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332844) {
            ctx->pc = 0x332830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332830;
        }
    }
    ctx->pc = 0x33284Cu;
    // 0x33284c: 0x24c20240  addiu       $v0, $a2, 0x240
    ctx->pc = 0x33284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
    // 0x332850: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332854: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x332854u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332858:
    // 0x332858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33285c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x33285cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332860: 0x0  nop
    ctx->pc = 0x332860u;
    // NOP
    // 0x332864: 0x0  nop
    ctx->pc = 0x332864u;
    // NOP
    // 0x332868: 0x0  nop
    ctx->pc = 0x332868u;
    // NOP
    // 0x33286c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33286Cu;
    {
        const bool branch_taken_0x33286c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33286Cu;
        // 0x332870: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33286c) {
            ctx->pc = 0x332858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332858;
        }
    }
    ctx->pc = 0x332874u;
    // 0x332874: 0x24c20280  addiu       $v0, $a2, 0x280
    ctx->pc = 0x332874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    // 0x332878: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33287c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x33287cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332880:
    // 0x332880: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332884: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x332884u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332888: 0x0  nop
    ctx->pc = 0x332888u;
    // NOP
    // 0x33288c: 0x0  nop
    ctx->pc = 0x33288cu;
    // NOP
    // 0x332890: 0x0  nop
    ctx->pc = 0x332890u;
    // NOP
    // 0x332894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332894u;
    {
        const bool branch_taken_0x332894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332894u;
        // 0x332898: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332894) {
            ctx->pc = 0x332880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332880;
        }
    }
    ctx->pc = 0x33289Cu;
    // 0x33289c: 0x24c202c0  addiu       $v0, $a2, 0x2C0
    ctx->pc = 0x33289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    // 0x3328a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3328a4: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3328a4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3328a8:
    // 0x3328a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3328a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3328ac: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3328acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3328b0: 0x0  nop
    ctx->pc = 0x3328b0u;
    // NOP
    // 0x3328b4: 0x0  nop
    ctx->pc = 0x3328b4u;
    // NOP
    // 0x3328b8: 0x0  nop
    ctx->pc = 0x3328b8u;
    // NOP
    // 0x3328bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3328BCu;
    {
        const bool branch_taken_0x3328bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3328C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328BCu;
        // 0x3328c0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328bc) {
            ctx->pc = 0x3328A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3328a8;
        }
    }
    ctx->pc = 0x3328C4u;
    // 0x3328c4: 0x24c20300  addiu       $v0, $a2, 0x300
    ctx->pc = 0x3328c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 768));
    // 0x3328c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3328cc: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3328ccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3328d0:
    // 0x3328d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3328d4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3328d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3328d8: 0x0  nop
    ctx->pc = 0x3328d8u;
    // NOP
    // 0x3328dc: 0x0  nop
    ctx->pc = 0x3328dcu;
    // NOP
    // 0x3328e0: 0x0  nop
    ctx->pc = 0x3328e0u;
    // NOP
    // 0x3328e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3328E4u;
    {
        const bool branch_taken_0x3328e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3328E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328E4u;
        // 0x3328e8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328e4) {
            ctx->pc = 0x3328D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3328d0;
        }
    }
    ctx->pc = 0x3328ECu;
    // 0x3328ec: 0x24c20340  addiu       $v0, $a2, 0x340
    ctx->pc = 0x3328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 832));
    // 0x3328f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3328f4: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x3328f4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3328f8:
    // 0x3328f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3328fc: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3328fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332900: 0x0  nop
    ctx->pc = 0x332900u;
    // NOP
    // 0x332904: 0x0  nop
    ctx->pc = 0x332904u;
    // NOP
    // 0x332908: 0x0  nop
    ctx->pc = 0x332908u;
    // NOP
    // 0x33290c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33290Cu;
    {
        const bool branch_taken_0x33290c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33290Cu;
        // 0x332910: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33290c) {
            ctx->pc = 0x3328F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3328f8;
        }
    }
    ctx->pc = 0x332914u;
    // 0x332914: 0x24c20380  addiu       $v0, $a2, 0x380
    ctx->pc = 0x332914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x332918: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33291c: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x33291cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332920:
    // 0x332920: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332924: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x332924u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x332928: 0x0  nop
    ctx->pc = 0x332928u;
    // NOP
    // 0x33292c: 0x0  nop
    ctx->pc = 0x33292cu;
    // NOP
    // 0x332930: 0x0  nop
    ctx->pc = 0x332930u;
    // NOP
    // 0x332934: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332934u;
    {
        const bool branch_taken_0x332934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332934u;
        // 0x332938: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332934) {
            ctx->pc = 0x332920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332920;
        }
    }
    ctx->pc = 0x33293Cu;
    // 0x33293c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x33293cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332940: 0x26650d00  addiu       $a1, $s3, 0xD00
    ctx->pc = 0x332940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
    // 0x332944: 0x7cc203e0  sq          $v0, 0x3E0($a2)
    ctx->pc = 0x332944u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 992), GPR_VEC(ctx, 2));
    // 0x332948: 0x24a50068  addiu       $a1, $a1, 0x68
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x33294c: 0x7cc203c0  sq          $v0, 0x3C0($a2)
    ctx->pc = 0x33294cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 960), GPR_VEC(ctx, 2));
    // 0x332950: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x332950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x332954: 0x7cc203d0  sq          $v0, 0x3D0($a2)
    ctx->pc = 0x332954u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 976), GPR_VEC(ctx, 2));
    // 0x332958: 0xc0ce24c  jal         func_338930
    ctx->pc = 0x332958u;
    SET_GPR_U32(ctx, 31, 0x332960u);
    ctx->pc = 0x33295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332958u;
    // 0x33295c: 0x3c140044  lui         $s4, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338930u, 0x332958u, 0x332960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332960u;
label_332960:
    // 0x332960: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x332964: 0x2688f380  addiu       $t0, $s4, -0xC80
    ctx->pc = 0x332964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964096));
    // 0x332968: 0x244220d8  addiu       $v0, $v0, 0x20D8
    ctx->pc = 0x332968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8408));
    // 0x33296c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x33296cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x332970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332974: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x332974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x332978: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x332978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x33297c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x33297cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332980:
    // 0x332980: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332984: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x332984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x332988: 0x0  nop
    ctx->pc = 0x332988u;
    // NOP
    // 0x33298c: 0x0  nop
    ctx->pc = 0x33298cu;
    // NOP
    // 0x332990: 0x0  nop
    ctx->pc = 0x332990u;
    // NOP
    // 0x332994: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332994u;
    {
        const bool branch_taken_0x332994 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332994u;
        // 0x332998: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332994) {
            ctx->pc = 0x332980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332980;
        }
    }
    ctx->pc = 0x33299Cu;
    // 0x33299c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3329a0: 0x25020060  addiu       $v0, $t0, 0x60
    ctx->pc = 0x3329a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x3329a4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x3329a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3329a8:
    // 0x3329a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3329a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3329ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3329acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3329b0: 0x0  nop
    ctx->pc = 0x3329b0u;
    // NOP
    // 0x3329b4: 0x0  nop
    ctx->pc = 0x3329b4u;
    // NOP
    // 0x3329b8: 0x0  nop
    ctx->pc = 0x3329b8u;
    // NOP
    // 0x3329bc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3329BCu;
    {
        const bool branch_taken_0x3329bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3329C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329BCu;
        // 0x3329c0: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329bc) {
            ctx->pc = 0x3329A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3329a8;
        }
    }
    ctx->pc = 0x3329C4u;
    // 0x3329c4: 0x250a0004  addiu       $t2, $t0, 0x4
    ctx->pc = 0x3329c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3329c8: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x3329c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3329cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3329ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3329d0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3329d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3329d4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3329d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3329d8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x3329d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3329dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3329dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3329e0:
    // 0x3329e0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3329e4: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x3329e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3329e8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x3329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3329ec: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3329ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3329f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3329f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3329f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3329f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3329f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3329f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3329fc: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3329FCu;
    {
        const bool branch_taken_0x3329fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329FCu;
        // 0x332a00: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329fc) {
            ctx->pc = 0x3329E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3329e0;
        }
    }
    ctx->pc = 0x332A04u;
    // 0x332a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332a08: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x332a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a0c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x332a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a10: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x332a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x332a14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x332a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_332a18:
    // 0x332a18: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x332a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x332a1c: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x332a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x332a20: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x332a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x332a24: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x332a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x332a28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332a2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x332a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x332a30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x332a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x332a34: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x332A34u;
    {
        const bool branch_taken_0x332a34 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A34u;
        // 0x332a38: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a34) {
            ctx->pc = 0x332A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332a18;
        }
    }
    ctx->pc = 0x332A3Cu;
    // 0x332a3c: 0x25070130  addiu       $a3, $t0, 0x130
    ctx->pc = 0x332a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 304));
    // 0x332a40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x332a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x332a44: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x332a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x332a48: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x332a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x332a4c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x332a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x332a50: 0x25020160  addiu       $v0, $t0, 0x160
    ctx->pc = 0x332a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 352));
    // 0x332a54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x332a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332a58: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x332a58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332a5c: 0x0  nop
    ctx->pc = 0x332a5cu;
    // NOP
label_332a60:
    // 0x332a60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332a64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x332a64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x332a68: 0x0  nop
    ctx->pc = 0x332a68u;
    // NOP
    // 0x332a6c: 0x0  nop
    ctx->pc = 0x332a6cu;
    // NOP
    // 0x332a70: 0x0  nop
    ctx->pc = 0x332a70u;
    // NOP
    // 0x332a74: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332A74u;
    {
        const bool branch_taken_0x332a74 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A74u;
        // 0x332a78: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a74) {
            ctx->pc = 0x332A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332a60;
        }
    }
    ctx->pc = 0x332A7Cu;
    // 0x332a7c: 0x24eb0004  addiu       $t3, $a3, 0x4
    ctx->pc = 0x332a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x332a80: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x332a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x332a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332a88: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x332a88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a8c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x332a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a90: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x332a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x332a94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x332a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_332a98:
    // 0x332a98: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x332a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x332a9c: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x332a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x332aa0: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x332aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x332aa4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x332aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x332aa8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332aac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x332aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x332ab0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x332ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x332ab4: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x332AB4u;
    {
        const bool branch_taken_0x332ab4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AB4u;
        // 0x332ab8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ab4) {
            ctx->pc = 0x332A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332a98;
        }
    }
    ctx->pc = 0x332ABCu;
    // 0x332abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ac0: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x332ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ac4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x332ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ac8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x332ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x332acc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_332ad0:
    // 0x332ad0: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x332ad4: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x332ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x332ad8: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x332ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x332adc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x332adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x332ae0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332ae4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x332ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x332ae8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x332ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x332aec: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x332AECu;
    {
        const bool branch_taken_0x332aec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AECu;
        // 0x332af0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x332aec) {
            ctx->pc = 0x332AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332ad0;
        }
    }
    ctx->pc = 0x332AF4u;
    // 0x332af4: 0x24e400bc  addiu       $a0, $a3, 0xBC
    ctx->pc = 0x332af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 188));
    // 0x332af8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x332afc: 0x0  nop
    ctx->pc = 0x332afcu;
    // NOP
label_332b00:
    // 0x332b00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332b04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x332b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x332b08: 0x0  nop
    ctx->pc = 0x332b08u;
    // NOP
    // 0x332b0c: 0x0  nop
    ctx->pc = 0x332b0cu;
    // NOP
    // 0x332b10: 0x0  nop
    ctx->pc = 0x332b10u;
    // NOP
    // 0x332b14: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332B14u;
    {
        const bool branch_taken_0x332b14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x332B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B14u;
        // 0x332b18: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b14) {
            ctx->pc = 0x332B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332b00;
        }
    }
    ctx->pc = 0x332B1Cu;
    // 0x332b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x332b24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x332b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x332b28: 0x25030200  addiu       $v1, $t0, 0x200
    ctx->pc = 0x332b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x332b2c: 0x250401f0  addiu       $a0, $t0, 0x1F0
    ctx->pc = 0x332b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 496));
    // 0x332b30: 0x24422028  addiu       $v0, $v0, 0x2028
    ctx->pc = 0x332b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8232));
    // 0x332b34: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0
    ctx->pc = 0x332b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    // 0x332b38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x332b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x332b3c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x332b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x332b40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x332b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332b44: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x332b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x332b48: 0x25060220  addiu       $a2, $t0, 0x220
    ctx->pc = 0x332b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 544));
    // 0x332b4c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x332b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x332b50: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332b54: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x332b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x332b58: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x332b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x332b5c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x332b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_332b60:
    // 0x332b60: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x332b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x332b64: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x332b68: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x332b68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x332b6c: 0x24c2001c  addiu       $v0, $a2, 0x1C
    ctx->pc = 0x332b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_332b70:
    // 0x332b70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332b74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x332b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x332b78: 0x0  nop
    ctx->pc = 0x332b78u;
    // NOP
    // 0x332b7c: 0x0  nop
    ctx->pc = 0x332b7cu;
    // NOP
    // 0x332b80: 0x0  nop
    ctx->pc = 0x332b80u;
    // NOP
    // 0x332b84: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332B84u;
    {
        const bool branch_taken_0x332b84 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x332B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B84u;
        // 0x332b88: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b84) {
            ctx->pc = 0x332B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332b70;
        }
    }
    ctx->pc = 0x332B8Cu;
    // 0x332b8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x332b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x332b90: 0x14e4fff3  bne         $a3, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x332B90u;
    {
        const bool branch_taken_0x332b90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x332B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B90u;
        // 0x332b94: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b90) {
            ctx->pc = 0x332B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332b60;
        }
    }
    ctx->pc = 0x332B98u;
    // 0x332b98: 0x251002a0  addiu       $s0, $t0, 0x2A0
    ctx->pc = 0x332b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 672));
    // 0x332b9c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x332b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x332ba0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x332ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332ba8:
    // 0x332ba8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x332ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x332bac: 0xc0ca5be  jal         func_3296F8
    ctx->pc = 0x332BACu;
    SET_GPR_U32(ctx, 31, 0x332BB4u);
    ctx->pc = 0x332BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332BACu;
    // 0x332bb0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296F8u, 0x332BACu, 0x332BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BB4u;
label_332bb4:
    // 0x332bb4: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x332BB4u;
    {
        const bool branch_taken_0x332bb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x332BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BB4u;
        // 0x332bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bb4) {
            ctx->pc = 0x332BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332ba8;
        }
    }
    ctx->pc = 0x332BBCu;
    // 0x332bbc: 0x26700d00  addiu       $s0, $s3, 0xD00
    ctx->pc = 0x332bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
    // 0x332bc0: 0x2684f380  addiu       $a0, $s4, -0xC80
    ctx->pc = 0x332bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964096));
    // 0x332bc4: 0xc0ca95e  jal         func_32A578
    ctx->pc = 0x332BC4u;
    SET_GPR_U32(ctx, 31, 0x332BCCu);
    ctx->pc = 0x332BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332BC4u;
    // 0x332bc8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A578u, 0x332BC4u, 0x332BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BCCu;
label_332bcc:
    // 0x332bcc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x332bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x332bd0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x332bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x332bd4: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x332bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x332bd8: 0x246321e8  addiu       $v1, $v1, 0x21E8
    ctx->pc = 0x332bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x332bdc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x332bdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440720u, _value); } while (0);
    // 0x332be0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x332be0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x44072Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x44072Cu, _value); } while (0);
    // 0x332be4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x332be4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332be8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x332be8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x332bec: 0x260600d4  addiu       $a2, $s0, 0xD4
    ctx->pc = 0x332becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x332bf0: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x332bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x332bf4: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x332bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x332bf8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x332bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x332bfc: 0xc0cb2f6  jal         func_32CBD8
    ctx->pc = 0x332BFCu;
    SET_GPR_U32(ctx, 31, 0x332C04u);
    ctx->pc = 0x332C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332BFCu;
    // 0x332c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBD8u, 0x332BFCu, 0x332C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C04u;
label_332c04:
    // 0x332c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332c0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x332c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332c10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x332c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x332c14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x332c14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332c18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x332c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x332c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x332C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C1Cu;
        // 0x332c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332C24u;
    // 0x332c24: 0x0  nop
    ctx->pc = 0x332c24u;
    // NOP
    ctx->pc = 0x332c28u;
}
