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

// Function: sub_00210520
// Address: 0x210520 - 0x210840
void sub_00210520_0x210520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210520_0x210520");
#endif

    switch (ctx->pc) {
        case 0x210578u: goto label_210578;
        case 0x21059cu: goto label_21059c;
        case 0x2105b4u: goto label_2105b4;
        case 0x2105fcu: goto label_2105fc;
        case 0x210604u: goto label_210604;
        case 0x21061cu: goto label_21061c;
        case 0x2106a0u: goto label_2106a0;
        case 0x2106b8u: goto label_2106b8;
        case 0x210720u: goto label_210720;
        case 0x210760u: goto label_210760;
        case 0x210778u: goto label_210778;
        case 0x2107c8u: goto label_2107c8;
        case 0x2107e0u: goto label_2107e0;
        case 0x210800u: goto label_210800;
        default: break;
    }

    ctx->pc = 0x210520u;

    // 0x210520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x210528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21052c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210530: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x210530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21053c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210540: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210544: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x210544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x210548: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x21054c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x210550: 0x86510096  lh          $s1, 0x96($s2)
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x210554: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x210554u;
    {
        const bool branch_taken_0x210554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210554u;
        // 0x210558: 0x8653009a  lh          $s3, 0x9A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210554) {
            ctx->pc = 0x21061Cu;
            goto label_21061c;
        }
    }
    ctx->pc = 0x21055Cu;
    // 0x21055c: 0x52800030  beql        $s4, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x21055Cu;
    {
        const bool branch_taken_0x21055c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21055c) {
            ctx->pc = 0x210560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21055Cu;
            // 0x210560: 0x924201bb  lbu         $v0, 0x1BB($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210620u;
            goto label_210620;
        }
    }
    ctx->pc = 0x210564u;
    // 0x210564: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x210568: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x210568u;
    {
        const bool branch_taken_0x210568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210568) {
            ctx->pc = 0x21056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210568u;
            // 0x21056c: 0x864202be  lh          $v0, 0x2BE($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 702)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210580u;
            goto label_210580;
        }
    }
    ctx->pc = 0x210570u;
    // 0x210570: 0xc09597a  jal         func_2565E8
    ctx->pc = 0x210570u;
    SET_GPR_U32(ctx, 31, 0x210578u);
    ctx->pc = 0x210574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210570u;
    // 0x210574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2565E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2565E8u, 0x210570u, 0x210578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210578u;
label_210578:
    // 0x210578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x210578u;
    {
        const bool branch_taken_0x210578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210578u;
        // 0x21057c: 0x86430040  lh          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210578) {
            ctx->pc = 0x2105A0u;
            goto label_2105a0;
        }
    }
    ctx->pc = 0x210580u;
label_210580:
    // 0x210580: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210580u;
    {
        const bool branch_taken_0x210580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210580u;
        // 0x210584: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210580) {
            ctx->pc = 0x21059Cu;
            goto label_21059c;
        }
    }
    ctx->pc = 0x210588u;
    // 0x210588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21058c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21058Cu;
    {
        const bool branch_taken_0x21058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21058c) {
            ctx->pc = 0x210590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21058Cu;
            // 0x210590: 0x86430040  lh          $v1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2105A0u;
            goto label_2105a0;
        }
    }
    ctx->pc = 0x210594u;
    // 0x210594: 0xc09597a  jal         func_2565E8
    ctx->pc = 0x210594u;
    SET_GPR_U32(ctx, 31, 0x21059Cu);
    ctx->pc = 0x210598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210594u;
    // 0x210598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2565E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2565E8u, 0x210594u, 0x21059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21059Cu;
label_21059c:
    // 0x21059c: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x21059cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_2105a0:
    // 0x2105a0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2105a4: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2105A4u;
    {
        const bool branch_taken_0x2105a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2105a4) {
            ctx->pc = 0x2105A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105A4u;
            // 0x2105a8: 0x8643003e  lh          $v1, 0x3E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210608u;
            goto label_210608;
        }
    }
    ctx->pc = 0x2105ACu;
    // 0x2105ac: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x2105ACu;
    SET_GPR_U32(ctx, 31, 0x2105B4u);
    ctx->pc = 0x2105B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105ACu;
    // 0x2105b0: 0x86440042  lh          $a0, 0x42($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x2105ACu, 0x2105B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105B4u;
