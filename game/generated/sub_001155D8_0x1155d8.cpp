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

// Function: sub_001155D8
// Address: 0x1155d8 - 0x117418
void sub_001155D8_0x1155d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001155D8_0x1155d8");
#endif

    switch (ctx->pc) {
        case 0x115618u: goto label_115618;
        case 0x115630u: goto label_115630;
        case 0x115658u: goto label_115658;
        case 0x1156c4u: goto label_1156c4;
        case 0x115704u: goto label_115704;
        case 0x115714u: goto label_115714;
        case 0x11571cu: goto label_11571c;
        case 0x115730u: goto label_115730;
        case 0x115740u: goto label_115740;
        case 0x115750u: goto label_115750;
        case 0x115758u: goto label_115758;
        case 0x115798u: goto label_115798;
        case 0x1157a8u: goto label_1157a8;
        case 0x1157e8u: goto label_1157e8;
        case 0x115800u: goto label_115800;
        case 0x115828u: goto label_115828;
        case 0x11589cu: goto label_11589c;
        case 0x1158dcu: goto label_1158dc;
        case 0x1158ecu: goto label_1158ec;
        case 0x1158f4u: goto label_1158f4;
        case 0x115908u: goto label_115908;
        case 0x115918u: goto label_115918;
        case 0x115928u: goto label_115928;
        case 0x115930u: goto label_115930;
        case 0x115970u: goto label_115970;
        case 0x115980u: goto label_115980;
        case 0x1159c8u: goto label_1159c8;
        case 0x1159e0u: goto label_1159e0;
        case 0x115a00u: goto label_115a00;
        case 0x115a68u: goto label_115a68;
        case 0x115aa8u: goto label_115aa8;
        case 0x115ad0u: goto label_115ad0;
        case 0x115b30u: goto label_115b30;
        case 0x115b50u: goto label_115b50;
        case 0x115b7cu: goto label_115b7c;
        case 0x115b8cu: goto label_115b8c;
        case 0x115b94u: goto label_115b94;
        case 0x115ba8u: goto label_115ba8;
        case 0x115bb8u: goto label_115bb8;
        case 0x115bc8u: goto label_115bc8;
        case 0x115bd0u: goto label_115bd0;
        case 0x115c00u: goto label_115c00;
        case 0x115c2cu: goto label_115c2c;
        case 0x115c44u: goto label_115c44;
        case 0x115c68u: goto label_115c68;
        case 0x115cb8u: goto label_115cb8;
        case 0x115cc8u: goto label_115cc8;
        case 0x115cd0u: goto label_115cd0;
        case 0x115ce4u: goto label_115ce4;
        case 0x115cf4u: goto label_115cf4;
        case 0x115d04u: goto label_115d04;
        case 0x115d0cu: goto label_115d0c;
        case 0x115d40u: goto label_115d40;
        case 0x115d50u: goto label_115d50;
        case 0x115d70u: goto label_115d70;
        case 0x115d88u: goto label_115d88;
        case 0x115d90u: goto label_115d90;
        case 0x115d98u: goto label_115d98;
        case 0x115db4u: goto label_115db4;
        case 0x115dc8u: goto label_115dc8;
        case 0x115ddcu: goto label_115ddc;
        case 0x115dfcu: goto label_115dfc;
        case 0x115e18u: goto label_115e18;
        case 0x115e40u: goto label_115e40;
        case 0x115e4cu: goto label_115e4c;
        case 0x115e78u: goto label_115e78;
        case 0x115ea4u: goto label_115ea4;
        case 0x115ef4u: goto label_115ef4;
        case 0x115f04u: goto label_115f04;
        case 0x115f0cu: goto label_115f0c;
        case 0x115f24u: goto label_115f24;
        case 0x115f34u: goto label_115f34;
        case 0x115f44u: goto label_115f44;
        case 0x115f4cu: goto label_115f4c;
        case 0x115f80u: goto label_115f80;
        case 0x115fa8u: goto label_115fa8;
        case 0x115fb4u: goto label_115fb4;
        case 0x115fe0u: goto label_115fe0;
        case 0x116010u: goto label_116010;
        case 0x116060u: goto label_116060;
        case 0x116070u: goto label_116070;
        case 0x116078u: goto label_116078;
        case 0x11608cu: goto label_11608c;
        case 0x11609cu: goto label_11609c;
        case 0x1160acu: goto label_1160ac;
        case 0x1160b4u: goto label_1160b4;
        case 0x1160d8u: goto label_1160d8;
        case 0x116118u: goto label_116118;
        case 0x116130u: goto label_116130;
        case 0x116158u: goto label_116158;
        case 0x1161c8u: goto label_1161c8;
        case 0x116208u: goto label_116208;
        case 0x116218u: goto label_116218;
        case 0x116220u: goto label_116220;
        case 0x116234u: goto label_116234;
        case 0x116244u: goto label_116244;
        case 0x116254u: goto label_116254;
        case 0x11625cu: goto label_11625c;
        case 0x116290u: goto label_116290;
        case 0x1162d8u: goto label_1162d8;
        case 0x1162f0u: goto label_1162f0;
        case 0x116318u: goto label_116318;
        case 0x116408u: goto label_116408;
        case 0x116428u: goto label_116428;
        case 0x116454u: goto label_116454;
        case 0x116464u: goto label_116464;
        case 0x11646cu: goto label_11646c;
        case 0x116480u: goto label_116480;
        case 0x116490u: goto label_116490;
        case 0x1164a0u: goto label_1164a0;
        case 0x1164a8u: goto label_1164a8;
        case 0x1164e0u: goto label_1164e0;
        case 0x11651cu: goto label_11651c;
        case 0x116534u: goto label_116534;
        case 0x116560u: goto label_116560;
        case 0x1165c8u: goto label_1165c8;
        case 0x11661cu: goto label_11661c;
        case 0x11663cu: goto label_11663c;
        case 0x116668u: goto label_116668;
        case 0x116678u: goto label_116678;
        case 0x116680u: goto label_116680;
        case 0x116694u: goto label_116694;
        case 0x1166a4u: goto label_1166a4;
        case 0x1166b4u: goto label_1166b4;
        case 0x1166bcu: goto label_1166bc;
        case 0x1166f8u: goto label_1166f8;
        case 0x116708u: goto label_116708;
        case 0x116744u: goto label_116744;
        case 0x11675cu: goto label_11675c;
        case 0x116788u: goto label_116788;
        case 0x1167f4u: goto label_1167f4;
        case 0x116834u: goto label_116834;
        case 0x116844u: goto label_116844;
        case 0x11684cu: goto label_11684c;
        case 0x116860u: goto label_116860;
        case 0x116870u: goto label_116870;
        case 0x116880u: goto label_116880;
        case 0x116888u: goto label_116888;
        case 0x1168b8u: goto label_1168b8;
        case 0x116908u: goto label_116908;
        case 0x116920u: goto label_116920;
        case 0x116940u: goto label_116940;
        case 0x116998u: goto label_116998;
        case 0x1169d8u: goto label_1169d8;
        case 0x116a00u: goto label_116a00;
        case 0x116a64u: goto label_116a64;
        case 0x116a84u: goto label_116a84;
        case 0x116ab0u: goto label_116ab0;
        case 0x116ac0u: goto label_116ac0;
        case 0x116ac8u: goto label_116ac8;
        case 0x116adcu: goto label_116adc;
        case 0x116aecu: goto label_116aec;
        case 0x116afcu: goto label_116afc;
        case 0x116b04u: goto label_116b04;
        case 0x116b48u: goto label_116b48;
        case 0x116b58u: goto label_116b58;
        case 0x116b90u: goto label_116b90;
        case 0x116b9cu: goto label_116b9c;
        case 0x116bc8u: goto label_116bc8;
        case 0x116c14u: goto label_116c14;
        case 0x116c3cu: goto label_116c3c;
        case 0x116c7cu: goto label_116c7c;
        case 0x116cb8u: goto label_116cb8;
        case 0x116cfcu: goto label_116cfc;
        case 0x116d0cu: goto label_116d0c;
        case 0x116d14u: goto label_116d14;
        case 0x116d28u: goto label_116d28;
        case 0x116d38u: goto label_116d38;
        case 0x116d50u: goto label_116d50;
        case 0x116d60u: goto label_116d60;
        case 0x116d68u: goto label_116d68;
        case 0x116d98u: goto label_116d98;
        case 0x116de4u: goto label_116de4;
        case 0x116e04u: goto label_116e04;
        case 0x116e20u: goto label_116e20;
        case 0x116e88u: goto label_116e88;
        case 0x116ea0u: goto label_116ea0;
        case 0x116ec8u: goto label_116ec8;
        case 0x116f24u: goto label_116f24;
        case 0x116f68u: goto label_116f68;
        case 0x116f8cu: goto label_116f8c;
        case 0x116fb8u: goto label_116fb8;
        case 0x116fc8u: goto label_116fc8;
        case 0x116fd0u: goto label_116fd0;
        case 0x116fe4u: goto label_116fe4;
        case 0x116ff4u: goto label_116ff4;
        case 0x117004u: goto label_117004;
        case 0x11700cu: goto label_11700c;
        case 0x117040u: goto label_117040;
        case 0x11707cu: goto label_11707c;
        case 0x117094u: goto label_117094;
        case 0x1170c0u: goto label_1170c0;
        case 0x117128u: goto label_117128;
        case 0x117178u: goto label_117178;
        case 0x1171b8u: goto label_1171b8;
        case 0x1171c8u: goto label_1171c8;
        case 0x1171d0u: goto label_1171d0;
        case 0x1171e4u: goto label_1171e4;
        case 0x1171f4u: goto label_1171f4;
        case 0x117204u: goto label_117204;
        case 0x11720cu: goto label_11720c;
        case 0x117238u: goto label_117238;
        case 0x117280u: goto label_117280;
        case 0x117298u: goto label_117298;
        case 0x1172c8u: goto label_1172c8;
        case 0x117330u: goto label_117330;
        case 0x117350u: goto label_117350;
        case 0x117390u: goto label_117390;
        case 0x1173a0u: goto label_1173a0;
        case 0x1173a8u: goto label_1173a8;
        case 0x1173bcu: goto label_1173bc;
        case 0x1173ccu: goto label_1173cc;
        case 0x1173dcu: goto label_1173dc;
        case 0x1173e4u: goto label_1173e4;
        default: break;
    }

    ctx->pc = 0x1155d8u;

label_1155d8:
    // 0x1155d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1155dc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1155dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1155e0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1155e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1155e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1155e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1155e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155ec: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1155ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1155f0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1155f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1155f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1155f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1155f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1155fc: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x115600: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115604: 0x26f3a340  addiu       $s3, $s7, -0x5CC0
    ctx->pc = 0x115604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x115608: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11560c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115610: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x115610u;
    SET_GPR_U32(ctx, 31, 0x115618u);
    ctx->pc = 0x115614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115610u;
    // 0x115614: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x115610u, 0x115618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115618u;
label_115618:
    // 0x115618: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x115618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11561c: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x11561cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x115620: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115620u;
    {
        const bool branch_taken_0x115620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115620) {
            ctx->pc = 0x115624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115620u;
            // 0x115624: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115634u;
            goto label_115634;
        }
    }
    ctx->pc = 0x115628u;
    // 0x115628: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x115628u;
    SET_GPR_U32(ctx, 31, 0x115630u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x115628u, 0x115630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115630u;
label_115630:
    // 0x115630: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x115630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_115634:
    // 0x115634: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115638: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11563c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11563Cu;
    {
        const bool branch_taken_0x11563c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11563Cu;
        // 0x115640: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11563c) {
            ctx->pc = 0x115684u;
            goto label_115684;
        }
    }
    ctx->pc = 0x115644u;
    // 0x115644: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x115644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x115648: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11564c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115650: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115650u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_115658:
    // 0x115658: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x115658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11565c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11565Cu;
    {
        const bool branch_taken_0x11565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11565Cu;
        // 0x115660: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11565c) {
            ctx->pc = 0x115694u;
            goto label_115694;
        }
    }
    ctx->pc = 0x115664u;
    // 0x115664: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x115664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x115668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11566c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x11566cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x115670: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115674: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115674u;
    {
        const bool branch_taken_0x115674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115674) {
            ctx->pc = 0x115678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115674u;
            // 0x115678: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115658;
        }
    }
    ctx->pc = 0x11567Cu;
    // 0x11567c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11567Cu;
    {
        const bool branch_taken_0x11567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11567Cu;
        // 0x115680: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11567c) {
            ctx->pc = 0x115698u;
            goto label_115698;
        }
    }
    ctx->pc = 0x115684u;
label_115684:
    // 0x115684: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x115684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x115688: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x115688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11568c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11568cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115690: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115690u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_115694:
    // 0x115694: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115698:
    // 0x115698: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115698u;
    {
        const bool branch_taken_0x115698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115698u;
        // 0x11569c: 0x24a2e2f8  addiu       $v0, $a1, -0x1D08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115698) {
            ctx->pc = 0x1156A8u;
            goto label_1156a8;
        }
    }
    ctx->pc = 0x1156A0u;
    // 0x1156a0: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x1156a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x1156a4: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1156a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1156a8:
    // 0x1156a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156ac: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1156acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1156b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1156b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1156b4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1156b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1156b8: 0x2694af80  addiu       $s4, $s4, -0x5080
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x1156bc: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x1156BCu;
    SET_GPR_U32(ctx, 31, 0x1156C4u);
    ctx->pc = 0x1156C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156BCu;
    // 0x1156c0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x1156BCu, 0x1156C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156C4u;
label_1156c4:
    // 0x1156c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1156c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156c8: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1156c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1156cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1156ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1156d0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1156d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1156d4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1156d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1156d8: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x1156d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x1156dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1156dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156e0: 0x26e7a340  addiu       $a3, $s7, -0x5CC0
    ctx->pc = 0x1156e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x1156e4: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1156e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1156e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1156e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1156ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1156f0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1156f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1156f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1156f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1156fc: 0xc044e56  jal         func_113958
    ctx->pc = 0x1156FCu;
    SET_GPR_U32(ctx, 31, 0x115704u);
    ctx->pc = 0x115700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156FCu;
    // 0x115700: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x1156FCu, 0x115704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115704u;
label_115704:
    // 0x115704: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115704u;
    {
        const bool branch_taken_0x115704 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115704u;
        // 0x115708: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115704) {
            ctx->pc = 0x115724u;
            goto label_115724;
        }
    }
    ctx->pc = 0x11570Cu;
    // 0x11570c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11570Cu;
    SET_GPR_U32(ctx, 31, 0x115714u);
    ctx->pc = 0x115710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11570Cu;
    // 0x115710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11570Cu, 0x115714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115714u;
label_115714:
    // 0x115714: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115714u;
    SET_GPR_U32(ctx, 31, 0x11571Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115714u, 0x11571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11571Cu;
label_11571c:
    // 0x11571c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11571Cu;
    {
        const bool branch_taken_0x11571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11571Cu;
        // 0x115720: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11571c) {
            ctx->pc = 0x11575Cu;
            goto label_11575c;
        }
    }
    ctx->pc = 0x115724u;
label_115724:
    // 0x115724: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x115724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x115728: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115728u;
    SET_GPR_U32(ctx, 31, 0x115730u);
    ctx->pc = 0x11572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115728u;
    // 0x11572c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115728u, 0x115730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115730u;
label_115730:
    // 0x115730: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115730u;
    {
        const bool branch_taken_0x115730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115730) {
            ctx->pc = 0x115748u;
            goto label_115748;
        }
    }
    ctx->pc = 0x115738u;
    // 0x115738: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115738u;
    SET_GPR_U32(ctx, 31, 0x115740u);
    ctx->pc = 0x11573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115738u;
    // 0x11573c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115738u, 0x115740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115740u;
label_115740:
    // 0x115740: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115740u;
    {
        const bool branch_taken_0x115740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115740u;
        // 0x115744: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115740) {
            ctx->pc = 0x11575Cu;
            goto label_11575c;
        }
    }
    ctx->pc = 0x115748u;
label_115748:
    // 0x115748: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115748u;
    SET_GPR_U32(ctx, 31, 0x115750u);
    ctx->pc = 0x11574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115748u;
    // 0x11574c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115748u, 0x115750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115750u;
label_115750:
    // 0x115750: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115750u;
    SET_GPR_U32(ctx, 31, 0x115758u);
    ctx->pc = 0x115754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115750u;
    // 0x115754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115750u, 0x115758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115758u;
label_115758:
    // 0x115758: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11575c:
    // 0x11575c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115760: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115764: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115764u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115768: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11576c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11576cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115770: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115774: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115778: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11577c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115780: 0x3e00008  jr          $ra
    ctx->pc = 0x115780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115780u;
        // 0x115784: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115788u;
    // 0x115788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11578c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11578cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115790: 0xc045576  jal         func_1155D8
    ctx->pc = 0x115790u;
    SET_GPR_U32(ctx, 31, 0x115798u);
    ctx->pc = 0x115794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115790u;
    // 0x115794: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x115798u;
