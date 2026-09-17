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

// Function: sub_004B7408
// Address: 0x4b7408 - 0x4b7730
void sub_004B7408_0x4b7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7408_0x4b7408");
#endif

    switch (ctx->pc) {
        case 0x4b744cu: goto label_4b744c;
        case 0x4b7464u: goto label_4b7464;
        case 0x4b751cu: goto label_4b751c;
        case 0x4b7538u: goto label_4b7538;
        case 0x4b7540u: goto label_4b7540;
        case 0x4b7578u: goto label_4b7578;
        case 0x4b7674u: goto label_4b7674;
        case 0x4b76c8u: goto label_4b76c8;
        default: break;
    }

    ctx->pc = 0x4b7408u;

    // 0x4b7408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b7408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b740c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b7410: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b7410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b7414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b7418: 0x26b101b4  addiu       $s1, $s5, 0x1B4
    ctx->pc = 0x4b7418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 436));
    // 0x4b741c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b7420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b7420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b7424: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4b7424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7428: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b7428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b742c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4b742cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7430: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b7430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b7434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7438: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b743c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b7440: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b7440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b7444: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4B7444u;
    SET_GPR_U32(ctx, 31, 0x4B744Cu);
    ctx->pc = 0x4B7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7444u;
    // 0x4b7448: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B7444u, 0x4B744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B744Cu;
label_4b744c:
    // 0x4b744c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b744cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7450: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b7450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b7454: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B7454u;
    {
        const bool branch_taken_0x4b7454 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7454u;
        // 0x4b7458: 0x26b3015e  addiu       $s3, $s5, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7454) {
            ctx->pc = 0x4B7538u;
            goto label_4b7538;
        }
    }
    ctx->pc = 0x4B745Cu;
    // 0x4b745c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B745Cu;
    SET_GPR_U32(ctx, 31, 0x4B7464u);
    ctx->pc = 0x4B7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B745Cu;
    // 0x4b7460: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B745Cu, 0x4B7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7464u;
label_4b7464:
    // 0x4b7464: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4b7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x4b7468: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x4b7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x4b746c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b7470: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4b7470u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7474: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b7474u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b7478: 0xa6a3000c  sh          $v1, 0xC($s5)
    ctx->pc = 0x4b7478u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b747c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4b747cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4b7480: 0xa6a401b6  sh          $a0, 0x1B6($s5)
    ctx->pc = 0x4b7480u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 438), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b7484: 0x26092494  addiu       $t1, $s0, 0x2494
    ctx->pc = 0x4b7484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4b7488: 0x260a2498  addiu       $t2, $s0, 0x2498
    ctx->pc = 0x4b7488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4b748c: 0x260b249c  addiu       $t3, $s0, 0x249C
    ctx->pc = 0x4b748cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4b7490: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b7490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b7494: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b7494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7498: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b7498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b749c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b749cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b74a0: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x4b74a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4b74a4: 0x86a30012  lh          $v1, 0x12($s5)
    ctx->pc = 0x4b74a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x4b74a8: 0x86460006  lh          $a2, 0x6($s2)
    ctx->pc = 0x4b74a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x4b74ac: 0x86a20016  lh          $v0, 0x16($s5)
    ctx->pc = 0x4b74acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x4b74b0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b74b4: 0x86a4001a  lh          $a0, 0x1A($s5)
    ctx->pc = 0x4b74b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x4b74b8: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x4b74b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b74bc: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x4b74bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x4b74c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b74c4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4b74c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b74c8: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x4b74c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b74cc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4b74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4b74d0: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4b74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b74d4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4b74d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b74d8: 0x3096ffff  andi        $s6, $a0, 0xFFFF
    ctx->pc = 0x4b74d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b74dc: 0x1e1400  sll         $v0, $fp, 16
    ctx->pc = 0x4b74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x4b74e0: 0x171c00  sll         $v1, $s7, 16
    ctx->pc = 0x4b74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x4b74e4: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x4b74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4b74e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b74e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b74ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b74ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b74f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b74f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b74f4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b74f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b74f8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4b74f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4b74fc: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4b74fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4b7500: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b7500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b7504: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b7504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b7508: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4b7508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4b750c: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4b750cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4b7510: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4b7510u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4b7514: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B7514u;
    SET_GPR_U32(ctx, 31, 0x4B751Cu);
    ctx->pc = 0x4B7518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7514u;
    // 0x4b7518: 0xad650000  sw          $a1, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B7514u, 0x4B751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B751Cu;