label_2105b4:
    // 0x2105b4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2105b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2105b8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2105B8u;
    {
        const bool branch_taken_0x2105b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2105b8) {
            ctx->pc = 0x2105BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105B8u;
            // 0x2105bc: 0x8643003e  lh          $v1, 0x3E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210608u;
            goto label_210608;
        }
    }
    ctx->pc = 0x2105C0u;
    // 0x2105c0: 0x924201bb  lbu         $v0, 0x1BB($s2)
    ctx->pc = 0x2105c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
    // 0x2105c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2105C4u;
    {
        const bool branch_taken_0x2105c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2105c4) {
            ctx->pc = 0x2105C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105C4u;
            // 0x2105c8: 0x8f849720  lw          $a0, -0x68E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2105E0u;
            goto label_2105e0;
        }
    }
    ctx->pc = 0x2105CCu;
    // 0x2105cc: 0x86430180  lh          $v1, 0x180($s2)
    ctx->pc = 0x2105ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x2105d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2105d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2105d4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2105D4u;
    {
        const bool branch_taken_0x2105d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2105d4) {
            ctx->pc = 0x2105D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105D4u;
            // 0x2105d8: 0x8643003e  lh          $v1, 0x3E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210608u;
            goto label_210608;
        }
    }
    ctx->pc = 0x2105DCu;
    // 0x2105dc: 0x8f849720  lw          $a0, -0x68E0($gp)
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
label_2105e0:
    // 0x2105e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2105e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2105e4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2105e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2105e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2105e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2105ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2105ECu;
    {
        const bool branch_taken_0x2105ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2105ec) {
            ctx->pc = 0x2105FCu;
            goto label_2105fc;
        }
    }
    ctx->pc = 0x2105F4u;
    // 0x2105f4: 0xc08437a  jal         func_210DE8
    ctx->pc = 0x2105F4u;
    SET_GPR_U32(ctx, 31, 0x2105FCu);
    ctx->pc = 0x2105F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105F4u;
    // 0x2105f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210DE8u, 0x2105F4u, 0x2105FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105FCu;
label_2105fc:
    // 0x2105fc: 0xc083814  jal         func_20E050
    ctx->pc = 0x2105FCu;
    SET_GPR_U32(ctx, 31, 0x210604u);
    ctx->pc = 0x210600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105FCu;
    // 0x210600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E050u, 0x2105FCu, 0x210604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210604u;
label_210604:
    // 0x210604: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_210608:
    // 0x210608: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x21060c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21060Cu;
    {
        const bool branch_taken_0x21060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21060c) {
            ctx->pc = 0x210610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21060Cu;
            // 0x210610: 0x924201bb  lbu         $v0, 0x1BB($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210620u;
            goto label_210620;
        }
    }
    ctx->pc = 0x210614u;
    // 0x210614: 0xc0837ce  jal         func_20DF38
    ctx->pc = 0x210614u;
    SET_GPR_U32(ctx, 31, 0x21061Cu);
    ctx->pc = 0x210618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210614u;
    // 0x210618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF38u, 0x210614u, 0x21061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21061Cu;
label_21061c:
    // 0x21061c: 0x924201bb  lbu         $v0, 0x1BB($s2)
    ctx->pc = 0x21061cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
label_210620:
    // 0x210620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210620u;
    {
        const bool branch_taken_0x210620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210620u;
        // 0x210624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210620) {
            ctx->pc = 0x210634u;
            goto label_210634;
        }
    }
    ctx->pc = 0x210628u;
    // 0x210628: 0x86430180  lh          $v1, 0x180($s2)
    ctx->pc = 0x210628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x21062c: 0x5062007d  beql        $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x21062Cu;
    {
        const bool branch_taken_0x21062c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21062c) {
            ctx->pc = 0x210630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21062Cu;
            // 0x210630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210824u;
            goto label_210824;
        }
    }
    ctx->pc = 0x210634u;