label_115798:
    // 0x115798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11579c: 0x3e00008  jr          $ra
    ctx->pc = 0x11579Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1157A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11579Cu;
        // 0x1157a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11579Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1157A4u;
    // 0x1157a4: 0x0  nop
    ctx->pc = 0x1157a4u;
    // NOP
label_1157a8:
    // 0x1157a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1157a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1157ac: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1157acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1157b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1157b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1157b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1157b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157b8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1157b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1157bc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1157bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1157c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1157c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1157c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1157c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1157cc: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x1157ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x1157d0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1157d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1157d4: 0x26f2a340  addiu       $s2, $s7, -0x5CC0
    ctx->pc = 0x1157d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x1157d8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1157d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1157dc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1157dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1157e0: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x1157E0u;
    SET_GPR_U32(ctx, 31, 0x1157E8u);
    ctx->pc = 0x1157E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157E0u;
    // 0x1157e4: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x1157E0u, 0x1157E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E8u;
label_1157e8:
    // 0x1157e8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1157e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1157ec: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x1157ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x1157f0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1157F0u;
    {
        const bool branch_taken_0x1157f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1157f0) {
            ctx->pc = 0x1157F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1157F0u;
            // 0x1157f4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115804u;
            goto label_115804;
        }
    }
    ctx->pc = 0x1157F8u;
    // 0x1157f8: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x1157F8u;
    SET_GPR_U32(ctx, 31, 0x115800u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x1157F8u, 0x115800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115800u;
label_115800:
    // 0x115800: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x115800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_115804:
    // 0x115804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115808: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11580c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11580Cu;
    {
        const bool branch_taken_0x11580c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11580Cu;
        // 0x115810: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11580c) {
            ctx->pc = 0x115854u;
            goto label_115854;
        }
    }
    ctx->pc = 0x115814u;
    // 0x115814: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x115814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x115818: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11581c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115820: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115820u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_115828:
    // 0x115828: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x115828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11582c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11582Cu;
    {
        const bool branch_taken_0x11582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11582Cu;
        // 0x115830: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11582c) {
            ctx->pc = 0x115864u;
            goto label_115864;
        }
    }
    ctx->pc = 0x115834u;
    // 0x115834: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x115834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x115838: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11583c: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x11583cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x115840: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115844: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115844u;
    {
        const bool branch_taken_0x115844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115844) {
            ctx->pc = 0x115848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115844u;
            // 0x115848: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115828;
        }
    }
    ctx->pc = 0x11584Cu;
    // 0x11584c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11584Cu;
    {
        const bool branch_taken_0x11584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11584c) {
            ctx->pc = 0x115868u;
            goto label_115868;
        }
    }
    ctx->pc = 0x115854u;
label_115854:
    // 0x115854: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x115854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x115858: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11585c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11585cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115860: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_115864:
    // 0x115864: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115868:
    // 0x115868: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115868u;
    {
        const bool branch_taken_0x115868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x115868) {
            ctx->pc = 0x11586Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115868u;
            // 0x11586c: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11587Cu;
            goto label_11587c;
        }
    }
    ctx->pc = 0x115870u;
    // 0x115870: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x115870u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x115874: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x115878: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x115878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_11587c:
    // 0x11587c: 0x24a3e310  addiu       $v1, $a1, -0x1CF0
    ctx->pc = 0x11587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
    // 0x115880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115884: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115888: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11588c: 0x2694af80  addiu       $s4, $s4, -0x5080
    ctx->pc = 0x11588cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x115890: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115894: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x115894u;
    SET_GPR_U32(ctx, 31, 0x11589Cu);
    ctx->pc = 0x115898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115894u;
    // 0x115898: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x115894u, 0x11589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11589Cu;
label_11589c:
    // 0x11589c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11589cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158a0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1158a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1158a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1158a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1158a8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1158a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1158ac: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1158acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1158b0: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x1158b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x1158b4: 0x26e7a340  addiu       $a3, $s7, -0x5CC0
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x1158b8: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1158bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1158bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1158c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1158c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1158c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1158c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1158c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1158ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1158d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1158d4: 0xc044e56  jal         func_113958
    ctx->pc = 0x1158D4u;
    SET_GPR_U32(ctx, 31, 0x1158DCu);
    ctx->pc = 0x1158D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158D4u;
    // 0x1158d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x1158D4u, 0x1158DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158DCu;
label_1158dc:
    // 0x1158dc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1158DCu;
    {
        const bool branch_taken_0x1158dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158dc) {
            ctx->pc = 0x1158FCu;
            goto label_1158fc;
        }
    }
    ctx->pc = 0x1158E4u;
    // 0x1158e4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1158E4u;
    SET_GPR_U32(ctx, 31, 0x1158ECu);
    ctx->pc = 0x1158E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158E4u;
    // 0x1158e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1158E4u, 0x1158ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158ECu;
label_1158ec:
    // 0x1158ec: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1158ECu;
    SET_GPR_U32(ctx, 31, 0x1158F4u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1158ECu, 0x1158F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158F4u;
label_1158f4:
    // 0x1158f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1158F4u;
    {
        const bool branch_taken_0x1158f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F4u;
        // 0x1158f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158f4) {
            ctx->pc = 0x115934u;
            goto label_115934;
        }
    }
    ctx->pc = 0x1158FCu;
label_1158fc:
    // 0x1158fc: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x115900: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115900u;
    SET_GPR_U32(ctx, 31, 0x115908u);
    ctx->pc = 0x115904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115900u;
    // 0x115904: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115900u, 0x115908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115908u;
label_115908:
    // 0x115908: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115908u;
    {
        const bool branch_taken_0x115908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115908) {
            ctx->pc = 0x115920u;
            goto label_115920;
        }
    }
    ctx->pc = 0x115910u;
    // 0x115910: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115910u;
    SET_GPR_U32(ctx, 31, 0x115918u);
    ctx->pc = 0x115914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115910u;
    // 0x115914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115910u, 0x115918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115918u;
label_115918:
    // 0x115918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115918u;
    {
        const bool branch_taken_0x115918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115918u;
        // 0x11591c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115918) {
            ctx->pc = 0x115934u;
            goto label_115934;
        }
    }
    ctx->pc = 0x115920u;
label_115920:
    // 0x115920: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115920u;
    SET_GPR_U32(ctx, 31, 0x115928u);
    ctx->pc = 0x115924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115920u;
    // 0x115924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115920u, 0x115928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115928u;
label_115928:
    // 0x115928: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115928u;
    SET_GPR_U32(ctx, 31, 0x115930u);
    ctx->pc = 0x11592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115928u;
    // 0x11592c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115928u, 0x115930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115930u;
label_115930:
    // 0x115930: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115934:
    // 0x115934: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x115934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115938: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115938u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11593c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11593cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115940: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115940u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115944: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115948: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11594c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11594cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115950: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115954: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115958: 0x3e00008  jr          $ra
    ctx->pc = 0x115958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115958u;
        // 0x11595c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115960u;
    // 0x115960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115968: 0xc045576  jal         func_1155D8
    ctx->pc = 0x115968u;
    SET_GPR_U32(ctx, 31, 0x115970u);
    ctx->pc = 0x11596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115968u;
    // 0x11596c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x115970u;
label_115970:
    // 0x115970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115974: 0x3e00008  jr          $ra
    ctx->pc = 0x115974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115974u;
        // 0x115978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11597Cu;
    // 0x11597c: 0x0  nop
    ctx->pc = 0x11597cu;
    // NOP
label_115980:
    // 0x115980: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x115984: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115988: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11598c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115990: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115994: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x115994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115998: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11599c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11599cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159a0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1159a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1159a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1159a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159a8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1159a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1159ac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1159acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1159b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1159b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1159b4: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x1159b8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1159b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1159bc: 0x26f3a340  addiu       $s3, $s7, -0x5CC0
    ctx->pc = 0x1159bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x1159c0: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x1159C0u;
    SET_GPR_U32(ctx, 31, 0x1159C8u);
    ctx->pc = 0x1159C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159C0u;
    // 0x1159c4: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x1159C0u, 0x1159C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159C8u;
label_1159c8:
    // 0x1159c8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1159cc: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x1159ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x1159d0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1159D0u;
    {
        const bool branch_taken_0x1159d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1159d0) {
            ctx->pc = 0x1159D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1159D0u;
            // 0x1159d4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1159E4u;
            goto label_1159e4;
        }
    }
    ctx->pc = 0x1159D8u;
    // 0x1159d8: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x1159D8u;
    SET_GPR_U32(ctx, 31, 0x1159E0u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x1159D8u, 0x1159E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159E0u;
label_1159e0:
    // 0x1159e0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1159e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1159e4:
    // 0x1159e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1159e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159e8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1159e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1159ec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1159ECu;
    {
        const bool branch_taken_0x1159ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159ECu;
        // 0x1159f0: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159ec) {
            ctx->pc = 0x115A2Cu;
            goto label_115a2c;
        }
    }
    ctx->pc = 0x1159F4u;
    // 0x1159f4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1159f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1159f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1159fc: 0x0  nop
    ctx->pc = 0x1159fcu;
    // NOP
label_115a00:
    // 0x115a00: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115a04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115A04u;
    {
        const bool branch_taken_0x115a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A04u;
        // 0x115a08: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a04) {
            ctx->pc = 0x115A30u;
            goto label_115a30;
        }
    }
    ctx->pc = 0x115A0Cu;
    // 0x115a0c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x115a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x115a10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a14: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x115a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x115a18: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115a1c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115A1Cu;
    {
        const bool branch_taken_0x115a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115a1c) {
            ctx->pc = 0x115A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A1Cu;
            // 0x115a20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115a00;
        }
    }
    ctx->pc = 0x115A24u;
    // 0x115a24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115A24u;
    {
        const bool branch_taken_0x115a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A24u;
        // 0x115a28: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a24) {
            ctx->pc = 0x115A34u;
            goto label_115a34;
        }
    }
    ctx->pc = 0x115A2Cu;
label_115a2c:
    // 0x115a2c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x115a2cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_115a30:
    // 0x115a30: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115a34:
    // 0x115a34: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115A34u;
    {
        const bool branch_taken_0x115a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115a34) {
            ctx->pc = 0x115A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A34u;
            // 0x115a38: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A3Cu;
            goto label_115a3c;
        }
    }
    ctx->pc = 0x115A3Cu;
label_115a3c:
    // 0x115a3c: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x115A3Cu;
    {
        const bool branch_taken_0x115a3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x115a3c) {
            ctx->pc = 0x115A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A3Cu;
            // 0x115a40: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A4Cu;
            goto label_115a4c;
        }
    }
    ctx->pc = 0x115A44u;
    // 0x115a44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115A44u;
    {
        const bool branch_taken_0x115a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A44u;
        // 0x115a48: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a44) {
            ctx->pc = 0x115A98u;
            goto label_115a98;
        }
    }
    ctx->pc = 0x115A4Cu;
label_115a4c:
    // 0x115a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a50: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x115a54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x115A54u;
    {
        const bool branch_taken_0x115a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A54u;
        // 0x115a58: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a54) {
            ctx->pc = 0x115A8Cu;
            goto label_115a8c;
        }
    }
    ctx->pc = 0x115A5Cu;
    // 0x115a5c: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x115a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x115a60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115a64: 0x0  nop
    ctx->pc = 0x115a64u;
    // NOP
label_115a68:
    // 0x115a68: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115A6Cu;
    {
        const bool branch_taken_0x115a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A6Cu;
        // 0x115a70: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a6c) {
            ctx->pc = 0x115A8Cu;
            goto label_115a8c;
        }
    }
    ctx->pc = 0x115A74u;
    // 0x115a74: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x115a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115a78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115a80: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115a84: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115A84u;
    {
        const bool branch_taken_0x115a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115a84) {
            ctx->pc = 0x115A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A84u;
            // 0x115a88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115a68;
        }
    }
    ctx->pc = 0x115A8Cu;
label_115a8c:
    // 0x115a8c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x115a90: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115A90u;
    {
        const bool branch_taken_0x115a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115a90) {
            ctx->pc = 0x115A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A90u;
            // 0x115a94: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A98u;
            goto label_115a98;
        }
    }
    ctx->pc = 0x115A98u;
label_115a98:
    // 0x115a98: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x115A98u;
    {
        const bool branch_taken_0x115a98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x115a98) {
            ctx->pc = 0x115AB0u;
            goto label_115ab0;
        }
    }
    ctx->pc = 0x115AA0u;
    // 0x115aa0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115AA0u;
    SET_GPR_U32(ctx, 31, 0x115AA8u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115AA0u, 0x115AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AA8u;
label_115aa8:
    // 0x115aa8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x115AA8u;
    {
        const bool branch_taken_0x115aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AA8u;
        // 0x115aac: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115aa8) {
            ctx->pc = 0x115BD4u;
            goto label_115bd4;
        }
    }
    ctx->pc = 0x115AB0u;
label_115ab0:
    // 0x115ab0: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x115AB0u;
    {
        const bool branch_taken_0x115ab0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x115AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AB0u;
        // 0x115ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ab0) {
            ctx->pc = 0x115AF8u;
            goto label_115af8;
        }
    }
    ctx->pc = 0x115AB8u;
    // 0x115ab8: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x115ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x115abc: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x115abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x115ac0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x115ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115ac4: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x115ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115ac8: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115acc: 0x0  nop
    ctx->pc = 0x115accu;
    // NOP
label_115ad0:
    // 0x115ad0: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x115ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x115ad4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x115ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115ad8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115adc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115ae0: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x115ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x115ae4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115ae8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x115AE8u;
    {
        const bool branch_taken_0x115ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115ae8) {
            ctx->pc = 0x115AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115ad0;
        }
    }
    ctx->pc = 0x115AF0u;
    // 0x115af0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115AF0u;
    {
        const bool branch_taken_0x115af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AF0u;
        // 0x115af4: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115af0) {
            ctx->pc = 0x115B0Cu;
            goto label_115b0c;
        }
    }
    ctx->pc = 0x115AF8u;
label_115af8:
    // 0x115af8: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x115af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x115afc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x115afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115b00: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x115b00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x115b04: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115b04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115b08: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x115b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_115b0c:
    // 0x115b0c: 0x24e3e328  addiu       $v1, $a3, -0x1CD8
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959912));
    // 0x115b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115b18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x115b1c: 0x26f0a340  addiu       $s0, $s7, -0x5CC0
    ctx->pc = 0x115b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x115b20: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115b24: 0x2694af80  addiu       $s4, $s4, -0x5080
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x115b28: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x115B28u;
    SET_GPR_U32(ctx, 31, 0x115B30u);
    ctx->pc = 0x115B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B28u;
    // 0x115b2c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x115B28u, 0x115B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B30u;
label_115b30:
    // 0x115b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115b3c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x115b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x115b40: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x115b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x115b44: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x115b48: 0xc04499e  jal         func_112678
    ctx->pc = 0x115B48u;
    SET_GPR_U32(ctx, 31, 0x115B50u);
    ctx->pc = 0x115B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B48u;
    // 0x115b4c: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x115B48u, 0x115B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B50u;
label_115b50:
    // 0x115b50: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x115b54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115b5c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x115b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x115b60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b68: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x115b6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x115b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115b74: 0xc044e56  jal         func_113958
    ctx->pc = 0x115B74u;
    SET_GPR_U32(ctx, 31, 0x115B7Cu);
    ctx->pc = 0x115B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B74u;
    // 0x115b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x115B74u, 0x115B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B7Cu;
label_115b7c:
    // 0x115b7c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115B7Cu;
    {
        const bool branch_taken_0x115b7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B7Cu;
        // 0x115b80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b7c) {
            ctx->pc = 0x115B9Cu;
            goto label_115b9c;
        }
    }
    ctx->pc = 0x115B84u;
    // 0x115b84: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115B84u;
    SET_GPR_U32(ctx, 31, 0x115B8Cu);
    ctx->pc = 0x115B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B84u;
    // 0x115b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115B84u, 0x115B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B8Cu;
label_115b8c:
    // 0x115b8c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115B8Cu;
    SET_GPR_U32(ctx, 31, 0x115B94u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115B8Cu, 0x115B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B94u;
label_115b94:
    // 0x115b94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115B94u;
    {
        const bool branch_taken_0x115b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B94u;
        // 0x115b98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b94) {
            ctx->pc = 0x115BD4u;
            goto label_115bd4;
        }
    }
    ctx->pc = 0x115B9Cu;
label_115b9c:
    // 0x115b9c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x115b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x115ba0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115BA0u;
    SET_GPR_U32(ctx, 31, 0x115BA8u);
    ctx->pc = 0x115BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BA0u;
    // 0x115ba4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115BA0u, 0x115BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BA8u;
