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

// Function: sub_002EA640
// Address: 0x2ea640 - 0x2ea968
void sub_002EA640_0x2ea640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA640_0x2ea640");
#endif

    switch (ctx->pc) {
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea644u: goto label_2ea644;
        case 0x2ea648u: goto label_2ea648;
        case 0x2ea64cu: goto label_2ea64c;
        case 0x2ea650u: goto label_2ea650;
        case 0x2ea654u: goto label_2ea654;
        case 0x2ea658u: goto label_2ea658;
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea660u: goto label_2ea660;
        case 0x2ea664u: goto label_2ea664;
        case 0x2ea668u: goto label_2ea668;
        case 0x2ea66cu: goto label_2ea66c;
        case 0x2ea670u: goto label_2ea670;
        case 0x2ea674u: goto label_2ea674;
        case 0x2ea678u: goto label_2ea678;
        case 0x2ea67cu: goto label_2ea67c;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea684u: goto label_2ea684;
        case 0x2ea688u: goto label_2ea688;
        case 0x2ea68cu: goto label_2ea68c;
        case 0x2ea690u: goto label_2ea690;
        case 0x2ea694u: goto label_2ea694;
        case 0x2ea698u: goto label_2ea698;
        case 0x2ea69cu: goto label_2ea69c;
        case 0x2ea6a0u: goto label_2ea6a0;
        case 0x2ea6a4u: goto label_2ea6a4;
        case 0x2ea6a8u: goto label_2ea6a8;
        case 0x2ea6acu: goto label_2ea6ac;
        case 0x2ea6b0u: goto label_2ea6b0;
        case 0x2ea6b4u: goto label_2ea6b4;
        case 0x2ea6b8u: goto label_2ea6b8;
        case 0x2ea6bcu: goto label_2ea6bc;
        case 0x2ea6c0u: goto label_2ea6c0;
        case 0x2ea6c4u: goto label_2ea6c4;
        case 0x2ea6c8u: goto label_2ea6c8;
        case 0x2ea6ccu: goto label_2ea6cc;
        case 0x2ea6d0u: goto label_2ea6d0;
        case 0x2ea6d4u: goto label_2ea6d4;
        case 0x2ea6d8u: goto label_2ea6d8;
        case 0x2ea6dcu: goto label_2ea6dc;
        case 0x2ea6e0u: goto label_2ea6e0;
        case 0x2ea6e4u: goto label_2ea6e4;
        case 0x2ea6e8u: goto label_2ea6e8;
        case 0x2ea6ecu: goto label_2ea6ec;
        case 0x2ea6f0u: goto label_2ea6f0;
        case 0x2ea6f4u: goto label_2ea6f4;
        case 0x2ea6f8u: goto label_2ea6f8;
        case 0x2ea6fcu: goto label_2ea6fc;
        case 0x2ea700u: goto label_2ea700;
        case 0x2ea704u: goto label_2ea704;
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea70cu: goto label_2ea70c;
        case 0x2ea710u: goto label_2ea710;
        case 0x2ea714u: goto label_2ea714;
        case 0x2ea718u: goto label_2ea718;
        case 0x2ea71cu: goto label_2ea71c;
        case 0x2ea720u: goto label_2ea720;
        case 0x2ea724u: goto label_2ea724;
        case 0x2ea728u: goto label_2ea728;
        case 0x2ea72cu: goto label_2ea72c;
        case 0x2ea730u: goto label_2ea730;
        case 0x2ea734u: goto label_2ea734;
        case 0x2ea738u: goto label_2ea738;
        case 0x2ea73cu: goto label_2ea73c;
        case 0x2ea740u: goto label_2ea740;
        case 0x2ea744u: goto label_2ea744;
        case 0x2ea748u: goto label_2ea748;
        case 0x2ea74cu: goto label_2ea74c;
        case 0x2ea750u: goto label_2ea750;
        case 0x2ea754u: goto label_2ea754;
        case 0x2ea758u: goto label_2ea758;
        case 0x2ea75cu: goto label_2ea75c;
        case 0x2ea760u: goto label_2ea760;
        case 0x2ea764u: goto label_2ea764;
        case 0x2ea768u: goto label_2ea768;
        case 0x2ea76cu: goto label_2ea76c;
        case 0x2ea770u: goto label_2ea770;
        case 0x2ea774u: goto label_2ea774;
        case 0x2ea778u: goto label_2ea778;
        case 0x2ea77cu: goto label_2ea77c;
        case 0x2ea780u: goto label_2ea780;
        case 0x2ea784u: goto label_2ea784;
        case 0x2ea788u: goto label_2ea788;
        case 0x2ea78cu: goto label_2ea78c;
        case 0x2ea790u: goto label_2ea790;
        case 0x2ea794u: goto label_2ea794;
        case 0x2ea798u: goto label_2ea798;
        case 0x2ea79cu: goto label_2ea79c;
        case 0x2ea7a0u: goto label_2ea7a0;
        case 0x2ea7a4u: goto label_2ea7a4;
        case 0x2ea7a8u: goto label_2ea7a8;
        case 0x2ea7acu: goto label_2ea7ac;
        case 0x2ea7b0u: goto label_2ea7b0;
        case 0x2ea7b4u: goto label_2ea7b4;
        case 0x2ea7b8u: goto label_2ea7b8;
        case 0x2ea7bcu: goto label_2ea7bc;
        case 0x2ea7c0u: goto label_2ea7c0;
        case 0x2ea7c4u: goto label_2ea7c4;
        case 0x2ea7c8u: goto label_2ea7c8;
        case 0x2ea7ccu: goto label_2ea7cc;
        case 0x2ea7d0u: goto label_2ea7d0;
        case 0x2ea7d4u: goto label_2ea7d4;
        case 0x2ea7d8u: goto label_2ea7d8;
        case 0x2ea7dcu: goto label_2ea7dc;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea7e4u: goto label_2ea7e4;
        case 0x2ea7e8u: goto label_2ea7e8;
        case 0x2ea7ecu: goto label_2ea7ec;
        case 0x2ea7f0u: goto label_2ea7f0;
        case 0x2ea7f4u: goto label_2ea7f4;
        case 0x2ea7f8u: goto label_2ea7f8;
        case 0x2ea7fcu: goto label_2ea7fc;
        case 0x2ea800u: goto label_2ea800;
        case 0x2ea804u: goto label_2ea804;
        case 0x2ea808u: goto label_2ea808;
        case 0x2ea80cu: goto label_2ea80c;
        case 0x2ea810u: goto label_2ea810;
        case 0x2ea814u: goto label_2ea814;
        case 0x2ea818u: goto label_2ea818;
        case 0x2ea81cu: goto label_2ea81c;
        case 0x2ea820u: goto label_2ea820;
        case 0x2ea824u: goto label_2ea824;
        case 0x2ea828u: goto label_2ea828;
        case 0x2ea82cu: goto label_2ea82c;
        case 0x2ea830u: goto label_2ea830;
        case 0x2ea834u: goto label_2ea834;
        case 0x2ea838u: goto label_2ea838;
        case 0x2ea83cu: goto label_2ea83c;
        case 0x2ea840u: goto label_2ea840;
        case 0x2ea844u: goto label_2ea844;
        case 0x2ea848u: goto label_2ea848;
        case 0x2ea84cu: goto label_2ea84c;
        case 0x2ea850u: goto label_2ea850;
        case 0x2ea854u: goto label_2ea854;
        case 0x2ea858u: goto label_2ea858;
        case 0x2ea85cu: goto label_2ea85c;
        case 0x2ea860u: goto label_2ea860;
        case 0x2ea864u: goto label_2ea864;
        case 0x2ea868u: goto label_2ea868;
        case 0x2ea86cu: goto label_2ea86c;
        case 0x2ea870u: goto label_2ea870;
        case 0x2ea874u: goto label_2ea874;
        case 0x2ea878u: goto label_2ea878;
        case 0x2ea87cu: goto label_2ea87c;
        case 0x2ea880u: goto label_2ea880;
        case 0x2ea884u: goto label_2ea884;
        case 0x2ea888u: goto label_2ea888;
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea890u: goto label_2ea890;
        case 0x2ea894u: goto label_2ea894;
        case 0x2ea898u: goto label_2ea898;
        case 0x2ea89cu: goto label_2ea89c;
        case 0x2ea8a0u: goto label_2ea8a0;
        case 0x2ea8a4u: goto label_2ea8a4;
        case 0x2ea8a8u: goto label_2ea8a8;
        case 0x2ea8acu: goto label_2ea8ac;
        case 0x2ea8b0u: goto label_2ea8b0;
        case 0x2ea8b4u: goto label_2ea8b4;
        case 0x2ea8b8u: goto label_2ea8b8;
        case 0x2ea8bcu: goto label_2ea8bc;
        case 0x2ea8c0u: goto label_2ea8c0;
        case 0x2ea8c4u: goto label_2ea8c4;
        case 0x2ea8c8u: goto label_2ea8c8;
        case 0x2ea8ccu: goto label_2ea8cc;
        case 0x2ea8d0u: goto label_2ea8d0;
        case 0x2ea8d4u: goto label_2ea8d4;
        case 0x2ea8d8u: goto label_2ea8d8;
        case 0x2ea8dcu: goto label_2ea8dc;
        case 0x2ea8e0u: goto label_2ea8e0;
        case 0x2ea8e4u: goto label_2ea8e4;
        case 0x2ea8e8u: goto label_2ea8e8;
        case 0x2ea8ecu: goto label_2ea8ec;
        case 0x2ea8f0u: goto label_2ea8f0;
        case 0x2ea8f4u: goto label_2ea8f4;
        case 0x2ea8f8u: goto label_2ea8f8;
        case 0x2ea8fcu: goto label_2ea8fc;
        case 0x2ea900u: goto label_2ea900;
        case 0x2ea904u: goto label_2ea904;
        case 0x2ea908u: goto label_2ea908;
        case 0x2ea90cu: goto label_2ea90c;
        case 0x2ea910u: goto label_2ea910;
        case 0x2ea914u: goto label_2ea914;
        case 0x2ea918u: goto label_2ea918;
        case 0x2ea91cu: goto label_2ea91c;
        case 0x2ea920u: goto label_2ea920;
        case 0x2ea924u: goto label_2ea924;
        case 0x2ea928u: goto label_2ea928;
        case 0x2ea92cu: goto label_2ea92c;
        case 0x2ea930u: goto label_2ea930;
        case 0x2ea934u: goto label_2ea934;
        case 0x2ea938u: goto label_2ea938;
        case 0x2ea93cu: goto label_2ea93c;
        case 0x2ea940u: goto label_2ea940;
        case 0x2ea944u: goto label_2ea944;
        case 0x2ea948u: goto label_2ea948;
        case 0x2ea94cu: goto label_2ea94c;
        case 0x2ea950u: goto label_2ea950;
        case 0x2ea954u: goto label_2ea954;
        case 0x2ea958u: goto label_2ea958;
        case 0x2ea95cu: goto label_2ea95c;
        case 0x2ea960u: goto label_2ea960;
        case 0x2ea964u: goto label_2ea964;
        default: break;
    }

    ctx->pc = 0x2ea640u;