label_210634:
    // 0x210634: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x210634u;
    {
        const bool branch_taken_0x210634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x210634) {
            ctx->pc = 0x210638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210634u;
            // 0x210638: 0x924201f8  lbu         $v0, 0x1F8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21064Cu;
            goto label_21064c;
        }
    }
    ctx->pc = 0x21063Cu;
    // 0x21063c: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x210640: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x210640u;
    {
        const bool branch_taken_0x210640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210640u;
        // 0x210644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210640) {
            ctx->pc = 0x210824u;
            goto label_210824;
        }
    }
    ctx->pc = 0x210648u;
    // 0x210648: 0x924201f8  lbu         $v0, 0x1F8($s2)
    ctx->pc = 0x210648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
label_21064c:
    // 0x21064c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21064Cu;
    {
        const bool branch_taken_0x21064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21064Cu;
        // 0x210650: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21064c) {
            ctx->pc = 0x21065Cu;
            goto label_21065c;
        }
    }
    ctx->pc = 0x210654u;
    // 0x210654: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x210658: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
label_21065c:
    // 0x21065c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x21065cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210660u;
    {
        const bool branch_taken_0x210660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210660u;
        // 0x210664: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210660) {
            ctx->pc = 0x210680u;
            goto label_210680;
        }
    }
    ctx->pc = 0x210668u;
    // 0x210668: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x210668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x21066c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21066Cu;
    {
        const bool branch_taken_0x21066c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21066c) {
            ctx->pc = 0x210680u;
            goto label_210680;
        }
    }
    ctx->pc = 0x210674u;
    // 0x210674: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x210674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210678: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x210678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21067c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21067cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210680:
    // 0x210680: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x210684: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x210684u;
    {
        const bool branch_taken_0x210684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210684u;
        // 0x210688: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210684) {
            ctx->pc = 0x210740u;
            goto label_210740;
        }
    }
    ctx->pc = 0x21068Cu;
    // 0x21068c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x21068Cu;
    {
        const bool branch_taken_0x21068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21068c) {
            ctx->pc = 0x210690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21068Cu;
            // 0x210690: 0x8e440140  lw          $a0, 0x140($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210744u;
            goto label_210744;
        }
    }
    ctx->pc = 0x210694u;
    // 0x210694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210694u;
    {
        const bool branch_taken_0x210694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210694u;
        // 0x210698: 0x8c900030  lw          $s0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210694) {
            ctx->pc = 0x2106A8u;
            goto label_2106a8;
        }
    }
    ctx->pc = 0x21069Cu;
    // 0x21069c: 0x0  nop
    ctx->pc = 0x21069cu;
    // NOP
label_2106a0:
    // 0x2106a0: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x2106a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2106a4: 0x0  nop
    ctx->pc = 0x2106a4u;
    // NOP
label_2106a8:
    // 0x2106a8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2106a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2106ac: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2106ACu;
    {
        const bool branch_taken_0x2106ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2106ac) {
            ctx->pc = 0x2106B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106ACu;
            // 0x2106b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210734u;
            goto label_210734;
        }
    }
    ctx->pc = 0x2106B4u;
    // 0x2106b4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2106b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_2106b8:
    // 0x2106b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2106B8u;
    {
        const bool branch_taken_0x2106b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106B8u;
        // 0x2106bc: 0x3062bfff  andi        $v0, $v1, 0xBFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106b8) {
            ctx->pc = 0x2106D8u;
            goto label_2106d8;
        }
    }
    ctx->pc = 0x2106C0u;
    // 0x2106c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2106c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2106c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2106C4u;
    {
        const bool branch_taken_0x2106c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106C4u;
        // 0x2106c8: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106c4) {
            ctx->pc = 0x210714u;
            goto label_210714;
        }
    }
    ctx->pc = 0x2106CCu;
    // 0x2106cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2106CCu;
    {
        const bool branch_taken_0x2106cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106CCu;
        // 0x2106d0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106cc) {
            ctx->pc = 0x210724u;
            goto label_210724;
        }
    }
    ctx->pc = 0x2106D4u;
    // 0x2106d4: 0x0  nop
    ctx->pc = 0x2106d4u;
    // NOP