label_115ba8:
    // 0x115ba8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115BA8u;
    {
        const bool branch_taken_0x115ba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115ba8) {
            ctx->pc = 0x115BC0u;
            goto label_115bc0;
        }
    }
    ctx->pc = 0x115BB0u;
    // 0x115bb0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115BB0u;
    SET_GPR_U32(ctx, 31, 0x115BB8u);
    ctx->pc = 0x115BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BB0u;
    // 0x115bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115BB0u, 0x115BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BB8u;
label_115bb8:
    // 0x115bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115BB8u;
    {
        const bool branch_taken_0x115bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BB8u;
        // 0x115bbc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bb8) {
            ctx->pc = 0x115BD4u;
            goto label_115bd4;
        }
    }
    ctx->pc = 0x115BC0u;
label_115bc0:
    // 0x115bc0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115BC0u;
    SET_GPR_U32(ctx, 31, 0x115BC8u);
    ctx->pc = 0x115BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BC0u;
    // 0x115bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115BC0u, 0x115BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BC8u;
label_115bc8:
    // 0x115bc8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115BC8u;
    SET_GPR_U32(ctx, 31, 0x115BD0u);
    ctx->pc = 0x115BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BC8u;
    // 0x115bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115BC8u, 0x115BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BD0u;
label_115bd0:
    // 0x115bd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115bd4:
    // 0x115bd4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x115bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115bd8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115bd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115bdc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115bdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115be0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115be4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115be4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115be8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115bec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115bf0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115bf4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x115BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF8u;
        // 0x115bfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C00u;
label_115c00:
    // 0x115c00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x115c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x115c04: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c0c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x115c10: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115c14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x115c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115c18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x115c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x115c1c: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x115c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x115c20: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115c24: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x115C24u;
    SET_GPR_U32(ctx, 31, 0x115C2Cu);
    ctx->pc = 0x115C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C24u;
    // 0x115c28: 0x2670a340  addiu       $s0, $s3, -0x5CC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x115C24u, 0x115C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C2Cu;
label_115c2c:
    // 0x115c2c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x115c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x115c30: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x115c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x115c34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115C34u;
    {
        const bool branch_taken_0x115c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C34u;
        // 0x115c38: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c34) {
            ctx->pc = 0x115C48u;
            goto label_115c48;
        }
    }
    ctx->pc = 0x115C3Cu;
    // 0x115c3c: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x115C3Cu;
    SET_GPR_U32(ctx, 31, 0x115C44u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x115C3Cu, 0x115C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C44u;
label_115c44:
    // 0x115c44: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_115c48:
    // 0x115c48: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x115c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x115c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115c50: 0x2442e340  addiu       $v0, $v0, -0x1CC0
    ctx->pc = 0x115c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959936));
    // 0x115c54: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x115c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x115c58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115c5c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x115c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x115c60: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x115C60u;
    SET_GPR_U32(ctx, 31, 0x115C68u);
    ctx->pc = 0x115C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C60u;
    // 0x115c64: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x115C60u, 0x115C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C68u;
label_115c68:
    // 0x115c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c6c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x115c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115c70: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115c74: 0xae71a340  sw          $s1, -0x5CC0($s3)
    ctx->pc = 0x115c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943552), GPR_U32(ctx, 17));
    // 0x115c78: 0x2452af80  addiu       $s2, $v0, -0x5080
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x115c7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x115c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x115c80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115c84: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x115c88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x115c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x115c8c: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x115c90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c94: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115c98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ca0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115ca4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x115ca8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x115ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115cb0: 0xc044e56  jal         func_113958
    ctx->pc = 0x115CB0u;
    SET_GPR_U32(ctx, 31, 0x115CB8u);
    ctx->pc = 0x115CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CB0u;
    // 0x115cb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x115CB0u, 0x115CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CB8u;
label_115cb8:
    // 0x115cb8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115CB8u;
    {
        const bool branch_taken_0x115cb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB8u;
        // 0x115cbc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb8) {
            ctx->pc = 0x115CD8u;
            goto label_115cd8;
        }
    }
    ctx->pc = 0x115CC0u;
    // 0x115cc0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115CC0u;
    SET_GPR_U32(ctx, 31, 0x115CC8u);
    ctx->pc = 0x115CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CC0u;
    // 0x115cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115CC0u, 0x115CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CC8u;
label_115cc8:
    // 0x115cc8: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115CC8u;
    SET_GPR_U32(ctx, 31, 0x115CD0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115CC8u, 0x115CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CD0u;
label_115cd0:
    // 0x115cd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115CD0u;
    {
        const bool branch_taken_0x115cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD0u;
        // 0x115cd4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd0) {
            ctx->pc = 0x115D10u;
            goto label_115d10;
        }
    }
    ctx->pc = 0x115CD8u;
label_115cd8:
    // 0x115cd8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x115cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x115cdc: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115CDCu;
    SET_GPR_U32(ctx, 31, 0x115CE4u);
    ctx->pc = 0x115CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CDCu;
    // 0x115ce0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115CDCu, 0x115CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CE4u;
label_115ce4:
    // 0x115ce4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115CE4u;
    {
        const bool branch_taken_0x115ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115ce4) {
            ctx->pc = 0x115CFCu;
            goto label_115cfc;
        }
    }
    ctx->pc = 0x115CECu;
    // 0x115cec: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115CECu;
    SET_GPR_U32(ctx, 31, 0x115CF4u);
    ctx->pc = 0x115CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CECu;
    // 0x115cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115CECu, 0x115CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CF4u;
label_115cf4:
    // 0x115cf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115CF4u;
    {
        const bool branch_taken_0x115cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CF4u;
        // 0x115cf8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cf4) {
            ctx->pc = 0x115D10u;
            goto label_115d10;
        }
    }
    ctx->pc = 0x115CFCu;
label_115cfc:
    // 0x115cfc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115CFCu;
    SET_GPR_U32(ctx, 31, 0x115D04u);
    ctx->pc = 0x115D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CFCu;
    // 0x115d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115CFCu, 0x115D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D04u;
label_115d04:
    // 0x115d04: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115D04u;
    SET_GPR_U32(ctx, 31, 0x115D0Cu);
    ctx->pc = 0x115D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D04u;
    // 0x115d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115D04u, 0x115D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D0Cu;
label_115d0c:
    // 0x115d0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115d10:
    // 0x115d10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x115d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115d14: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115d18: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115d1c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115d20: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115d24: 0x3e00008  jr          $ra
    ctx->pc = 0x115D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D24u;
        // 0x115d28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D2Cu;
    // 0x115d2c: 0x0  nop
    ctx->pc = 0x115d2cu;
    // NOP
    // 0x115d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115d38: 0xc045576  jal         func_1155D8
    ctx->pc = 0x115D38u;
    SET_GPR_U32(ctx, 31, 0x115D40u);
    ctx->pc = 0x115D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D38u;
    // 0x115d3c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x115D40u;
label_115d40:
    // 0x115d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d44: 0x3e00008  jr          $ra
    ctx->pc = 0x115D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D44u;
        // 0x115d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D4Cu;
    // 0x115d4c: 0x0  nop
    ctx->pc = 0x115d4cu;
    // NOP
label_115d50:
    // 0x115d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115d60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x115d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115d64: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x115d68: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x115D68u;
    SET_GPR_U32(ctx, 31, 0x115D70u);
    ctx->pc = 0x115D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D68u;
    // 0x115d6c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x115D68u, 0x115D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D70u;
label_115d70:
    // 0x115d70: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x115d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x115d74: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x115d74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x115d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115D78u;
    {
        const bool branch_taken_0x115d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115d78) {
            ctx->pc = 0x115D88u;
            goto label_115d88;
        }
    }
    ctx->pc = 0x115D80u;
    // 0x115d80: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x115D80u;
    SET_GPR_U32(ctx, 31, 0x115D88u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x115D80u, 0x115D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D88u;
label_115d88:
    // 0x115d88: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115D88u;
    SET_GPR_U32(ctx, 31, 0x115D90u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115D88u, 0x115D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D90u;
label_115d90:
    // 0x115d90: 0xc044e34  jal         func_1138D0
    ctx->pc = 0x115D90u;
    SET_GPR_U32(ctx, 31, 0x115D98u);
    ctx->pc = 0x1138D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138D0u, 0x115D90u, 0x115D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D98u;
label_115d98:
    // 0x115d98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d9c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x115D9Cu;
    {
        const bool branch_taken_0x115d9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D9Cu;
        // 0x115da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d9c) {
            ctx->pc = 0x115DACu;
            goto label_115dac;
        }
    }
    ctx->pc = 0x115DA4u;
    // 0x115da4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x115DA4u;
    {
        const bool branch_taken_0x115da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DA4u;
        // 0x115da8: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115da4) {
            ctx->pc = 0x115E00u;
            goto label_115e00;
        }
    }
    ctx->pc = 0x115DACu;
label_115dac:
    // 0x115dac: 0xc045576  jal         func_1155D8
    ctx->pc = 0x115DACu;
    SET_GPR_U32(ctx, 31, 0x115DB4u);
    ctx->pc = 0x115DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DACu;
    // 0x115db0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x115DB4u;
label_115db4:
    // 0x115db4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115db8: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x115DB8u;
    {
        const bool branch_taken_0x115db8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x115DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DB8u;
        // 0x115dbc: 0x3c100013  lui         $s0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115db8) {
            ctx->pc = 0x115DD4u;
            goto label_115dd4;
        }
    }
    ctx->pc = 0x115DC0u;
    // 0x115dc0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115DC0u;
    SET_GPR_U32(ctx, 31, 0x115DC8u);
    ctx->pc = 0x115DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DC0u;
    // 0x115dc4: 0x8e0411a0  lw          $a0, 0x11A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115DC0u, 0x115DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DC8u;
label_115dc8:
    // 0x115dc8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x115dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x115dcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x115DCCu;
    {
        const bool branch_taken_0x115dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DCCu;
        // 0x115dd0: 0x8e0411a0  lw          $a0, 0x11A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115dcc) {
            ctx->pc = 0x115DF4u;
            goto label_115df4;
        }
    }
    ctx->pc = 0x115DD4u;
label_115dd4:
    // 0x115dd4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115DD4u;
    SET_GPR_U32(ctx, 31, 0x115DDCu);
    ctx->pc = 0x115DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DD4u;
    // 0x115dd8: 0x8e0411a0  lw          $a0, 0x11A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115DD4u, 0x115DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DDCu;
label_115ddc:
    // 0x115ddc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x115ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x115de0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x115de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x115de4: 0x2463b840  addiu       $v1, $v1, -0x47C0
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x115de8: 0x8e0411a0  lw          $a0, 0x11A0($s0)
    ctx->pc = 0x115de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4512)));
    // 0x115dec: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x115df0: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x115df0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_115df4:
    // 0x115df4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x115DF4u;
    SET_GPR_U32(ctx, 31, 0x115DFCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x115DF4u, 0x115DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DFCu;
label_115dfc:
    // 0x115dfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x115dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115e00:
    // 0x115e00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115e04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x115e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115e08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x115e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115e10: 0x3e00008  jr          $ra
    ctx->pc = 0x115E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E10u;
        // 0x115e14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E18u;
label_115e18:
    // 0x115e18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x115e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x115e1c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x115e20: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115e24: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115e24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115e28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115e2c: 0x2692a340  addiu       $s2, $s4, -0x5CC0
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943552));
    // 0x115e30: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x115e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x115e34: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x115e38: 0xc044e92  jal         func_113A48
    ctx->pc = 0x115E38u;
    SET_GPR_U32(ctx, 31, 0x115E40u);
    ctx->pc = 0x115E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E38u;
    // 0x115e3c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A48u, 0x115E38u, 0x115E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E40u;
label_115e40:
    // 0x115e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e44: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x115E44u;
    SET_GPR_U32(ctx, 31, 0x115E4Cu);
    ctx->pc = 0x115E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E44u;
    // 0x115e48: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x115E44u, 0x115E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E4Cu;
label_115e4c:
    // 0x115e4c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x115e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x115e50: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x115e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115E54u;
    {
        const bool branch_taken_0x115e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115e54) {
            ctx->pc = 0x115E70u;
            goto label_115e70;
        }
    }
    ctx->pc = 0x115E5Cu;
    // 0x115e5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E5Cu;
    {
        const bool branch_taken_0x115e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x115e5c) {
            ctx->pc = 0x115E70u;
            goto label_115e70;
        }
    }
    ctx->pc = 0x115E64u;
    // 0x115e64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x115e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x115e68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115E68u;
    {
        const bool branch_taken_0x115e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115e68) {
            ctx->pc = 0x115E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E68u;
            // 0x115e6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E80u;
            goto label_115e80;
        }
    }
    ctx->pc = 0x115E70u;
label_115e70:
    // 0x115e70: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115E70u;
    SET_GPR_U32(ctx, 31, 0x115E78u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115E70u, 0x115E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E78u;
label_115e78:
    // 0x115e78: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x115E78u;
    {
        const bool branch_taken_0x115e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E78u;
        // 0x115e7c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e78) {
            ctx->pc = 0x115F5Cu;
            goto label_115f5c;
        }
    }
    ctx->pc = 0x115E80u;
label_115e80:
    // 0x115e80: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x115e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x115e84: 0x2442e358  addiu       $v0, $v0, -0x1CA8
    ctx->pc = 0x115e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959960));
    // 0x115e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115e8c: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x115e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x115e90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115e94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x115e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x115e98: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x115e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x115e9c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x115E9Cu;
    SET_GPR_U32(ctx, 31, 0x115EA4u);
    ctx->pc = 0x115EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E9Cu;
    // 0x115ea0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x115E9Cu, 0x115EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EA4u;
label_115ea4:
    // 0x115ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ea8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115eac: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115eb0: 0xae91a340  sw          $s1, -0x5CC0($s4)
    ctx->pc = 0x115eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943552), GPR_U32(ctx, 17));
    // 0x115eb4: 0x2453af80  addiu       $s3, $v0, -0x5080
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x115eb8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x115eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x115ebc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115ec0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x115ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x115ec4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x115ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x115ec8: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x115ecc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x115eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x115ed4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115edc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115ee0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x115ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x115ee4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x115ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ee8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115eec: 0xc044e56  jal         func_113958
    ctx->pc = 0x115EECu;
    SET_GPR_U32(ctx, 31, 0x115EF4u);
    ctx->pc = 0x115EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EECu;
    // 0x115ef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x115EECu, 0x115EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EF4u;
label_115ef4:
    // 0x115ef4: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115EF4u;
    {
        const bool branch_taken_0x115ef4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115ef4) {
            ctx->pc = 0x115EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115EF4u;
            // 0x115ef8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F14u;
            goto label_115f14;
        }
    }
    ctx->pc = 0x115EFCu;
    // 0x115efc: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115EFCu;
    SET_GPR_U32(ctx, 31, 0x115F04u);
    ctx->pc = 0x115F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EFCu;
    // 0x115f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115EFCu, 0x115F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F04u;
label_115f04:
    // 0x115f04: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115F04u;
    SET_GPR_U32(ctx, 31, 0x115F0Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115F04u, 0x115F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F0Cu;
label_115f0c:
    // 0x115f0c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x115F0Cu;
    {
        const bool branch_taken_0x115f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F0Cu;
        // 0x115f10: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f0c) {
            ctx->pc = 0x115F5Cu;
            goto label_115f5c;
        }
    }
    ctx->pc = 0x115F14u;
label_115f14:
    // 0x115f14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x115f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x115f18: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x115f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x115f1c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115F1Cu;
    SET_GPR_U32(ctx, 31, 0x115F24u);
    ctx->pc = 0x115F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F1Cu;
    // 0x115f20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115F1Cu, 0x115F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F24u;
label_115f24:
    // 0x115f24: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F24u;
    {
        const bool branch_taken_0x115f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115f24) {
            ctx->pc = 0x115F3Cu;
            goto label_115f3c;
        }
    }
    ctx->pc = 0x115F2Cu;
    // 0x115f2c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115F2Cu;
    SET_GPR_U32(ctx, 31, 0x115F34u);
    ctx->pc = 0x115F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F2Cu;
    // 0x115f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115F2Cu, 0x115F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F34u;
label_115f34:
    // 0x115f34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x115F34u;
    {
        const bool branch_taken_0x115f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F34u;
        // 0x115f38: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f34) {
            ctx->pc = 0x115F5Cu;
            goto label_115f5c;
        }
    }
    ctx->pc = 0x115F3Cu;
label_115f3c:
    // 0x115f3c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115F3Cu;
    SET_GPR_U32(ctx, 31, 0x115F44u);
    ctx->pc = 0x115F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F3Cu;
    // 0x115f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115F3Cu, 0x115F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F44u;
label_115f44:
    // 0x115f44: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115F44u;
    SET_GPR_U32(ctx, 31, 0x115F4Cu);
    ctx->pc = 0x115F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F44u;
    // 0x115f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115F44u, 0x115F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F4Cu;
