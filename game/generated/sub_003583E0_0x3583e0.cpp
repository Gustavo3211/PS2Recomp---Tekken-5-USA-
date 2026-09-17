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

// Function: sub_003583E0
// Address: 0x3583e0 - 0x358a78
void sub_003583E0_0x3583e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003583E0_0x3583e0");
#endif

    switch (ctx->pc) {
        case 0x358440u: goto label_358440;
        case 0x358454u: goto label_358454;
        case 0x35846cu: goto label_35846c;
        case 0x358484u: goto label_358484;
        case 0x358488u: goto label_358488;
        case 0x35849cu: goto label_35849c;
        case 0x3584a8u: goto label_3584a8;
        case 0x3584bcu: goto label_3584bc;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584f8u: goto label_3584f8;
        case 0x358510u: goto label_358510;
        case 0x358520u: goto label_358520;
        case 0x358540u: goto label_358540;
        case 0x358570u: goto label_358570;
        case 0x358584u: goto label_358584;
        case 0x35859cu: goto label_35859c;
        case 0x3585c0u: goto label_3585c0;
        case 0x3585d0u: goto label_3585d0;
        case 0x358608u: goto label_358608;
        case 0x358634u: goto label_358634;
        case 0x358644u: goto label_358644;
        case 0x358654u: goto label_358654;
        case 0x358678u: goto label_358678;
        case 0x358688u: goto label_358688;
        case 0x358698u: goto label_358698;
        case 0x3586d8u: goto label_3586d8;
        case 0x3586e4u: goto label_3586e4;
        case 0x3586f8u: goto label_3586f8;
        case 0x358750u: goto label_358750;
        case 0x358764u: goto label_358764;
        case 0x358770u: goto label_358770;
        case 0x358788u: goto label_358788;
        case 0x358790u: goto label_358790;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587e4u: goto label_3587e4;
        case 0x358820u: goto label_358820;
        case 0x358834u: goto label_358834;
        case 0x35883cu: goto label_35883c;
        case 0x358848u: goto label_358848;
        case 0x358880u: goto label_358880;
        case 0x358894u: goto label_358894;
        case 0x35889cu: goto label_35889c;
        case 0x3588a8u: goto label_3588a8;
        case 0x3588e0u: goto label_3588e0;
        case 0x3588f4u: goto label_3588f4;
        case 0x3588fcu: goto label_3588fc;
        case 0x358908u: goto label_358908;
        case 0x358940u: goto label_358940;
        case 0x358954u: goto label_358954;
        case 0x35895cu: goto label_35895c;
        case 0x358968u: goto label_358968;
        case 0x3589a0u: goto label_3589a0;
        case 0x3589b4u: goto label_3589b4;
        case 0x3589bcu: goto label_3589bc;
        case 0x3589c8u: goto label_3589c8;
        case 0x3589e0u: goto label_3589e0;
        case 0x3589fcu: goto label_3589fc;
        case 0x358a10u: goto label_358a10;
        case 0x358a40u: goto label_358a40;
        default: break;
    }

    ctx->pc = 0x3583e0u;

    // 0x3583e0: 0x27bde990  addiu       $sp, $sp, -0x1670
    ctx->pc = 0x3583e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961552));
    // 0x3583e4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3583e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3583e8: 0xffb61650  sd          $s6, 0x1650($sp)
    ctx->pc = 0x3583e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5712), GPR_U64(ctx, 22));
    // 0x3583ec: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x3583ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3583f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3583f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583f8: 0x24c64f00  addiu       $a2, $a2, 0x4F00
    ctx->pc = 0x3583f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20224));
    // 0x3583fc: 0xffb11628  sd          $s1, 0x1628($sp)
    ctx->pc = 0x3583fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5672), GPR_U64(ctx, 17));
    // 0x358400: 0xffb31638  sd          $s3, 0x1638($sp)
    ctx->pc = 0x358400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5688), GPR_U64(ctx, 19));
    // 0x358404: 0x3c13001c  lui         $s3, 0x1C
    ctx->pc = 0x358404u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28 << 16));
    // 0x358408: 0x2673ec80  addiu       $s3, $s3, -0x1380
    ctx->pc = 0x358408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962304));
    // 0x35840c: 0xffb41640  sd          $s4, 0x1640($sp)
    ctx->pc = 0x35840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5696), GPR_U64(ctx, 20));
    // 0x358410: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x358410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x358414: 0xffb51648  sd          $s5, 0x1648($sp)
    ctx->pc = 0x358414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5704), GPR_U64(ctx, 21));
    // 0x358418: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x358418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35841c: 0xffb71658  sd          $s7, 0x1658($sp)
    ctx->pc = 0x35841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5720), GPR_U64(ctx, 23));
    // 0x358420: 0x3c170015  lui         $s7, 0x15
    ctx->pc = 0x358420u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)21 << 16));
    // 0x358424: 0xffbe1660  sd          $fp, 0x1660($sp)
    ctx->pc = 0x358424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5728), GPR_U64(ctx, 30));
    // 0x358428: 0x3c1e0015  lui         $fp, 0x15
    ctx->pc = 0x358428u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
    // 0x35842c: 0xffb01620  sd          $s0, 0x1620($sp)
    ctx->pc = 0x35842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5664), GPR_U64(ctx, 16));
    // 0x358430: 0xffb21630  sd          $s2, 0x1630($sp)
    ctx->pc = 0x358430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5680), GPR_U64(ctx, 18));
    // 0x358434: 0xffbf1668  sd          $ra, 0x1668($sp)
    ctx->pc = 0x358434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5736), GPR_U64(ctx, 31));
    // 0x358438: 0xc0d8f86  jal         func_363E18
    ctx->pc = 0x358438u;
    SET_GPR_U32(ctx, 31, 0x358440u);
    ctx->pc = 0x35843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358438u;
    // 0x35843c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E18u, 0x358438u, 0x358440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358440u;
