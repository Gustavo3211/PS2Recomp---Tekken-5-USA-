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

// Function: sub_002163C8
// Address: 0x2163c8 - 0x216518
void sub_002163C8_0x2163c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002163C8_0x2163c8");
#endif

    switch (ctx->pc) {
        case 0x2163f8u: goto label_2163f8;
        case 0x216404u: goto label_216404;
        case 0x216410u: goto label_216410;
        case 0x216420u: goto label_216420;
        case 0x216430u: goto label_216430;
        case 0x21644cu: goto label_21644c;
        case 0x21645cu: goto label_21645c;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x216470u: goto label_216470;
        case 0x216494u: goto label_216494;
        case 0x21649cu: goto label_21649c;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164f4u: goto label_2164f4;
        default: break;
    }

    ctx->pc = 0x2163c8u;

    // 0x2163c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2163c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2163cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2163ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2163d0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2163d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2163d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2163d8: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2163d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2163dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2163dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2163e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2163e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2163e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2163e8: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x2163ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2163ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2163f0: 0xc089338  jal         func_224CE0
    ctx->pc = 0x2163F0u;
    SET_GPR_U32(ctx, 31, 0x2163F8u);
    ctx->pc = 0x2163F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163F0u;
    // 0x2163f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224CE0u, 0x2163F0u, 0x2163F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163F8u;
label_2163f8:
    // 0x2163f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2163f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2163fc: 0xc0894e6  jal         func_225398
    ctx->pc = 0x2163FCu;
    SET_GPR_U32(ctx, 31, 0x216404u);
    ctx->pc = 0x216400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163FCu;
    // 0x216400: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225398u, 0x2163FCu, 0x216404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216404u;
label_216404:
    // 0x216404: 0x262483c0  addiu       $a0, $s1, -0x7C40
    ctx->pc = 0x216404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
    // 0x216408: 0xc085238  jal         func_2148E0
    ctx->pc = 0x216408u;
    SET_GPR_U32(ctx, 31, 0x216410u);
    ctx->pc = 0x21640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216408u;
    // 0x21640c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x216408u, 0x216410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216410u;
label_216410:
    // 0x216410: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216410u;
    {
        const bool branch_taken_0x216410 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x216410) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x216418u;
    // 0x216418: 0xc0899a8  jal         func_2266A0
    ctx->pc = 0x216418u;
    SET_GPR_U32(ctx, 31, 0x216420u);
    ctx->pc = 0x21641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216418u;
    // 0x21641c: 0x2444ffdf  addiu       $a0, $v0, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A0u, 0x216418u, 0x216420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216420u;
label_216420:
    // 0x216420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x216420u;
    {
        const bool branch_taken_0x216420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216420u;
        // 0x216424: 0x262483c0  addiu       $a0, $s1, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216420) {
            ctx->pc = 0x216434u;
            goto label_216434;
        }
    }
    ctx->pc = 0x216428u;
label_216428:
    // 0x216428: 0xc0858aa  jal         func_2162A8
    ctx->pc = 0x216428u;
    SET_GPR_U32(ctx, 31, 0x216430u);
    ctx->pc = 0x2162A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162A8u, 0x216428u, 0x216430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216430u;
label_216430:
    // 0x216430: 0x262483c0  addiu       $a0, $s1, -0x7C40
    ctx->pc = 0x216430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
label_216434:
    // 0x216434: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x216434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216438: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x216438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x21643c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21643Cu;
    {
        const bool branch_taken_0x21643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21643c) {
            ctx->pc = 0x21645Cu;
            goto label_21645c;
        }
    }
    ctx->pc = 0x216444u;
    // 0x216444: 0xc085238  jal         func_2148E0
    ctx->pc = 0x216444u;
    SET_GPR_U32(ctx, 31, 0x21644Cu);
    ctx->pc = 0x216448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216444u;
    // 0x216448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x216444u, 0x21644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21644Cu;
label_21644c:
    // 0x21644c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21644Cu;
    {
        const bool branch_taken_0x21644c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21644c) {
            ctx->pc = 0x21645Cu;
            goto label_21645c;
        }
    }
    ctx->pc = 0x216454u;
    // 0x216454: 0xc0b679c  jal         func_2D9E70
    ctx->pc = 0x216454u;
    SET_GPR_U32(ctx, 31, 0x21645Cu);
    ctx->pc = 0x216458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216454u;
    // 0x216458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E70u, 0x216454u, 0x21645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21645Cu;
