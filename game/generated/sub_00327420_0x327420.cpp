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

// Function: sub_00327420
// Address: 0x327420 - 0x327630
void sub_00327420_0x327420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327420_0x327420");
#endif

    switch (ctx->pc) {
        case 0x327420u: goto label_327420;
        case 0x327424u: goto label_327424;
        case 0x327428u: goto label_327428;
        case 0x32742cu: goto label_32742c;
        case 0x327430u: goto label_327430;
        case 0x327434u: goto label_327434;
        case 0x327438u: goto label_327438;
        case 0x32743cu: goto label_32743c;
        case 0x327440u: goto label_327440;
        case 0x327444u: goto label_327444;
        case 0x327448u: goto label_327448;
        case 0x32744cu: goto label_32744c;
        case 0x327450u: goto label_327450;
        case 0x327454u: goto label_327454;
        case 0x327458u: goto label_327458;
        case 0x32745cu: goto label_32745c;
        case 0x327460u: goto label_327460;
        case 0x327464u: goto label_327464;
        case 0x327468u: goto label_327468;
        case 0x32746cu: goto label_32746c;
        case 0x327470u: goto label_327470;
        case 0x327474u: goto label_327474;
        case 0x327478u: goto label_327478;
        case 0x32747cu: goto label_32747c;
        case 0x327480u: goto label_327480;
        case 0x327484u: goto label_327484;
        case 0x327488u: goto label_327488;
        case 0x32748cu: goto label_32748c;
        case 0x327490u: goto label_327490;
        case 0x327494u: goto label_327494;
        case 0x327498u: goto label_327498;
        case 0x32749cu: goto label_32749c;
        case 0x3274a0u: goto label_3274a0;
        case 0x3274a4u: goto label_3274a4;
        case 0x3274a8u: goto label_3274a8;
        case 0x3274acu: goto label_3274ac;
        case 0x3274b0u: goto label_3274b0;
        case 0x3274b4u: goto label_3274b4;
        case 0x3274b8u: goto label_3274b8;
        case 0x3274bcu: goto label_3274bc;
        case 0x3274c0u: goto label_3274c0;
        case 0x3274c4u: goto label_3274c4;
        case 0x3274c8u: goto label_3274c8;
        case 0x3274ccu: goto label_3274cc;
        case 0x3274d0u: goto label_3274d0;
        case 0x3274d4u: goto label_3274d4;
        case 0x3274d8u: goto label_3274d8;
        case 0x3274dcu: goto label_3274dc;
        case 0x3274e0u: goto label_3274e0;
        case 0x3274e4u: goto label_3274e4;
        case 0x3274e8u: goto label_3274e8;
        case 0x3274ecu: goto label_3274ec;
        case 0x3274f0u: goto label_3274f0;
        case 0x3274f4u: goto label_3274f4;
        case 0x3274f8u: goto label_3274f8;
        case 0x3274fcu: goto label_3274fc;
        case 0x327500u: goto label_327500;
        case 0x327504u: goto label_327504;
        case 0x327508u: goto label_327508;
        case 0x32750cu: goto label_32750c;
        case 0x327510u: goto label_327510;
        case 0x327514u: goto label_327514;
        case 0x327518u: goto label_327518;
        case 0x32751cu: goto label_32751c;
        case 0x327520u: goto label_327520;
        case 0x327524u: goto label_327524;
        case 0x327528u: goto label_327528;
        case 0x32752cu: goto label_32752c;
        case 0x327530u: goto label_327530;
        case 0x327534u: goto label_327534;
        case 0x327538u: goto label_327538;
        case 0x32753cu: goto label_32753c;
        case 0x327540u: goto label_327540;
        case 0x327544u: goto label_327544;
        case 0x327548u: goto label_327548;
        case 0x32754cu: goto label_32754c;
        case 0x327550u: goto label_327550;
        case 0x327554u: goto label_327554;
        case 0x327558u: goto label_327558;
        case 0x32755cu: goto label_32755c;
        case 0x327560u: goto label_327560;
        case 0x327564u: goto label_327564;
        case 0x327568u: goto label_327568;
        case 0x32756cu: goto label_32756c;
        case 0x327570u: goto label_327570;
        case 0x327574u: goto label_327574;
        case 0x327578u: goto label_327578;
        case 0x32757cu: goto label_32757c;
        case 0x327580u: goto label_327580;
        case 0x327584u: goto label_327584;
        case 0x327588u: goto label_327588;
        case 0x32758cu: goto label_32758c;
        case 0x327590u: goto label_327590;
        case 0x327594u: goto label_327594;
        case 0x327598u: goto label_327598;
        case 0x32759cu: goto label_32759c;
        case 0x3275a0u: goto label_3275a0;
        case 0x3275a4u: goto label_3275a4;
        case 0x3275a8u: goto label_3275a8;
        case 0x3275acu: goto label_3275ac;
        case 0x3275b0u: goto label_3275b0;
        case 0x3275b4u: goto label_3275b4;
        case 0x3275b8u: goto label_3275b8;
        case 0x3275bcu: goto label_3275bc;
        case 0x3275c0u: goto label_3275c0;
        case 0x3275c4u: goto label_3275c4;
        case 0x3275c8u: goto label_3275c8;
        case 0x3275ccu: goto label_3275cc;
        case 0x3275d0u: goto label_3275d0;
        case 0x3275d4u: goto label_3275d4;
        case 0x3275d8u: goto label_3275d8;
        case 0x3275dcu: goto label_3275dc;
        case 0x3275e0u: goto label_3275e0;
        case 0x3275e4u: goto label_3275e4;
        case 0x3275e8u: goto label_3275e8;
        case 0x3275ecu: goto label_3275ec;
        case 0x3275f0u: goto label_3275f0;
        case 0x3275f4u: goto label_3275f4;
        case 0x3275f8u: goto label_3275f8;
        case 0x3275fcu: goto label_3275fc;
        case 0x327600u: goto label_327600;
        case 0x327604u: goto label_327604;
        case 0x327608u: goto label_327608;
        case 0x32760cu: goto label_32760c;
        case 0x327610u: goto label_327610;
        case 0x327614u: goto label_327614;
        case 0x327618u: goto label_327618;
        case 0x32761cu: goto label_32761c;
        case 0x327620u: goto label_327620;
        case 0x327624u: goto label_327624;
        case 0x327628u: goto label_327628;
        case 0x32762cu: goto label_32762c;
        default: break;
    }

    ctx->pc = 0x327420u;