label_358440:
    // 0x358440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358444: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x358444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x358448: 0x2484ec80  addiu       $a0, $a0, -0x1380
    ctx->pc = 0x358448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x35844c: 0xc04a151  jal         func_128544
    ctx->pc = 0x35844Cu;
    SET_GPR_U32(ctx, 31, 0x358454u);
    ctx->pc = 0x358450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35844Cu;
    // 0x358450: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x35844Cu, 0x358454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358454u;
label_358454:
    // 0x358454: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358458: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x358458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x35845c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35845cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358460: 0x24440200  addiu       $a0, $v0, 0x200
    ctx->pc = 0x358460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x358464: 0xc04a151  jal         func_128544
    ctx->pc = 0x358464u;
    SET_GPR_U32(ctx, 31, 0x35846Cu);
    ctx->pc = 0x358468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358464u;
    // 0x358468: 0x24061100  addiu       $a2, $zero, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x358464u, 0x35846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35846Cu;
label_35846c:
    // 0x35846c: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x35846cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x358470: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x358470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x358474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358478: 0x24641300  addiu       $a0, $v1, 0x1300
    ctx->pc = 0x358478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x35847c: 0xc04a151  jal         func_128544
    ctx->pc = 0x35847Cu;
    SET_GPR_U32(ctx, 31, 0x358484u);
    ctx->pc = 0x358480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35847Cu;
    // 0x358480: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x35847Cu, 0x358484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358484u;
label_358484:
    // 0x358484: 0x0  nop
    ctx->pc = 0x358484u;
    // NOP
label_358488:
    // 0x358488: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x358488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x35848c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358490: 0x24454fe8  addiu       $a1, $v0, 0x4FE8
    ctx->pc = 0x358490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20456));
    // 0x358494: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x358494u;
    SET_GPR_U32(ctx, 31, 0x35849Cu);
    ctx->pc = 0x358498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358494u;
    // 0x358498: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x358494u, 0x35849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35849Cu;
label_35849c:
    // 0x35849c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584a0: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x3584A0u;
    SET_GPR_U32(ctx, 31, 0x3584A8u);
    ctx->pc = 0x3584A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584A0u;
    // 0x3584a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x3584A0u, 0x3584A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584A8u;
label_3584a8:
    // 0x3584a8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3584A8u;
    {
        const bool branch_taken_0x3584a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3584ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584A8u;
        // 0x3584ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584a8) {
            ctx->pc = 0x3585E8u;
            goto label_3585e8;
        }
    }
    ctx->pc = 0x3584B0u;
    // 0x3584b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3584b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584b4: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x3584B4u;
    SET_GPR_U32(ctx, 31, 0x3584BCu);
    ctx->pc = 0x3584B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584B4u;
    // 0x3584b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x3584B4u, 0x3584BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584BCu;
label_3584bc:
    // 0x3584bc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3584BCu;
    {
        const bool branch_taken_0x3584bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3584C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584BCu;
        // 0x3584c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584bc) {
            ctx->pc = 0x3584E8u;
            goto label_3584e8;
        }
    }
    ctx->pc = 0x3584C4u;
    // 0x3584c4: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x3584c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3584c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584cc: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x3584CCu;
    SET_GPR_U32(ctx, 31, 0x3584D4u);
    ctx->pc = 0x3584D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584CCu;
    // 0x3584d0: 0x26454ff0  addiu       $a1, $s2, 0x4FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x3584CCu, 0x3584D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584D4u;
label_3584d4:
    // 0x3584d4: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x3584D4u;
    {
        const bool branch_taken_0x3584d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3584D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584D4u;
        // 0x3584d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584d4) {
            ctx->pc = 0x3589D8u;
            goto label_3589d8;
        }
    }
    ctx->pc = 0x3584DCu;
label_3584dc:
    // 0x3584dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3584DCu;
    {
        const bool branch_taken_0x3584dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3584E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584DCu;
        // 0x3584e0: 0xa6740004  sh          $s4, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584dc) {
            ctx->pc = 0x358530u;
            goto label_358530;
        }
    }
    ctx->pc = 0x3584E4u;
    // 0x3584e4: 0x0  nop
    ctx->pc = 0x3584e4u;
    // NOP
label_3584e8:
    // 0x3584e8: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x3584e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3584ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584f0: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x3584F0u;
    SET_GPR_U32(ctx, 31, 0x3584F8u);
    ctx->pc = 0x3584F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584F0u;
    // 0x3584f4: 0x26454ff0  addiu       $a1, $s2, 0x4FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x3584F0u, 0x3584F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584F8u;