label_21645c:
    // 0x21645c: 0xc089a28  jal         func_2268A0
    ctx->pc = 0x21645Cu;
    SET_GPR_U32(ctx, 31, 0x216464u);
    ctx->pc = 0x216460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21645Cu;
    // 0x216460: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2268A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268A0u, 0x21645Cu, 0x216464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216464u;
label_216464:
    // 0x216464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216468:
    // 0x216468: 0xc089912  jal         func_226448
    ctx->pc = 0x216468u;
    SET_GPR_U32(ctx, 31, 0x216470u);
    ctx->pc = 0x21646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216468u;
    // 0x21646c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x216468u, 0x216470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216470u;
label_216470:
    // 0x216470: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x216470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x216474: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x216474u;
    {
        const bool branch_taken_0x216474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216474u;
        // 0x216478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216474) {
            ctx->pc = 0x216468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216468;
        }
    }
    ctx->pc = 0x21647Cu;
    // 0x21647c: 0x8e2383c0  lw          $v1, -0x7C40($s1)
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x216480: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x216480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x216484: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216484u;
    {
        const bool branch_taken_0x216484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216484) {
            ctx->pc = 0x21649Cu;
            goto label_21649c;
        }
    }
    ctx->pc = 0x21648Cu;
    // 0x21648c: 0xc089828  jal         func_2260A0
    ctx->pc = 0x21648Cu;
    SET_GPR_U32(ctx, 31, 0x216494u);
    ctx->pc = 0x216490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21648Cu;
    // 0x216490: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260A0u, 0x21648Cu, 0x216494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216494u;
label_216494:
    // 0x216494: 0xc08f236  jal         func_23C8D8
    ctx->pc = 0x216494u;
    SET_GPR_U32(ctx, 31, 0x21649Cu);
    ctx->pc = 0x23C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C8D8u, 0x216494u, 0x21649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21649Cu;
label_21649c:
    // 0x21649c: 0xc0821ce  jal         func_208738
    ctx->pc = 0x21649Cu;
    SET_GPR_U32(ctx, 31, 0x2164A4u);
    ctx->pc = 0x2164A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21649Cu;
    // 0x2164a0: 0x92440005  lbu         $a0, 0x5($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x21649Cu, 0x2164A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164A4u;
label_2164a4:
    // 0x2164a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2164a8: 0x8f84c91c  lw          $a0, -0x36E4($gp)
    ctx->pc = 0x2164a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
    // 0x2164ac: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2164acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2164b0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2164B0u;
    {
        const bool branch_taken_0x2164b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2164B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164B0u;
        // 0x2164b4: 0xac43886c  sw          $v1, -0x7794($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164b0) {
            ctx->pc = 0x2164C8u;
            goto label_2164c8;
        }
    }
    ctx->pc = 0x2164B8u;
    // 0x2164b8: 0xc0a6100  jal         func_298400
    ctx->pc = 0x2164B8u;
    SET_GPR_U32(ctx, 31, 0x2164C0u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x2164B8u, 0x2164C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164C0u;
label_2164c0:
    // 0x2164c0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2164C0u;
    {
        const bool branch_taken_0x2164c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2164c0) {
            ctx->pc = 0x2164C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2164C0u;
            // 0x2164c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2164F8u;
            goto label_2164f8;
        }
    }
    ctx->pc = 0x2164C8u;
label_2164c8:
    // 0x2164c8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2164c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2164cc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2164ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2164d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2164d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2164d4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2164d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2164d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2164d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2164dc: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2164dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2164e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2164e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2164e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2164e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164ec: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2164ECu;
    SET_GPR_U32(ctx, 31, 0x2164F4u);
    ctx->pc = 0x2164F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164ECu;
    // 0x2164f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2164ECu, 0x2164F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164F4u;
label_2164f4:
    // 0x2164f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2164f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2164f8:
    // 0x2164f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2164f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2164fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x216504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216508: 0xaf80c910  sw          $zero, -0x36F0($gp)
    ctx->pc = 0x216508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953232), GPR_U32(ctx, 0));
    // 0x21650c: 0xaf80c914  sw          $zero, -0x36EC($gp)
    ctx->pc = 0x21650cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953236), GPR_U32(ctx, 0));
    // 0x216510: 0x3e00008  jr          $ra
    ctx->pc = 0x216510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216510u;
        // 0x216514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216518u;
}