label_327420:
    // 0x327420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_327424:
    // 0x327424: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_327428:
    // 0x327428: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x327428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32742c:
    // 0x32742c: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x32742cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_327430:
    // 0x327430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_327434:
    // 0x327434: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x327434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_327438:
    // 0x327438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32743c:
    // 0x32743c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_327440:
    // 0x327440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327444:
    // 0x327444: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_327448:
    // 0x327448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32744c:
    // 0x32744c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x32744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_327450:
    // 0x327450: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_327454:
    // 0x327454: 0xc0c952e  jal         func_3254B8
label_327458:
    if (ctx->pc == 0x327458u) {
        ctx->pc = 0x327458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327454u;
        // 0x327458: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32745Cu;
        goto label_32745c;
    }
    ctx->pc = 0x327454u;
    SET_GPR_U32(ctx, 31, 0x32745Cu);
    ctx->pc = 0x327458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327454u;
    // 0x327458: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x327454u, 0x32745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32745Cu;
label_32745c:
    // 0x32745c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x32745cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_327460:
    // 0x327460: 0x26a30d00  addiu       $v1, $s5, 0xD00
    ctx->pc = 0x327460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
label_327464:
    // 0x327464: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x327464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_327468:
    // 0x327468: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32746c:
    // 0x32746c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_327470:
    if (ctx->pc == 0x327470u) {
        ctx->pc = 0x327470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32746Cu;
        // 0x327470: 0x24730068  addiu       $s3, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327474u;
        goto label_327474;
    }
    ctx->pc = 0x32746Cu;
    {
        const bool branch_taken_0x32746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32746Cu;
        // 0x327470: 0x24730068  addiu       $s3, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32746c) {
            ctx->pc = 0x327480u;
            goto label_327480;
        }
    }
    ctx->pc = 0x327474u;
label_327474:
    // 0x327474: 0xc0c8ae2  jal         func_322B88
label_327478:
    if (ctx->pc == 0x327478u) {
        ctx->pc = 0x327478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327474u;
        // 0x327478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32747Cu;
        goto label_32747c;
    }
    ctx->pc = 0x327474u;
    SET_GPR_U32(ctx, 31, 0x32747Cu);
    ctx->pc = 0x327478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327474u;
    // 0x327478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B88u, 0x327474u, 0x32747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32747Cu;