label_3584f8:
    // 0x3584f8: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3584F8u;
    {
        const bool branch_taken_0x3584f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3584FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584F8u;
        // 0x3584fc: 0x3c030015  lui         $v1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584f8) {
            ctx->pc = 0x3584DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3584dc;
        }
    }
    ctx->pc = 0x358500u;
    // 0x358500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358504: 0x24654ff8  addiu       $a1, $v1, 0x4FF8
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20472));
    // 0x358508: 0xc04a520  jal         func_129480
    ctx->pc = 0x358508u;
    SET_GPR_U32(ctx, 31, 0x358510u);
    ctx->pc = 0x35850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358508u;
    // 0x35850c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x358508u, 0x358510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358510u;
label_358510:
    // 0x358510: 0x14400138  bnez        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x358510u;
    {
        const bool branch_taken_0x358510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358510u;
        // 0x358514: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358510) {
            ctx->pc = 0x3589F4u;
            goto label_3589f4;
        }
    }
    ctx->pc = 0x358518u;
    // 0x358518: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x358518u;
    SET_GPR_U32(ctx, 31, 0x358520u);
    ctx->pc = 0x35851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358518u;
    // 0x35851c: 0x26040003  addiu       $a0, $s0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x358518u, 0x358520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358520u;
label_358520:
    // 0x358520: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x358520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x358524: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x358524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x358528: 0x10600131  beqz        $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x358528u;
    {
        const bool branch_taken_0x358528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358528u;
        // 0x35852c: 0xa6620004  sh          $v0, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358528) {
            ctx->pc = 0x3589F0u;
            goto label_3589f0;
        }
    }
    ctx->pc = 0x358530u;
label_358530:
    // 0x358530: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358534: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x358534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358538: 0xc0d8ff6  jal         func_363FD8
    ctx->pc = 0x358538u;
    SET_GPR_U32(ctx, 31, 0x358540u);
    ctx->pc = 0x35853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358538u;
    // 0x35853c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363FD8u, 0x358538u, 0x358540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358540u;
label_358540:
    // 0x358540: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x358540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x358544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x358544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35854c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35854cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x358550: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358554: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x358554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358558: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x358558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35855c: 0x0  nop
    ctx->pc = 0x35855cu;
    // NOP
    // 0x358560: 0x0  nop
    ctx->pc = 0x358560u;
    // NOP
    // 0x358564: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x358564u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x358568: 0xc0d8ff6  jal         func_363FD8
    ctx->pc = 0x358568u;
    SET_GPR_U32(ctx, 31, 0x358570u);
    ctx->pc = 0x35856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358568u;
    // 0x35856c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x363FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363FD8u, 0x358568u, 0x358570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358570u;
label_358570:
    // 0x358570: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x358570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358574: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x358574u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x358578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35857c: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x35857Cu;
    SET_GPR_U32(ctx, 31, 0x358584u);
    ctx->pc = 0x358580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35857Cu;
    // 0x358580: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x35857Cu, 0x358584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358584u;
label_358584:
    // 0x358584: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x358584u;
    {
        const bool branch_taken_0x358584 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x358588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358584u;
        // 0x358588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358584) {
            ctx->pc = 0x3585B0u;
            goto label_3585b0;
        }
    }
    ctx->pc = 0x35858Cu;
    // 0x35858c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358590: 0x26454ff0  addiu       $a1, $s2, 0x4FF0
    ctx->pc = 0x358590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20464));
    // 0x358594: 0xc04a520  jal         func_129480
    ctx->pc = 0x358594u;
    SET_GPR_U32(ctx, 31, 0x35859Cu);
    ctx->pc = 0x358598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358594u;
    // 0x358598: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x358594u, 0x35859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35859Cu;
label_35859c:
    // 0x35859c: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x35859Cu;
    {
        const bool branch_taken_0x35859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35859Cu;
        // 0x3585a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35859c) {
            ctx->pc = 0x358A08u;
            goto label_358a08;
        }
    }
    ctx->pc = 0x3585A4u;
    // 0x3585a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3585A4u;
    {
        const bool branch_taken_0x3585a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585A4u;
        // 0x3585a8: 0xa674000e  sh          $s4, 0xE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585a4) {
            ctx->pc = 0x3585D8u;
            goto label_3585d8;
        }
    }
    ctx->pc = 0x3585ACu;
    // 0x3585ac: 0x0  nop
    ctx->pc = 0x3585acu;
    // NOP
label_3585b0:
    // 0x3585b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3585b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585b4: 0x27c55000  addiu       $a1, $fp, 0x5000
    ctx->pc = 0x3585b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 20480));
    // 0x3585b8: 0xc04a520  jal         func_129480
    ctx->pc = 0x3585B8u;
    SET_GPR_U32(ctx, 31, 0x3585C0u);
    ctx->pc = 0x3585BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585B8u;
    // 0x3585bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x3585B8u, 0x3585C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585C0u;
label_3585c0:
    // 0x3585c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3585C0u;
    {
        const bool branch_taken_0x3585c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3585c0) {
            ctx->pc = 0x3585C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3585C0u;
            // 0x3585c4: 0xa674000e  sh          $s4, 0xE($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3585D8u;
            goto label_3585d8;
        }
    }
    ctx->pc = 0x3585C8u;
    // 0x3585c8: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x3585C8u;
    SET_GPR_U32(ctx, 31, 0x3585D0u);
    ctx->pc = 0x3585CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585C8u;
    // 0x3585cc: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x3585C8u, 0x3585D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585D0u;