label_115f4c:
    // 0x115f4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115f50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115f54: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x115f54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115f58: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x115f58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_115f5c:
    // 0x115f5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x115f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115f60: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115f64: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115f68: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115f6c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115f70: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115f74: 0x3e00008  jr          $ra
    ctx->pc = 0x115F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F74u;
        // 0x115f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F7Cu;
    // 0x115f7c: 0x0  nop
    ctx->pc = 0x115f7cu;
    // NOP
label_115f80:
    // 0x115f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x115f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x115f84: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115f88: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x115f8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x115f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f90: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115f94: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x115f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x115f98: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115f9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x115f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x115fa0: 0xc044e92  jal         func_113A48
    ctx->pc = 0x115FA0u;
    SET_GPR_U32(ctx, 31, 0x115FA8u);
    ctx->pc = 0x115FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FA0u;
    // 0x115fa4: 0x2672a340  addiu       $s2, $s3, -0x5CC0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A48u, 0x115FA0u, 0x115FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA8u;
label_115fa8:
    // 0x115fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fac: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x115FACu;
    SET_GPR_U32(ctx, 31, 0x115FB4u);
    ctx->pc = 0x115FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FACu;
    // 0x115fb0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x115FACu, 0x115FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FB4u;
label_115fb4:
    // 0x115fb4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x115fb8: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x115fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x115fbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x115FBCu;
    {
        const bool branch_taken_0x115fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115fbc) {
            ctx->pc = 0x115FD8u;
            goto label_115fd8;
        }
    }
    ctx->pc = 0x115FC4u;
    // 0x115fc4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115FC4u;
    {
        const bool branch_taken_0x115fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x115fc4) {
            ctx->pc = 0x115FD8u;
            goto label_115fd8;
        }
    }
    ctx->pc = 0x115FCCu;
    // 0x115fcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x115fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x115fd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115FD0u;
    {
        const bool branch_taken_0x115fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115fd0) {
            ctx->pc = 0x115FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115FD0u;
            // 0x115fd4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FE8u;
            goto label_115fe8;
        }
    }
    ctx->pc = 0x115FD8u;
label_115fd8:
    // 0x115fd8: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115FD8u;
    SET_GPR_U32(ctx, 31, 0x115FE0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115FD8u, 0x115FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FE0u;
label_115fe0:
    // 0x115fe0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x115FE0u;
    {
        const bool branch_taken_0x115fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FE0u;
        // 0x115fe4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fe0) {
            ctx->pc = 0x1160B8u;
            goto label_1160b8;
        }
    }
    ctx->pc = 0x115FE8u;
label_115fe8:
    // 0x115fe8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x115fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x115fec: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x115fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x115ff0: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x115ff4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x115ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x115ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115ffc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116000: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x116000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x116004: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x116004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x116008: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116008u;
    SET_GPR_U32(ctx, 31, 0x116010u);
    ctx->pc = 0x11600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116008u;
    // 0x11600c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116008u, 0x116010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116010u;
label_116010:
    // 0x116010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116014: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116018: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11601c: 0xae71a340  sw          $s1, -0x5CC0($s3)
    ctx->pc = 0x11601cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943552), GPR_U32(ctx, 17));
    // 0x116020: 0x2450af80  addiu       $s0, $v0, -0x5080
    ctx->pc = 0x116020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x116024: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x116024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x116028: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x116028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11602c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11602cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x116030: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x116030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x116034: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x116038: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x116038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11603c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x116040: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116048: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x116048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11604c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116050: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x116050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116054: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116058: 0xc044e56  jal         func_113958
    ctx->pc = 0x116058u;
    SET_GPR_U32(ctx, 31, 0x116060u);
    ctx->pc = 0x11605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116058u;
    // 0x11605c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116058u, 0x116060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116060u;
label_116060:
    // 0x116060: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116060u;
    {
        const bool branch_taken_0x116060 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116060u;
        // 0x116064: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116060) {
            ctx->pc = 0x116080u;
            goto label_116080;
        }
    }
    ctx->pc = 0x116068u;
    // 0x116068: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116068u;
    SET_GPR_U32(ctx, 31, 0x116070u);
    ctx->pc = 0x11606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116068u;
    // 0x11606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116068u, 0x116070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116070u;
label_116070:
    // 0x116070: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116070u;
    SET_GPR_U32(ctx, 31, 0x116078u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116070u, 0x116078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116078u;
label_116078:
    // 0x116078: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116078u;
    {
        const bool branch_taken_0x116078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116078u;
        // 0x11607c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116078) {
            ctx->pc = 0x1160B8u;
            goto label_1160b8;
        }
    }
    ctx->pc = 0x116080u;
label_116080:
    // 0x116080: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x116080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x116084: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116084u;
    SET_GPR_U32(ctx, 31, 0x11608Cu);
    ctx->pc = 0x116088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116084u;
    // 0x116088: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116084u, 0x11608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11608Cu;
label_11608c:
    // 0x11608c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11608Cu;
    {
        const bool branch_taken_0x11608c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11608c) {
            ctx->pc = 0x1160A4u;
            goto label_1160a4;
        }
    }
    ctx->pc = 0x116094u;
    // 0x116094: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116094u;
    SET_GPR_U32(ctx, 31, 0x11609Cu);
    ctx->pc = 0x116098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116094u;
    // 0x116098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116094u, 0x11609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11609Cu;
label_11609c:
    // 0x11609c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11609Cu;
    {
        const bool branch_taken_0x11609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11609Cu;
        // 0x1160a0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11609c) {
            ctx->pc = 0x1160B8u;
            goto label_1160b8;
        }
    }
    ctx->pc = 0x1160A4u;
label_1160a4:
    // 0x1160a4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1160A4u;
    SET_GPR_U32(ctx, 31, 0x1160ACu);
    ctx->pc = 0x1160A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160A4u;
    // 0x1160a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1160A4u, 0x1160ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160ACu;
label_1160ac:
    // 0x1160ac: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1160ACu;
    SET_GPR_U32(ctx, 31, 0x1160B4u);
    ctx->pc = 0x1160B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160ACu;
    // 0x1160b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1160ACu, 0x1160B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160B4u;
label_1160b4:
    // 0x1160b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1160b8:
    // 0x1160b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1160b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1160bc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1160bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1160c0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1160c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1160c4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1160c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1160c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1160c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1160cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1160CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1160D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160CCu;
        // 0x1160d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1160CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1160D4u;
    // 0x1160d4: 0x0  nop
    ctx->pc = 0x1160d4u;
    // NOP
label_1160d8:
    // 0x1160d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1160d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1160dc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1160dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1160e0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1160e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1160e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1160e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160e8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1160e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1160ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1160ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160f0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1160f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1160f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1160f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1160f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1160fc: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x116100: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x116100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x116104: 0x26f2a340  addiu       $s2, $s7, -0x5CC0
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x116108: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x116108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11610c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x116110: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x116110u;
    SET_GPR_U32(ctx, 31, 0x116118u);
    ctx->pc = 0x116114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116110u;
    // 0x116114: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x116110u, 0x116118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116118u;
label_116118:
    // 0x116118: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x116118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11611c: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x11611cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x116120: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116120u;
    {
        const bool branch_taken_0x116120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116120) {
            ctx->pc = 0x116124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116120u;
            // 0x116124: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116134u;
            goto label_116134;
        }
    }
    ctx->pc = 0x116128u;
    // 0x116128: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x116128u;
    SET_GPR_U32(ctx, 31, 0x116130u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x116128u, 0x116130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116130u;
label_116130:
    // 0x116130: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x116130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_116134:
    // 0x116134: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x116134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116138: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11613c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11613Cu;
    {
        const bool branch_taken_0x11613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11613Cu;
        // 0x116140: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11613c) {
            ctx->pc = 0x116180u;
            goto label_116180;
        }
    }
    ctx->pc = 0x116144u;
    // 0x116144: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x116144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x116148: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11614c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x116150: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116150u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116154: 0x0  nop
    ctx->pc = 0x116154u;
    // NOP
label_116158:
    // 0x116158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11615c: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x11615cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116160: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x116160u;
    {
        const bool branch_taken_0x116160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116160u;
        // 0x116164: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116160) {
            ctx->pc = 0x116190u;
            goto label_116190;
        }
    }
    ctx->pc = 0x116168u;
    // 0x116168: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x116168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x11616c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11616cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116170: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116170u;
    {
        const bool branch_taken_0x116170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116170u;
        // 0x116174: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116170) {
            ctx->pc = 0x116158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116158;
        }
    }
    ctx->pc = 0x116178u;
    // 0x116178: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116178u;
    {
        const bool branch_taken_0x116178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116178u;
        // 0x11617c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116178) {
            ctx->pc = 0x116194u;
            goto label_116194;
        }
    }
    ctx->pc = 0x116180u;
label_116180:
    // 0x116180: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x116180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x116184: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116188: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x116188u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x11618c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_116190:
    // 0x116190: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_116194:
    // 0x116194: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116194u;
    {
        const bool branch_taken_0x116194 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x116194) {
            ctx->pc = 0x116198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116194u;
            // 0x116198: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1161A8u;
            goto label_1161a8;
        }
    }
    ctx->pc = 0x11619Cu;
    // 0x11619c: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x11619cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1161a0: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1161a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1161a4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1161a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1161a8:
    // 0x1161a8: 0x24a3e388  addiu       $v1, $a1, -0x1C78
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960008));
    // 0x1161ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1161acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1161b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1161b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1161b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1161b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1161b8: 0x2694af80  addiu       $s4, $s4, -0x5080
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x1161bc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1161bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1161c0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x1161C0u;
    SET_GPR_U32(ctx, 31, 0x1161C8u);
    ctx->pc = 0x1161C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C0u;
    // 0x1161c4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x1161C0u, 0x1161C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161C8u;
label_1161c8:
    // 0x1161c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1161c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161cc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1161ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1161d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1161d4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1161d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1161d8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1161dc: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x1161e0: 0x26e7a340  addiu       $a3, $s7, -0x5CC0
    ctx->pc = 0x1161e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943552));
    // 0x1161e4: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1161e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1161e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1161e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1161ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1161f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1161f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1161f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1161f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161f8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1161f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161fc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116200: 0xc044e56  jal         func_113958
    ctx->pc = 0x116200u;
    SET_GPR_U32(ctx, 31, 0x116208u);
    ctx->pc = 0x116204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116200u;
    // 0x116204: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116200u, 0x116208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116208u;
label_116208:
    // 0x116208: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116208u;
    {
        const bool branch_taken_0x116208 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116208u;
        // 0x11620c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116208) {
            ctx->pc = 0x116228u;
            goto label_116228;
        }
    }
    ctx->pc = 0x116210u;
    // 0x116210: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116210u;
    SET_GPR_U32(ctx, 31, 0x116218u);
    ctx->pc = 0x116214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116210u;
    // 0x116214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116210u, 0x116218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116218u;
label_116218:
    // 0x116218: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116218u;
    SET_GPR_U32(ctx, 31, 0x116220u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116218u, 0x116220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116220u;
label_116220:
    // 0x116220: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116220u;
    {
        const bool branch_taken_0x116220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116220u;
        // 0x116224: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116220) {
            ctx->pc = 0x116260u;
            goto label_116260;
        }
    }
    ctx->pc = 0x116228u;
label_116228:
    // 0x116228: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11622c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116234u;
    {
        const bool branch_taken_0x116234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116234) {
            ctx->pc = 0x11624Cu;
            goto label_11624c;
        }
    }
    ctx->pc = 0x11623Cu;
    // 0x11623c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11623Cu;
    SET_GPR_U32(ctx, 31, 0x116244u);
    ctx->pc = 0x116240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11623Cu;
    // 0x116240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11623Cu, 0x116244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116244u;
label_116244:
    // 0x116244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116244u;
    {
        const bool branch_taken_0x116244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116244u;
        // 0x116248: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116244) {
            ctx->pc = 0x116260u;
            goto label_116260;
        }
    }
    ctx->pc = 0x11624Cu;
label_11624c:
    // 0x11624c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x11624Cu;
    SET_GPR_U32(ctx, 31, 0x116254u);
    ctx->pc = 0x116250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11624Cu;
    // 0x116250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x11624Cu, 0x116254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116254u;
label_116254:
    // 0x116254: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116254u;
    SET_GPR_U32(ctx, 31, 0x11625Cu);
    ctx->pc = 0x116258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116254u;
    // 0x116258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116254u, 0x11625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11625Cu;
label_11625c:
    // 0x11625c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_116260:
    // 0x116260: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x116260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116264: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x116264u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116268: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x116268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11626c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x11626cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116270: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116274: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x116274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116278: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x116278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11627c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11627cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116280: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x116280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116284: 0x3e00008  jr          $ra
    ctx->pc = 0x116284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116284u;
        // 0x116288: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11628Cu;
    // 0x11628c: 0x0  nop
    ctx->pc = 0x11628cu;
    // NOP
label_116290:
    // 0x116290: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x116290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x116294: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x116294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x116298: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x116298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11629c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11629cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1162a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1162a4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1162a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1162a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1162ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1162acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162b0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1162b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1162b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1162b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1162b8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1162b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1162bc: 0x3c1e001f  lui         $fp, 0x1F
    ctx->pc = 0x1162bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
    // 0x1162c0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1162c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1162c4: 0x27d3a340  addiu       $s3, $fp, -0x5CC0
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x1162c8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1162c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1162cc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1162ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1162d0: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x1162D0u;
    SET_GPR_U32(ctx, 31, 0x1162D8u);
    ctx->pc = 0x1162D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162D0u;
    // 0x1162d4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x1162D0u, 0x1162D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D8u;
label_1162d8:
    // 0x1162d8: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1162d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1162dc: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x1162e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1162E0u;
    {
        const bool branch_taken_0x1162e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1162e0) {
            ctx->pc = 0x1162E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1162E0u;
            // 0x1162e4: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1162F4u;
            goto label_1162f4;
        }
    }
    ctx->pc = 0x1162E8u;
    // 0x1162e8: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x1162E8u;
    SET_GPR_U32(ctx, 31, 0x1162F0u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x1162E8u, 0x1162F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F0u;
label_1162f0:
    // 0x1162f0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1162f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1162f4:
    // 0x1162f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1162f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1162f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162fc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1162FCu;
    {
        const bool branch_taken_0x1162fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162FCu;
        // 0x116300: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162fc) {
            ctx->pc = 0x116340u;
            goto label_116340;
        }
    }
    ctx->pc = 0x116304u;
    // 0x116304: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x116308: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11630c: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116310: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x116310u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x116314: 0x0  nop
    ctx->pc = 0x116314u;
    // NOP
label_116318:
    // 0x116318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11631c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x11631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116320: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x116320u;
    {
        const bool branch_taken_0x116320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116320u;
        // 0x116324: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116320) {
            ctx->pc = 0x116350u;
            goto label_116350;
        }
    }
    ctx->pc = 0x116328u;
    // 0x116328: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x11632c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11632cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116330: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116330u;
    {
        const bool branch_taken_0x116330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116330u;
        // 0x116334: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116330) {
            ctx->pc = 0x116318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116318;
        }
    }
    ctx->pc = 0x116338u;
    // 0x116338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116338u;
    {
        const bool branch_taken_0x116338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116338u;
        // 0x11633c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116338) {
            ctx->pc = 0x116354u;
            goto label_116354;
        }
    }
    ctx->pc = 0x116340u;
label_116340:
    // 0x116340: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x116340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x116344: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116348: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x11634c: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11634cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
label_116350:
    // 0x116350: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x116350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_116354:
    // 0x116354: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116354u;
    {
        const bool branch_taken_0x116354 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x116358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116354u;
        // 0x116358: 0x24a3e3a0  addiu       $v1, $a1, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116354) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x11635Cu;
    // 0x11635c: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x11635cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x116360: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x116360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_116364:
    // 0x116364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116368: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x116368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11636c: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x11636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x116370: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x116370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x116374: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x116374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x116378: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x116378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11637c: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x11637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x116380: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x116380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x116384: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x116384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x116388: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x116388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11638c: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x11638cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116390: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x116390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116394: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x116394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116398: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x116398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11639c: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x11639cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163a0: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x1163a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163a4: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x1163a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163a8: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x1163a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1163ac: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x1163acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1163b0: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x1163b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1163b4: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x1163b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1163b8: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x1163b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1163bc: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x1163bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1163c0: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x1163c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1163c4: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x1163c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1163c8: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x1163c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163cc: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x1163ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163d0: 0xb265003f  sdl         $a1, 0x3F($s3)
    ctx->pc = 0x1163d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163d4: 0xb6650038  sdr         $a1, 0x38($s3)
    ctx->pc = 0x1163d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163d8: 0xb2660047  sdl         $a2, 0x47($s3)
    ctx->pc = 0x1163d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163dc: 0xb6660040  sdr         $a2, 0x40($s3)
    ctx->pc = 0x1163dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163e0: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x1163e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163e4: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x1163e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1163e8: 0x26b5af80  addiu       $s5, $s5, -0x5080
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946688));
    // 0x1163ec: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x1163ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x1163f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1163f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1163f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1163f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1163f8: 0x27d0a340  addiu       $s0, $fp, -0x5CC0
    ctx->pc = 0x1163f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x1163fc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1163fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x116400: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116400u;
    SET_GPR_U32(ctx, 31, 0x116408u);
    ctx->pc = 0x116404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116400u;
    // 0x116404: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116400u, 0x116408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116408u;