label_2ea640:
    // 0x2ea640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ea644:
    // 0x2ea644: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x2ea644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2ea648:
    // 0x2ea648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ea648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ea64c:
    // 0x2ea64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea650:
    // 0x2ea650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ea654:
    // 0x2ea654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ea658:
    // 0x2ea658: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2ea658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_2ea65c:
    // 0x2ea65c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2ea65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2ea660:
    // 0x2ea660: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2ea660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_2ea664:
    // 0x2ea664: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2ea664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2ea668:
    // 0x2ea668: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x2ea668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_2ea66c:
    // 0x2ea66c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2ea66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_2ea670:
    // 0x2ea670: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2ea674:
    // 0x2ea674: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2ea674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2ea678:
    // 0x2ea678: 0xc0bbfd0  jal         func_2EFF40
label_2ea67c:
    if (ctx->pc == 0x2EA67Cu) {
        ctx->pc = 0x2EA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA678u;
        // 0x2ea67c: 0x8e300104  lw          $s0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA680u;
        goto label_2ea680;
    }
    ctx->pc = 0x2EA678u;
    SET_GPR_U32(ctx, 31, 0x2EA680u);
    ctx->pc = 0x2EA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA678u;
    // 0x2ea67c: 0x8e300104  lw          $s0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF40u, 0x2EA678u, 0x2EA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA680u;