label_3585d0:
    // 0x3585d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3585d4: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x3585d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
label_3585d8:
    // 0x3585d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3585d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3585dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3585DCu;
    {
        const bool branch_taken_0x3585dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585DCu;
        // 0x3585e0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585dc) {
            ctx->pc = 0x3585ECu;
            goto label_3585ec;
        }
    }
    ctx->pc = 0x3585E4u;
    // 0x3585e4: 0x0  nop
    ctx->pc = 0x3585e4u;
    // NOP
label_3585e8:
    // 0x3585e8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3585e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3585ec:
    // 0x3585ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3585ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3585f0: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x3585f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3585f4: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x3585F4u;
    {
        const bool branch_taken_0x3585f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F4u;
        // 0x3585f8: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585f4) {
            ctx->pc = 0x358488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358488;
        }
    }
    ctx->pc = 0x3585FCu;
    // 0x3585fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3585fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358600: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x358604: 0x0  nop
    ctx->pc = 0x358604u;
    // NOP
label_358608:
    // 0x358608: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x358608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x35860c: 0x24655008  addiu       $a1, $v1, 0x5008
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20488));
    // 0x358610: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x358610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x358614: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x358614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x358618: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x358618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35861c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x358620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x358624: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x358624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x358628: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x358628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35862c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x35862Cu;
    SET_GPR_U32(ctx, 31, 0x358634u);
    ctx->pc = 0x358630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35862Cu;
    // 0x358630: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x35862Cu, 0x358634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358634u;
label_358634:
    // 0x358634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358638: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35863c: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x35863Cu;
    SET_GPR_U32(ctx, 31, 0x358644u);
    ctx->pc = 0x358640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35863Cu;
    // 0x358640: 0x26150200  addiu       $s5, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x35863Cu, 0x358644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358644u;
label_358644:
    // 0x358644: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x358644u;
    {
        const bool branch_taken_0x358644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358644u;
        // 0x358648: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358644) {
            ctx->pc = 0x358720u;
            goto label_358720;
        }
    }
    ctx->pc = 0x35864Cu;
    // 0x35864c: 0xc0d8fa6  jal         func_363E98
    ctx->pc = 0x35864Cu;
    SET_GPR_U32(ctx, 31, 0x358654u);
    ctx->pc = 0x358650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35864Cu;
    // 0x358650: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E98u, 0x35864Cu, 0x358654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358654u;
label_358654:
    // 0x358654: 0x26060208  addiu       $a2, $s0, 0x208
    ctx->pc = 0x358654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x358658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x358658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35865c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35865cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358660: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x358660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x358664: 0x1a60002a  blez        $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x358664u;
    {
        const bool branch_taken_0x358664 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x358668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358664u;
        // 0x358668: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358664) {
            ctx->pc = 0x358710u;
            goto label_358710;
        }
    }
    ctx->pc = 0x35866Cu;
    // 0x35866c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35866cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358670: 0x241e002e  addiu       $fp, $zero, 0x2E
    ctx->pc = 0x358670u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x358674: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x358674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358678:
    // 0x358678: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35867c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35867cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358680: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x358680u;
    SET_GPR_U32(ctx, 31, 0x358688u);
    ctx->pc = 0x358684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358680u;
    // 0x358684: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x358680u, 0x358688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358688u;
label_358688:
    // 0x358688: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35868c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358690: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x358690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358694: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x358694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_358698:
    // 0x358698: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35869c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35869Cu;
    {
        const bool branch_taken_0x35869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3586A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35869Cu;
        // 0x3586a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35869c) {
            ctx->pc = 0x3586C8u;
            goto label_3586c8;
        }
    }
    ctx->pc = 0x3586A4u;
    // 0x3586a4: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x3586a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3586a8: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3586A8u;
    {
        const bool branch_taken_0x3586a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3586a8) {
            ctx->pc = 0x3586ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3586A8u;
            // 0x3586ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3586C8u;
            goto label_3586c8;
        }
    }
    ctx->pc = 0x3586B0u;
    // 0x3586b0: 0x0  nop
    ctx->pc = 0x3586b0u;
    // NOP
    // 0x3586b4: 0x0  nop
    ctx->pc = 0x3586b4u;
    // NOP
    // 0x3586b8: 0x0  nop
    ctx->pc = 0x3586b8u;
    // NOP
    // 0x3586bc: 0x145efff6  bne         $v0, $fp, . + 4 + (-0xA << 2)
    ctx->pc = 0x3586BCu;
    {
        const bool branch_taken_0x3586bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x3586C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586BCu;
        // 0x3586c0: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586bc) {
            ctx->pc = 0x358698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358698;
        }
    }
    ctx->pc = 0x3586C4u;
    // 0x3586c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3586c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3586c8:
    // 0x3586c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3586C8u;
    {
        const bool branch_taken_0x3586c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586c8) {
            ctx->pc = 0x3586F0u;
            goto label_3586f0;
        }
    }
    ctx->pc = 0x3586D0u;
    // 0x3586d0: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x3586D0u;
    SET_GPR_U32(ctx, 31, 0x3586D8u);
    ctx->pc = 0x3586D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586D0u;
    // 0x3586d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x3586D0u, 0x3586D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586D8u;