label_116408:
    // 0x116408: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11640c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116414: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x116414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x116418: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x116418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x11641c: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x11641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x116420: 0xc04499e  jal         func_112678
    ctx->pc = 0x116420u;
    SET_GPR_U32(ctx, 31, 0x116428u);
    ctx->pc = 0x116424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116420u;
    // 0x116424: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x116420u, 0x116428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116428u;
label_116428:
    // 0x116428: 0x26c4ba40  addiu       $a0, $s6, -0x45C0
    ctx->pc = 0x116428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949440));
    // 0x11642c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11642cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116430: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x116430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x116434: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116438: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x116438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11643c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x116440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116444: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116448: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11644c: 0xc044e56  jal         func_113958
    ctx->pc = 0x11644Cu;
    SET_GPR_U32(ctx, 31, 0x116454u);
    ctx->pc = 0x116450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11644Cu;
    // 0x116450: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x11644Cu, 0x116454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116454u;
label_116454:
    // 0x116454: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116454u;
    {
        const bool branch_taken_0x116454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116454u;
        // 0x116458: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116454) {
            ctx->pc = 0x116474u;
            goto label_116474;
        }
    }
    ctx->pc = 0x11645Cu;
    // 0x11645c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11645Cu;
    SET_GPR_U32(ctx, 31, 0x116464u);
    ctx->pc = 0x116460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11645Cu;
    // 0x116460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11645Cu, 0x116464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116464u;
label_116464:
    // 0x116464: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116464u;
    SET_GPR_U32(ctx, 31, 0x11646Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116464u, 0x11646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11646Cu;
label_11646c:
    // 0x11646c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11646Cu;
    {
        const bool branch_taken_0x11646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11646Cu;
        // 0x116470: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11646c) {
            ctx->pc = 0x1164ACu;
            goto label_1164ac;
        }
    }
    ctx->pc = 0x116474u;
label_116474:
    // 0x116474: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x116474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x116478: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116478u;
    SET_GPR_U32(ctx, 31, 0x116480u);
    ctx->pc = 0x11647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116478u;
    // 0x11647c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116478u, 0x116480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116480u;
label_116480:
    // 0x116480: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116480u;
    {
        const bool branch_taken_0x116480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116480) {
            ctx->pc = 0x116498u;
            goto label_116498;
        }
    }
    ctx->pc = 0x116488u;
    // 0x116488: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116488u;
    SET_GPR_U32(ctx, 31, 0x116490u);
    ctx->pc = 0x11648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116488u;
    // 0x11648c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116488u, 0x116490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116490u;
label_116490:
    // 0x116490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116490u;
    {
        const bool branch_taken_0x116490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116490u;
        // 0x116494: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116490) {
            ctx->pc = 0x1164ACu;
            goto label_1164ac;
        }
    }
    ctx->pc = 0x116498u;
label_116498:
    // 0x116498: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116498u;
    SET_GPR_U32(ctx, 31, 0x1164A0u);
    ctx->pc = 0x11649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116498u;
    // 0x11649c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116498u, 0x1164A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164A0u;
label_1164a0:
    // 0x1164a0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1164A0u;
    SET_GPR_U32(ctx, 31, 0x1164A8u);
    ctx->pc = 0x1164A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164A0u;
    // 0x1164a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1164A0u, 0x1164A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164A8u;
label_1164a8:
    // 0x1164a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1164a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1164ac:
    // 0x1164ac: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1164acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1164b0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1164b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1164b4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1164b8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1164b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1164bc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1164bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1164c0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1164c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1164c4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1164c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1164c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1164c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1164cc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1164ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1164d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1164d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1164d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1164D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164D4u;
        // 0x1164d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164DCu;
    // 0x1164dc: 0x0  nop
    ctx->pc = 0x1164dcu;
    // NOP
label_1164e0:
    // 0x1164e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1164e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1164e4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1164e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1164e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1164e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1164ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1164ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164f0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1164f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1164f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1164f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164f8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1164f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1164fc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1164fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116500: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x116500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x116504: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116508: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x116508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11650c: 0x26d2a340  addiu       $s2, $s6, -0x5CC0
    ctx->pc = 0x11650cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x116510: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x116510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x116514: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x116514u;
    SET_GPR_U32(ctx, 31, 0x11651Cu);
    ctx->pc = 0x116518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116514u;
    // 0x116518: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x116514u, 0x11651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11651Cu;
label_11651c:
    // 0x11651c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x116520: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x116520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x116524: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116524u;
    {
        const bool branch_taken_0x116524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116524) {
            ctx->pc = 0x116528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116524u;
            // 0x116528: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116538u;
            goto label_116538;
        }
    }
    ctx->pc = 0x11652Cu;
    // 0x11652c: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x11652Cu;
    SET_GPR_U32(ctx, 31, 0x116534u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x11652Cu, 0x116534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116534u;
label_116534:
    // 0x116534: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x116534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_116538:
    // 0x116538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11653c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11653cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x116540: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x116540u;
    {
        const bool branch_taken_0x116540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116540u;
        // 0x116544: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116540) {
            ctx->pc = 0x11658Cu;
            goto label_11658c;
        }
    }
    ctx->pc = 0x116548u;
    // 0x116548: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x11654c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116550: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x116550u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x116554: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116554u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11655c: 0x0  nop
    ctx->pc = 0x11655cu;
    // NOP
label_116560:
    // 0x116560: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116564: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x116564u;
    {
        const bool branch_taken_0x116564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116564u;
        // 0x116568: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116564) {
            ctx->pc = 0x11659Cu;
            goto label_11659c;
        }
    }
    ctx->pc = 0x11656Cu;
    // 0x11656c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x11656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x116570: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116574: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x116574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x116578: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x116578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11657c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11657Cu;
    {
        const bool branch_taken_0x11657c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11657c) {
            ctx->pc = 0x116580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11657Cu;
            // 0x116580: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116560;
        }
    }
    ctx->pc = 0x116584u;
    // 0x116584: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116584u;
    {
        const bool branch_taken_0x116584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116584u;
        // 0x116588: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116584) {
            ctx->pc = 0x1165A0u;
            goto label_1165a0;
        }
    }
    ctx->pc = 0x11658Cu;
label_11658c:
    // 0x11658c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x11658cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x116590: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116594: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x116594u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x116598: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_11659c:
    // 0x11659c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1165a0:
    // 0x1165a0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1165A0u;
    {
        const bool branch_taken_0x1165a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1165a0) {
            ctx->pc = 0x1165A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165A0u;
            // 0x1165a4: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165A8u;
            goto label_1165a8;
        }
    }
    ctx->pc = 0x1165A8u;
label_1165a8:
    // 0x1165a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1165a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1165ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1165acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165b0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1165b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1165b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1165B4u;
    {
        const bool branch_taken_0x1165b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165B4u;
        // 0x1165b8: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165b4) {
            ctx->pc = 0x1165ECu;
            goto label_1165ec;
        }
    }
    ctx->pc = 0x1165BCu;
    // 0x1165bc: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1165bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1165c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1165c4: 0x0  nop
    ctx->pc = 0x1165c4u;
    // NOP
label_1165c8:
    // 0x1165c8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1165c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1165cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1165CCu;
    {
        const bool branch_taken_0x1165cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165CCu;
        // 0x1165d0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165cc) {
            ctx->pc = 0x1165ECu;
            goto label_1165ec;
        }
    }
    ctx->pc = 0x1165D4u;
    // 0x1165d4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1165d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1165d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1165dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1165dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1165e0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1165e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1165e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1165E4u;
    {
        const bool branch_taken_0x1165e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1165e4) {
            ctx->pc = 0x1165E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165E4u;
            // 0x1165e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1165c8;
        }
    }
    ctx->pc = 0x1165ECu;
label_1165ec:
    // 0x1165ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1165f0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1165F0u;
    {
        const bool branch_taken_0x1165f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1165f0) {
            ctx->pc = 0x1165F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165F0u;
            // 0x1165f4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165F8u;
            goto label_1165f8;
        }
    }
    ctx->pc = 0x1165F8u;
label_1165f8:
    // 0x1165f8: 0x24e3e3b8  addiu       $v1, $a3, -0x1C48
    ctx->pc = 0x1165f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960056));
    // 0x1165fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1165fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116600: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x116600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x116604: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116608: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x116608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11660c: 0x26d0a340  addiu       $s0, $s6, -0x5CC0
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x116610: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x116610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x116614: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116614u;
    SET_GPR_U32(ctx, 31, 0x11661Cu);
    ctx->pc = 0x116618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116614u;
    // 0x116618: 0x2694af80  addiu       $s4, $s4, -0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116614u, 0x11661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11661Cu;
label_11661c:
    // 0x11661c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11661cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116624: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116628: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x116628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x11662c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x11662cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x116630: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x116630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x116634: 0xc04499e  jal         func_112678
    ctx->pc = 0x116634u;
    SET_GPR_U32(ctx, 31, 0x11663Cu);
    ctx->pc = 0x116638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116634u;
    // 0x116638: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x116634u, 0x11663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11663Cu;
label_11663c:
    // 0x11663c: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x11663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x116640: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x116640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116644: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116648: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x116648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11664c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11664cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x116650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116654: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x116654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x116658: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x116658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11665c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11665cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116660: 0xc044e56  jal         func_113958
    ctx->pc = 0x116660u;
    SET_GPR_U32(ctx, 31, 0x116668u);
    ctx->pc = 0x116664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116660u;
    // 0x116664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116660u, 0x116668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116668u;
label_116668:
    // 0x116668: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116668u;
    {
        const bool branch_taken_0x116668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116668u;
        // 0x11666c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116668) {
            ctx->pc = 0x116688u;
            goto label_116688;
        }
    }
    ctx->pc = 0x116670u;
    // 0x116670: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116670u;
    SET_GPR_U32(ctx, 31, 0x116678u);
    ctx->pc = 0x116674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116670u;
    // 0x116674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116670u, 0x116678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116678u;
label_116678:
    // 0x116678: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116678u;
    SET_GPR_U32(ctx, 31, 0x116680u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116678u, 0x116680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116680u;
label_116680:
    // 0x116680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x116688u;
label_116688:
    // 0x116688: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x116688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11668c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x11668Cu;
    SET_GPR_U32(ctx, 31, 0x116694u);
    ctx->pc = 0x116690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11668Cu;
    // 0x116690: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x11668Cu, 0x116694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116694u;
label_116694:
    // 0x116694: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116694u;
    {
        const bool branch_taken_0x116694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116694) {
            ctx->pc = 0x1166ACu;
            goto label_1166ac;
        }
    }
    ctx->pc = 0x11669Cu;
    // 0x11669c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11669Cu;
    SET_GPR_U32(ctx, 31, 0x1166A4u);
    ctx->pc = 0x1166A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11669Cu;
    // 0x1166a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11669Cu, 0x1166A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166A4u;
label_1166a4:
    // 0x1166a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1166A4u;
    {
        const bool branch_taken_0x1166a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166A4u;
        // 0x1166a8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166a4) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x1166ACu;
label_1166ac:
    // 0x1166ac: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1166ACu;
    SET_GPR_U32(ctx, 31, 0x1166B4u);
    ctx->pc = 0x1166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166ACu;
    // 0x1166b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1166ACu, 0x1166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166B4u;
label_1166b4:
    // 0x1166b4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1166B4u;
    SET_GPR_U32(ctx, 31, 0x1166BCu);
    ctx->pc = 0x1166B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166B4u;
    // 0x1166b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1166B4u, 0x1166BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166BCu;
label_1166bc:
    // 0x1166bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1166bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1166c0:
    // 0x1166c0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1166c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1166c4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1166c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1166c8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1166c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1166cc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1166ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1166d0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1166d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1166d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1166d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1166d8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1166d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1166dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1166dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1166e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1166E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166E0u;
        // 0x1166e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1166E8u;
    // 0x1166e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1166ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1166ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1166f0: 0xc045576  jal         func_1155D8
    ctx->pc = 0x1166F0u;
    SET_GPR_U32(ctx, 31, 0x1166F8u);
    ctx->pc = 0x1166F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166F0u;
    // 0x1166f4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x1166F8u;
label_1166f8:
    // 0x1166f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1166fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1166FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166FCu;
        // 0x116700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116704u;
    // 0x116704: 0x0  nop
    ctx->pc = 0x116704u;
    // NOP
label_116708:
    // 0x116708: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11670c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x116710: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x116710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x116714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116718: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x116718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11671c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11671cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116720: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x116720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x116724: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x116724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x116728: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x116728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11672c: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116730: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x116730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x116734: 0x26d0a340  addiu       $s0, $s6, -0x5CC0
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x116738: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x116738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11673c: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x11673Cu;
    SET_GPR_U32(ctx, 31, 0x116744u);
    ctx->pc = 0x116740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11673Cu;
    // 0x116740: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x11673Cu, 0x116744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116744u;
label_116744:
    // 0x116744: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x116748: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x11674c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11674Cu;
    {
        const bool branch_taken_0x11674c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11674c) {
            ctx->pc = 0x116750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11674Cu;
            // 0x116750: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116760u;
            goto label_116760;
        }
    }
    ctx->pc = 0x116754u;
    // 0x116754: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x116754u;
    SET_GPR_U32(ctx, 31, 0x11675Cu);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x116754u, 0x11675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11675Cu;
label_11675c:
    // 0x11675c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x11675cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_116760:
    // 0x116760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116764: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x116764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x116768: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x116768u;
    {
        const bool branch_taken_0x116768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116768u;
        // 0x11676c: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116768) {
            ctx->pc = 0x1167B4u;
            goto label_1167b4;
        }
    }
    ctx->pc = 0x116770u;
    // 0x116770: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x116770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x116774: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x116774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116778: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x11677c: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x11677cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x116780: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116784: 0x0  nop
    ctx->pc = 0x116784u;
    // NOP
label_116788:
    // 0x116788: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11678c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11678Cu;
    {
        const bool branch_taken_0x11678c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11678Cu;
        // 0x116790: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11678c) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x116794u;
    // 0x116794: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x116798: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11679c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x11679cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1167a0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1167a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1167a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1167A4u;
    {
        const bool branch_taken_0x1167a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1167a4) {
            ctx->pc = 0x1167A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1167A4u;
            // 0x1167a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116788;
        }
    }
    ctx->pc = 0x1167ACu;
    // 0x1167ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1167ACu;
    {
        const bool branch_taken_0x1167ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167ACu;
        // 0x1167b0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167ac) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1167B4u;
label_1167b4:
    // 0x1167b4: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1167b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1167b8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1167b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1167bc: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1167bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x1167c0: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x1167c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
label_1167c4:
    // 0x1167c4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1167c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1167c8:
    // 0x1167c8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1167C8u;
    {
        const bool branch_taken_0x1167c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1167c8) {
            ctx->pc = 0x1167CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1167C8u;
            // 0x1167cc: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167D0u;
            goto label_1167d0;
        }
    }
    ctx->pc = 0x1167D0u;
label_1167d0:
    // 0x1167d0: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1167d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x1167d4: 0x24c3e3d0  addiu       $v1, $a2, -0x1C30
    ctx->pc = 0x1167d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960080));
    // 0x1167d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1167d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1167dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1167dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1167e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1167e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1167e4: 0x2673af80  addiu       $s3, $s3, -0x5080
    ctx->pc = 0x1167e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946688));
    // 0x1167e8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1167e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1167ec: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x1167ECu;
    SET_GPR_U32(ctx, 31, 0x1167F4u);
    ctx->pc = 0x1167F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167ECu;
    // 0x1167f0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x1167ECu, 0x1167F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167F4u;
label_1167f4:
    // 0x1167f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1167f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167f8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1167f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1167fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116800: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x116800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x116804: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x116804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x116808: 0x2684ba40  addiu       $a0, $s4, -0x45C0
    ctx->pc = 0x116808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949440));
    // 0x11680c: 0x26c7a340  addiu       $a3, $s6, -0x5CC0
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x116810: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x116814: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11681c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x116820: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x116824: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x116824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116828: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11682c: 0xc044e56  jal         func_113958
    ctx->pc = 0x11682Cu;
    SET_GPR_U32(ctx, 31, 0x116834u);
    ctx->pc = 0x116830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11682Cu;
    // 0x116830: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x11682Cu, 0x116834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116834u;
label_116834:
    // 0x116834: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116834u;
    {
        const bool branch_taken_0x116834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116834u;
        // 0x116838: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116834) {
            ctx->pc = 0x116854u;
            goto label_116854;
        }
    }
    ctx->pc = 0x11683Cu;
    // 0x11683c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11683Cu;
    SET_GPR_U32(ctx, 31, 0x116844u);
    ctx->pc = 0x116840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11683Cu;
    // 0x116840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11683Cu, 0x116844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116844u;
