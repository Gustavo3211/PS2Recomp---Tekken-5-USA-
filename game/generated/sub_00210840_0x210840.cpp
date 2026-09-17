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

// Function: sub_00210840
// Address: 0x210840 - 0x210a78
void sub_00210840_0x210840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210840_0x210840");
#endif

    switch (ctx->pc) {
        case 0x2108a4u: goto label_2108a4;
        case 0x2108acu: goto label_2108ac;
        case 0x2108d4u: goto label_2108d4;
        case 0x2108ecu: goto label_2108ec;
        case 0x21090cu: goto label_21090c;
        case 0x210924u: goto label_210924;
        case 0x210940u: goto label_210940;
        case 0x21094cu: goto label_21094c;
        case 0x210974u: goto label_210974;
        case 0x210980u: goto label_210980;
        case 0x210990u: goto label_210990;
        case 0x2109a8u: goto label_2109a8;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109e0u: goto label_2109e0;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a54u: goto label_210a54;
        default: break;
    }

    ctx->pc = 0x210840u;

    // 0x210840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x210848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21084c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21084cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210854: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x210854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x210858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21085c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x210860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210864: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210868: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21086c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21086cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x210870: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210870u;
    {
        const bool branch_taken_0x210870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x210874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210870u;
        // 0x210874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210870) {
            ctx->pc = 0x210884u;
            goto label_210884;
        }
    }
    ctx->pc = 0x210878u;
    // 0x210878: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x210878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x21087c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21087Cu;
    {
        const bool branch_taken_0x21087c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21087c) {
            ctx->pc = 0x210888u;
            goto label_210888;
        }
    }
    ctx->pc = 0x210884u;
label_210884:
    // 0x210884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x210884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210888:
    // 0x210888: 0x14a00031  bnez        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x210888u;
    {
        const bool branch_taken_0x210888 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210888u;
        // 0x21088c: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210888) {
            ctx->pc = 0x210950u;
            goto label_210950;
        }
    }
    ctx->pc = 0x210890u;
    // 0x210890: 0x16600027  bnez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x210890u;
    {
        const bool branch_taken_0x210890 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x210894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210890u;
        // 0x210894: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210890) {
            ctx->pc = 0x210930u;
            goto label_210930;
        }
    }
    ctx->pc = 0x210898u;
    // 0x210898: 0x261188d0  addiu       $s1, $s0, -0x7730
    ctx->pc = 0x210898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x21089c: 0xc0837c0  jal         func_20DF00
    ctx->pc = 0x21089Cu;
    SET_GPR_U32(ctx, 31, 0x2108A4u);
    ctx->pc = 0x2108A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21089Cu;
    // 0x2108a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF00u, 0x21089Cu, 0x2108A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108A4u;
label_2108a4:
    // 0x2108a4: 0xc0837c0  jal         func_20DF00
    ctx->pc = 0x2108A4u;
    SET_GPR_U32(ctx, 31, 0x2108ACu);
    ctx->pc = 0x2108A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108A4u;
    // 0x2108a8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF00u, 0x2108A4u, 0x2108ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108ACu;
label_2108ac:
    // 0x2108ac: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2108b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2108b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2108b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2108B4u;
    {
        const bool branch_taken_0x2108b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108b4) {
            ctx->pc = 0x2108B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108B4u;
            // 0x2108b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2108F8u;
            goto label_2108f8;
        }
    }
    ctx->pc = 0x2108BCu;
    // 0x2108bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2108bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2108c0: 0x908201f7  lbu         $v0, 0x1F7($a0)
    ctx->pc = 0x2108c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 503)));
    // 0x2108c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2108C4u;
    {
        const bool branch_taken_0x2108c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108c4) {
            ctx->pc = 0x2108C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108C4u;
            // 0x2108c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2108D8u;
            goto label_2108d8;
        }
    }
    ctx->pc = 0x2108CCu;
    // 0x2108cc: 0xc0842be  jal         func_210AF8
    ctx->pc = 0x2108CCu;
    SET_GPR_U32(ctx, 31, 0x2108D4u);
    ctx->pc = 0x210AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AF8u, 0x2108CCu, 0x2108D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108D4u;
label_2108d4:
    // 0x2108d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2108d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2108d8:
    // 0x2108d8: 0x908201f7  lbu         $v0, 0x1F7($a0)
    ctx->pc = 0x2108d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 503)));
    // 0x2108dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2108DCu;
    {
        const bool branch_taken_0x2108dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108DCu;
        // 0x2108e0: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108dc) {
            ctx->pc = 0x210934u;
            goto label_210934;
        }
    }
    ctx->pc = 0x2108E4u;
    // 0x2108e4: 0xc0842be  jal         func_210AF8
    ctx->pc = 0x2108E4u;
    SET_GPR_U32(ctx, 31, 0x2108ECu);
    ctx->pc = 0x210AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AF8u, 0x2108E4u, 0x2108ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108ECu;