label_3586d8:
    // 0x3586d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3586d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586dc: 0xc048e00  jal         func_123800
    ctx->pc = 0x3586DCu;
    SET_GPR_U32(ctx, 31, 0x3586E4u);
    ctx->pc = 0x3586E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586DCu;
    // 0x3586e0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x3586DCu, 0x3586E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586E4u;
label_3586e4:
    // 0x3586e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3586E4u;
    {
        const bool branch_taken_0x3586e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3586E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586E4u;
        // 0x3586e8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586e4) {
            ctx->pc = 0x358700u;
            goto label_358700;
        }
    }
    ctx->pc = 0x3586ECu;
    // 0x3586ec: 0x0  nop
    ctx->pc = 0x3586ecu;
    // NOP
label_3586f0:
    // 0x3586f0: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x3586F0u;
    SET_GPR_U32(ctx, 31, 0x3586F8u);
    ctx->pc = 0x3586F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586F0u;
    // 0x3586f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x3586F0u, 0x3586F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586F8u;
label_3586f8:
    // 0x3586f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3586f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3586fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3586fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_358700:
    // 0x358700: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x358700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x358704: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x358704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x358708: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x358708u;
    {
        const bool branch_taken_0x358708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358708u;
        // 0x35870c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358708) {
            ctx->pc = 0x358678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358678;
        }
    }
    ctx->pc = 0x358710u;
label_358710:
    // 0x358710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x358714u;
    {
        const bool branch_taken_0x358714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358714u;
        // 0x358718: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358714) {
            ctx->pc = 0x358724u;
            goto label_358724;
        }
    }
    ctx->pc = 0x35871Cu;
    // 0x35871c: 0x0  nop
    ctx->pc = 0x35871cu;
    // NOP
label_358720:
    // 0x358720: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x358720u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_358724:
    // 0x358724: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x358724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358728: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x358728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x35872c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x35872Cu;
    {
        const bool branch_taken_0x35872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35872Cu;
        // 0x358730: 0x3c030015  lui         $v1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35872c) {
            ctx->pc = 0x358608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358608;
        }
    }
    ctx->pc = 0x358734u;
    // 0x358734: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x358738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35873c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x35873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x358740: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x358740u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x358744: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x358744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358748: 0x24501300  addiu       $s0, $v0, 0x1300
    ctx->pc = 0x358748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x35874c: 0x0  nop
    ctx->pc = 0x35874cu;
    // NOP
label_358750:
    // 0x358750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x358750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358754: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x358754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x358758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x358758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35875c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x35875Cu;
    SET_GPR_U32(ctx, 31, 0x358764u);
    ctx->pc = 0x358760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35875Cu;
    // 0x358760: 0x26655010  addiu       $a1, $s3, 0x5010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x35875Cu, 0x358764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358764u;
label_358764:
    // 0x358764: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358768: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x358768u;
    SET_GPR_U32(ctx, 31, 0x358770u);
    ctx->pc = 0x35876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358768u;
    // 0x35876c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x358768u, 0x358770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358770u;
label_358770:
    // 0x358770: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358774: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358778: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x358778u;
    {
        const bool branch_taken_0x358778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358778u;
        // 0x35877c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358778) {
            ctx->pc = 0x358798u;
            goto label_358798;
        }
    }
    ctx->pc = 0x358780u;
    // 0x358780: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x358780u;
    SET_GPR_U32(ctx, 31, 0x358788u);
    ctx->pc = 0x358784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358780u;
    // 0x358784: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x358780u, 0x358788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358788u;
label_358788:
    // 0x358788: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x358788u;
    SET_GPR_U32(ctx, 31, 0x358790u);
    ctx->pc = 0x35878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358788u;
    // 0x35878c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x358788u, 0x358790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358790u;
label_358790:
    // 0x358790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x358790u;
    {
        const bool branch_taken_0x358790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358790u;
        // 0x358794: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358790) {
            ctx->pc = 0x35879Cu;
            goto label_35879c;
        }
    }
    ctx->pc = 0x358798u;
label_358798:
    // 0x358798: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x358798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_35879c:
    // 0x35879c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x35879cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3587a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3587A0u;
    {
        const bool branch_taken_0x3587a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A0u;
        // 0x3587a4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587a0) {
            ctx->pc = 0x358750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358750;
        }
    }
    ctx->pc = 0x3587A8u;
    // 0x3587a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3587a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3587ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3587acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587b0: 0x24504f10  addiu       $s0, $v0, 0x4F10
    ctx->pc = 0x3587b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
    // 0x3587b4: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x3587B4u;
    SET_GPR_U32(ctx, 31, 0x3587BCu);
    ctx->pc = 0x3587B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587B4u;
    // 0x3587b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x3587B4u, 0x3587BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587BCu;