label_116844:
    // 0x116844: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116844u;
    SET_GPR_U32(ctx, 31, 0x11684Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116844u, 0x11684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11684Cu;
label_11684c:
    // 0x11684c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11684Cu;
    {
        const bool branch_taken_0x11684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11684Cu;
        // 0x116850: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11684c) {
            ctx->pc = 0x11688Cu;
            goto label_11688c;
        }
    }
    ctx->pc = 0x116854u;
label_116854:
    // 0x116854: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x116854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x116858: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116858u;
    SET_GPR_U32(ctx, 31, 0x116860u);
    ctx->pc = 0x11685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116858u;
    // 0x11685c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116858u, 0x116860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116860u;
label_116860:
    // 0x116860: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116860u;
    {
        const bool branch_taken_0x116860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116860) {
            ctx->pc = 0x116878u;
            goto label_116878;
        }
    }
    ctx->pc = 0x116868u;
    // 0x116868: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116868u;
    SET_GPR_U32(ctx, 31, 0x116870u);
    ctx->pc = 0x11686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116868u;
    // 0x11686c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116868u, 0x116870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116870u;
label_116870:
    // 0x116870: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116870u;
    {
        const bool branch_taken_0x116870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116870u;
        // 0x116874: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116870) {
            ctx->pc = 0x11688Cu;
            goto label_11688c;
        }
    }
    ctx->pc = 0x116878u;
label_116878:
    // 0x116878: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116878u;
    SET_GPR_U32(ctx, 31, 0x116880u);
    ctx->pc = 0x11687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116878u;
    // 0x11687c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116878u, 0x116880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116880u;
label_116880:
    // 0x116880: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116880u;
    SET_GPR_U32(ctx, 31, 0x116888u);
    ctx->pc = 0x116884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116880u;
    // 0x116884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116880u, 0x116888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116888u;
label_116888:
    // 0x116888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11688c:
    // 0x11688c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116890: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x116890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116894: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x116894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116898: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11689c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11689cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1168a0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1168a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1168a4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1168a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1168a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1168a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1168ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1168ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1168B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168ACu;
        // 0x1168b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168B4u;
    // 0x1168b4: 0x0  nop
    ctx->pc = 0x1168b4u;
    // NOP
label_1168b8:
    // 0x1168b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1168b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1168bc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1168bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1168c0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1168c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1168c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1168c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1168c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1168cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1168ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168d0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1168d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1168d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1168d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168d8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1168d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1168dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1168dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168e0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1168e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1168e4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1168e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168e8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1168e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1168ec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1168f0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1168f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1168f4: 0x3c1e001f  lui         $fp, 0x1F
    ctx->pc = 0x1168f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
    // 0x1168f8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1168f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1168fc: 0x27d2a340  addiu       $s2, $fp, -0x5CC0
    ctx->pc = 0x1168fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x116900: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x116900u;
    SET_GPR_U32(ctx, 31, 0x116908u);
    ctx->pc = 0x116904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116900u;
    // 0x116904: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x116900u, 0x116908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116908u;
label_116908:
    // 0x116908: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x116908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11690c: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x116910: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116910u;
    {
        const bool branch_taken_0x116910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116910) {
            ctx->pc = 0x116914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116910u;
            // 0x116914: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116924u;
            goto label_116924;
        }
    }
    ctx->pc = 0x116918u;
    // 0x116918: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x116918u;
    SET_GPR_U32(ctx, 31, 0x116920u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x116918u, 0x116920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116920u;
label_116920:
    // 0x116920: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x116920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116924:
    // 0x116924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116928: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11692c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11692Cu;
    {
        const bool branch_taken_0x11692c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11692Cu;
        // 0x116930: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11692c) {
            ctx->pc = 0x11696Cu;
            goto label_11696c;
        }
    }
    ctx->pc = 0x116934u;
    // 0x116934: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x116938: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11693c: 0x0  nop
    ctx->pc = 0x11693cu;
    // NOP
label_116940:
    // 0x116940: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116944: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116944u;
    {
        const bool branch_taken_0x116944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116944u;
        // 0x116948: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116944) {
            ctx->pc = 0x116970u;
            goto label_116970;
        }
    }
    ctx->pc = 0x11694Cu;
    // 0x11694c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x11694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x116950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116954: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x116954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x116958: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x116958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11695c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11695Cu;
    {
        const bool branch_taken_0x11695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11695c) {
            ctx->pc = 0x116960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11695Cu;
            // 0x116960: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116940;
        }
    }
    ctx->pc = 0x116964u;
    // 0x116964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116964u;
    {
        const bool branch_taken_0x116964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116964u;
        // 0x116968: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116964) {
            ctx->pc = 0x116974u;
            goto label_116974;
        }
    }
    ctx->pc = 0x11696Cu;
label_11696c:
    // 0x11696c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x11696cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_116970:
    // 0x116970: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_116974:
    // 0x116974: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x116974u;
    {
        const bool branch_taken_0x116974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x116974) {
            ctx->pc = 0x116978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116974u;
            // 0x116978: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11697Cu;
            goto label_11697c;
        }
    }
    ctx->pc = 0x11697Cu;
label_11697c:
    // 0x11697c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x11697cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x116980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116984: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x116988: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x116988u;
    {
        const bool branch_taken_0x116988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116988u;
        // 0x11698c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116988) {
            ctx->pc = 0x1169BCu;
            goto label_1169bc;
        }
    }
    ctx->pc = 0x116990u;
    // 0x116990: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x116990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x116994: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_116998:
    // 0x116998: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11699c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11699Cu;
    {
        const bool branch_taken_0x11699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11699Cu;
        // 0x1169a0: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11699c) {
            ctx->pc = 0x1169BCu;
            goto label_1169bc;
        }
    }
    ctx->pc = 0x1169A4u;
    // 0x1169a4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1169a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1169a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1169a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1169ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1169acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1169b0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1169b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1169b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1169B4u;
    {
        const bool branch_taken_0x1169b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1169b4) {
            ctx->pc = 0x1169B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1169B4u;
            // 0x1169b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116998;
        }
    }
    ctx->pc = 0x1169BCu;
label_1169bc:
    // 0x1169bc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1169bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1169c0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1169C0u;
    {
        const bool branch_taken_0x1169c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1169c0) {
            ctx->pc = 0x1169C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1169C0u;
            // 0x1169c4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1169C8u;
            goto label_1169c8;
        }
    }
    ctx->pc = 0x1169C8u;
label_1169c8:
    // 0x1169c8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1169C8u;
    {
        const bool branch_taken_0x1169c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1169c8) {
            ctx->pc = 0x1169E0u;
            goto label_1169e0;
        }
    }
    ctx->pc = 0x1169D0u;
    // 0x1169d0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1169D0u;
    SET_GPR_U32(ctx, 31, 0x1169D8u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1169D0u, 0x1169D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169D8u;
label_1169d8:
    // 0x1169d8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1169D8u;
    {
        const bool branch_taken_0x1169d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169D8u;
        // 0x1169dc: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169d8) {
            ctx->pc = 0x116B08u;
            goto label_116b08;
        }
    }
    ctx->pc = 0x1169E0u;
label_1169e0:
    // 0x1169e0: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1169E0u;
    {
        const bool branch_taken_0x1169e0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1169E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169E0u;
        // 0x1169e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169e0) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x1169E8u;
    // 0x1169e8: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x1169ec: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x1169f0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1169f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1169f4: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x1169f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x1169f8: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1169f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x1169fc: 0x0  nop
    ctx->pc = 0x1169fcu;
    // NOP
label_116a00:
    // 0x116a00: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x116a04: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x116a08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116a0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116a10: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x116a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x116a14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x116a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x116a18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116A18u;
    {
        const bool branch_taken_0x116a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a18) {
            ctx->pc = 0x116A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a00;
        }
    }
    ctx->pc = 0x116A20u;
    // 0x116a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116A20u;
    {
        const bool branch_taken_0x116a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A20u;
        // 0x116a24: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a20) {
            ctx->pc = 0x116A3Cu;
            goto label_116a3c;
        }
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x116a28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x116a2c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116a30: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x116a34: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116a38: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x116a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_116a3c:
    // 0x116a3c: 0x24e3e3e8  addiu       $v1, $a3, -0x1C18
    ctx->pc = 0x116a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960104));
    // 0x116a40: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x116a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x116a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116a4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x116a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x116a50: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x116a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x116a54: 0x27d0a340  addiu       $s0, $fp, -0x5CC0
    ctx->pc = 0x116a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x116a58: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x116a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x116a5c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116A5Cu;
    SET_GPR_U32(ctx, 31, 0x116A64u);
    ctx->pc = 0x116A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A5Cu;
    // 0x116a60: 0x2694af80  addiu       $s4, $s4, -0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116A5Cu, 0x116A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A64u;
label_116a64:
    // 0x116a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116a70: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x116a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x116a74: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x116a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x116a78: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x116a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x116a7c: 0xc04499e  jal         func_112678
    ctx->pc = 0x116A7Cu;
    SET_GPR_U32(ctx, 31, 0x116A84u);
    ctx->pc = 0x116A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A7Cu;
    // 0x116a80: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x116A7Cu, 0x116A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A84u;
label_116a84:
    // 0x116a84: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x116a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x116a88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x116a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116a90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x116a94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x116a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x116a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a9c: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x116aa0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x116aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aa4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116aa8: 0xc044e56  jal         func_113958
    ctx->pc = 0x116AA8u;
    SET_GPR_U32(ctx, 31, 0x116AB0u);
    ctx->pc = 0x116AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AA8u;
    // 0x116aac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116AA8u, 0x116AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AB0u;
label_116ab0:
    // 0x116ab0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116AB0u;
    {
        const bool branch_taken_0x116ab0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AB0u;
        // 0x116ab4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ab0) {
            ctx->pc = 0x116AD0u;
            goto label_116ad0;
        }
    }
    ctx->pc = 0x116AB8u;
    // 0x116ab8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116AB8u;
    SET_GPR_U32(ctx, 31, 0x116AC0u);
    ctx->pc = 0x116ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AB8u;
    // 0x116abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116AB8u, 0x116AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC0u;
label_116ac0:
    // 0x116ac0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116AC0u;
    SET_GPR_U32(ctx, 31, 0x116AC8u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116AC0u, 0x116AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC8u;
label_116ac8:
    // 0x116ac8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116AC8u;
    {
        const bool branch_taken_0x116ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AC8u;
        // 0x116acc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ac8) {
            ctx->pc = 0x116B08u;
            goto label_116b08;
        }
    }
    ctx->pc = 0x116AD0u;
label_116ad0:
    // 0x116ad0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x116ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x116ad4: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116AD4u;
    SET_GPR_U32(ctx, 31, 0x116ADCu);
    ctx->pc = 0x116AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AD4u;
    // 0x116ad8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116AD4u, 0x116ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116ADCu;
label_116adc:
    // 0x116adc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116ADCu;
    {
        const bool branch_taken_0x116adc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116adc) {
            ctx->pc = 0x116AF4u;
            goto label_116af4;
        }
    }
    ctx->pc = 0x116AE4u;
    // 0x116ae4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116AE4u;
    SET_GPR_U32(ctx, 31, 0x116AECu);
    ctx->pc = 0x116AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AE4u;
    // 0x116ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116AE4u, 0x116AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AECu;
label_116aec:
    // 0x116aec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116AECu;
    {
        const bool branch_taken_0x116aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AECu;
        // 0x116af0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116aec) {
            ctx->pc = 0x116B08u;
            goto label_116b08;
        }
    }
    ctx->pc = 0x116AF4u;
label_116af4:
    // 0x116af4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116AF4u;
    SET_GPR_U32(ctx, 31, 0x116AFCu);
    ctx->pc = 0x116AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AF4u;
    // 0x116af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116AF4u, 0x116AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AFCu;
label_116afc:
    // 0x116afc: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116AFCu;
    SET_GPR_U32(ctx, 31, 0x116B04u);
    ctx->pc = 0x116B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AFCu;
    // 0x116b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116AFCu, 0x116B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B04u;
label_116b04:
    // 0x116b04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x116b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_116b08:
    // 0x116b08: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x116b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116b0c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116b10: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x116b10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116b14: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x116b14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116b18: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x116b18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116b1c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116b1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116b20: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x116b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116b24: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x116b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b28: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b2c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x116b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116b30: 0x3e00008  jr          $ra
    ctx->pc = 0x116B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B30u;
        // 0x116b34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116B38u;
    // 0x116b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116b40: 0xc045576  jal         func_1155D8
    ctx->pc = 0x116B40u;
    SET_GPR_U32(ctx, 31, 0x116B48u);
    ctx->pc = 0x116B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B40u;
    // 0x116b44: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155D8u;
    goto label_1155d8;
    ctx->pc = 0x116B48u;
label_116b48:
    // 0x116b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x116B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B4Cu;
        // 0x116b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116B54u;
    // 0x116b54: 0x0  nop
    ctx->pc = 0x116b54u;
    // NOP
label_116b58:
    // 0x116b58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x116b5c: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x116b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x116b60: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x116b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x116b64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x116b64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b68: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x116b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x116b6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x116b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b70: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x116b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x116b74: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116b78: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x116b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x116b7c: 0x2691a340  addiu       $s1, $s4, -0x5CC0
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943552));
    // 0x116b80: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x116b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x116b84: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x116b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x116b88: 0xc044e92  jal         func_113A48
    ctx->pc = 0x116B88u;
    SET_GPR_U32(ctx, 31, 0x116B90u);
    ctx->pc = 0x116B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B88u;
    // 0x116b8c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A48u, 0x116B88u, 0x116B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B90u;
label_116b90:
    // 0x116b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b94: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x116B94u;
    SET_GPR_U32(ctx, 31, 0x116B9Cu);
    ctx->pc = 0x116B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B94u;
    // 0x116b98: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x116B94u, 0x116B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B9Cu;
label_116b9c:
    // 0x116b9c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x116b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x116ba0: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x116ba4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116BA4u;
    {
        const bool branch_taken_0x116ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ba4) {
            ctx->pc = 0x116BC0u;
            goto label_116bc0;
        }
    }
    ctx->pc = 0x116BACu;
    // 0x116bac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116BACu;
    {
        const bool branch_taken_0x116bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x116bac) {
            ctx->pc = 0x116BC0u;
            goto label_116bc0;
        }
    }
    ctx->pc = 0x116BB4u;
    // 0x116bb4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x116bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116bb8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116BB8u;
    {
        const bool branch_taken_0x116bb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BB8u;
        // 0x116bbc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bb8) {
            ctx->pc = 0x116BD0u;
            goto label_116bd0;
        }
    }
    ctx->pc = 0x116BC0u;
label_116bc0:
    // 0x116bc0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116BC0u;
    SET_GPR_U32(ctx, 31, 0x116BC8u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116BC0u, 0x116BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BC8u;
label_116bc8:
    // 0x116bc8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x116BC8u;
    {
        const bool branch_taken_0x116bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BC8u;
        // 0x116bcc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bc8) {
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116BD0u;
label_116bd0:
    // 0x116bd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116bd4: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x116bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x116bd8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x116bdc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x116bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116be0: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x116be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x116be4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x116be8: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x116be8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x116bec: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x116becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x116bf0: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x116bf4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x116bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x116bf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116bfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116c00: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x116c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x116c04: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x116c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x116c08: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x116c08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x116c0c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116C0Cu;
    SET_GPR_U32(ctx, 31, 0x116C14u);
    ctx->pc = 0x116C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C0Cu;
    // 0x116c10: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116C0Cu, 0x116C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C14u;
label_116c14:
    // 0x116c14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x116c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x116c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116c1c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116c20: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x116c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x116c24: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x116c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x116c28: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x116C28u;
    {
        const bool branch_taken_0x116c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C28u;
        // 0x116c2c: 0xae93a340  sw          $s3, -0x5CC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294943552), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c28) {
            ctx->pc = 0x116CC0u;
            goto label_116cc0;
        }
    }
    ctx->pc = 0x116C30u;
    // 0x116c30: 0x3c150013  lui         $s5, 0x13
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
    // 0x116c34: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116C34u;
    SET_GPR_U32(ctx, 31, 0x116C3Cu);
    ctx->pc = 0x116C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C34u;
    // 0x116c38: 0x8ea411a4  lw          $a0, 0x11A4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116C34u, 0x116C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C3Cu;
label_116c3c:
    // 0x116c3c: 0x3c070013  lui         $a3, 0x13
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19 << 16));
    // 0x116c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c44: 0x8ce31110  lw          $v1, 0x1110($a3)
    ctx->pc = 0x116c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131110u));
    // 0x116c48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116c4c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116C4Cu;
    {
        const bool branch_taken_0x116c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x116C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C4Cu;
        // 0x116c50: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c4c) {
            ctx->pc = 0x116C70u;
            goto label_116c70;
        }
    }
    ctx->pc = 0x116C54u;
    // 0x116c54: 0x8e83a340  lw          $v1, -0x5CC0($s4)
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943552)));
    // 0x116c58: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116c58u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116c5c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x116c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x116c60: 0x31023  negu        $v0, $v1
    ctx->pc = 0x116c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x116c64: 0xace31110  sw          $v1, 0x1110($a3)
    ctx->pc = 0x116c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4368), GPR_U32(ctx, 3));
    // 0x116c68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x116C68u;
    {
        const bool branch_taken_0x116c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C68u;
        // 0x116c6c: 0xae82a340  sw          $v0, -0x5CC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294943552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c68) {
            ctx->pc = 0x116CB0u;
            goto label_116cb0;
        }
    }
    ctx->pc = 0x116C70u;