label_2108ec:
    // 0x2108ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2108ECu;
    {
        const bool branch_taken_0x2108ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108ECu;
        // 0x2108f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108ec) {
            ctx->pc = 0x210938u;
            goto label_210938;
        }
    }
    ctx->pc = 0x2108F4u;
    // 0x2108f4: 0x0  nop
    ctx->pc = 0x2108f4u;
    // NOP
label_2108f8:
    // 0x2108f8: 0x908201f7  lbu         $v0, 0x1F7($a0)
    ctx->pc = 0x2108f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 503)));
    // 0x2108fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2108FCu;
    {
        const bool branch_taken_0x2108fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108fc) {
            ctx->pc = 0x210900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108FCu;
            // 0x210900: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210910u;
            goto label_210910;
        }
    }
    ctx->pc = 0x210904u;
    // 0x210904: 0xc0842be  jal         func_210AF8
    ctx->pc = 0x210904u;
    SET_GPR_U32(ctx, 31, 0x21090Cu);
    ctx->pc = 0x210AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AF8u, 0x210904u, 0x21090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21090Cu;
label_21090c:
    // 0x21090c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_210910:
    // 0x210910: 0x908201f7  lbu         $v0, 0x1F7($a0)
    ctx->pc = 0x210910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 503)));
    // 0x210914: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210914u;
    {
        const bool branch_taken_0x210914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210914u;
        // 0x210918: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210914) {
            ctx->pc = 0x210934u;
            goto label_210934;
        }
    }
    ctx->pc = 0x21091Cu;
    // 0x21091c: 0xc0842be  jal         func_210AF8
    ctx->pc = 0x21091Cu;
    SET_GPR_U32(ctx, 31, 0x210924u);
    ctx->pc = 0x210AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AF8u, 0x21091Cu, 0x210924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210924u;
label_210924:
    // 0x210924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210924u;
    {
        const bool branch_taken_0x210924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210924u;
        // 0x210928: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210924) {
            ctx->pc = 0x210938u;
            goto label_210938;
        }
    }
    ctx->pc = 0x21092Cu;
    // 0x21092c: 0x0  nop
    ctx->pc = 0x21092cu;
    // NOP
label_210930:
    // 0x210930: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
label_210934:
    // 0x210934: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_210938:
    // 0x210938: 0xc084148  jal         func_210520
    ctx->pc = 0x210938u;
    SET_GPR_U32(ctx, 31, 0x210940u);
    ctx->pc = 0x21093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210938u;
    // 0x21093c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210520u, 0x210938u, 0x210940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210940u;
label_210940:
    // 0x210940: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x210944: 0xc084148  jal         func_210520
    ctx->pc = 0x210944u;
    SET_GPR_U32(ctx, 31, 0x21094Cu);
    ctx->pc = 0x210948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210944u;
    // 0x210948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210520u, 0x210944u, 0x21094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21094Cu;
label_21094c:
    // 0x21094c: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
label_210950:
    // 0x210950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210954: 0x26838858  addiu       $v1, $s4, -0x77A8
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x210958: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x210958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x21095c: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21095Cu;
    {
        const bool branch_taken_0x21095c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21095c) {
            ctx->pc = 0x2109C0u;
            goto label_2109c0;
        }
    }
    ctx->pc = 0x210964u;
    // 0x210964: 0x56600033  bnel        $s3, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x210964u;
    {
        const bool branch_taken_0x210964 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x210964) {
            ctx->pc = 0x210968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210964u;
            // 0x210968: 0x26828858  addiu       $v0, $s4, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A34u;
            goto label_210a34;
        }
    }
    ctx->pc = 0x21096Cu;
    // 0x21096c: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x21096Cu;
    SET_GPR_U32(ctx, 31, 0x210974u);
    ctx->pc = 0x210970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21096Cu;
    // 0x210970: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x21096Cu, 0x210974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210974u;
label_210974:
    // 0x210974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210978: 0xc09d480  jal         func_275200
    ctx->pc = 0x210978u;
    SET_GPR_U32(ctx, 31, 0x210980u);
    ctx->pc = 0x21097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210978u;
    // 0x21097c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x210978u, 0x210980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210980u;
label_210980:
    // 0x210980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210984: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x210984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x210988: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x210988u;
    {
        const bool branch_taken_0x210988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210988) {
            ctx->pc = 0x210A2Cu;
            goto label_210a2c;
        }
    }
    ctx->pc = 0x210990u;
label_210990:
    // 0x210990: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x210990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x210994: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x210998: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x210998u;
    {
        const bool branch_taken_0x210998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210998) {
            ctx->pc = 0x21099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210998u;
            // 0x21099c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2109ACu;
            goto label_2109ac;
        }
    }
    ctx->pc = 0x2109A0u;
    // 0x2109a0: 0xc0b41a0  jal         func_2D0680
    ctx->pc = 0x2109A0u;
    SET_GPR_U32(ctx, 31, 0x2109A8u);
    ctx->pc = 0x2109A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109A0u;
    // 0x2109a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0680u, 0x2109A0u, 0x2109A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109A8u;