label_3587bc:
    // 0x3587bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3587BCu;
    {
        const bool branch_taken_0x3587bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587BCu;
        // 0x3587c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587bc) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587C4u;
    // 0x3587c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3587c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587c8: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x3587C8u;
    SET_GPR_U32(ctx, 31, 0x3587D0u);
    ctx->pc = 0x3587CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587C8u;
    // 0x3587cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x3587C8u, 0x3587D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587D0u;
label_3587d0:
    // 0x3587d0: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x3587D0u;
    SET_GPR_U32(ctx, 31, 0x3587D8u);
    ctx->pc = 0x3587D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587D0u;
    // 0x3587d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x3587D0u, 0x3587D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587D8u;
label_3587d8:
    // 0x3587d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3587d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587dc: 0xc048e00  jal         func_123800
    ctx->pc = 0x3587DCu;
    SET_GPR_U32(ctx, 31, 0x3587E4u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x3587DCu, 0x3587E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587E4u;
label_3587e4:
    // 0x3587e4: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x3587e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x3587e8: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x3587e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x3587ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3587ECu;
    {
        const bool branch_taken_0x3587ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587ECu;
        // 0x3587f0: 0xe4601400  swc1        $f0, 0x1400($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587ec) {
            ctx->pc = 0x35880Cu;
            goto label_35880c;
        }
    }
    ctx->pc = 0x3587F4u;
    // 0x3587f4: 0x0  nop
    ctx->pc = 0x3587f4u;
    // NOP
label_3587f8:
    // 0x3587f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3587f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3587fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3587fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358800: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x358800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x358804: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x358804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x358808: 0xe4a01400  swc1        $f0, 0x1400($a1)
    ctx->pc = 0x358808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C0080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C0080u, _value); } while (0); }
label_35880c:
    // 0x35880c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x358810: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358814: 0x24504f28  addiu       $s0, $v0, 0x4F28
    ctx->pc = 0x358814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20264));
    // 0x358818: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x358818u;
    SET_GPR_U32(ctx, 31, 0x358820u);
    ctx->pc = 0x35881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358818u;
    // 0x35881c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x358818u, 0x358820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358820u;
label_358820:
    // 0x358820: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x358820u;
    {
        const bool branch_taken_0x358820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358820u;
        // 0x358824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358820) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x358828u;
    // 0x358828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35882c: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x35882Cu;
    SET_GPR_U32(ctx, 31, 0x358834u);
    ctx->pc = 0x358830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35882Cu;
    // 0x358830: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x35882Cu, 0x358834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358834u;
label_358834:
    // 0x358834: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x358834u;
    SET_GPR_U32(ctx, 31, 0x35883Cu);
    ctx->pc = 0x358838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358834u;
    // 0x358838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x358834u, 0x35883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35883Cu;
label_35883c:
    // 0x35883c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358840: 0xc048e00  jal         func_123800
    ctx->pc = 0x358840u;
    SET_GPR_U32(ctx, 31, 0x358848u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x358840u, 0x358848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358848u;
label_358848:
    // 0x358848: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35884c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x35884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x358850: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x358850u;
    {
        const bool branch_taken_0x358850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358850u;
        // 0x358854: 0xe4401404  swc1        $f0, 0x1404($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358850) {
            ctx->pc = 0x35886Cu;
            goto label_35886c;
        }
    }
    ctx->pc = 0x358858u;
label_358858:
    // 0x358858: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x358858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x35885c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358860: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x358860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x358864: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x358864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x358868: 0xe4601404  swc1        $f0, 0x1404($v1)
    ctx->pc = 0x358868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C0084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C0084u, _value); } while (0); }
label_35886c:
    // 0x35886c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35886cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x358870: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358874: 0x24504f38  addiu       $s0, $v0, 0x4F38
    ctx->pc = 0x358874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x358878: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x358878u;
    SET_GPR_U32(ctx, 31, 0x358880u);
    ctx->pc = 0x35887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358878u;
    // 0x35887c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x358878u, 0x358880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358880u;
label_358880:
    // 0x358880: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x358880u;
    {
        const bool branch_taken_0x358880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358880u;
        // 0x358884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358880) {
            ctx->pc = 0x3588B8u;
            goto label_3588b8;
        }
    }
    ctx->pc = 0x358888u;
    // 0x358888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35888c: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x35888Cu;
    SET_GPR_U32(ctx, 31, 0x358894u);
    ctx->pc = 0x358890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35888Cu;
    // 0x358890: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x35888Cu, 0x358894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358894u;
label_358894:
    // 0x358894: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x358894u;
    SET_GPR_U32(ctx, 31, 0x35889Cu);
    ctx->pc = 0x358898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358894u;
    // 0x358898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x358894u, 0x35889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35889Cu;
label_35889c:
    // 0x35889c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588a0: 0xc048e00  jal         func_123800
    ctx->pc = 0x3588A0u;
    SET_GPR_U32(ctx, 31, 0x3588A8u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x3588A0u, 0x3588A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588A8u;
label_3588a8:
    // 0x3588a8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x3588a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x3588ac: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x3588acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x3588b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3588B0u;
    {
        const bool branch_taken_0x3588b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588B0u;
        // 0x3588b4: 0xe4a01408  swc1        $f0, 0x1408($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588b0) {
            ctx->pc = 0x3588CCu;
            goto label_3588cc;
        }
    }
    ctx->pc = 0x3588B8u;
label_3588b8:
    // 0x3588b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3588b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3588bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3588bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3588c0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3588c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3588c4: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x3588c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x3588c8: 0xe4401408  swc1        $f0, 0x1408($v0)
    ctx->pc = 0x3588c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C0088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C0088u, _value); } while (0); }