label_116c70:
    // 0x116c70: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116c70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116c74: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x116c74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x116c78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_116c7c:
    // 0x116c7c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x116c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x116c80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x116C80u;
    {
        const bool branch_taken_0x116c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C80u;
        // 0x116c84: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c80) {
            ctx->pc = 0x116CB0u;
            goto label_116cb0;
        }
    }
    ctx->pc = 0x116C88u;
    // 0x116c88: 0x24e31110  addiu       $v1, $a3, 0x1110
    ctx->pc = 0x116c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4368));
    // 0x116c8c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x116c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116c90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116c94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x116c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116c98: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116C98u;
    {
        const bool branch_taken_0x116c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x116C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C98u;
        // 0x116c9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c98) {
            ctx->pc = 0x116C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116c7c;
        }
    }
    ctx->pc = 0x116CA0u;
    // 0x116ca0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x116ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116ca4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x116ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x116ca8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x116ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x116cac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x116cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_116cb0:
    // 0x116cb0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x116CB0u;
    SET_GPR_U32(ctx, 31, 0x116CB8u);
    ctx->pc = 0x116CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CB0u;
    // 0x116cb4: 0x8ea411a4  lw          $a0, 0x11A4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x116CB0u, 0x116CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CB8u;
label_116cb8:
    // 0x116cb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116CB8u;
    {
        const bool branch_taken_0x116cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB8u;
        // 0x116cbc: 0x2610af80  addiu       $s0, $s0, -0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cb8) {
            ctx->pc = 0x116CD0u;
            goto label_116cd0;
        }
    }
    ctx->pc = 0x116CC0u;
label_116cc0:
    // 0x116cc0: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116cc4: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x116cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x116cc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ccc: 0x2610af80  addiu       $s0, $s0, -0x5080
    ctx->pc = 0x116cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946688));
label_116cd0:
    // 0x116cd0: 0x26c4ba40  addiu       $a0, $s6, -0x45C0
    ctx->pc = 0x116cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949440));
    // 0x116cd4: 0x2687a340  addiu       $a3, $s4, -0x5CC0
    ctx->pc = 0x116cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943552));
    // 0x116cd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116cdc: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x116cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x116ce0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x116ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x116ce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ce8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x116ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116cec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x116cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cf0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116cf4: 0xc044e56  jal         func_113958
    ctx->pc = 0x116CF4u;
    SET_GPR_U32(ctx, 31, 0x116CFCu);
    ctx->pc = 0x116CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CF4u;
    // 0x116cf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116CF4u, 0x116CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CFCu;
label_116cfc:
    // 0x116cfc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116CFCu;
    {
        const bool branch_taken_0x116cfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CFCu;
        // 0x116d00: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cfc) {
            ctx->pc = 0x116D1Cu;
            goto label_116d1c;
        }
    }
    ctx->pc = 0x116D04u;
    // 0x116d04: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116D04u;
    SET_GPR_U32(ctx, 31, 0x116D0Cu);
    ctx->pc = 0x116D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D04u;
    // 0x116d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116D04u, 0x116D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D0Cu;
label_116d0c:
    // 0x116d0c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116D0Cu;
    SET_GPR_U32(ctx, 31, 0x116D14u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116D0Cu, 0x116D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D14u;
label_116d14:
    // 0x116d14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D14u;
        // 0x116d18: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116D1Cu;
label_116d1c:
    // 0x116d1c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x116d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x116d20: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116D20u;
    SET_GPR_U32(ctx, 31, 0x116D28u);
    ctx->pc = 0x116D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D20u;
    // 0x116d24: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116D20u, 0x116D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D28u;
label_116d28:
    // 0x116d28: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116D28u;
    {
        const bool branch_taken_0x116d28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d28) {
            ctx->pc = 0x116D40u;
            goto label_116d40;
        }
    }
    ctx->pc = 0x116D30u;
    // 0x116d30: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116D30u;
    SET_GPR_U32(ctx, 31, 0x116D38u);
    ctx->pc = 0x116D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D30u;
    // 0x116d34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116D30u, 0x116D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D38u;
label_116d38:
    // 0x116d38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116D38u;
    {
        const bool branch_taken_0x116d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D38u;
        // 0x116d3c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d38) {
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116D40u;
label_116d40:
    // 0x116d40: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116D40u;
    {
        const bool branch_taken_0x116d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d40) {
            ctx->pc = 0x116D58u;
            goto label_116d58;
        }
    }
    ctx->pc = 0x116D48u;
    // 0x116d48: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116D48u;
    SET_GPR_U32(ctx, 31, 0x116D50u);
    ctx->pc = 0x116D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D48u;
    // 0x116d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116D48u, 0x116D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D50u;
label_116d50:
    // 0x116d50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116D50u;
    {
        const bool branch_taken_0x116d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D50u;
        // 0x116d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d50) {
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116D58u;
label_116d58:
    // 0x116d58: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116D58u;
    SET_GPR_U32(ctx, 31, 0x116D60u);
    ctx->pc = 0x116D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D58u;
    // 0x116d5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116D58u, 0x116D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D60u;
label_116d60:
    // 0x116d60: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116D60u;
    SET_GPR_U32(ctx, 31, 0x116D68u);
    ctx->pc = 0x116D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D60u;
    // 0x116d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116D60u, 0x116D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D68u;
label_116d68:
    // 0x116d68: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x116d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_116d6c:
    // 0x116d6c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x116d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116d70: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x116d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116d74: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x116d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116d78: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116d7c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x116d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116d80: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x116d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116d84: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x116d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116d88: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x116d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x116D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D8Cu;
        // 0x116d90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116D94u;
    // 0x116d94: 0x0  nop
    ctx->pc = 0x116d94u;
    // NOP
label_116d98:
    // 0x116d98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x116d9c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x116d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x116da0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x116da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x116da4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x116da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116da8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x116da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x116dac: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x116dacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116db0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x116db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x116db4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x116db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116db8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x116db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x116dbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x116dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x116dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x116dc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x116dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x116dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x116dcc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x116dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x116dd0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x116dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x116dd4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x116dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x116dd8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x116dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x116ddc: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x116DDCu;
    SET_GPR_U32(ctx, 31, 0x116DE4u);
    ctx->pc = 0x116DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DDCu;
    // 0x116de0: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x116DDCu, 0x116DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DE4u;
label_116de4:
    // 0x116de4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116de8: 0x2451a340  addiu       $s1, $v0, -0x5CC0
    ctx->pc = 0x116de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943552));
    // 0x116dec: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x116decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x116df0: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x116df0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x116df4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DF4u;
            // 0x116df8: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E08u;
            goto label_116e08;
        }
    }
    ctx->pc = 0x116DFCu;
    // 0x116dfc: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x116DFCu;
    SET_GPR_U32(ctx, 31, 0x116E04u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x116DFCu, 0x116E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E04u;
label_116e04:
    // 0x116e04: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x116e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_116e08:
    // 0x116e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e0c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x116e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x116e10: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x116E10u;
    {
        const bool branch_taken_0x116e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E10u;
        // 0x116e14: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e10) {
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116E18u;
    // 0x116e18: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x116e18u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x116e1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_116e20:
    // 0x116e20: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116e24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116E24u;
    {
        const bool branch_taken_0x116e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E24u;
        // 0x116e28: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e24) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116E2Cu;
    // 0x116e2c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x116e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x116e30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116e34: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x116e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x116e38: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x116e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x116e3c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116E3Cu;
    {
        const bool branch_taken_0x116e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e3c) {
            ctx->pc = 0x116E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E3Cu;
            // 0x116e40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e20;
        }
    }
    ctx->pc = 0x116E44u;
    // 0x116e44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116E44u;
    {
        const bool branch_taken_0x116e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E44u;
        // 0x116e48: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e44) {
            ctx->pc = 0x116E54u;
            goto label_116e54;
        }
    }
    ctx->pc = 0x116E4Cu;
label_116e4c:
    // 0x116e4c: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x116e4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_116e50:
    // 0x116e50: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_116e54:
    // 0x116e54: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x116E54u;
    {
        const bool branch_taken_0x116e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x116e54) {
            ctx->pc = 0x116E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E54u;
            // 0x116e58: 0xa220040b  sb          $zero, 0x40B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E5Cu;
            goto label_116e5c;
        }
    }
    ctx->pc = 0x116E5Cu;
label_116e5c:
    // 0x116e5c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x116E5Cu;
    {
        const bool branch_taken_0x116e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E5Cu;
        // 0x116e60: 0x2fc20401  sltiu       $v0, $fp, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e5c) {
            ctx->pc = 0x116E98u;
            goto label_116e98;
        }
    }
    ctx->pc = 0x116E64u;
    // 0x116e64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x116E64u;
    {
        const bool branch_taken_0x116e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E64u;
        // 0x116e68: 0x24024601  addiu       $v0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e64) {
            ctx->pc = 0x116E98u;
            goto label_116e98;
        }
    }
    ctx->pc = 0x116E6Cu;
    // 0x116e6c: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x116E6Cu;
    {
        const bool branch_taken_0x116e6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x116e6c) {
            ctx->pc = 0x116EA8u;
            goto label_116ea8;
        }
    }
    ctx->pc = 0x116E74u;
    // 0x116e74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x116e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x116e78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E78u;
            // 0x116e7c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E90u;
            goto label_116e90;
        }
    }
    ctx->pc = 0x116E80u;
    // 0x116e80: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116E80u;
    SET_GPR_U32(ctx, 31, 0x116E88u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116E80u, 0x116E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E88u;
label_116e88:
    // 0x116e88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x116E88u;
    {
        const bool branch_taken_0x116e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E88u;
        // 0x116e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e88) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x116E90u;
label_116e90:
    // 0x116e90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E90u;
    {
        const bool branch_taken_0x116e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e90) {
            ctx->pc = 0x116EA8u;
            goto label_116ea8;
        }
    }
    ctx->pc = 0x116E98u;
label_116e98:
    // 0x116e98: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116E98u;
    SET_GPR_U32(ctx, 31, 0x116EA0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116E98u, 0x116EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x116EA0u;
    {
        const bool branch_taken_0x116ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA0u;
        // 0x116ea4: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea0) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x116EA8u;
label_116ea8:
    // 0x116ea8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x116EA8u;
    {
        const bool branch_taken_0x116ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA8u;
        // 0x116eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea8) {
            ctx->pc = 0x116EF0u;
            goto label_116ef0;
        }
    }
    ctx->pc = 0x116EB0u;
    // 0x116eb0: 0x2626040c  addiu       $a2, $s1, 0x40C
    ctx->pc = 0x116eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x116eb4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x116eb8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116ebc: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x116ebcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x116ec0: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116ec4: 0x0  nop
    ctx->pc = 0x116ec4u;
    // NOP
label_116ec8:
    // 0x116ec8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x116ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x116ecc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x116eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x116ed0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116ed4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116ed8: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x116ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x116edc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x116edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x116ee0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116EE0u;
    {
        const bool branch_taken_0x116ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ee0) {
            ctx->pc = 0x116EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116ec8;
        }
    }
    ctx->pc = 0x116EE8u;
    // 0x116ee8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116EE8u;
    {
        const bool branch_taken_0x116ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0xae300810  sw          $s0, 0x810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee8) {
            ctx->pc = 0x116F04u;
            goto label_116f04;
        }
    }
    ctx->pc = 0x116EF0u;
label_116ef0:
    // 0x116ef0: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x116ef4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116ef8: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x116ef8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x116efc: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x116efcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x116f00: 0xae300810  sw          $s0, 0x810($s1)
    ctx->pc = 0x116f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
label_116f04:
    // 0x116f04: 0x24e3e418  addiu       $v1, $a3, -0x1BE8
    ctx->pc = 0x116f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960152));
    // 0x116f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f0c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x116f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x116f10: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x116f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x116f14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116f18: 0xae35080c  sw          $s5, 0x80C($s1)
    ctx->pc = 0x116f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 21));
    // 0x116f1c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x116F1Cu;
    SET_GPR_U32(ctx, 31, 0x116F24u);
    ctx->pc = 0x116F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F1Cu;
    // 0x116f20: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x116F1Cu, 0x116F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F24u;
label_116f24:
    // 0x116f24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x116f24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f28: 0xae3e0818  sw          $fp, 0x818($s1)
    ctx->pc = 0x116f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 30));
    // 0x116f2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x116f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116f30: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x116f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x116f34: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x116f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x116f38: 0x24034601  addiu       $v1, $zero, 0x4601
    ctx->pc = 0x116f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x116f3c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x116f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x116f40: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x116f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x116f44: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x116F44u;
    {
        const bool branch_taken_0x116f44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x116F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F44u;
        // 0x116f48: 0xae220814  sw          $v0, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f44) {
            ctx->pc = 0x116F70u;
            goto label_116f70;
        }
    }
    ctx->pc = 0x116F4Cu;
    // 0x116f4c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x116f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116f50: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x116f54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x116f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x116f58: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x116f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x116f5c: 0x2812  mflo        $a1
    ctx->pc = 0x116f5cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x116f60: 0xc04499e  jal         func_112678
    ctx->pc = 0x116F60u;
    SET_GPR_U32(ctx, 31, 0x116F68u);
    ctx->pc = 0x116F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F60u;
    // 0x116f64: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x116F60u, 0x116F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F68u;
label_116f68:
    // 0x116f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116F68u;
    {
        const bool branch_taken_0x116f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F68u;
        // 0x116f6c: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f68) {
            ctx->pc = 0x116F78u;
            goto label_116f78;
        }
    }
    ctx->pc = 0x116F70u;
label_116f70:
    // 0x116f70: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x116f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x116f74: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_116f78:
    // 0x116f78: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x116f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x116f7c: 0x2450a340  addiu       $s0, $v0, -0x5CC0
    ctx->pc = 0x116f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943552));
    // 0x116f80: 0x26d2af80  addiu       $s2, $s6, -0x5080
    ctx->pc = 0x116f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946688));
    // 0x116f84: 0xc04499e  jal         func_112678
    ctx->pc = 0x116F84u;
    SET_GPR_U32(ctx, 31, 0x116F8Cu);
    ctx->pc = 0x116F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F84u;
    // 0x116f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x116F84u, 0x116F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F8Cu;
label_116f8c:
    // 0x116f8c: 0x26e4ba40  addiu       $a0, $s7, -0x45C0
    ctx->pc = 0x116f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949440));
    // 0x116f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x116f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x116f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116f9c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x116f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x116fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fa4: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x116fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x116fa8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x116fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116facu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116fb0: 0xc044e56  jal         func_113958
    ctx->pc = 0x116FB0u;
    SET_GPR_U32(ctx, 31, 0x116FB8u);
    ctx->pc = 0x116FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FB0u;
    // 0x116fb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x116FB0u, 0x116FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FB8u;
label_116fb8:
    // 0x116fb8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116FB8u;
    {
        const bool branch_taken_0x116fb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FB8u;
        // 0x116fbc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fb8) {
            ctx->pc = 0x116FD8u;
            goto label_116fd8;
        }
    }
    ctx->pc = 0x116FC0u;
    // 0x116fc0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116FC0u;
    SET_GPR_U32(ctx, 31, 0x116FC8u);
    ctx->pc = 0x116FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FC0u;
    // 0x116fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116FC0u, 0x116FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FC8u;