label_2106d8:
    // 0x2106d8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2106d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2106dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2106DCu;
    {
        const bool branch_taken_0x2106dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106DCu;
        // 0x2106e0: 0x3062dfff  andi        $v0, $v1, 0xDFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106dc) {
            ctx->pc = 0x2106F8u;
            goto label_2106f8;
        }
    }
    ctx->pc = 0x2106E4u;
    // 0x2106e4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2106e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2106e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2106E8u;
    {
        const bool branch_taken_0x2106e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106E8u;
        // 0x2106ec: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106e8) {
            ctx->pc = 0x210714u;
            goto label_210714;
        }
    }
    ctx->pc = 0x2106F0u;
    // 0x2106f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2106F0u;
    {
        const bool branch_taken_0x2106f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106F0u;
        // 0x2106f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106f0) {
            ctx->pc = 0x210724u;
            goto label_210724;
        }
    }
    ctx->pc = 0x2106F8u;
label_2106f8:
    // 0x2106f8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2106f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2106fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2106FCu;
    {
        const bool branch_taken_0x2106fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2106fc) {
            ctx->pc = 0x210700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106FCu;
            // 0x210700: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210724u;
            goto label_210724;
        }
    }
    ctx->pc = 0x210704u;
    // 0x210704: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210708: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210708u;
    {
        const bool branch_taken_0x210708 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x210708) {
            ctx->pc = 0x21070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210708u;
            // 0x21070c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210724u;
            goto label_210724;
        }
    }
    ctx->pc = 0x210710u;
    // 0x210710: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_210714:
    // 0x210714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210718: 0xc083892  jal         func_20E248
    ctx->pc = 0x210718u;
    SET_GPR_U32(ctx, 31, 0x210720u);
    ctx->pc = 0x21071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210718u;
    // 0x21071c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210718u, 0x210720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210720u;
label_210720:
    // 0x210720: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x210720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_210724:
    // 0x210724: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x210724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210728: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x210728u;
    {
        const bool branch_taken_0x210728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210728u;
        // 0x21072c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210728) {
            ctx->pc = 0x2106B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2106b8;
        }
    }
    ctx->pc = 0x210730u;
    // 0x210730: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x210730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_210734:
    // 0x210734: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x210734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210738: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x210738u;
    {
        const bool branch_taken_0x210738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210738) {
            ctx->pc = 0x21073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210738u;
            // 0x21073c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2106a0;
        }
    }
    ctx->pc = 0x210740u;
label_210740:
    // 0x210740: 0x8e440140  lw          $a0, 0x140($s2)
    ctx->pc = 0x210740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
label_210744:
    // 0x210744: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x210744u;
    {
        const bool branch_taken_0x210744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x210744) {
            ctx->pc = 0x210748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210744u;
            // 0x210748: 0x924201f8  lbu         $v0, 0x1F8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21078Cu;
            goto label_21078c;
        }
    }
    ctx->pc = 0x21074Cu;
    // 0x21074c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x21074cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x210750: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210754: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x210754u;
    {
        const bool branch_taken_0x210754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210754u;
        // 0x210758: 0x865100a6  lh          $s1, 0xA6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 166)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210754) {
            ctx->pc = 0x210788u;
            goto label_210788;
        }
    }
    ctx->pc = 0x21075Cu;
    // 0x21075c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21075cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_210760:
    // 0x210760: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210760u;
    {
        const bool branch_taken_0x210760 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x210760) {
            ctx->pc = 0x210764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210760u;
            // 0x210764: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21077Cu;
            goto label_21077c;
        }
    }
    ctx->pc = 0x210768u;
    // 0x210768: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x210768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x21076c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210770: 0xc083892  jal         func_20E248
    ctx->pc = 0x210770u;
    SET_GPR_U32(ctx, 31, 0x210778u);
    ctx->pc = 0x210774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210770u;
    // 0x210774: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210770u, 0x210778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210778u;