label_4b751c:
    // 0x4b751c: 0x960224a0  lhu         $v0, 0x24A0($s0)
    ctx->pc = 0x4b751cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4b7520: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b7520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7524: 0xa6a20118  sh          $v0, 0x118($s5)
    ctx->pc = 0x4b7524u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7528: 0x960324a2  lhu         $v1, 0x24A2($s0)
    ctx->pc = 0x4b7528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4b752c: 0xa6a00120  sh          $zero, 0x120($s5)
    ctx->pc = 0x4b752cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b7530: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B7530u;
    SET_GPR_U32(ctx, 31, 0x4B7538u);
    ctx->pc = 0x4B7534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7530u;
    // 0x4b7534: 0xa6a3011c  sh          $v1, 0x11C($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B7530u, 0x4B7538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7538u;
label_4b7538:
    // 0x4b7538: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4B7538u;
    SET_GPR_U32(ctx, 31, 0x4B7540u);
    ctx->pc = 0x4B753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7538u;
    // 0x4b753c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4B7538u, 0x4B7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7540u;
label_4b7540:
    // 0x4b7540: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b7540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b7544: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b7544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b7548: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4b7548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b754c: 0x461006c  bgez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x4B754Cu;
    {
        const bool branch_taken_0x4b754c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4B7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B754Cu;
        // 0x4b7550: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b754c) {
            ctx->pc = 0x4B7700u;
            goto label_4b7700;
        }
    }
    ctx->pc = 0x4B7554u;
    // 0x4b7554: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b7554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b7558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b755c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4b755cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4b7560: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7564: 0xa602232c  sh          $v0, 0x232C($s0)
    ctx->pc = 0x4b7564u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4b7568: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b7568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b756c: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x4b756cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4b7570: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4B7570u;
    SET_GPR_U32(ctx, 31, 0x4B7578u);
    ctx->pc = 0x4B7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7570u;
    // 0x4b7574: 0x26b40018  addiu       $s4, $s5, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4B7570u, 0x4B7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7578u;