label_116fc8:
    // 0x116fc8: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116FC8u;
    SET_GPR_U32(ctx, 31, 0x116FD0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116FC8u, 0x116FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FD0u;
label_116fd0:
    // 0x116fd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116FD0u;
    {
        const bool branch_taken_0x116fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FD0u;
        // 0x116fd4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fd0) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x116FD8u;
label_116fd8:
    // 0x116fd8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x116fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x116fdc: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x116FDCu;
    SET_GPR_U32(ctx, 31, 0x116FE4u);
    ctx->pc = 0x116FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FDCu;
    // 0x116fe0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x116FDCu, 0x116FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FE4u;
label_116fe4:
    // 0x116fe4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116FE4u;
    {
        const bool branch_taken_0x116fe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fe4) {
            ctx->pc = 0x116FFCu;
            goto label_116ffc;
        }
    }
    ctx->pc = 0x116FECu;
    // 0x116fec: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x116FECu;
    SET_GPR_U32(ctx, 31, 0x116FF4u);
    ctx->pc = 0x116FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FECu;
    // 0x116ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x116FECu, 0x116FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FF4u;
label_116ff4:
    // 0x116ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116FF4u;
    {
        const bool branch_taken_0x116ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FF4u;
        // 0x116ff8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ff4) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x116FFCu;
label_116ffc:
    // 0x116ffc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x116FFCu;
    SET_GPR_U32(ctx, 31, 0x117004u);
    ctx->pc = 0x117000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FFCu;
    // 0x117000: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x116FFCu, 0x117004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117004u;
label_117004:
    // 0x117004: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x117004u;
    SET_GPR_U32(ctx, 31, 0x11700Cu);
    ctx->pc = 0x117008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117004u;
    // 0x117008: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x117004u, 0x11700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11700Cu;
label_11700c:
    // 0x11700c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_117010:
    // 0x117010: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x117010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117014: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x117014u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117018: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x117018u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11701c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11701cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117020: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x117020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117024: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x117024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117028: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x117028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11702c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11702cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117030: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x117030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117034: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x117034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117038: 0x3e00008  jr          $ra
    ctx->pc = 0x117038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117038u;
        // 0x11703c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117040u;
label_117040:
    // 0x117040: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x117040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x117044: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x117044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x117048: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x117048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11704c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117050: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x117050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x117054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117058: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x117058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11705c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x117060: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x117060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x117064: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x117064u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x117068: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x117068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11706c: 0x26d2a340  addiu       $s2, $s6, -0x5CC0
    ctx->pc = 0x11706cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x117070: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x117070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x117074: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x117074u;
    SET_GPR_U32(ctx, 31, 0x11707Cu);
    ctx->pc = 0x117078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117074u;
    // 0x117078: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x117074u, 0x11707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11707Cu;
label_11707c:
    // 0x11707c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x117080: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x117080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x117084: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117084u;
    {
        const bool branch_taken_0x117084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117084) {
            ctx->pc = 0x117088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117084u;
            // 0x117088: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117098u;
            goto label_117098;
        }
    }
    ctx->pc = 0x11708Cu;
    // 0x11708c: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x11708Cu;
    SET_GPR_U32(ctx, 31, 0x117094u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x11708Cu, 0x117094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117094u;
label_117094:
    // 0x117094: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x117094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_117098:
    // 0x117098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11709c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11709cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1170a0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1170A0u;
    {
        const bool branch_taken_0x1170a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A0u;
        // 0x1170a4: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a0) {
            ctx->pc = 0x1170ECu;
            goto label_1170ec;
        }
    }
    ctx->pc = 0x1170A8u;
    // 0x1170a8: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x1170a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x1170ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1170acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1170b0: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x1170b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x1170b4: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1170b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x1170b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1170b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1170bc: 0x0  nop
    ctx->pc = 0x1170bcu;
    // NOP
label_1170c0:
    // 0x1170c0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1170c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1170c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1170C4u;
    {
        const bool branch_taken_0x1170c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C4u;
        // 0x1170c8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c4) {
            ctx->pc = 0x1170FCu;
            goto label_1170fc;
        }
    }
    ctx->pc = 0x1170CCu;
    // 0x1170cc: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1170ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1170d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1170d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170d4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1170d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1170d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1170d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1170dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1170DCu;
    {
        const bool branch_taken_0x1170dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1170dc) {
            ctx->pc = 0x1170E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1170DCu;
            // 0x1170e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1170C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1170c0;
        }
    }
    ctx->pc = 0x1170E4u;
    // 0x1170e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1170E4u;
    {
        const bool branch_taken_0x1170e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170E4u;
        // 0x1170e8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170e4) {
            ctx->pc = 0x117100u;
            goto label_117100;
        }
    }
    ctx->pc = 0x1170ECu;
label_1170ec:
    // 0x1170ec: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x1170ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x1170f0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1170f4: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x1170f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x1170f8: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_1170fc:
    // 0x1170fc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_117100:
    // 0x117100: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117100u;
    {
        const bool branch_taken_0x117100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x117100) {
            ctx->pc = 0x117104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117100u;
            // 0x117104: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x117108u;
label_117108:
    // 0x117108: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x117108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11710c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11710cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117110: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x117114: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x117114u;
    {
        const bool branch_taken_0x117114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117114u;
        // 0x117118: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117114) {
            ctx->pc = 0x11714Cu;
            goto label_11714c;
        }
    }
    ctx->pc = 0x11711Cu;
    // 0x11711c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x11711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x117120: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x117120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x117124: 0x0  nop
    ctx->pc = 0x117124u;
    // NOP
label_117128:
    // 0x117128: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x117128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11712c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11712Cu;
    {
        const bool branch_taken_0x11712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11712Cu;
        // 0x117130: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11712c) {
            ctx->pc = 0x11714Cu;
            goto label_11714c;
        }
    }
    ctx->pc = 0x117134u;
    // 0x117134: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x117138: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x117138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11713c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11713cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x117140: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x117144: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117144u;
    {
        const bool branch_taken_0x117144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117144) {
            ctx->pc = 0x117148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117144u;
            // 0x117148: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117128;
        }
    }
    ctx->pc = 0x11714Cu;
label_11714c:
    // 0x11714c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x117150: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117150u;
    {
        const bool branch_taken_0x117150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x117150) {
            ctx->pc = 0x117154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117150u;
            // 0x117154: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117158u;
            goto label_117158;
        }
    }
    ctx->pc = 0x117158u;
label_117158:
    // 0x117158: 0x24e2e430  addiu       $v0, $a3, -0x1BD0
    ctx->pc = 0x117158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960176));
    // 0x11715c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117160: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x117160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x117164: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x117164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x117168: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x117168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11716c: 0x2690af80  addiu       $s0, $s4, -0x5080
    ctx->pc = 0x11716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x117170: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x117170u;
    SET_GPR_U32(ctx, 31, 0x117178u);
    ctx->pc = 0x117174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117170u;
    // 0x117174: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x117170u, 0x117178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117178u;
label_117178:
    // 0x117178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11717c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x11717cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x117180: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117184: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x117184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x117188: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x117188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11718c: 0x26a4ba40  addiu       $a0, $s5, -0x45C0
    ctx->pc = 0x11718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949440));
    // 0x117190: 0x26c7a340  addiu       $a3, $s6, -0x5CC0
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x117194: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x117194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x117198: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11719c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11719cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1171a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1171a4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1171a8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1171a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171ac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1171b0: 0xc044e56  jal         func_113958
    ctx->pc = 0x1171B0u;
    SET_GPR_U32(ctx, 31, 0x1171B8u);
    ctx->pc = 0x1171B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171B0u;
    // 0x1171b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x1171B0u, 0x1171B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171B8u;
label_1171b8:
    // 0x1171b8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1171B8u;
    {
        const bool branch_taken_0x1171b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171B8u;
        // 0x1171bc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171b8) {
            ctx->pc = 0x1171D8u;
            goto label_1171d8;
        }
    }
    ctx->pc = 0x1171C0u;
    // 0x1171c0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1171C0u;
    SET_GPR_U32(ctx, 31, 0x1171C8u);
    ctx->pc = 0x1171C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171C0u;
    // 0x1171c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1171C0u, 0x1171C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171C8u;
label_1171c8:
    // 0x1171c8: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1171C8u;
    SET_GPR_U32(ctx, 31, 0x1171D0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1171C8u, 0x1171D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171D0u;
label_1171d0:
    // 0x1171d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1171D0u;
    {
        const bool branch_taken_0x1171d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D0u;
        // 0x1171d4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d0) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171D8u;
label_1171d8:
    // 0x1171d8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1171d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1171dc: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1171DCu;
    SET_GPR_U32(ctx, 31, 0x1171E4u);
    ctx->pc = 0x1171E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171DCu;
    // 0x1171e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1171DCu, 0x1171E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171E4u;
label_1171e4:
    // 0x1171e4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1171E4u;
    {
        const bool branch_taken_0x1171e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1171e4) {
            ctx->pc = 0x1171FCu;
            goto label_1171fc;
        }
    }
    ctx->pc = 0x1171ECu;
    // 0x1171ec: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1171ECu;
    SET_GPR_U32(ctx, 31, 0x1171F4u);
    ctx->pc = 0x1171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171ECu;
    // 0x1171f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1171ECu, 0x1171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1171F4u;
    {
        const bool branch_taken_0x1171f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F4u;
        // 0x1171f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f4) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171FCu;
label_1171fc:
    // 0x1171fc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1171FCu;
    SET_GPR_U32(ctx, 31, 0x117204u);
    ctx->pc = 0x117200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171FCu;
    // 0x117200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1171FCu, 0x117204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117204u;
label_117204:
    // 0x117204: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x117204u;
    SET_GPR_U32(ctx, 31, 0x11720Cu);
    ctx->pc = 0x117208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117204u;
    // 0x117208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x117204u, 0x11720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11720Cu;
label_11720c:
    // 0x11720c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_117210:
    // 0x117210: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x117210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117214: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x117214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117218: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x117218u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11721c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11721cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117220: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x117220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117224: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x117224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117228: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x117228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11722c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11722cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117230: 0x3e00008  jr          $ra
    ctx->pc = 0x117230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117230u;
        // 0x117234: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117238u;
label_117238:
    // 0x117238: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x117238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11723c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x117240: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x117240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x117244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117248: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x117248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11724c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11724cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117250: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x117250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x117254: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x117254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117258: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x117258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11725c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x117260: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x117260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x117264: 0x3c1e001f  lui         $fp, 0x1F
    ctx->pc = 0x117264u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
    // 0x117268: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x117268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11726c: 0x27d2a340  addiu       $s2, $fp, -0x5CC0
    ctx->pc = 0x11726cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x117270: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x117270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x117274: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x117274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x117278: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x117278u;
    SET_GPR_U32(ctx, 31, 0x117280u);
    ctx->pc = 0x11727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117278u;
    // 0x11727c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x117278u, 0x117280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117280u;
label_117280:
    // 0x117280: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x117284: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x117288: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117288u;
    {
        const bool branch_taken_0x117288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117288) {
            ctx->pc = 0x11728Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117288u;
            // 0x11728c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11729Cu;
            goto label_11729c;
        }
    }
    ctx->pc = 0x117290u;
    // 0x117290: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x117290u;
    SET_GPR_U32(ctx, 31, 0x117298u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x117290u, 0x117298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117298u;
label_117298:
    // 0x117298: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x117298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11729c:
    // 0x11729c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172a0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1172a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1172a4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x1172F4u;
            goto label_1172f4;
        }
    }
    ctx->pc = 0x1172ACu;
    // 0x1172ac: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1172acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1172b0: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x1172b4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1172b8: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x1172b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x1172bc: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1172bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x1172c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1172c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1172c4: 0x0  nop
    ctx->pc = 0x1172c4u;
    // NOP
label_1172c8:
    // 0x1172c8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1172c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1172cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1172CCu;
    {
        const bool branch_taken_0x1172cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172CCu;
        // 0x1172d0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172cc) {
            ctx->pc = 0x117308u;
            goto label_117308;
        }
    }
    ctx->pc = 0x1172D4u;
    // 0x1172d4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1172d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1172d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1172d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172dc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1172dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1172e0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1172e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1172E4u;
    {
        const bool branch_taken_0x1172e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1172e4) {
            ctx->pc = 0x1172E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1172E4u;
            // 0x1172e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1172C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1172c8;
        }
    }
    ctx->pc = 0x1172ECu;
    // 0x1172ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1172ECu;
    {
        const bool branch_taken_0x1172ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172ECu;
        // 0x1172f0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172ec) {
            ctx->pc = 0x11730Cu;
            goto label_11730c;
        }
    }
    ctx->pc = 0x1172F4u;
label_1172f4:
    // 0x1172f4: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1172f4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1172f8: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x1172fc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1172fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117300: 0x3c17001f  lui         $s7, 0x1F
    ctx->pc = 0x117300u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)31 << 16));
    // 0x117304: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x117304u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_117308:
    // 0x117308: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x117308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_11730c:
    // 0x11730c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11730Cu;
    {
        const bool branch_taken_0x11730c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11730c) {
            ctx->pc = 0x117310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11730Cu;
            // 0x117310: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117314u;
            goto label_117314;
        }
    }
    ctx->pc = 0x117314u;
label_117314:
    // 0x117314: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x117314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x117318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x117318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11731c: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x11731cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x117320: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x117320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x117324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117328: 0xc04499e  jal         func_112678
    ctx->pc = 0x117328u;
    SET_GPR_U32(ctx, 31, 0x117330u);
    ctx->pc = 0x11732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117328u;
    // 0x11732c: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x117328u, 0x117330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117330u;
label_117330:
    // 0x117330: 0x2690af80  addiu       $s0, $s4, -0x5080
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946688));
    // 0x117334: 0x26c3e448  addiu       $v1, $s6, -0x1BB8
    ctx->pc = 0x117334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960200));
    // 0x117338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11733c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x117340: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x117344: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x117344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x117348: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x117348u;
    SET_GPR_U32(ctx, 31, 0x117350u);
    ctx->pc = 0x11734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117348u;
    // 0x11734c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x117348u, 0x117350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117350u;
label_117350:
    // 0x117350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117354: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x117354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x117358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11735c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x11735cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x117360: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x117360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x117364: 0x26e4ba40  addiu       $a0, $s7, -0x45C0
    ctx->pc = 0x117364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949440));
    // 0x117368: 0x27c7a340  addiu       $a3, $fp, -0x5CC0
    ctx->pc = 0x117368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943552));
    // 0x11736c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x11736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x117370: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117378: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x117378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11737c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x11737cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x117380: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x117380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117384: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x117384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117388: 0xc044e56  jal         func_113958
    ctx->pc = 0x117388u;
    SET_GPR_U32(ctx, 31, 0x117390u);
    ctx->pc = 0x11738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117388u;
    // 0x11738c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x117388u, 0x117390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117390u;
label_117390:
    // 0x117390: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117390u;
    {
        const bool branch_taken_0x117390 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117390u;
        // 0x117394: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117390) {
            ctx->pc = 0x1173B0u;
            goto label_1173b0;
        }
    }
    ctx->pc = 0x117398u;
    // 0x117398: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x117398u;
    SET_GPR_U32(ctx, 31, 0x1173A0u);
    ctx->pc = 0x11739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117398u;
    // 0x11739c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x117398u, 0x1173A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173A0u;
label_1173a0:
    // 0x1173a0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1173A0u;
    SET_GPR_U32(ctx, 31, 0x1173A8u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1173A0u, 0x1173A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173A8u;
label_1173a8:
    // 0x1173a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1173A8u;
    {
        const bool branch_taken_0x1173a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173A8u;
        // 0x1173ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173a8) {
            ctx->pc = 0x1173E8u;
            goto label_1173e8;
        }
    }
    ctx->pc = 0x1173B0u;
label_1173b0:
    // 0x1173b0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1173b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1173b4: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1173B4u;
    SET_GPR_U32(ctx, 31, 0x1173BCu);
    ctx->pc = 0x1173B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173B4u;
    // 0x1173b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1173B4u, 0x1173BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173BCu;
label_1173bc:
    // 0x1173bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1173BCu;
    {
        const bool branch_taken_0x1173bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1173bc) {
            ctx->pc = 0x1173D4u;
            goto label_1173d4;
        }
    }
    ctx->pc = 0x1173C4u;
    // 0x1173c4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1173C4u;
    SET_GPR_U32(ctx, 31, 0x1173CCu);
    ctx->pc = 0x1173C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173C4u;
    // 0x1173c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1173C4u, 0x1173CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173CCu;
label_1173cc:
    // 0x1173cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1173CCu;
    {
        const bool branch_taken_0x1173cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173CCu;
        // 0x1173d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173cc) {
            ctx->pc = 0x1173E8u;
            goto label_1173e8;
        }
    }
    ctx->pc = 0x1173D4u;
label_1173d4:
    // 0x1173d4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1173D4u;
    SET_GPR_U32(ctx, 31, 0x1173DCu);
    ctx->pc = 0x1173D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173D4u;
    // 0x1173d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1173D4u, 0x1173DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173DCu;
label_1173dc:
    // 0x1173dc: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1173DCu;
    SET_GPR_U32(ctx, 31, 0x1173E4u);
    ctx->pc = 0x1173E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173DCu;
    // 0x1173e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1173DCu, 0x1173E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173E4u;
label_1173e4:
    // 0x1173e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1173e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1173e8:
    // 0x1173e8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1173e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1173ec: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1173ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1173f0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1173f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1173f4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1173f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1173f8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1173fc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1173fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117400: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x117400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117404: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x117404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117408: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x117408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11740c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11740cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117410: 0x3e00008  jr          $ra
    ctx->pc = 0x117410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117410u;
        // 0x117414: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117418u;
}
