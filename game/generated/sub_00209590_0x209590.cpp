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

// Function: sub_00209590
// Address: 0x209590 - 0x209ac0
void sub_00209590_0x209590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209590_0x209590");
#endif

    switch (ctx->pc) {
        case 0x2095c8u: goto label_2095c8;
        case 0x209654u: goto label_209654;
        case 0x209684u: goto label_209684;
        case 0x2096acu: goto label_2096ac;
        case 0x2096f4u: goto label_2096f4;
        case 0x209718u: goto label_209718;
        case 0x20972cu: goto label_20972c;
        case 0x20973cu: goto label_20973c;
        case 0x20976cu: goto label_20976c;
        case 0x209774u: goto label_209774;
        case 0x209780u: goto label_209780;
        case 0x209788u: goto label_209788;
        case 0x209790u: goto label_209790;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097f8u: goto label_2097f8;
        case 0x209814u: goto label_209814;
        case 0x20981cu: goto label_20981c;
        case 0x209824u: goto label_209824;
        case 0x20983cu: goto label_20983c;
        case 0x20989cu: goto label_20989c;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098f0u: goto label_2098f0;
        case 0x209900u: goto label_209900;
        case 0x209908u: goto label_209908;
        case 0x209910u: goto label_209910;
        case 0x209924u: goto label_209924;
        case 0x209934u: goto label_209934;
        case 0x20993cu: goto label_20993c;
        case 0x209948u: goto label_209948;
        case 0x209954u: goto label_209954;
        case 0x20995cu: goto label_20995c;
        case 0x209968u: goto label_209968;
        case 0x209974u: goto label_209974;
        case 0x209984u: goto label_209984;
        case 0x20998cu: goto label_20998c;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099ecu: goto label_2099ec;
        case 0x209a08u: goto label_209a08;
        case 0x209a18u: goto label_209a18;
        case 0x209a20u: goto label_209a20;
        case 0x209a28u: goto label_209a28;
        case 0x209a30u: goto label_209a30;
        case 0x209a38u: goto label_209a38;
        case 0x209a40u: goto label_209a40;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a58u: goto label_209a58;
        case 0x209a90u: goto label_209a90;
        case 0x209a98u: goto label_209a98;
        default: break;
    }

    ctx->pc = 0x209590u;

    // 0x209590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20959c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2095a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2095a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2095a4: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2095a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2095a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2095a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2095ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2095acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2095b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2095b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2095b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2095b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2095bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2095bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2095c0: 0xc09d940  jal         func_276500
    ctx->pc = 0x2095C0u;
    SET_GPR_U32(ctx, 31, 0x2095C8u);
    ctx->pc = 0x2095C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095C0u;
    // 0x2095c4: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2095C0u, 0x2095C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095C8u;