label_3588cc:
    // 0x3588cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3588ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3588d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3588d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588d4: 0x24504f50  addiu       $s0, $v0, 0x4F50
    ctx->pc = 0x3588d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    // 0x3588d8: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x3588D8u;
    SET_GPR_U32(ctx, 31, 0x3588E0u);
    ctx->pc = 0x3588DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588D8u;
    // 0x3588dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x3588D8u, 0x3588E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588E0u;
label_3588e0:
    // 0x3588e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3588E0u;
    {
        const bool branch_taken_0x3588e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588E0u;
        // 0x3588e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588e0) {
            ctx->pc = 0x358918u;
            goto label_358918;
        }
    }
    ctx->pc = 0x3588E8u;
    // 0x3588e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3588e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588ec: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x3588ECu;
    SET_GPR_U32(ctx, 31, 0x3588F4u);
    ctx->pc = 0x3588F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588ECu;
    // 0x3588f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x3588ECu, 0x3588F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588F4u;
label_3588f4:
    // 0x3588f4: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x3588F4u;
    SET_GPR_U32(ctx, 31, 0x3588FCu);
    ctx->pc = 0x3588F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588F4u;
    // 0x3588f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x3588F4u, 0x3588FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588FCu;
label_3588fc:
    // 0x3588fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3588fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358900: 0xc048e00  jal         func_123800
    ctx->pc = 0x358900u;
    SET_GPR_U32(ctx, 31, 0x358908u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x358900u, 0x358908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358908u;
label_358908:
    // 0x358908: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x358908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x35890c: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x35890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x358910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x358910u;
    {
        const bool branch_taken_0x358910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358910u;
        // 0x358914: 0xe460140c  swc1        $f0, 0x140C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358910) {
            ctx->pc = 0x35892Cu;
            goto label_35892c;
        }
    }
    ctx->pc = 0x358918u;
label_358918:
    // 0x358918: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x358918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x35891c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358920: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x358920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x358924: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x358924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x358928: 0xe4a0140c  swc1        $f0, 0x140C($a1)
    ctx->pc = 0x358928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C008Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C008Cu, _value); } while (0); }
label_35892c:
    // 0x35892c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x358930: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358934: 0x24504f68  addiu       $s0, $v0, 0x4F68
    ctx->pc = 0x358934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20328));
    // 0x358938: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x358938u;
    SET_GPR_U32(ctx, 31, 0x358940u);
    ctx->pc = 0x35893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358938u;
    // 0x35893c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x358938u, 0x358940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358940u;
label_358940:
    // 0x358940: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x358940u;
    {
        const bool branch_taken_0x358940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358940u;
        // 0x358944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358940) {
            ctx->pc = 0x358978u;
            goto label_358978;
        }
    }
    ctx->pc = 0x358948u;
    // 0x358948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35894c: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x35894Cu;
    SET_GPR_U32(ctx, 31, 0x358954u);
    ctx->pc = 0x358950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35894Cu;
    // 0x358950: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x35894Cu, 0x358954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358954u;
label_358954:
    // 0x358954: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x358954u;
    SET_GPR_U32(ctx, 31, 0x35895Cu);
    ctx->pc = 0x358958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358954u;
    // 0x358958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x358954u, 0x35895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35895Cu;
label_35895c:
    // 0x35895c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358960: 0xc048e00  jal         func_123800
    ctx->pc = 0x358960u;
    SET_GPR_U32(ctx, 31, 0x358968u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x358960u, 0x358968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358968u;
label_358968:
    // 0x358968: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35896c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x35896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x358970: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x358970u;
    {
        const bool branch_taken_0x358970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358970u;
        // 0x358974: 0xe4401410  swc1        $f0, 0x1410($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358970) {
            ctx->pc = 0x35898Cu;
            goto label_35898c;
        }
    }
    ctx->pc = 0x358978u;
label_358978:
    // 0x358978: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x358978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x35897c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35897cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358980: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x358980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x358984: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x358984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x358988: 0xe4601410  swc1        $f0, 0x1410($v1)
    ctx->pc = 0x358988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C0090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C0090u, _value); } while (0); }
label_35898c:
    // 0x35898c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x358990: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358994: 0x24504f80  addiu       $s0, $v0, 0x4F80
    ctx->pc = 0x358994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x358998: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x358998u;
    SET_GPR_U32(ctx, 31, 0x3589A0u);
    ctx->pc = 0x35899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358998u;
    // 0x35899c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x358998u, 0x3589A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589A0u;
label_3589a0:
    // 0x3589a0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3589A0u;
    {
        const bool branch_taken_0x3589a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589A0u;
        // 0x3589a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589a0) {
            ctx->pc = 0x358A20u;
            goto label_358a20;
        }
    }
    ctx->pc = 0x3589A8u;
    // 0x3589a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3589a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589ac: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x3589ACu;
    SET_GPR_U32(ctx, 31, 0x3589B4u);
    ctx->pc = 0x3589B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589ACu;
    // 0x3589b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x3589ACu, 0x3589B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589B4u;
label_3589b4:
    // 0x3589b4: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x3589B4u;
    SET_GPR_U32(ctx, 31, 0x3589BCu);
    ctx->pc = 0x3589B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589B4u;
    // 0x3589b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275E0u, 0x3589B4u, 0x3589BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589BCu;
