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

// Function: sub_00240628
// Address: 0x240628 - 0x240768
void sub_00240628_0x240628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240628_0x240628");
#endif

    switch (ctx->pc) {
        case 0x240640u: goto label_240640;
        case 0x240668u: goto label_240668;
        case 0x240690u: goto label_240690;
        case 0x2406e0u: goto label_2406e0;
        case 0x24072cu: goto label_24072c;
        default: break;
    }

    ctx->pc = 0x240628u;

    // 0x240628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24062c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240638: 0xc0c5ad2  jal         func_316B48
    ctx->pc = 0x240638u;
    SET_GPR_U32(ctx, 31, 0x240640u);
    ctx->pc = 0x24063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240638u;
    // 0x24063c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316B48u, 0x240638u, 0x240640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240640u;
label_240640:
    // 0x240640: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x240640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x240644: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x240644u;
    {
        const bool branch_taken_0x240644 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x240648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240644u;
        // 0x240648: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240644) {
            ctx->pc = 0x2406B0u;
            goto label_2406b0;
        }
    }
    ctx->pc = 0x24064Cu;
    // 0x24064c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x240650: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x240650u;
    {
        const bool branch_taken_0x240650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240650) {
            ctx->pc = 0x240654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240650u;
            // 0x240654: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2406A0u;
            goto label_2406a0;
        }
    }
    ctx->pc = 0x240658u;
    // 0x240658: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24065c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240660: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x240660u;
    SET_GPR_U32(ctx, 31, 0x240668u);
    ctx->pc = 0x240664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240660u;
    // 0x240664: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x240660u, 0x240668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240668u;
label_240668:
    // 0x240668: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x24066c: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x24066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x240670: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x240670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x240674: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x240678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24067c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240680: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x240680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x240684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240688: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x240688u;
    SET_GPR_U32(ctx, 31, 0x240690u);
    ctx->pc = 0x24068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240688u;
    // 0x24068c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x240688u, 0x240690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240690u;
label_240690:
    // 0x240690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240694: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x240694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x240698: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x240698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x24069c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2406a0:
    // 0x2406a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2406A0u;
    {
        const bool branch_taken_0x2406a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2406A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406A0u;
        // 0x2406a4: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406a0) {
            ctx->pc = 0x2406B0u;
            goto label_2406b0;
        }
    }
    ctx->pc = 0x2406A8u;
    // 0x2406a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2406a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2406ac: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x2406acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_2406b0:
    // 0x2406b0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2406b4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2406B4u;
    {
        const bool branch_taken_0x2406b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2406B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406B4u;
        // 0x2406b8: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406b4) {
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x2406BCu;
    // 0x2406bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2406bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2406c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2406C0u;
    {
        const bool branch_taken_0x2406c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2406c0) {
            ctx->pc = 0x2406C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2406C0u;
            // 0x2406c4: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2406E8u;
            goto label_2406e8;
        }
    }
    ctx->pc = 0x2406C8u;
    // 0x2406c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2406c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2406cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2406ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2406d0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x2406d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x2406d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2406d8: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x2406D8u;
    SET_GPR_U32(ctx, 31, 0x2406E0u);
    ctx->pc = 0x2406DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2406D8u;
    // 0x2406dc: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x2406D8u, 0x2406E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2406E0u;
label_2406e0:
    // 0x2406e0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2406e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2406e4:
    // 0x2406e4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2406e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2406e8:
    // 0x2406e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2406E8u;
    {
        const bool branch_taken_0x2406e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2406ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E8u;
        // 0x2406ec: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e8) {
            ctx->pc = 0x240718u;
            goto label_240718;
        }
    }
    ctx->pc = 0x2406F0u;
    // 0x2406f0: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2406f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2406f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2406f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x240700: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240700u;
    {
        const bool branch_taken_0x240700 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x240704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240700u;
        // 0x240704: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240700) {
            ctx->pc = 0x24071Cu;
            goto label_24071c;
        }
    }
    ctx->pc = 0x240708u;
    // 0x240708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24070c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24070Cu;
    {
        const bool branch_taken_0x24070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24070Cu;
        // 0x240710: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24070c) {
            ctx->pc = 0x24071Cu;
            goto label_24071c;
        }
    }
    ctx->pc = 0x240714u;
    // 0x240714: 0x0  nop
    ctx->pc = 0x240714u;
    // NOP
label_240718:
    // 0x240718: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x240718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_24071c:
    // 0x24071c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x240720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240724: 0xc0900d2  jal         func_240348
    ctx->pc = 0x240724u;
    SET_GPR_U32(ctx, 31, 0x24072Cu);
    ctx->pc = 0x240728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240724u;
    // 0x240728: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240348u, 0x240724u, 0x24072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24072Cu;
label_24072c:
    // 0x24072c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x240730: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x240730u;
    {
        const bool branch_taken_0x240730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x240734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240730u;
        // 0x240734: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240730) {
            ctx->pc = 0x240748u;
            goto label_240748;
        }
    }
    ctx->pc = 0x240738u;
    // 0x240738: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x240738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24073c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x24073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x240740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240740u;
    {
        const bool branch_taken_0x240740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240740u;
        // 0x240744: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240740) {
            ctx->pc = 0x240750u;
            goto label_240750;
        }
    }
    ctx->pc = 0x240748u;
label_240748:
    // 0x240748: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x240748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24074c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_240750:
    // 0x240750: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x240750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x240754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24075c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240760: 0x3e00008  jr          $ra
    ctx->pc = 0x240760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240760u;
        // 0x240764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240768u;
}