label_2095c8:
    // 0x2095c8: 0x8f899730  lw          $t1, -0x68D0($gp)
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x2095cc: 0x26468858  addiu       $a2, $s2, -0x77A8
    ctx->pc = 0x2095ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x2095d0: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x2095d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x2095d4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2095d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2095d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2095d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2095dc: 0x240408f0  addiu       $a0, $zero, 0x8F0
    ctx->pc = 0x2095dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x2095e0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2095e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095e4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2095e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2095e8: 0xaf859730  sw          $a1, -0x68D0($gp)
    ctx->pc = 0x2095e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 5));
    // 0x2095ec: 0x92620205  lbu         $v0, 0x205($s3)
    ctx->pc = 0x2095ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 517)));
    // 0x2095f0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2095F0u;
    {
        const bool branch_taken_0x2095f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0x26b183c0  addiu       $s1, $s5, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095f0) {
            ctx->pc = 0x20966Cu;
            goto label_20966c;
        }
    }
    ctx->pc = 0x2095F8u;
    // 0x2095f8: 0x92820205  lbu         $v0, 0x205($s4)
    ctx->pc = 0x2095f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 517)));
    // 0x2095fc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2095FCu;
    {
        const bool branch_taken_0x2095fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2095fc) {
            ctx->pc = 0x209600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2095FCu;
            // 0x209600: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209670u;
            goto label_209670;
        }
    }
    ctx->pc = 0x209604u;
    // 0x209604: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x209608: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x209608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20960c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20960cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x209610: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209610u;
    {
        const bool branch_taken_0x209610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209610u;
        // 0x209614: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209610) {
            ctx->pc = 0x20962Cu;
            goto label_20962c;
        }
    }
    ctx->pc = 0x209618u;
    // 0x209618: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x209618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x20961c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x209620: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209620u;
    {
        const bool branch_taken_0x209620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209620u;
        // 0x209624: 0x2ca20079  sltiu       $v0, $a1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209620) {
            ctx->pc = 0x209644u;
            goto label_209644;
        }
    }
    ctx->pc = 0x209628u;
    // 0x209628: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x209628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_20962c:
    // 0x20962c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20962Cu;
    {
        const bool branch_taken_0x20962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20962c) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209634u;
    // 0x209634: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x209634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x209638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x209638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20963c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20963Cu;
    {
        const bool branch_taken_0x20963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20963Cu;
        // 0x209640: 0x2ca20079  sltiu       $v0, $a1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20963c) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209644u;
label_209644:
    // 0x209644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209644u;
    {
        const bool branch_taken_0x209644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209644u;
        // 0x209648: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209644) {
            ctx->pc = 0x209660u;
            goto label_209660;
        }
    }
    ctx->pc = 0x20964Cu;
    // 0x20964c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20964Cu;
    SET_GPR_U32(ctx, 31, 0x209654u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20964Cu, 0x209654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209654u;
label_209654:
    // 0x209654: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x209654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x209658: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x209658u;
    {
        const bool branch_taken_0x209658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209658u;
        // 0x20965c: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209658) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209660u;
label_209660:
    // 0x209660: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x209664: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x209664u;
    {
        const bool branch_taken_0x209664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209664) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x20966Cu;
label_20966c:
    // 0x20966c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209670:
    // 0x209670: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x209674: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x209674u;
    {
        const bool branch_taken_0x209674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209674) {
            ctx->pc = 0x209678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209674u;
            // 0x209678: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x20967Cu;
    // 0x20967c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20967Cu;
    SET_GPR_U32(ctx, 31, 0x209684u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20967Cu, 0x209684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209684u;
label_209684:
    // 0x209684: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x209688: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x209688u;
    {
        const bool branch_taken_0x209688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x209688) {
            ctx->pc = 0x20968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209688u;
            // 0x20968c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209690u;
    // 0x209690: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x209694: 0x284206e5  slti        $v0, $v0, 0x6E5
    ctx->pc = 0x209694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1765) ? 1 : 0);
    // 0x209698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209698u;
    {
        const bool branch_taken_0x209698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209698u;
        // 0x20969c: 0x240206e5  addiu       $v0, $zero, 0x6E5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1765));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209698) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x2096A0u;
    // 0x2096a0: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x2096a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_2096a4:
    // 0x2096a4: 0xc08215c  jal         func_208570
    ctx->pc = 0x2096A4u;
    SET_GPR_U32(ctx, 31, 0x2096ACu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2096A4u, 0x2096ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2096b0: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2096B0u;
    {
        const bool branch_taken_0x2096b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B0u;
        // 0x2096b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096b0) {
            ctx->pc = 0x209710u;
            goto label_209710;
        }
    }
    ctx->pc = 0x2096B8u;
    // 0x2096b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2096bc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2096BCu;
    {
        const bool branch_taken_0x2096bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096BCu;
        // 0x2096c0: 0x240206e5  addiu       $v0, $zero, 0x6E5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1765));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096bc) {
            ctx->pc = 0x209710u;
            goto label_209710;
        }
    }
    ctx->pc = 0x2096C4u;
    // 0x2096c4: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x2096c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x2096c8: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2096C8u;
    {
        const bool branch_taken_0x2096c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2096c8) {
            ctx->pc = 0x2096CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096C8u;
            // 0x2096cc: 0x28830708  slti        $v1, $a0, 0x708 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1800) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209700u;
            goto label_209700;
        }
    }
    ctx->pc = 0x2096D0u;
    // 0x2096d0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2096d4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2096d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2096d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2096d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2096dc: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2096dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2096e0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2096e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2096e4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2096e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2096e8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2096ec: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2096ECu;
    SET_GPR_U32(ctx, 31, 0x2096F4u);
    ctx->pc = 0x2096F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096ECu;
    // 0x2096f0: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2096ECu, 0x2096F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096F4u;
label_2096f4:
    // 0x2096f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2096F4u;
    {
        const bool branch_taken_0x2096f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096F4u;
        // 0x2096f8: 0x8e240194  lw          $a0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096f4) {
            ctx->pc = 0x209708u;
            goto label_209708;
        }
    }
    ctx->pc = 0x2096FCu;
    // 0x2096fc: 0x0  nop
    ctx->pc = 0x2096fcu;
    // NOP
label_209700:
    // 0x209700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209704: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x209704u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_209708:
    // 0x209708: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20970c: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x20970cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_209710:
    // 0x209710: 0xc08215c  jal         func_208570
    ctx->pc = 0x209710u;
    SET_GPR_U32(ctx, 31, 0x209718u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x209710u, 0x209718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209718u;
label_209718:
    // 0x209718: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x209718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20971c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20971Cu;
    {
        const bool branch_taken_0x20971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20971c) {
            ctx->pc = 0x20972Cu;
            goto label_20972c;
        }
    }
    ctx->pc = 0x209724u;
    // 0x209724: 0xc083012  jal         func_20C048
    ctx->pc = 0x209724u;
    SET_GPR_U32(ctx, 31, 0x20972Cu);
    ctx->pc = 0x209728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209724u;
    // 0x209728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C048u, 0x209724u, 0x20972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20972Cu;
label_20972c:
    // 0x20972c: 0x520000db  beql        $s0, $zero, . + 4 + (0xDB << 2)
    ctx->pc = 0x20972Cu;
    {
        const bool branch_taken_0x20972c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20972c) {
            ctx->pc = 0x209730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20972Cu;
            // 0x209730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A9Cu;
            goto label_209a9c;
        }
    }
    ctx->pc = 0x209734u;
    // 0x209734: 0xc08215c  jal         func_208570
    ctx->pc = 0x209734u;
    SET_GPR_U32(ctx, 31, 0x20973Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x209734u, 0x20973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20973Cu;
label_20973c:
    // 0x20973c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20973cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209740: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x209740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x209744: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x209744u;
    {
        const bool branch_taken_0x209744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209744u;
        // 0x209748: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209744) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x20974Cu;
    // 0x20974c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x209750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209754: 0x8c634400  lw          $v1, 0x4400($v1)
    ctx->pc = 0x209754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17408)));
    // 0x209758: 0x600008  jr          $v1
    ctx->pc = 0x209758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209760u: goto label_209760;
            case 0x2097F0u: goto label_2097f0;
            case 0x209830u: goto label_209830;
            case 0x2099E0u: goto label_2099e0;
            case 0x209A00u: goto label_209a00;
            case 0x209A90u: goto label_209a90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209758u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x209760u;