label_2ea680:
    // 0x2ea680: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2ea680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2ea684:
    // 0x2ea684: 0x14700044  bne         $v1, $s0, . + 4 + (0x44 << 2)
label_2ea688:
    if (ctx->pc == 0x2EA688u) {
        ctx->pc = 0x2EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA684u;
        // 0x2ea688: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA68Cu;
        goto label_2ea68c;
    }
    ctx->pc = 0x2EA684u;
    {
        const bool branch_taken_0x2ea684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA684u;
        // 0x2ea688: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea684) {
            ctx->pc = 0x2EA798u;
            goto label_2ea798;
        }
    }
    ctx->pc = 0x2EA68Cu;
label_2ea68c:
    // 0x2ea68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea690:
    // 0x2ea690: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea694:
    if (ctx->pc == 0x2EA694u) {
        ctx->pc = 0x2EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA690u;
        // 0x2ea694: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA698u;
        goto label_2ea698;
    }
    ctx->pc = 0x2EA690u;
    {
        const bool branch_taken_0x2ea690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA690u;
        // 0x2ea694: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea690) {
            ctx->pc = 0x2EA6A8u;
            goto label_2ea6a8;
        }
    }
    ctx->pc = 0x2EA698u;
label_2ea698:
    // 0x2ea698: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_2ea69c:
    if (ctx->pc == 0x2EA69Cu) {
        ctx->pc = 0x2EA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA698u;
        // 0x2ea69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6A0u;
        goto label_2ea6a0;
    }
    ctx->pc = 0x2EA698u;
    {
        const bool branch_taken_0x2ea698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA698u;
        // 0x2ea69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea698) {
            ctx->pc = 0x2EA720u;
            goto label_2ea720;
        }
    }
    ctx->pc = 0x2EA6A0u;
