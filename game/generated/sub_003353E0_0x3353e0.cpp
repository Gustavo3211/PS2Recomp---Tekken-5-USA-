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

// Function: sub_003353E0
// Address: 0x3353e0 - 0x335560
void sub_003353E0_0x3353e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003353E0_0x3353e0");
#endif

    switch (ctx->pc) {
        case 0x33542cu: goto label_33542c;
        case 0x335438u: goto label_335438;
        case 0x335468u: goto label_335468;
        case 0x33547cu: goto label_33547c;
        default: break;
    }

    ctx->pc = 0x3353e0u;

    // 0x3353e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3353e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3353e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3353e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3353e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3353e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3353ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3353ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3353f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3353f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3353f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3353f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3353fc: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3353fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x335400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335404: 0x26820400  addiu       $v0, $s4, 0x400
    ctx->pc = 0x335404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x335408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33540c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x335410: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x335410u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x400414u));
    // 0x335414: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x335414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x335418: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x335418u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33541c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x33541cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x335420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335424: 0xc0cd5a6  jal         func_335698
    ctx->pc = 0x335424u;
    SET_GPR_U32(ctx, 31, 0x33542Cu);
    ctx->pc = 0x335428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335424u;
    // 0x335428: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335698u, 0x335424u, 0x33542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33542Cu;
label_33542c:
    // 0x33542c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335430: 0xc0cd5a6  jal         func_335698
    ctx->pc = 0x335430u;
    SET_GPR_U32(ctx, 31, 0x335438u);
    ctx->pc = 0x335434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335430u;
    // 0x335434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335698u, 0x335430u, 0x335438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335438u;
label_335438:
    // 0x335438: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x335438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33543c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x335440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335444: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x335444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x335448: 0x34420037  ori         $v0, $v0, 0x37
    ctx->pc = 0x335448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    // 0x33544c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335450: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x335450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x335454: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335458: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x335458u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33545c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x33545cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x335460: 0xc0cd584  jal         func_335610
    ctx->pc = 0x335460u;
    SET_GPR_U32(ctx, 31, 0x335468u);
    ctx->pc = 0x335464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335460u;
    // 0x335464: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x335460u, 0x335468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335468u;
label_335468:
    // 0x335468: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x335468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x33546c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335470: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x335470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335474: 0xc0cd584  jal         func_335610
    ctx->pc = 0x335474u;
    SET_GPR_U32(ctx, 31, 0x33547Cu);
    ctx->pc = 0x335478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335474u;
    // 0x335478: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x335474u, 0x33547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33547Cu;
label_33547c:
    // 0x33547c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33547cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x335484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335488: 0x24050278  addiu       $a1, $zero, 0x278
    ctx->pc = 0x335488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x33548c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x33548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x335490: 0x24060310  addiu       $a2, $zero, 0x310
    ctx->pc = 0x335490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x335494: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x335494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x335498: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x335498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x33549c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3354a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3354a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3354a4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3354a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3354a8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x3354a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x3354ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3354acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3354b0: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x3354b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x3354b4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3354b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3354b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3354b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3354bc: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x3354bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x3354c0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3354c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3354c4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3354c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3354c8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3354c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3354ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3354d0: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x3354d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3354d4: 0x2268824  and         $s1, $s1, $a2
    ctx->pc = 0x3354d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x3354d8: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x3354d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x3354dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3354dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3354e0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x3354e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x3354e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3354e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3354e8: 0x12260002  beq         $s1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3354E8u;
    {
        const bool branch_taken_0x3354e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x3354ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354E8u;
        // 0x3354ec: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354e8) {
            ctx->pc = 0x3354F4u;
            goto label_3354f4;
        }
    }
    ctx->pc = 0x3354F0u;
    // 0x3354f0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3354f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3354f4:
    // 0x3354f4: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3354f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3354f8: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3354f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3354fc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3354fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x335500: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x335500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x335504: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x335504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x335508: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x335508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33550c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x33550cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335510: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x335510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x335514: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x335514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x335518: 0x10890002  beq         $a0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335518u;
    {
        const bool branch_taken_0x335518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x33551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335518u;
        // 0x33551c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335518) {
            ctx->pc = 0x335524u;
            goto label_335524;
        }
    }
    ctx->pc = 0x335520u;
    // 0x335520: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x335520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_335524:
    // 0x335524: 0x71431b89  pcpyld      $v1, $t2, $v1
    ctx->pc = 0x335524u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x335528: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x335528u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x33552c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x33552cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x335530: 0x26830400  addiu       $v1, $s4, 0x400
    ctx->pc = 0x335530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x335534: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x335534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x335538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33553c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33553cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335540: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335544: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335548: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x335548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33554c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x335550: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x335550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x335554: 0x3e00008  jr          $ra
    ctx->pc = 0x335554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335554u;
        // 0x335558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33555Cu;
    // 0x33555c: 0x0  nop
    ctx->pc = 0x33555cu;
    // NOP
    ctx->pc = 0x335560u;
}