label_209760:
    // 0x209760: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x209764: 0xc092486  jal         func_249218
    ctx->pc = 0x209764u;
    SET_GPR_U32(ctx, 31, 0x20976Cu);
    ctx->pc = 0x209768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209764u;
    // 0x209768: 0x26508858  addiu       $s0, $s2, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x209764u, 0x20976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20976Cu;
label_20976c:
    // 0x20976c: 0xc092490  jal         func_249240
    ctx->pc = 0x20976Cu;
    SET_GPR_U32(ctx, 31, 0x209774u);
    ctx->pc = 0x209770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20976Cu;
    // 0x209770: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x20976Cu, 0x209774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209774u;
label_209774:
    // 0x209774: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x209778: 0xc093720  jal         func_24DC80
    ctx->pc = 0x209778u;
    SET_GPR_U32(ctx, 31, 0x209780u);
    ctx->pc = 0x20977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209778u;
    // 0x20977c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC80u, 0x209778u, 0x209780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209780u;
label_209780:
    // 0x209780: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x209780u;
    SET_GPR_U32(ctx, 31, 0x209788u);
    ctx->pc = 0x209784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209780u;
    // 0x209784: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x209780u, 0x209788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209788u;
label_209788:
    // 0x209788: 0xc089a28  jal         func_2268A0
    ctx->pc = 0x209788u;
    SET_GPR_U32(ctx, 31, 0x209790u);
    ctx->pc = 0x2268A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268A0u, 0x209788u, 0x209790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209790u;