label_2ea6a0:
    // 0x2ea6a0: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2ea6a4:
    if (ctx->pc == 0x2EA6A4u) {
        ctx->pc = 0x2EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6A0u;
        // 0x2ea6a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6A8u;
        goto label_2ea6a8;
    }
    ctx->pc = 0x2EA6A0u;
    {
        const bool branch_taken_0x2ea6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6A0u;
        // 0x2ea6a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6a0) {
            ctx->pc = 0x2EA970u;
            return;
        }
    }
    ctx->pc = 0x2EA6A8u;
label_2ea6a8:
    // 0x2ea6a8: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2ea6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea6ac:
    // 0x2ea6ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ea6b0:
    // 0x2ea6b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea6b4:
    if (ctx->pc == 0x2EA6B4u) {
        ctx->pc = 0x2EA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6B0u;
        // 0x2ea6b4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6B8u;
        goto label_2ea6b8;
    }
    ctx->pc = 0x2EA6B0u;
    {
        const bool branch_taken_0x2ea6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6b0) {
            ctx->pc = 0x2EA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6B0u;
            // 0x2ea6b4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6CCu;
            goto label_2ea6cc;
        }
    }
    ctx->pc = 0x2EA6B8u;
label_2ea6b8:
    // 0x2ea6b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea6bc:
    // 0x2ea6bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ea6c0:
    // 0x2ea6c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea6c4:
    if (ctx->pc == 0x2EA6C4u) {
        ctx->pc = 0x2EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6C0u;
        // 0x2ea6c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6C8u;
        goto label_2ea6c8;
    }
    ctx->pc = 0x2EA6C0u;
    {
        const bool branch_taken_0x2ea6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6C0u;
        // 0x2ea6c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6c0) {
            ctx->pc = 0x2EA6D4u;
            goto label_2ea6d4;
        }
    }
    ctx->pc = 0x2EA6C8u;
label_2ea6c8:
    // 0x2ea6c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea6cc:
    // 0x2ea6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6d0:
    // 0x2ea6d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ea6d4:
    // 0x2ea6d4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2ea6d8:
    // 0x2ea6d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ea6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ea6dc:
    // 0x2ea6dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ea6e0:
    if (ctx->pc == 0x2EA6E0u) {
        ctx->pc = 0x2EA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6DCu;
        // 0x2ea6e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6E4u;
        goto label_2ea6e4;
    }
    ctx->pc = 0x2EA6DCu;
    {
        const bool branch_taken_0x2ea6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6DCu;
        // 0x2ea6e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6dc) {
            ctx->pc = 0x2EA6F4u;
            goto label_2ea6f4;
        }
    }
    ctx->pc = 0x2EA6E4u;
label_2ea6e4:
    // 0x2ea6e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ea6e8:
    // 0x2ea6e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ea6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ea6ec:
    // 0x2ea6ec: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea6f0:
    if (ctx->pc == 0x2EA6F0u) {
        ctx->pc = 0x2EA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6ECu;
        // 0x2ea6f0: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA6F4u;
        goto label_2ea6f4;
    }
    ctx->pc = 0x2EA6ECu;
    {
        const bool branch_taken_0x2ea6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea6ec) {
            ctx->pc = 0x2EA6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6ECu;
            // 0x2ea6f0: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA704u;
            goto label_2ea704;
        }
    }
    ctx->pc = 0x2EA6F4u;
label_2ea6f4:
    // 0x2ea6f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ea6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ea6f8:
    // 0x2ea6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea6fc:
    // 0x2ea6fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ea6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2ea700:
    // 0x2ea700: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_2ea704:
    // 0x2ea704: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ea704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ea708:
    // 0x2ea708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea70c:
    // 0x2ea70c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea710:
    // 0x2ea710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea714:
    // 0x2ea714: 0x80ba5e0  j           func_2E9780
label_2ea718:
    if (ctx->pc == 0x2EA718u) {
        ctx->pc = 0x2EA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA714u;
        // 0x2ea718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA71Cu;
        goto label_2ea71c;
    }
    ctx->pc = 0x2EA714u;
    ctx->pc = 0x2EA718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA714u;
    // 0x2ea718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9780u;
    sub_002E9780_0x2e9780(rdram, ctx, runtime); return;
    ctx->pc = 0x2EA71Cu;
label_2ea71c:
    // 0x2ea71c: 0x0  nop
    ctx->pc = 0x2ea71cu;
    // NOP