label_3589bc:
    // 0x3589bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3589bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589c0: 0xc048e00  jal         func_123800
    ctx->pc = 0x3589C0u;
    SET_GPR_U32(ctx, 31, 0x3589C8u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x3589C0u, 0x3589C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589C8u;
label_3589c8:
    // 0x3589c8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x3589c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x3589cc: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x3589ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x3589d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3589D0u;
    {
        const bool branch_taken_0x3589d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589D0u;
        // 0x3589d4: 0xe4a01414  swc1        $f0, 0x1414($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589d0) {
            ctx->pc = 0x358A34u;
            goto label_358a34;
        }
    }
    ctx->pc = 0x3589D8u;
label_3589d8:
    // 0x3589d8: 0xc0d8f92  jal         func_363E48
    ctx->pc = 0x3589D8u;
    SET_GPR_U32(ctx, 31, 0x3589E0u);
    ctx->pc = 0x3589DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589D8u;
    // 0x3589dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E48u, 0x3589D8u, 0x3589E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589E0u;
label_3589e0:
    // 0x3589e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3589e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3589e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3589E4u;
    {
        const bool branch_taken_0x3589e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589E4u;
        // 0x3589e8: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589e4) {
            ctx->pc = 0x358A44u;
            goto label_358a44;
        }
    }
    ctx->pc = 0x3589ECu;
    // 0x3589ec: 0x0  nop
    ctx->pc = 0x3589ecu;
    // NOP
label_3589f0:
    // 0x3589f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3589f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3589f4:
    // 0x3589f4: 0xc0d8f92  jal         func_363E48
    ctx->pc = 0x3589F4u;
    SET_GPR_U32(ctx, 31, 0x3589FCu);
    ctx->pc = 0x3589F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589F4u;
    // 0x3589f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E48u, 0x3589F4u, 0x3589FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589FCu;
label_3589fc:
    // 0x3589fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x358a00: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358A00u;
    {
        const bool branch_taken_0x358a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A00u;
        // 0x358a04: 0x34420005  ori         $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a00) {
            ctx->pc = 0x358A44u;
            goto label_358a44;
        }
    }
    ctx->pc = 0x358A08u;
label_358a08:
    // 0x358a08: 0xc0d8f92  jal         func_363E48
    ctx->pc = 0x358A08u;
    SET_GPR_U32(ctx, 31, 0x358A10u);
    ctx->pc = 0x358A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A08u;
    // 0x358a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E48u, 0x358A08u, 0x358A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A10u;
label_358a10:
    // 0x358a10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x358a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x358a14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x358A14u;
    {
        const bool branch_taken_0x358a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A14u;
        // 0x358a18: 0x34420006  ori         $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a14) {
            ctx->pc = 0x358A44u;
            goto label_358a44;
        }
    }
    ctx->pc = 0x358A1Cu;
    // 0x358a1c: 0x0  nop
    ctx->pc = 0x358a1cu;
    // NOP
label_358a20:
    // 0x358a20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x358a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x358a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x358a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358a28: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358a2c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x358a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x358a30: 0xe4401414  swc1        $f0, 0x1414($v0)
    ctx->pc = 0x358a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1C0094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1C0094u, _value); } while (0); }
label_358a34:
    // 0x358a34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x358a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a38: 0xc0d8f92  jal         func_363E48
    ctx->pc = 0x358A38u;
    SET_GPR_U32(ctx, 31, 0x358A40u);
    ctx->pc = 0x358A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A38u;
    // 0x358a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E48u, 0x358A38u, 0x358A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A40u;
label_358a40:
    // 0x358a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358a44:
    // 0x358a44: 0xdfb01620  ld          $s0, 0x1620($sp)
    ctx->pc = 0x358a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 5664)));
    // 0x358a48: 0xdfb11628  ld          $s1, 0x1628($sp)
    ctx->pc = 0x358a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 5672)));
    // 0x358a4c: 0xdfb21630  ld          $s2, 0x1630($sp)
    ctx->pc = 0x358a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 5680)));
    // 0x358a50: 0xdfb31638  ld          $s3, 0x1638($sp)
    ctx->pc = 0x358a50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 5688)));
    // 0x358a54: 0xdfb41640  ld          $s4, 0x1640($sp)
    ctx->pc = 0x358a54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 5696)));
    // 0x358a58: 0xdfb51648  ld          $s5, 0x1648($sp)
    ctx->pc = 0x358a58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 5704)));
    // 0x358a5c: 0xdfb61650  ld          $s6, 0x1650($sp)
    ctx->pc = 0x358a5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 5712)));
    // 0x358a60: 0xdfb71658  ld          $s7, 0x1658($sp)
    ctx->pc = 0x358a60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 5720)));
    // 0x358a64: 0xdfbe1660  ld          $fp, 0x1660($sp)
    ctx->pc = 0x358a64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 5728)));
    // 0x358a68: 0xdfbf1668  ld          $ra, 0x1668($sp)
    ctx->pc = 0x358a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x358a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x358A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A6Cu;
        // 0x358a70: 0x27bd1670  addiu       $sp, $sp, 0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5744));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A74u;
    // 0x358a74: 0x0  nop
    ctx->pc = 0x358a74u;
    // NOP
    ctx->pc = 0x358a78u;
}