label_210778:
    // 0x210778: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x210778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21077c:
    // 0x21077c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21077cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210780: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x210780u;
    {
        const bool branch_taken_0x210780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210780) {
            ctx->pc = 0x210760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210760;
        }
    }
    ctx->pc = 0x210788u;
label_210788:
    // 0x210788: 0x924201f8  lbu         $v0, 0x1F8($s2)
    ctx->pc = 0x210788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
label_21078c:
    // 0x21078c: 0x8651009e  lh          $s1, 0x9E($s2)
    ctx->pc = 0x21078cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
    // 0x210790: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210790u;
    {
        const bool branch_taken_0x210790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210790u;
        // 0x210794: 0x865300a0  lh          $s3, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210790) {
            ctx->pc = 0x2107A4u;
            goto label_2107a4;
        }
    }
    ctx->pc = 0x210798u;
    // 0x210798: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x21079c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2107a0: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x2107a0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
label_2107a4:
    // 0x2107a4: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2107a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2107a8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2107ac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2107ACu;
    {
        const bool branch_taken_0x2107ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107ACu;
        // 0x2107b0: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107ac) {
            ctx->pc = 0x210820u;
            goto label_210820;
        }
    }
    ctx->pc = 0x2107B4u;
    // 0x2107b4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2107B4u;
    {
        const bool branch_taken_0x2107b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107b4) {
            ctx->pc = 0x2107B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107B4u;
            // 0x2107b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210824u;
            goto label_210824;
        }
    }
    ctx->pc = 0x2107BCu;
    // 0x2107bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2107BCu;
    {
        const bool branch_taken_0x2107bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107BCu;
        // 0x2107c0: 0x8c900030  lw          $s0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107bc) {
            ctx->pc = 0x2107D0u;
            goto label_2107d0;
        }
    }
    ctx->pc = 0x2107C4u;
    // 0x2107c4: 0x0  nop
    ctx->pc = 0x2107c4u;
    // NOP
label_2107c8:
    // 0x2107c8: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2107cc: 0x0  nop
    ctx->pc = 0x2107ccu;
    // NOP
label_2107d0:
    // 0x2107d0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2107d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2107d4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2107D4u;
    {
        const bool branch_taken_0x2107d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107d4) {
            ctx->pc = 0x2107D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107D4u;
            // 0x2107d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210814u;
            goto label_210814;
        }
    }
    ctx->pc = 0x2107DCu;
    // 0x2107dc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2107dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2107e0:
    // 0x2107e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2107E0u;
    {
        const bool branch_taken_0x2107e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107E0u;
        // 0x2107e4: 0x30627fff  andi        $v0, $v1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107e0) {
            ctx->pc = 0x210800u;
            goto label_210800;
        }
    }
    ctx->pc = 0x2107E8u;
    // 0x2107e8: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2107E8u;
    {
        const bool branch_taken_0x2107e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2107e8) {
            ctx->pc = 0x2107ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107E8u;
            // 0x2107ec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210804u;
            goto label_210804;
        }
    }
    ctx->pc = 0x2107F0u;
    // 0x2107f0: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2107f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2107f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107f8: 0xc083892  jal         func_20E248
    ctx->pc = 0x2107F8u;
    SET_GPR_U32(ctx, 31, 0x210800u);
    ctx->pc = 0x2107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2107F8u;
    // 0x2107fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x2107F8u, 0x210800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210800u;
label_210800:
    // 0x210800: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_210804:
    // 0x210804: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x210804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210808: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x210808u;
    {
        const bool branch_taken_0x210808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210808u;
        // 0x21080c: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210808) {
            ctx->pc = 0x2107E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2107e0;
        }
    }
    ctx->pc = 0x210810u;
    // 0x210810: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x210810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_210814:
    // 0x210814: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x210814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210818: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x210818u;
    {
        const bool branch_taken_0x210818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210818) {
            ctx->pc = 0x21081Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210818u;
            // 0x21081c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2107C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2107c8;
        }
    }
    ctx->pc = 0x210820u;
label_210820:
    // 0x210820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210824:
    // 0x210824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21082c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21082cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210830: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210834: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210838: 0x3e00008  jr          $ra
    ctx->pc = 0x210838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210838u;
        // 0x21083c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210840u;
}