label_2ea720:
    // 0x2ea720: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2ea720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea724:
    // 0x2ea724: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ea728:
    // 0x2ea728: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea72c:
    if (ctx->pc == 0x2EA72Cu) {
        ctx->pc = 0x2EA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA728u;
        // 0x2ea72c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA730u;
        goto label_2ea730;
    }
    ctx->pc = 0x2EA728u;
    {
        const bool branch_taken_0x2ea728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea728) {
            ctx->pc = 0x2EA72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA728u;
            // 0x2ea72c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA744u;
            goto label_2ea744;
        }
    }
    ctx->pc = 0x2EA730u;
label_2ea730:
    // 0x2ea730: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea734:
    // 0x2ea734: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ea738:
    // 0x2ea738: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea73c:
    if (ctx->pc == 0x2EA73Cu) {
        ctx->pc = 0x2EA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA738u;
        // 0x2ea73c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA740u;
        goto label_2ea740;
    }
    ctx->pc = 0x2EA738u;
    {
        const bool branch_taken_0x2ea738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA738u;
        // 0x2ea73c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea738) {
            ctx->pc = 0x2EA74Cu;
            goto label_2ea74c;
        }
    }
    ctx->pc = 0x2EA740u;
label_2ea740:
    // 0x2ea740: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea744:
    // 0x2ea744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea748:
    // 0x2ea748: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ea74c:
    // 0x2ea74c: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_2ea750:
    // 0x2ea750: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ea750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ea754:
    // 0x2ea754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ea758:
    if (ctx->pc == 0x2EA758u) {
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA75Cu;
        goto label_2ea75c;
    }
    ctx->pc = 0x2EA754u;
    {
        const bool branch_taken_0x2ea754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea754) {
            ctx->pc = 0x2EA76Cu;
            goto label_2ea76c;
        }
    }
    ctx->pc = 0x2EA75Cu;
label_2ea75c:
    // 0x2ea75c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ea760:
    // 0x2ea760: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ea764:
    // 0x2ea764: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea768:
    if (ctx->pc == 0x2EA768u) {
        ctx->pc = 0x2EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA764u;
        // 0x2ea768: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA76Cu;
        goto label_2ea76c;
    }
    ctx->pc = 0x2EA764u;
    {
        const bool branch_taken_0x2ea764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea764) {
            ctx->pc = 0x2EA768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA764u;
            // 0x2ea768: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA77Cu;
            goto label_2ea77c;
        }
    }
    ctx->pc = 0x2EA76Cu;
label_2ea76c:
    // 0x2ea76c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ea76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ea770:
    // 0x2ea770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea774:
    // 0x2ea774: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ea774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2ea778:
    // 0x2ea778: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2ea778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_2ea77c:
    // 0x2ea77c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ea77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ea780:
    // 0x2ea780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea784:
    // 0x2ea784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea788:
    // 0x2ea788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea78c:
    // 0x2ea78c: 0x80ba6a0  j           func_2E9A80
label_2ea790:
    if (ctx->pc == 0x2EA790u) {
        ctx->pc = 0x2EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA78Cu;
        // 0x2ea790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA794u;
        goto label_2ea794;
    }
    ctx->pc = 0x2EA78Cu;
    ctx->pc = 0x2EA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA78Cu;
    // 0x2ea790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A80u, 0x2EA78Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2EA794u;
label_2ea794:
    // 0x2ea794: 0x0  nop
    ctx->pc = 0x2ea794u;
    // NOP
label_2ea798:
    // 0x2ea798: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_2ea79c:
    if (ctx->pc == 0x2EA79Cu) {
        ctx->pc = 0x2EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA798u;
        // 0x2ea79c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7A0u;
        goto label_2ea7a0;
    }
    ctx->pc = 0x2EA798u;
    {
        const bool branch_taken_0x2ea798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA798u;
        // 0x2ea79c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea798) {
            ctx->pc = 0x2EA96Cu;
            return;
        }
    }
    ctx->pc = 0x2EA7A0u;
label_2ea7a0:
    // 0x2ea7a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ea7a4:
    // 0x2ea7a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2ea7a8:
    // 0x2ea7a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ea7ac:
    // 0x2ea7ac: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x2ea7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
label_2ea7b0:
    // 0x2ea7b0: 0x600008  jr          $v1
label_2ea7b4:
    if (ctx->pc == 0x2EA7B4u) {
        ctx->pc = 0x2EA7B8u;
        goto label_2ea7b8;
    }
    ctx->pc = 0x2EA7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA7B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA7B8u;