label_209790:
    // 0x209790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209794: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x209798: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20979c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x20979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2097a0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2097a4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2097a4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2097a8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2097ac: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x2097b0: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2097b4: 0x914301bb  lbu         $v1, 0x1BB($t2)
    ctx->pc = 0x2097b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 443)));
    // 0x2097b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2097b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2097bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2097c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097c4: 0xa223001e  sb          $v1, 0x1E($s1)
    ctx->pc = 0x2097c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x2097c8: 0x912201bb  lbu         $v0, 0x1BB($t1)
    ctx->pc = 0x2097c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 443)));
    // 0x2097cc: 0xa222001f  sb          $v0, 0x1F($s1)
    ctx->pc = 0x2097ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x2097d0: 0xa12001bb  sb          $zero, 0x1BB($t1)
    ctx->pc = 0x2097d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x2097d4: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2097D4u;
    SET_GPR_U32(ctx, 31, 0x2097DCu);
    ctx->pc = 0x2097D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097D4u;
    // 0x2097d8: 0xa14001bb  sb          $zero, 0x1BB($t2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 10), 443), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2097D4u, 0x2097DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097DCu;
label_2097dc:
    // 0x2097dc: 0xc085dec  jal         func_2177B0
    ctx->pc = 0x2097DCu;
    SET_GPR_U32(ctx, 31, 0x2097E4u);
    ctx->pc = 0x2097E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097DCu;
    // 0x2097e0: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2177B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2177B0u, 0x2097DCu, 0x2097E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097E4u;
