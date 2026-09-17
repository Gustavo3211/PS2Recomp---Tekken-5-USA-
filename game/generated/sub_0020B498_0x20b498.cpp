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

// Function: sub_0020B498
// Address: 0x20b498 - 0x20b6d8
void sub_0020B498_0x20b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B498_0x20b498");
#endif

    switch (ctx->pc) {
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b53cu: goto label_20b53c;
        case 0x20b594u: goto label_20b594;
        case 0x20b59cu: goto label_20b59c;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b5f4u: goto label_20b5f4;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b608u: goto label_20b608;
        case 0x20b614u: goto label_20b614;
        case 0x20b624u: goto label_20b624;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b634u: goto label_20b634;
        case 0x20b670u: goto label_20b670;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6c0u: goto label_20b6c0;
        default: break;
    }

    ctx->pc = 0x20b498u;

    // 0x20b498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b49c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b4a0: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x20b4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x20b4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b4a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20b4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20b4b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20b4b4: 0xc0a3a1a  jal         func_28E868
    ctx->pc = 0x20B4B4u;
    SET_GPR_U32(ctx, 31, 0x20B4BCu);
    ctx->pc = 0x20B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4B4u;
    // 0x20b4b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E868u, 0x20B4B4u, 0x20B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4BCu;
label_20b4bc:
    // 0x20b4bc: 0xc0a0f90  jal         func_283E40
    ctx->pc = 0x20B4BCu;
    SET_GPR_U32(ctx, 31, 0x20B4C4u);
    ctx->pc = 0x283E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283E40u, 0x20B4BCu, 0x20B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4C4u;
label_20b4c4:
    // 0x20b4c4: 0x264283c0  addiu       $v0, $s2, -0x7C40
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935488));
    // 0x20b4c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20b4cc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20b4d0: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20B4D0u;
    {
        const bool branch_taken_0x20b4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4D0u;
        // 0x20b4d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4d0) {
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20B4D8u;
    // 0x20b4d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20b4dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b4e0: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20b4e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20b4e8: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20b4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20b4ec: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B4ECu;
    {
        const bool branch_taken_0x20b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20b4ec) {
            ctx->pc = 0x20B4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B4ECu;
            // 0x20b4f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B508u;
            goto label_20b508;
        }
    }
    ctx->pc = 0x20B4F4u;
    // 0x20b4f4: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x20b4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20b4f8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x20b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20b4fc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B4FCu;
    {
        const bool branch_taken_0x20b4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b4fc) {
            ctx->pc = 0x20B500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B4FCu;
            // 0x20b500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20B504u;
    // 0x20b504: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20b508:
    // 0x20b508: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20b508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20b50c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B50Cu;
    {
        const bool branch_taken_0x20b50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x20B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B50Cu;
        // 0x20b510: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b50c) {
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20B514u;
    // 0x20b514: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20b518: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B518u;
    {
        const bool branch_taken_0x20b518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b518) {
            ctx->pc = 0x20B51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B518u;
            // 0x20b51c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20B520u;
label_20b520:
    // 0x20b520: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x20B520u;
    {
        const bool branch_taken_0x20b520 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B520u;
        // 0x20b524: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b520) {
            ctx->pc = 0x20B658u;
            goto label_20b658;
        }
    }
    ctx->pc = 0x20B528u;
    // 0x20b528: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x20b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x20b52c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x20B52Cu;
    {
        const bool branch_taken_0x20b52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B52Cu;
        // 0x20b530: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b52c) {
            ctx->pc = 0x20B65Cu;
            goto label_20b65c;
        }
    }
    ctx->pc = 0x20B534u;
    // 0x20b534: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B534u;
    SET_GPR_U32(ctx, 31, 0x20B53Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B534u, 0x20B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B53Cu;
label_20b53c:
    // 0x20b53c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x20b540: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x20B540u;
    {
        const bool branch_taken_0x20b540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B540u;
        // 0x20b544: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b540) {
            ctx->pc = 0x20B658u;
            goto label_20b658;
        }
    }
    ctx->pc = 0x20B548u;
    // 0x20b548: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20b54c: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B54Cu;
    {
        const bool branch_taken_0x20b54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x20b54c) {
            ctx->pc = 0x20B550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B54Cu;
            // 0x20b550: 0x86020040  lh          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B56Cu;
            goto label_20b56c;
        }
    }
    ctx->pc = 0x20B554u;
    // 0x20b554: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x20b554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20b558: 0x86020090  lh          $v0, 0x90($s0)
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x20b55c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20b55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20b560: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B560u;
            // 0x20b564: 0x265283c0  addiu       $s2, $s2, -0x7C40 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B58Cu;
            goto label_20b58c;
        }
    }
    ctx->pc = 0x20B568u;
    // 0x20b568: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_20b56c:
    // 0x20b56c: 0x1044003b  beq         $v0, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20B56Cu;
    {
        const bool branch_taken_0x20b56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B56Cu;
        // 0x20b570: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b56c) {
            ctx->pc = 0x20B65Cu;
            goto label_20b65c;
        }
    }
    ctx->pc = 0x20B574u;
    // 0x20b574: 0x86030090  lh          $v1, 0x90($s0)
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x20b578: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20b57c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20b57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20b580: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20B580u;
    {
        const bool branch_taken_0x20b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B580u;
        // 0x20b584: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b580) {
            ctx->pc = 0x20B65Cu;
            goto label_20b65c;
        }
    }
    ctx->pc = 0x20B588u;
    // 0x20b588: 0x265283c0  addiu       $s2, $s2, -0x7C40
    ctx->pc = 0x20b588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935488));