label_2ea7b8:
    // 0x2ea7b8: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea7bc:
    // 0x2ea7bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ea7c0:
    // 0x2ea7c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea7c4:
    if (ctx->pc == 0x2EA7C4u) {
        ctx->pc = 0x2EA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7C0u;
        // 0x2ea7c4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7C8u;
        goto label_2ea7c8;
    }
    ctx->pc = 0x2EA7C0u;
    {
        const bool branch_taken_0x2ea7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7c0) {
            ctx->pc = 0x2EA7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA7C0u;
            // 0x2ea7c4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA7DCu;
            goto label_2ea7dc;
        }
    }
    ctx->pc = 0x2EA7C8u;
label_2ea7c8:
    // 0x2ea7c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea7cc:
    // 0x2ea7cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ea7d0:
    // 0x2ea7d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea7d4:
    if (ctx->pc == 0x2EA7D4u) {
        ctx->pc = 0x2EA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D0u;
        // 0x2ea7d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7D8u;
        goto label_2ea7d8;
    }
    ctx->pc = 0x2EA7D0u;
    {
        const bool branch_taken_0x2ea7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D0u;
        // 0x2ea7d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7d0) {
            ctx->pc = 0x2EA7E8u;
            goto label_2ea7e8;
        }
    }
    ctx->pc = 0x2EA7D8u;
label_2ea7d8:
    // 0x2ea7d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea7dc:
    // 0x2ea7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea7e0:
    // 0x2ea7e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ea7e4:
    // 0x2ea7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea7e8:
    // 0x2ea7e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ea7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ea7ec:
    // 0x2ea7ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea7ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea7f0:
    // 0x2ea7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea7f4:
    // 0x2ea7f4: 0x80ba5e0  j           func_2E9780
label_2ea7f8:
    if (ctx->pc == 0x2EA7F8u) {
        ctx->pc = 0x2EA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7F4u;
        // 0x2ea7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7FCu;
        goto label_2ea7fc;
    }
    ctx->pc = 0x2EA7F4u;
    ctx->pc = 0x2EA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7F4u;
    // 0x2ea7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9780u;
    sub_002E9780_0x2e9780(rdram, ctx, runtime); return;
    ctx->pc = 0x2EA7FCu;
label_2ea7fc:
    // 0x2ea7fc: 0x0  nop
    ctx->pc = 0x2ea7fcu;
    // NOP
label_2ea800:
    // 0x2ea800: 0x26300140  addiu       $s0, $s1, 0x140
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea804:
    // 0x2ea804: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea808:
    // 0x2ea808: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea80c:
    if (ctx->pc == 0x2EA80Cu) {
        ctx->pc = 0x2EA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA808u;
        // 0x2ea80c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA810u;
        goto label_2ea810;
    }
    ctx->pc = 0x2EA808u;
    {
        const bool branch_taken_0x2ea808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea808) {
            ctx->pc = 0x2EA80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA808u;
            // 0x2ea80c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA824u;
            goto label_2ea824;
        }
    }
    ctx->pc = 0x2EA810u;
label_2ea810:
    // 0x2ea810: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea814:
    // 0x2ea814: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea818:
    // 0x2ea818: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea81c:
    if (ctx->pc == 0x2EA81Cu) {
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA820u;
        goto label_2ea820;
    }
    ctx->pc = 0x2EA818u;
    {
        const bool branch_taken_0x2ea818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea818) {
            ctx->pc = 0x2EA82Cu;
            goto label_2ea82c;
        }
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea824:
    // 0x2ea824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea828:
    // 0x2ea828: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea82c:
    // 0x2ea82c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2ea82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2ea830:
    // 0x2ea830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ea830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ea834:
    // 0x2ea834: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ea838:
    if (ctx->pc == 0x2EA838u) {
        ctx->pc = 0x2EA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA834u;
        // 0x2ea838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA83Cu;
        goto label_2ea83c;
    }
    ctx->pc = 0x2EA834u;
    {
        const bool branch_taken_0x2ea834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA834u;
        // 0x2ea838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea834) {
            ctx->pc = 0x2EA84Cu;
            goto label_2ea84c;
        }
    }
    ctx->pc = 0x2EA83Cu;
label_2ea83c:
    // 0x2ea83c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ea83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ea840:
    // 0x2ea840: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ea844:
    // 0x2ea844: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea848:
    if (ctx->pc == 0x2EA848u) {
        ctx->pc = 0x2EA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA844u;
        // 0x2ea848: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA84Cu;
        goto label_2ea84c;
    }
    ctx->pc = 0x2EA844u;
    {
        const bool branch_taken_0x2ea844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea844) {
            ctx->pc = 0x2EA848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA844u;
            // 0x2ea848: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA85Cu;
            goto label_2ea85c;
        }
    }
    ctx->pc = 0x2EA84Cu;