label_32747c:
    // 0x32747c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32747cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327480:
    // 0x327480: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327484:
    // 0x327484: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_327488:
    // 0x327488: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_32748c:
    // 0x32748c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_327490:
    if (ctx->pc == 0x327490u) {
        ctx->pc = 0x327490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32748Cu;
        // 0x327490: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327494u;
        goto label_327494;
    }
    ctx->pc = 0x32748Cu;
    {
        const bool branch_taken_0x32748c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32748c) {
            ctx->pc = 0x327490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32748Cu;
            // 0x327490: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3274A8u;
            goto label_3274a8;
        }
    }
    ctx->pc = 0x327494u;
label_327494:
    // 0x327494: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_327498:
    // 0x327498: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_32749c:
    // 0x32749c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32749cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_3274a0:
    // 0x3274a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3274a4:
    if (ctx->pc == 0x3274A4u) {
        ctx->pc = 0x3274A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274A0u;
        // 0x3274a4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274A8u;
        goto label_3274a8;
    }
    ctx->pc = 0x3274A0u;
    {
        const bool branch_taken_0x3274a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3274A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274A0u;
        // 0x3274a4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274a0) {
            ctx->pc = 0x3274B8u;
            goto label_3274b8;
        }
    }
    ctx->pc = 0x3274A8u;
label_3274a8:
    // 0x3274a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_3274ac:
    // 0x3274ac: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3274acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_3274b0:
    // 0x3274b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3274b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3274b4:
    // 0x3274b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3274b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3274b8:
    // 0x3274b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3274b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3274bc:
    // 0x3274bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3274bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3274c0:
    // 0x3274c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3274c4:
    // 0x3274c4: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_3274c8:
    // 0x3274c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3274c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3274cc:
    // 0x3274cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3274ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3274d0:
    // 0x3274d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3274d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3274d4:
    // 0x3274d4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3274d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_3274d8:
    // 0x3274d8: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3274d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_3274dc:
    // 0x3274dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3274e0:
    // 0x3274e0: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_3274e4:
    // 0x3274e4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3274e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3274e8:
    // 0x3274e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3274e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3274ec:
    // 0x3274ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3274f0:
    // 0x3274f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3274f4:
    if (ctx->pc == 0x3274F4u) {
        ctx->pc = 0x3274F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F0u;
        // 0x3274f4: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274F8u;
        goto label_3274f8;
    }
    ctx->pc = 0x3274F0u;
    {
        const bool branch_taken_0x3274f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3274F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F0u;
        // 0x3274f4: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274f0) {
            ctx->pc = 0x327504u;
            goto label_327504;
        }
    }
    ctx->pc = 0x3274F8u;
label_3274f8:
    // 0x3274f8: 0xc0c8b02  jal         func_322C08
label_3274fc:
    if (ctx->pc == 0x3274FCu) {
        ctx->pc = 0x3274FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F8u;
        // 0x3274fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327500u;
        goto label_327500;
    }
    ctx->pc = 0x3274F8u;
    SET_GPR_U32(ctx, 31, 0x327500u);
    ctx->pc = 0x3274FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274F8u;
    // 0x3274fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C08u, 0x3274F8u, 0x327500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327500u;
label_327500:
    // 0x327500: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x327500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327504:
    // 0x327504: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327508:
    // 0x327508: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_32750c:
    // 0x32750c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_327510:
    // 0x327510: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_327514:
    if (ctx->pc == 0x327514u) {
        ctx->pc = 0x327514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327510u;
        // 0x327514: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327518u;
        goto label_327518;
    }
    ctx->pc = 0x327510u;
    {
        const bool branch_taken_0x327510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327510) {
            ctx->pc = 0x327514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327510u;
            // 0x327514: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327530u;
            goto label_327530;
        }
    }
    ctx->pc = 0x327518u;
label_327518:
    // 0x327518: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_32751c:
    // 0x32751c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32751cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327520:
    // 0x327520: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327524:
    // 0x327524: 0x10000006  b           . + 4 + (0x6 << 2)
label_327528:
    if (ctx->pc == 0x327528u) {
        ctx->pc = 0x327528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327524u;
        // 0x327528: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32752Cu;
        goto label_32752c;
    }
    ctx->pc = 0x327524u;
    {
        const bool branch_taken_0x327524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327524u;
        // 0x327528: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327524) {
            ctx->pc = 0x327540u;
            goto label_327540;
        }
    }
    ctx->pc = 0x32752Cu;