label_4b7578:
    // 0x4b7578: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b7578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b757c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4b757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b7580: 0x37c8ffff  ori         $t0, $fp, 0xFFFF
    ctx->pc = 0x4b7580u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4b7584: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x4b7584u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4b7588: 0x26b20014  addiu       $s2, $s5, 0x14
    ctx->pc = 0x4b7588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4b758c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4b758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4b7590: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b7590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b7594: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b7594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b7598: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b759c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b75a0: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b75a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b75a4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b75a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b75a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b75ac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4b75acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b75b0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b75b4: 0x36e9ffff  ori         $t1, $s7, 0xFFFF
    ctx->pc = 0x4b75b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4b75b8: 0x36caffff  ori         $t2, $s6, 0xFFFF
    ctx->pc = 0x4b75b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4b75bc: 0x107f024  and         $fp, $t0, $a3
    ctx->pc = 0x4b75bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4b75c0: 0x122b824  and         $s7, $t1, $v0
    ctx->pc = 0x4b75c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b75c4: 0x143b024  and         $s6, $t2, $v1
    ctx->pc = 0x4b75c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4b75c8: 0x260a2494  addiu       $t2, $s0, 0x2494
    ctx->pc = 0x4b75c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4b75cc: 0x1e4c00  sll         $t1, $fp, 16
    ctx->pc = 0x4b75ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x4b75d0: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4b75d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4b75d4: 0x174400  sll         $t0, $s7, 16
    ctx->pc = 0x4b75d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x4b75d8: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4b75d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4b75dc: 0x163c00  sll         $a3, $s6, 16
    ctx->pc = 0x4b75dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4b75e0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4b75e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4b75e4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4b75e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b75e8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4b75e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4b75ec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b75ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b75f0: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4b75f0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4b75f4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4b75f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4b75f8: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4b75f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4b75fc: 0x260b2498  addiu       $t3, $s0, 0x2498
    ctx->pc = 0x4b75fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4b7600: 0x260c249c  addiu       $t4, $s0, 0x249C
    ctx->pc = 0x4b7600u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4b7604: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x4b7604u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4b7608: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4b7608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b760c: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x4b760cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4b7610: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4b7610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b7614: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x4b7614u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4b7618: 0x36c4ffff  ori         $a0, $s6, 0xFFFF
    ctx->pc = 0x4b7618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4b761c: 0x37c2ffff  ori         $v0, $fp, 0xFFFF
    ctx->pc = 0x4b761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4b7620: 0x36e3ffff  ori         $v1, $s7, 0xFFFF
    ctx->pc = 0x4b7620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4b7624: 0x122f024  and         $fp, $t1, $v0
    ctx->pc = 0x4b7624u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b7628: 0x103b824  and         $s7, $t0, $v1
    ctx->pc = 0x4b7628u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b762c: 0xe4b024  and         $s6, $a3, $a0
    ctx->pc = 0x4b762cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b7630: 0x1e3c00  sll         $a3, $fp, 16
    ctx->pc = 0x4b7630u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x4b7634: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4b7634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b7638: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x4b7638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x4b763c: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x4b763cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4b7640: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b7640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b7644: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b7644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b7648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b764c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b764cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b7650: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4b7650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4b7654: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b7654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b7658: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b7658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b765c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b765cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b7660: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b7660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b7664: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b7664u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b7668: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4b7668u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4b766c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B766Cu;
    SET_GPR_U32(ctx, 31, 0x4B7674u);
    ctx->pc = 0x4B7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B766Cu;
    // 0x4b7670: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B766Cu, 0x4B7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7674u;
label_4b7674:
    // 0x4b7674: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4b7674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b7678: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4b7678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b767c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7680: 0x960624a0  lhu         $a2, 0x24A0($s0)
    ctx->pc = 0x4b7680u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4b7684: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b7688: 0x960524a2  lhu         $a1, 0x24A2($s0)
    ctx->pc = 0x4b7688u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4b768c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b7690: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b7690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b7694: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4b7694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7698: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b769c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4b769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4b76a0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b76a4: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4b76a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b76a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b76ac: 0xa606233a  sh          $a2, 0x233A($s0)
    ctx->pc = 0x4b76acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b76b0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b76b4: 0xa605233c  sh          $a1, 0x233C($s0)
    ctx->pc = 0x4b76b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b76b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b76bc: 0xa600233e  sh          $zero, 0x233E($s0)
    ctx->pc = 0x4b76bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b76c0: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4B76C0u;
    SET_GPR_U32(ctx, 31, 0x4B76C8u);
    ctx->pc = 0x4B76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B76C0u;
    // 0x4b76c4: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4B76C0u, 0x4B76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B76C8u;
label_4b76c8:
    // 0x4b76c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b76c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b76cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b76ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b76d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b76d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b76d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b76d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b76d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b76d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b76dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b76dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b76e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b76e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b76e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b76e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b76e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b76e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b76ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b76ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b76f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b76f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b76f4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B76F4u;
    ctx->pc = 0x4B76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B76F4u;
    // 0x4b76f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B76FCu;
    // 0x4b76fc: 0x0  nop
    ctx->pc = 0x4b76fcu;
    // NOP
label_4b7700:
    // 0x4b7700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b7704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7708: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b7708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b770c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b770cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b7710: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b7710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7714: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b7714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b7718: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b7718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b771c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b771cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b7720: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b7720u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7724: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b7724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b7728: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7728u;
        // 0x4b772c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7730u;
}