label_2ea84c:
    // 0x2ea84c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ea84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ea850:
    // 0x2ea850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea854:
    // 0x2ea854: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ea854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2ea858:
    // 0x2ea858: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_2ea85c:
    // 0x2ea85c: 0xc0ba5e0  jal         func_2E9780
label_2ea860:
    if (ctx->pc == 0x2EA860u) {
        ctx->pc = 0x2EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA85Cu;
        // 0x2ea860: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA864u;
        goto label_2ea864;
    }
    ctx->pc = 0x2EA85Cu;
    SET_GPR_U32(ctx, 31, 0x2EA864u);
    ctx->pc = 0x2EA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA85Cu;
    // 0x2ea860: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9780u, 0x2EA85Cu, 0x2EA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA864u;
label_2ea864:
    // 0x2ea864: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea868:
    // 0x2ea868: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea86c:
    if (ctx->pc == 0x2EA86Cu) {
        ctx->pc = 0x2EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA868u;
        // 0x2ea86c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA870u;
        goto label_2ea870;
    }
    ctx->pc = 0x2EA868u;
    {
        const bool branch_taken_0x2ea868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea868) {
            ctx->pc = 0x2EA86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA868u;
            // 0x2ea86c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA884u;
            goto label_2ea884;
        }
    }
    ctx->pc = 0x2EA870u;
label_2ea870:
    // 0x2ea870: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea874:
    // 0x2ea874: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea878:
    // 0x2ea878: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea87c:
    if (ctx->pc == 0x2EA87Cu) {
        ctx->pc = 0x2EA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA878u;
        // 0x2ea87c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA880u;
        goto label_2ea880;
    }
    ctx->pc = 0x2EA878u;
    {
        const bool branch_taken_0x2ea878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea878) {
            ctx->pc = 0x2EA87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA878u;
            // 0x2ea87c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA890u;
            goto label_2ea890;
        }
    }
    ctx->pc = 0x2EA880u;
label_2ea880:
    // 0x2ea880: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea884:
    // 0x2ea884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea888:
    // 0x2ea888: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea88c:
    // 0x2ea88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea890:
    // 0x2ea890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea894:
    // 0x2ea894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea898:
    // 0x2ea898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea89c:
    // 0x2ea89c: 0x80ba61e  j           func_2E9878
label_2ea8a0:
    if (ctx->pc == 0x2EA8A0u) {
        ctx->pc = 0x2EA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA89Cu;
        // 0x2ea8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8A4u;
        goto label_2ea8a4;
    }
    ctx->pc = 0x2EA89Cu;
    ctx->pc = 0x2EA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA89Cu;
    // 0x2ea8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9878u;
    sub_002E9878_0x2e9878(rdram, ctx, runtime); return;
    ctx->pc = 0x2EA8A4u;
label_2ea8a4:
    // 0x2ea8a4: 0x0  nop
    ctx->pc = 0x2ea8a4u;
    // NOP
label_2ea8a8:
    // 0x2ea8a8: 0x26300140  addiu       $s0, $s1, 0x140
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea8ac:
    // 0x2ea8ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea8b0:
    // 0x2ea8b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea8b4:
    if (ctx->pc == 0x2EA8B4u) {
        ctx->pc = 0x2EA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B0u;
        // 0x2ea8b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8B8u;
        goto label_2ea8b8;
    }
    ctx->pc = 0x2EA8B0u;
    {
        const bool branch_taken_0x2ea8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8b0) {
            ctx->pc = 0x2EA8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8B0u;
            // 0x2ea8b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8CCu;
            goto label_2ea8cc;
        }
    }
    ctx->pc = 0x2EA8B8u;
label_2ea8b8:
    // 0x2ea8b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea8bc:
    // 0x2ea8bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea8c0:
    // 0x2ea8c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea8c4:
    if (ctx->pc == 0x2EA8C4u) {
        ctx->pc = 0x2EA8C8u;
        goto label_2ea8c8;
    }
    ctx->pc = 0x2EA8C0u;
    {
        const bool branch_taken_0x2ea8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea8c0) {
            ctx->pc = 0x2EA8D4u;
            goto label_2ea8d4;
        }
    }
    ctx->pc = 0x2EA8C8u;
label_2ea8c8:
    // 0x2ea8c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea8cc:
    // 0x2ea8cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea8d0:
    // 0x2ea8d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea8d4:
    // 0x2ea8d4: 0xc0ba5e0  jal         func_2E9780
label_2ea8d8:
    if (ctx->pc == 0x2EA8D8u) {
        ctx->pc = 0x2EA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8D4u;
        // 0x2ea8d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8DCu;
        goto label_2ea8dc;
    }
    ctx->pc = 0x2EA8D4u;
    SET_GPR_U32(ctx, 31, 0x2EA8DCu);
    ctx->pc = 0x2EA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8D4u;
    // 0x2ea8d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9780u, 0x2EA8D4u, 0x2EA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8DCu;