label_32752c:
    // 0x32752c: 0x0  nop
    ctx->pc = 0x32752cu;
    // NOP
label_327530:
    // 0x327530: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327534:
    // 0x327534: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327538:
    // 0x327538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32753c:
    // 0x32753c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_327540:
    // 0x327540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x327540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327544:
    // 0x327544: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x327544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327548:
    // 0x327548: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x327548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32754c:
    // 0x32754c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_327550:
    // 0x327550: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x327550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_327554:
    // 0x327554: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_327558:
    // 0x327558: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32755c:
    // 0x32755c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x32755cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_327560:
    // 0x327560: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x327560u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
label_327564:
    // 0x327564: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_327568:
    // 0x327568: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x327568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_32756c:
    // 0x32756c: 0x26a40d00  addiu       $a0, $s5, 0xD00
    ctx->pc = 0x32756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
label_327570:
    // 0x327570: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x327570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_327574:
    // 0x327574: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x327574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_327578:
    // 0x327578: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x327578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_32757c:
    // 0x32757c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32757cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_327580:
    // 0x327580: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x327580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_327584:
    // 0x327584: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x327584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_327588:
    // 0x327588: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x327588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_32758c:
    // 0x32758c: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x32758cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_327590:
    // 0x327590: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x327590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_327594:
    // 0x327594: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x327594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_327598:
    // 0x327598: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x327598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_32759c:
    // 0x32759c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x32759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3275a0:
    // 0x3275a0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3275a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_3275a4:
    // 0x3275a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3275a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3275a8:
    // 0x3275a8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3275ac:
    // 0x3275ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3275acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3275b0:
    // 0x3275b0: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x3275b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_3275b4:
    // 0x3275b4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x3275b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_3275b8:
    // 0x3275b8: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3275b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3275bc:
    // 0x3275bc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3275bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3275c0:
    // 0x3275c0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3275c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3275c4:
    // 0x3275c4: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x3275c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_3275c8:
    // 0x3275c8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3275c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3275cc:
    // 0x3275cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3275d0:
    // 0x3275d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3275d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3275d4:
    // 0x3275d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3275d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3275d8:
    // 0x3275d8: 0x70463389  pcpyld      $a2, $v0, $a2
    ctx->pc = 0x3275d8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_3275dc:
    // 0x3275dc: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x3275dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
label_3275e0:
    // 0x3275e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3275e4:
    // 0x3275e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3275e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3275e8:
    // 0x3275e8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3275e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3275ec:
    // 0x3275ec: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x3275ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3275f0:
    // 0x3275f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3275f4:
    if (ctx->pc == 0x3275F4u) {
        ctx->pc = 0x3275F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275F0u;
        // 0x3275f4: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275F8u;
        goto label_3275f8;
    }
    ctx->pc = 0x3275F0u;
    {
        const bool branch_taken_0x3275f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275F0u;
        // 0x3275f4: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275f0) {
            ctx->pc = 0x32760Cu;
            goto label_32760c;
        }
    }
    ctx->pc = 0x3275F8u;
label_3275f8:
    // 0x3275f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3275f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3275fc:
    // 0x3275fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3275fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327600:
    // 0x327600: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x327600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_327604:
    // 0x327604: 0x60f809  jalr        $v1
label_327608:
    if (ctx->pc == 0x327608u) {
        ctx->pc = 0x327608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327604u;
        // 0x327608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32760Cu;
        goto label_32760c;
    }
    ctx->pc = 0x327604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32760Cu);
        ctx->pc = 0x327608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327604u;
        // 0x327608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327604u, 0x32760Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32760Cu;
label_32760c:
    // 0x32760c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32760cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327610:
    // 0x327610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_327614:
    // 0x327614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327618:
    // 0x327618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32761c:
    // 0x32761c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32761cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327620:
    // 0x327620: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x327620u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_327624:
    // 0x327624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327628:
    // 0x327628: 0x3e00008  jr          $ra
label_32762c:
    if (ctx->pc == 0x32762Cu) {
        ctx->pc = 0x32762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327628u;
        // 0x32762c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327630u;
        goto label_fallthrough_0x327628;
    }
    ctx->pc = 0x327628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327628u;
        // 0x32762c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x327628:
    ctx->pc = 0x327630u;
}