label_20b58c:
    // 0x20b58c: 0xc0899a8  jal         func_2266A0
    ctx->pc = 0x20B58Cu;
    SET_GPR_U32(ctx, 31, 0x20B594u);
    ctx->pc = 0x20B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B58Cu;
    // 0x20b590: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A0u, 0x20B58Cu, 0x20B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B594u;
label_20b594:
    // 0x20b594: 0xc086644  jal         func_219910
    ctx->pc = 0x20B594u;
    SET_GPR_U32(ctx, 31, 0x20B59Cu);
    ctx->pc = 0x20B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B594u;
    // 0x20b598: 0x9244002d  lbu         $a0, 0x2D($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x20B594u, 0x20B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B59Cu;
label_20b59c:
    // 0x20b59c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x20b5a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5a4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x20b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x20b5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5ac: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x20b5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b5b0: 0xc087fb8  jal         func_21FEE0
    ctx->pc = 0x20B5B0u;
    SET_GPR_U32(ctx, 31, 0x20B5B8u);
    ctx->pc = 0x20B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5B0u;
    // 0x20b5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEE0u, 0x20B5B0u, 0x20B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20B5B8u;
    {
        const bool branch_taken_0x20b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5B8u;
        // 0x20b5bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5b8) {
            ctx->pc = 0x20B5F4u;
            goto label_20b5f4;
        }
    }
    ctx->pc = 0x20B5C0u;
    // 0x20b5c0: 0x92440031  lbu         $a0, 0x31($s2)
    ctx->pc = 0x20b5c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x20b5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20b5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5cc: 0xc08806a  jal         func_2201A8
    ctx->pc = 0x20B5CCu;
    SET_GPR_U32(ctx, 31, 0x20B5D4u);
    ctx->pc = 0x20B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5CCu;
    // 0x20b5d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201A8u, 0x20B5CCu, 0x20B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5D4u;
label_20b5d4:
    // 0x20b5d4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x20b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x20b5d8: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x20b5d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x20b5dc: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x20b5e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20b5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5e4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20b5e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5ec: 0xc0a4e16  jal         func_293858
    ctx->pc = 0x20B5ECu;
    SET_GPR_U32(ctx, 31, 0x20B5F4u);
    ctx->pc = 0x20B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5ECu;
    // 0x20b5f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293858u, 0x20B5ECu, 0x20B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5F4u;
label_20b5f4:
    // 0x20b5f4: 0xc0821d0  jal         func_208740
    ctx->pc = 0x20B5F4u;
    SET_GPR_U32(ctx, 31, 0x20B5FCu);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x20B5F4u, 0x20B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5FCu;
label_20b5fc:
    // 0x20b5fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b600: 0xc0821ce  jal         func_208738
    ctx->pc = 0x20B600u;
    SET_GPR_U32(ctx, 31, 0x20B608u);
    ctx->pc = 0x20B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B600u;
    // 0x20b604: 0xaf82c8d0  sw          $v0, -0x3730($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x20B600u, 0x20B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B608u;