label_2ea8dc:
    // 0x2ea8dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea8e0:
    // 0x2ea8e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea8e4:
    if (ctx->pc == 0x2EA8E4u) {
        ctx->pc = 0x2EA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E0u;
        // 0x2ea8e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8E8u;
        goto label_2ea8e8;
    }
    ctx->pc = 0x2EA8E0u;
    {
        const bool branch_taken_0x2ea8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8e0) {
            ctx->pc = 0x2EA8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8E0u;
            // 0x2ea8e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8FCu;
            goto label_2ea8fc;
        }
    }
    ctx->pc = 0x2EA8E8u;
label_2ea8e8:
    // 0x2ea8e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea8ec:
    // 0x2ea8ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea8f0:
    // 0x2ea8f0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea8f4:
    if (ctx->pc == 0x2EA8F4u) {
        ctx->pc = 0x2EA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8F0u;
        // 0x2ea8f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8F8u;
        goto label_2ea8f8;
    }
    ctx->pc = 0x2EA8F0u;
    {
        const bool branch_taken_0x2ea8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea8f0) {
            ctx->pc = 0x2EA8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8F0u;
            // 0x2ea8f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA908u;
            goto label_2ea908;
        }
    }
    ctx->pc = 0x2EA8F8u;
label_2ea8f8:
    // 0x2ea8f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea8fc:
    // 0x2ea8fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea900:
    // 0x2ea900: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea904:
    // 0x2ea904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea908:
    // 0x2ea908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea90c:
    // 0x2ea90c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea910:
    // 0x2ea910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea914:
    // 0x2ea914: 0x80ba61e  j           func_2E9878
label_2ea918:
    if (ctx->pc == 0x2EA918u) {
        ctx->pc = 0x2EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA914u;
        // 0x2ea918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA91Cu;
        goto label_2ea91c;
    }
    ctx->pc = 0x2EA914u;
    ctx->pc = 0x2EA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA914u;
    // 0x2ea918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9878u;
    sub_002E9878_0x2e9878(rdram, ctx, runtime); return;
    ctx->pc = 0x2EA91Cu;
label_2ea91c:
    // 0x2ea91c: 0x0  nop
    ctx->pc = 0x2ea91cu;
    // NOP
label_2ea920:
    // 0x2ea920: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2ea920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_2ea924:
    // 0x2ea924: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ea928:
    // 0x2ea928: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea92c:
    if (ctx->pc == 0x2EA92Cu) {
        ctx->pc = 0x2EA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA928u;
        // 0x2ea92c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA930u;
        goto label_2ea930;
    }
    ctx->pc = 0x2EA928u;
    {
        const bool branch_taken_0x2ea928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea928) {
            ctx->pc = 0x2EA92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA928u;
            // 0x2ea92c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA944u;
            goto label_2ea944;
        }
    }
    ctx->pc = 0x2EA930u;
label_2ea930:
    // 0x2ea930: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea934:
    // 0x2ea934: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ea938:
    // 0x2ea938: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea93c:
    if (ctx->pc == 0x2EA93Cu) {
        ctx->pc = 0x2EA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA938u;
        // 0x2ea93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA940u;
        goto label_2ea940;
    }
    ctx->pc = 0x2EA938u;
    {
        const bool branch_taken_0x2ea938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA938u;
        // 0x2ea93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea938) {
            ctx->pc = 0x2EA950u;
            goto label_2ea950;
        }
    }
    ctx->pc = 0x2EA940u;
label_2ea940:
    // 0x2ea940: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea944:
    // 0x2ea944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea948:
    // 0x2ea948: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ea94c:
    // 0x2ea94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea950:
    // 0x2ea950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea954:
    // 0x2ea954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea958:
    // 0x2ea958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea95c:
    // 0x2ea95c: 0x80ba61e  j           func_2E9878
label_2ea960:
    if (ctx->pc == 0x2EA960u) {
        ctx->pc = 0x2EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA95Cu;
        // 0x2ea960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA964u;
        goto label_2ea964;
    }
    ctx->pc = 0x2EA95Cu;
    ctx->pc = 0x2EA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA95Cu;
    // 0x2ea960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9878u;
    sub_002E9878_0x2e9878(rdram, ctx, runtime); return;
    ctx->pc = 0x2EA964u;
label_2ea964:
    // 0x2ea964: 0x0  nop
    ctx->pc = 0x2ea964u;
    // NOP
    ctx->pc = 0x2ea968u;
}