label_2109a8:
    // 0x2109a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2109ac:
    // 0x2109ac: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2109acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2109b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2109B0u;
    {
        const bool branch_taken_0x2109b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B0u;
        // 0x2109b4: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109b0) {
            ctx->pc = 0x210990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210990;
        }
    }
    ctx->pc = 0x2109B8u;
    // 0x2109b8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2109B8u;
    {
        const bool branch_taken_0x2109b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2109b8) {
            ctx->pc = 0x210A2Cu;
            goto label_210a2c;
        }
    }
    ctx->pc = 0x2109C0u;
label_2109c0:
    // 0x2109c0: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2109C0u;
    SET_GPR_U32(ctx, 31, 0x2109C8u);
    ctx->pc = 0x2109C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109C0u;
    // 0x2109c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2109C0u, 0x2109C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109C8u;
label_2109c8:
    // 0x2109c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2109c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109cc: 0xc09d480  jal         func_275200
    ctx->pc = 0x2109CCu;
    SET_GPR_U32(ctx, 31, 0x2109D4u);
    ctx->pc = 0x2109D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109CCu;
    // 0x2109d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2109CCu, 0x2109D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109D4u;
label_2109d4:
    // 0x2109d4: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2109D4u;
    {
        const bool branch_taken_0x2109d4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2109D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D4u;
        // 0x2109d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109d4) {
            ctx->pc = 0x210A2Cu;
            goto label_210a2c;
        }
    }
    ctx->pc = 0x2109DCu;
    // 0x2109dc: 0x0  nop
    ctx->pc = 0x2109dcu;
    // NOP
label_2109e0:
    // 0x2109e0: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x2109e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2109e4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2109e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2109e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2109E8u;
    {
        const bool branch_taken_0x2109e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109E8u;
        // 0x2109ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109e8) {
            ctx->pc = 0x210A14u;
            goto label_210a14;
        }
    }
    ctx->pc = 0x2109F0u;
    // 0x2109f0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2109f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2109f4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2109f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2109f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2109F8u;
    {
        const bool branch_taken_0x2109f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109F8u;
        // 0x2109fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109f8) {
            ctx->pc = 0x210A0Cu;
            goto label_210a0c;
        }
    }
    ctx->pc = 0x210A00u;
    // 0x210a00: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x210A00u;
    {
        const bool branch_taken_0x210a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A00u;
        // 0x210a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a00) {
            ctx->pc = 0x210A0Cu;
            goto label_210a0c;
        }
    }
    ctx->pc = 0x210A08u;
    // 0x210a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a0c:
    // 0x210a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210A0Cu;
    {
        const bool branch_taken_0x210a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A0Cu;
        // 0x210a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a0c) {
            ctx->pc = 0x210A1Cu;
            goto label_210a1c;
        }
    }
    ctx->pc = 0x210A14u;
label_210a14:
    // 0x210a14: 0xc084148  jal         func_210520
    ctx->pc = 0x210A14u;
    SET_GPR_U32(ctx, 31, 0x210A1Cu);
    ctx->pc = 0x210A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A14u;
    // 0x210a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210520u, 0x210A14u, 0x210A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A1Cu;
label_210a1c:
    // 0x210a1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210a20: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x210a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210a24: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x210A24u;
    {
        const bool branch_taken_0x210a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A24u;
        // 0x210a28: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a24) {
            ctx->pc = 0x2109E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109e0;
        }
    }
    ctx->pc = 0x210A2Cu;
label_210a2c:
    // 0x210a2c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x210A2Cu;
    {
        const bool branch_taken_0x210a2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A2Cu;
        // 0x210a30: 0x26828858  addiu       $v0, $s4, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a2c) {
            ctx->pc = 0x210A54u;
            goto label_210a54;
        }
    }
    ctx->pc = 0x210A34u;
label_210a34:
    // 0x210a34: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x210a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x210a38: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x210a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x210a3c: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210A3Cu;
    {
        const bool branch_taken_0x210a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x210a3c) {
            ctx->pc = 0x210A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A3Cu;
            // 0x210a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A58u;
            goto label_210a58;
        }
    }
    ctx->pc = 0x210A44u;
    // 0x210a44: 0xc08f070  jal         func_23C1C0
    ctx->pc = 0x210A44u;
    SET_GPR_U32(ctx, 31, 0x210A4Cu);
    ctx->pc = 0x23C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C1C0u, 0x210A44u, 0x210A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A4Cu;
label_210a4c:
    // 0x210a4c: 0xc08f0a6  jal         func_23C298
    ctx->pc = 0x210A4Cu;
    SET_GPR_U32(ctx, 31, 0x210A54u);
    ctx->pc = 0x23C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C298u, 0x210A4Cu, 0x210A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A54u;
label_210a54:
    // 0x210a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210a58:
    // 0x210a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210a60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210a64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210a68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x210A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A6Cu;
        // 0x210a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210A74u;
    // 0x210a74: 0x0  nop
    ctx->pc = 0x210a74u;
    // NOP
    ctx->pc = 0x210a78u;
}