label_20b608:
    // 0x20b608: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20b60c: 0xc08244c  jal         func_209130
    ctx->pc = 0x20B60Cu;
    SET_GPR_U32(ctx, 31, 0x20B614u);
    ctx->pc = 0x20B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B60Cu;
    // 0x20b610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209130u, 0x20B60Cu, 0x20B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B614u;
label_20b614:
    // 0x20b614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b618: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x20b618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b61c: 0xc082162  jal         func_208588
    ctx->pc = 0x20B61Cu;
    SET_GPR_U32(ctx, 31, 0x20B624u);
    ctx->pc = 0x20B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B61Cu;
    // 0x20b620: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B61Cu, 0x20B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B624u;
label_20b624:
    // 0x20b624: 0xc082158  jal         func_208560
    ctx->pc = 0x20B624u;
    SET_GPR_U32(ctx, 31, 0x20B62Cu);
    ctx->pc = 0x208560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208560u, 0x20B624u, 0x20B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B62Cu;
label_20b62c:
    // 0x20b62c: 0xc08f022  jal         func_23C088
    ctx->pc = 0x20B62Cu;
    SET_GPR_U32(ctx, 31, 0x20B634u);
    ctx->pc = 0x20B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B62Cu;
    // 0x20b630: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x20B62Cu, 0x20B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B634u;
label_20b634:
    // 0x20b634: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20b638: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20b63c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x20b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20b640: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b644: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x20B644u;
    {
        const bool branch_taken_0x20b644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B644u;
        // 0x20b648: 0xac82886c  sw          $v0, -0x7794($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b644) {
            ctx->pc = 0x20B6C0u;
            goto label_20b6c0;
        }
    }
    ctx->pc = 0x20B64Cu;
    // 0x20b64c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20B64Cu;
    {
        const bool branch_taken_0x20b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B64Cu;
        // 0x20b650: 0xae400194  sw          $zero, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b64c) {
            ctx->pc = 0x20B6C0u;
            goto label_20b6c0;
        }
    }
    ctx->pc = 0x20B654u;
    // 0x20b654: 0x0  nop
    ctx->pc = 0x20b654u;
    // NOP
label_20b658:
    // 0x20b658: 0x8e4283c0  lw          $v0, -0x7C40($s2)
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
label_20b65c:
    // 0x20b65c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x20b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x20b660: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20B660u;
    {
        const bool branch_taken_0x20b660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b660) {
            ctx->pc = 0x20B6A4u;
            goto label_20b6a4;
        }
    }
    ctx->pc = 0x20B668u;
    // 0x20b668: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B668u;
    SET_GPR_U32(ctx, 31, 0x20B670u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B668u, 0x20B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B670u;
label_20b670:
    // 0x20b670: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x20b674: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20B674u;
    {
        const bool branch_taken_0x20b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B674u;
        // 0x20b678: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b674) {
            ctx->pc = 0x20B6A4u;
            goto label_20b6a4;
        }
    }
    ctx->pc = 0x20B67Cu;
    // 0x20b67c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x20b680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b684: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x20b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x20b688: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20b688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b68c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x20b690: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20b694: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20b698: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20b69c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x20B69Cu;
    SET_GPR_U32(ctx, 31, 0x20B6A4u);
    ctx->pc = 0x20B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B69Cu;
    // 0x20b6a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x20B69Cu, 0x20B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6A4u;
label_20b6a4:
    // 0x20b6a4: 0xc093720  jal         func_24DC80
    ctx->pc = 0x20B6A4u;
    SET_GPR_U32(ctx, 31, 0x20B6ACu);
    ctx->pc = 0x24DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC80u, 0x20B6A4u, 0x20B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6ACu;
label_20b6ac:
    // 0x20b6ac: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x20B6ACu;
    SET_GPR_U32(ctx, 31, 0x20B6B4u);
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x20B6ACu, 0x20B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6B4u;
label_20b6b4:
    // 0x20b6b4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x20b6b8: 0xc082162  jal         func_208588
    ctx->pc = 0x20B6B8u;
    SET_GPR_U32(ctx, 31, 0x20B6C0u);
    ctx->pc = 0x20B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6B8u;
    // 0x20b6bc: 0xaf80a530  sw          $zero, -0x5AD0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944048), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B6B8u, 0x20B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6C0u;
label_20b6c0:
    // 0x20b6c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b6c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b6c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b6cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6D0u;
        // 0x20b6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B6D8u;
}