label_2097e4:
    // 0x2097e4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2097e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2097e8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2097E8u;
    {
        const bool branch_taken_0x2097e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097E8u;
        // 0x2097ec: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097e8) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x2097F0u;
label_2097f0:
    // 0x2097f0: 0xc082162  jal         func_208588
    ctx->pc = 0x2097F0u;
    SET_GPR_U32(ctx, 31, 0x2097F8u);
    ctx->pc = 0x2097F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097F0u;
    // 0x2097f4: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x2097F0u, 0x2097F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0x9223002d  lbu         $v1, 0x2D($s1)
    ctx->pc = 0x2097f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x2097fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x209800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209804: 0xa2230031  sb          $v1, 0x31($s1)
    ctx->pc = 0x209804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x209808: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20980c: 0xc0822fa  jal         func_208BE8
    ctx->pc = 0x20980Cu;
    SET_GPR_U32(ctx, 31, 0x209814u);
    ctx->pc = 0x209810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20980Cu;
    // 0x209810: 0xaf829738  sw          $v0, -0x68C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208BE8u, 0x20980Cu, 0x209814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209814u;
label_209814:
    // 0x209814: 0xc092486  jal         func_249218
    ctx->pc = 0x209814u;
    SET_GPR_U32(ctx, 31, 0x20981Cu);
    ctx->pc = 0x209818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209814u;
    // 0x209818: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x209814u, 0x20981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20981Cu;
label_20981c:
    // 0x20981c: 0xc092490  jal         func_249240
    ctx->pc = 0x20981Cu;
    SET_GPR_U32(ctx, 31, 0x209824u);
    ctx->pc = 0x209820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20981Cu;
    // 0x209820: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x20981Cu, 0x209824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209824u;
label_209824:
    // 0x209824: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x209824u;
    {
        const bool branch_taken_0x209824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209824) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x20982Cu;
    // 0x20982c: 0x0  nop
    ctx->pc = 0x20982cu;
    // NOP
label_209830:
    // 0x209830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209834: 0xc085238  jal         func_2148E0
    ctx->pc = 0x209834u;
    SET_GPR_U32(ctx, 31, 0x20983Cu);
    ctx->pc = 0x209838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209834u;
    // 0x209838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x209834u, 0x20983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20983Cu;
label_20983c:
    // 0x20983c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20983cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209840: 0x8ea283c0  lw          $v0, -0x7C40($s5)
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
    // 0x209844: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x209844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x209848: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x209848u;
    {
        const bool branch_taken_0x209848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209848u;
        // 0x20984c: 0x8ea283c0  lw          $v0, -0x7C40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209848) {
            ctx->pc = 0x2098D8u;
            goto label_2098d8;
        }
    }
    ctx->pc = 0x209850u;
    // 0x209850: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x209854: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x209854u;
    {
        const bool branch_taken_0x209854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209854u;
        // 0x209858: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209854) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x20985Cu;
    // 0x20985c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20985Cu;
    {
        const bool branch_taken_0x20985c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20985Cu;
        // 0x209860: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20985c) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x209864u;
    // 0x209864: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x209864u;
    {
        const bool branch_taken_0x209864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209864u;
        // 0x209868: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209864) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x20986Cu;
    // 0x20986c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20986Cu;
    {
        const bool branch_taken_0x20986c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20986Cu;
        // 0x209870: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20986c) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x209874u;
    // 0x209874: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209874u;
    {
        const bool branch_taken_0x209874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209874u;
        // 0x209878: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209874) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x20987Cu;
    // 0x20987c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20987Cu;
    {
        const bool branch_taken_0x20987c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20987Cu;
        // 0x209880: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20987c) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x209884u;
    // 0x209884: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209884u;
    {
        const bool branch_taken_0x209884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x209888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209884u;
        // 0x209888: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209884) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x20988Cu;
    // 0x20988c: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20988Cu;
    {
        const bool branch_taken_0x20988c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x209890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20988Cu;
        // 0x209890: 0x8ea283c0  lw          $v0, -0x7C40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20988c) {
            ctx->pc = 0x2098D8u;
            goto label_2098d8;
        }
    }
    ctx->pc = 0x209894u;
label_209894:
    // 0x209894: 0xc082162  jal         func_208588
    ctx->pc = 0x209894u;
    SET_GPR_U32(ctx, 31, 0x20989Cu);
    ctx->pc = 0x209898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209894u;
    // 0x209898: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209894u, 0x20989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20989Cu;
label_20989c:
    // 0x20989c: 0x9222002d  lbu         $v0, 0x2D($s1)
    ctx->pc = 0x20989cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x2098a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2098a4: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2098a8: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x2098a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x2098ac: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2098ACu;
    {
        const bool branch_taken_0x2098ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2098B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098ACu;
        // 0x2098b0: 0xaf839738  sw          $v1, -0x68C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098ac) {
            ctx->pc = 0x2098C0u;
            goto label_2098c0;
        }
    }
    ctx->pc = 0x2098B4u;
    // 0x2098b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2098b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098b8: 0xc0822fa  jal         func_208BE8
    ctx->pc = 0x2098B8u;
    SET_GPR_U32(ctx, 31, 0x2098C0u);
    ctx->pc = 0x2098BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098B8u;
    // 0x2098bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208BE8u, 0x2098B8u, 0x2098C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098C0u;
label_2098c0:
    // 0x2098c0: 0xc092486  jal         func_249218
    ctx->pc = 0x2098C0u;
    SET_GPR_U32(ctx, 31, 0x2098C8u);
    ctx->pc = 0x2098C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098C0u;
    // 0x2098c4: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2098C0u, 0x2098C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098C8u;
label_2098c8:
    // 0x2098c8: 0xc092490  jal         func_249240
    ctx->pc = 0x2098C8u;
    SET_GPR_U32(ctx, 31, 0x2098D0u);
    ctx->pc = 0x2098CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098C8u;
    // 0x2098cc: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x2098C8u, 0x2098D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098D0u;
label_2098d0:
    // 0x2098d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2098D0u;
    {
        const bool branch_taken_0x2098d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2098d0) {
            ctx->pc = 0x20991Cu;
            goto label_20991c;
        }
    }
    ctx->pc = 0x2098D8u;
label_2098d8:
    // 0x2098d8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2098d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2098dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2098DCu;
    {
        const bool branch_taken_0x2098dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2098dc) {
            ctx->pc = 0x209900u;
            goto label_209900;
        }
    }
    ctx->pc = 0x2098E4u;
    // 0x2098e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2098e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098e8: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2098E8u;
    SET_GPR_U32(ctx, 31, 0x2098F0u);
    ctx->pc = 0x2098ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098E8u;
    // 0x2098ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2098E8u, 0x2098F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098F0u;
label_2098f0:
    // 0x2098f0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2098F0u;
    {
        const bool branch_taken_0x2098f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2098f0) {
            ctx->pc = 0x209900u;
            goto label_209900;
        }
    }
    ctx->pc = 0x2098F8u;
    // 0x2098f8: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x2098F8u;
    SET_GPR_U32(ctx, 31, 0x209900u);
    ctx->pc = 0x2098FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098F8u;
    // 0x2098fc: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x2098F8u, 0x209900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209900u;
label_209900:
    // 0x209900: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x209900u;
    SET_GPR_U32(ctx, 31, 0x209908u);
    ctx->pc = 0x209904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209900u;
    // 0x209904: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x209900u, 0x209908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209908u;
label_209908:
    // 0x209908: 0xc082162  jal         func_208588
    ctx->pc = 0x209908u;
    SET_GPR_U32(ctx, 31, 0x209910u);
    ctx->pc = 0x20990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209908u;
    // 0x20990c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209908u, 0x209910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209910u;
label_209910:
    // 0x209910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209914: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x209914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x209918: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x209918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_20991c:
    // 0x20991c: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x20991Cu;
    SET_GPR_U32(ctx, 31, 0x209924u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x20991Cu, 0x209924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209924u;
label_209924:
    // 0x209924: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x209924u;
    {
        const bool branch_taken_0x209924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209924) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x20992Cu;
    // 0x20992c: 0xc0a9468  jal         func_2A51A0
    ctx->pc = 0x20992Cu;
    SET_GPR_U32(ctx, 31, 0x209934u);
    ctx->pc = 0x209930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20992Cu;
    // 0x209930: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51A0u, 0x20992Cu, 0x209934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209934u;
label_209934:
    // 0x209934: 0xc0403da  jal         func_100F68
    ctx->pc = 0x209934u;
    SET_GPR_U32(ctx, 31, 0x20993Cu);
    ctx->pc = 0x209938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209934u;
    // 0x209938: 0x261037e0  addiu       $s0, $s0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100F68u, 0x209934u, 0x20993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20993Cu;
label_20993c:
    // 0x20993c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209940: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x209940u;
    SET_GPR_U32(ctx, 31, 0x209948u);
    ctx->pc = 0x209944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209940u;
    // 0x209944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x209940u, 0x209948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209948u;
label_209948:
    // 0x209948: 0x26528858  addiu       $s2, $s2, -0x77A8
    ctx->pc = 0x209948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x20994c: 0xc0a7a3c  jal         func_29E8F0
    ctx->pc = 0x20994Cu;
    SET_GPR_U32(ctx, 31, 0x209954u);
    ctx->pc = 0x209950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20994Cu;
    // 0x209950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8F0u, 0x20994Cu, 0x209954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209954u;
label_209954:
    // 0x209954: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x209954u;
    SET_GPR_U32(ctx, 31, 0x20995Cu);
    ctx->pc = 0x209958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209954u;
    // 0x209958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x209954u, 0x20995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20995cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209960: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x209960u;
    SET_GPR_U32(ctx, 31, 0x209968u);
    ctx->pc = 0x209964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209960u;
    // 0x209964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x209960u, 0x209968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209968u;
label_209968:
    // 0x209968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20996c: 0xc0a2afe  jal         func_28ABF8
    ctx->pc = 0x20996Cu;
    SET_GPR_U32(ctx, 31, 0x209974u);
    ctx->pc = 0x209970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20996Cu;
    // 0x209970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABF8u, 0x20996Cu, 0x209974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209974u;
label_209974:
    // 0x209974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209978: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x209978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20997c: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x20997Cu;
    SET_GPR_U32(ctx, 31, 0x209984u);
    ctx->pc = 0x209980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20997Cu;
    // 0x209980: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x20997Cu, 0x209984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209984u;
label_209984:
    // 0x209984: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x209984u;
    SET_GPR_U32(ctx, 31, 0x20998Cu);
    ctx->pc = 0x209988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209984u;
    // 0x209988: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x209984u, 0x20998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20998Cu;
label_20998c:
    // 0x20998c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x20998cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x209990: 0x26a383c0  addiu       $v1, $s5, -0x7C40
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935488));
    // 0x209994: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x209994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x209998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20999c: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x2099a0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2099a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2099a4: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x2099a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2099a8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2099ac: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2099b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2099b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2099b4: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x2099b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2099b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2099b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2099bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2099c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2099c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2099c8: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2099C8u;
    SET_GPR_U32(ctx, 31, 0x2099D0u);
    ctx->pc = 0x2099CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099C8u;
    // 0x2099cc: 0xaf899730  sw          $t1, -0x68D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2099C8u, 0x2099D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099D0u;
label_2099d0:
    // 0x2099d0: 0xc082162  jal         func_208588
    ctx->pc = 0x2099D0u;
    SET_GPR_U32(ctx, 31, 0x2099D8u);
    ctx->pc = 0x2099D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099D0u;
    // 0x2099d4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x2099D0u, 0x2099D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099D8u;
label_2099d8:
    // 0x2099d8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2099D8u;
    {
        const bool branch_taken_0x2099d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2099DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099D8u;
        // 0x2099dc: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099d8) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x2099E0u;
label_2099e0:
    // 0x2099e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2099e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099e4: 0xc08244c  jal         func_209130
    ctx->pc = 0x2099E4u;
    SET_GPR_U32(ctx, 31, 0x2099ECu);
    ctx->pc = 0x2099E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099E4u;
    // 0x2099e8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209130u, 0x2099E4u, 0x2099ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099ECu;
label_2099ec:
    // 0x2099ec: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x2099f0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2099f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2099F4u;
    {
        const bool branch_taken_0x2099f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F4u;
        // 0x2099f8: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099f4) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x2099FCu;
    // 0x2099fc: 0x0  nop
    ctx->pc = 0x2099fcu;
    // NOP
label_209a00:
    // 0x209a00: 0xc082162  jal         func_208588
    ctx->pc = 0x209A00u;
    SET_GPR_U32(ctx, 31, 0x209A08u);
    ctx->pc = 0x209A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A00u;
    // 0x209a04: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209A00u, 0x209A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A08u;
label_209a08:
    // 0x209a08: 0x26a283c0  addiu       $v0, $s5, -0x7C40
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935488));
    // 0x209a0c: 0x8f84c8d0  lw          $a0, -0x3730($gp)
    ctx->pc = 0x209a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953168)));
    // 0x209a10: 0xc0821ce  jal         func_208738
    ctx->pc = 0x209A10u;
    SET_GPR_U32(ctx, 31, 0x209A18u);
    ctx->pc = 0x209A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A10u;
    // 0x209a14: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x209A10u, 0x209A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A18u;
label_209a18:
    // 0x209a18: 0xc08f022  jal         func_23C088
    ctx->pc = 0x209A18u;
    SET_GPR_U32(ctx, 31, 0x209A20u);
    ctx->pc = 0x209A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A18u;
    // 0x209a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x209A18u, 0x209A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A20u;
label_209a20:
    // 0x209a20: 0xc093796  jal         func_24DE58
    ctx->pc = 0x209A20u;
    SET_GPR_U32(ctx, 31, 0x209A28u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x209A20u, 0x209A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A28u;
label_209a28:
    // 0x209a28: 0xc08f050  jal         func_23C140
    ctx->pc = 0x209A28u;
    SET_GPR_U32(ctx, 31, 0x209A30u);
    ctx->pc = 0x23C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C140u, 0x209A28u, 0x209A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A30u;
label_209a30:
    // 0x209a30: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x209A30u;
    SET_GPR_U32(ctx, 31, 0x209A38u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x209A30u, 0x209A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A38u;
label_209a38:
    // 0x209a38: 0xc08b89e  jal         func_22E278
    ctx->pc = 0x209A38u;
    SET_GPR_U32(ctx, 31, 0x209A40u);
    ctx->pc = 0x209A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A38u;
    // 0x209a3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E278u, 0x209A38u, 0x209A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A40u;
label_209a40:
    // 0x209a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x209a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a44: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x209A44u;
    SET_GPR_U32(ctx, 31, 0x209A4Cu);
    ctx->pc = 0x209A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A44u;
    // 0x209a48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x209A44u, 0x209A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A4Cu;
label_209a4c:
    // 0x209a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209a50: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x209A50u;
    SET_GPR_U32(ctx, 31, 0x209A58u);
    ctx->pc = 0x209A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A50u;
    // 0x209a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x209A50u, 0x209A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A58u;
label_209a58:
    // 0x209a58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209a5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x209a60: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x209A60u;
    {
        const bool branch_taken_0x209a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A60u;
        // 0x209a64: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a60) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x209A68u;
    // 0x209a68: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x209a6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209a70: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x209a74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x209a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x209a78: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x209a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x209a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a88: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x209A88u;
    SET_GPR_U32(ctx, 31, 0x209A90u);
    ctx->pc = 0x209A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A88u;
    // 0x209a8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x209A88u, 0x209A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A90u;
label_209a90:
    // 0x209a90: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x209A90u;
    SET_GPR_U32(ctx, 31, 0x209A98u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x209A90u, 0x209A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A98u;
label_209a98:
    // 0x209a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209a9c:
    // 0x209a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209aa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209aa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x209aa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209aac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x209aacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209ab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x209AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AB4u;
        // 0x209ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209ABCu;
    // 0x209abc: 0x0  nop
    ctx->pc = 0x209abcu;
    // NOP
    ctx->pc = 0x209ac0u;
}
