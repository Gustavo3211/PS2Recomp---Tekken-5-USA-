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

// Function: sub_0021A528
// Address: 0x21a528 - 0x21ab38
void sub_0021A528_0x21a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A528_0x21a528");
#endif

    switch (ctx->pc) {
        case 0x21a568u: goto label_21a568;
        case 0x21a578u: goto label_21a578;
        case 0x21a5a8u: goto label_21a5a8;
        case 0x21a5d4u: goto label_21a5d4;
        case 0x21a5e8u: goto label_21a5e8;
        case 0x21a5fcu: goto label_21a5fc;
        case 0x21a640u: goto label_21a640;
        case 0x21a660u: goto label_21a660;
        case 0x21a674u: goto label_21a674;
        case 0x21a700u: goto label_21a700;
        case 0x21a710u: goto label_21a710;
        case 0x21a72cu: goto label_21a72c;
        case 0x21a750u: goto label_21a750;
        case 0x21a768u: goto label_21a768;
        case 0x21a788u: goto label_21a788;
        case 0x21a7a4u: goto label_21a7a4;
        case 0x21a858u: goto label_21a858;
        case 0x21a8a0u: goto label_21a8a0;
        case 0x21a8ecu: goto label_21a8ec;
        case 0x21a900u: goto label_21a900;
        case 0x21a964u: goto label_21a964;
        case 0x21a978u: goto label_21a978;
        case 0x21a9a0u: goto label_21a9a0;
        case 0x21a9c8u: goto label_21a9c8;
        case 0x21a9dcu: goto label_21a9dc;
        case 0x21aa20u: goto label_21aa20;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa70u: goto label_21aa70;
        case 0x21aa78u: goto label_21aa78;
        case 0x21aa94u: goto label_21aa94;
        case 0x21aa9cu: goto label_21aa9c;
        case 0x21aaf4u: goto label_21aaf4;
        default: break;
    }

    ctx->pc = 0x21a528u;

    // 0x21a528: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x21a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x21a52c: 0xffb501d8  sd          $s5, 0x1D8($sp)
    ctx->pc = 0x21a52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 21));
    // 0x21a530: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x21a530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a534: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x21a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x21a538: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21a538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a53c: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x21a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x21a540: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x21a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
    // 0x21a544: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x21a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
    // 0x21a548: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x21a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
    // 0x21a54c: 0xffb401d0  sd          $s4, 0x1D0($sp)
    ctx->pc = 0x21a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 20));
    // 0x21a550: 0xffb701e8  sd          $s7, 0x1E8($sp)
    ctx->pc = 0x21a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 23));
    // 0x21a554: 0xffbe01f0  sd          $fp, 0x1F0($sp)
    ctx->pc = 0x21a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 30));
    // 0x21a558: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x21a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
    // 0x21a55c: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x21a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
    // 0x21a560: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21A560u;
    SET_GPR_U32(ctx, 31, 0x21A568u);
    ctx->pc = 0x21A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A560u;
    // 0x21a564: 0xafa701a4  sw          $a3, 0x1A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21A560u, 0x21A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A568u;
label_21a568:
    // 0x21a568: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x21a568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x21a56c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x21a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21a570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a574: 0x0  nop
    ctx->pc = 0x21a574u;
    // NOP
label_21a578:
    // 0x21a578: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x21a578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x21a57c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21a57cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x21a580: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21a584: 0x2ac30010  slti        $v1, $s6, 0x10
    ctx->pc = 0x21a584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21a588: 0x0  nop
    ctx->pc = 0x21a588u;
    // NOP
    // 0x21a58c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A58Cu;
        // 0x21a590: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a578;
        }
    }
    ctx->pc = 0x21A594u;
    // 0x21a594: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a598: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x21A598u;
    {
        const bool branch_taken_0x21a598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A598u;
        // 0x21a59c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a598) {
            ctx->pc = 0x21A6F0u;
            goto label_21a6f0;
        }
    }
    ctx->pc = 0x21A5A0u;
    // 0x21a5a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21a5a4: 0x247e8858  addiu       $fp, $v1, -0x77A8
    ctx->pc = 0x21a5a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
label_21a5a8:
    // 0x21a5a8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x21a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x21a5ac: 0x139040  sll         $s2, $s3, 1
    ctx->pc = 0x21a5acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x21a5b0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x21a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x21a5b4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x21a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21a5b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a5bc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x21a5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x21a5c0: 0x90560000  lbu         $s6, 0x0($v0)
    ctx->pc = 0x21a5c0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a5c4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A5C4u;
    {
        const bool branch_taken_0x21a5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x21A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5C4u;
        // 0x21a5c8: 0x90540001  lbu         $s4, 0x1($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5c4) {
            ctx->pc = 0x21A5E0u;
            goto label_21a5e0;
        }
    }
    ctx->pc = 0x21A5CCu;
    // 0x21a5cc: 0xc086386  jal         func_218E18
    ctx->pc = 0x21A5CCu;
    SET_GPR_U32(ctx, 31, 0x21A5D4u);
    ctx->pc = 0x21A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5CCu;
    // 0x21a5d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x21A5CCu, 0x21A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5D4u;
label_21a5d4:
    // 0x21a5d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A5D4u;
    {
        const bool branch_taken_0x21a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5D4u;
        // 0x21a5d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5d4) {
            ctx->pc = 0x21A5ECu;
            goto label_21a5ec;
        }
    }
    ctx->pc = 0x21A5DCu;
    // 0x21a5dc: 0x0  nop
    ctx->pc = 0x21a5dcu;
    // NOP
label_21a5e0:
    // 0x21a5e0: 0xc08638e  jal         func_218E38
    ctx->pc = 0x21A5E0u;
    SET_GPR_U32(ctx, 31, 0x21A5E8u);
    ctx->pc = 0x21A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5E0u;
    // 0x21a5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E38u, 0x21A5E0u, 0x21A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5E8u;
label_21a5e8:
    // 0x21a5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a5ec:
    // 0x21a5ec: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A5ECu;
    {
        const bool branch_taken_0x21a5ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5ECu;
        // 0x21a5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5ec) {
            ctx->pc = 0x21A62Cu;
            goto label_21a62c;
        }
    }
    ctx->pc = 0x21A5F4u;
    // 0x21a5f4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A5F4u;
    SET_GPR_U32(ctx, 31, 0x21A5FCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A5F4u, 0x21A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5FCu;
label_21a5fc:
    // 0x21a5fc: 0x8fc40064  lw          $a0, 0x64($fp)
    ctx->pc = 0x21a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x21a600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a604: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a608: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21a608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21a60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a610: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21a610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21a614: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21a618: 0xafc30064  sw          $v1, 0x64($fp)
    ctx->pc = 0x21a618u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 3));
    // 0x21a61c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21a620: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21a620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21a624: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21a624u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21a628: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21a628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21a62c:
    // 0x21a62c: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x21A62Cu;
    {
        const bool branch_taken_0x21a62c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x21A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A62Cu;
        // 0x21a630: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a62c) {
            ctx->pc = 0x21A6A0u;
            goto label_21a6a0;
        }
    }
    ctx->pc = 0x21A634u;
    // 0x21a634: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x21a634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x21a638: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x21a638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x21a63c: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x21a63cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21a640:
    // 0x21a640: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x21a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x21a644: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x21a644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x21a648: 0x14770007  bne         $v1, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A648u;
    {
        const bool branch_taken_0x21a648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x21A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A648u;
        // 0x21a64c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a648) {
            ctx->pc = 0x21A668u;
            goto label_21a668;
        }
    }
    ctx->pc = 0x21A650u;
    // 0x21a650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a658: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x21A658u;
    SET_GPR_U32(ctx, 31, 0x21A660u);
    ctx->pc = 0x21A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A658u;
    // 0x21a65c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196A0u, 0x21A658u, 0x21A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A660u;
label_21a660:
    // 0x21a660: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A660u;
    {
        const bool branch_taken_0x21a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A660u;
        // 0x21a664: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a660) {
            ctx->pc = 0x21A678u;
            goto label_21a678;
        }
    }
    ctx->pc = 0x21A668u;
label_21a668:
    // 0x21a668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a66c: 0xc09358e  jal         func_24D638
    ctx->pc = 0x21A66Cu;
    SET_GPR_U32(ctx, 31, 0x21A674u);
    ctx->pc = 0x21A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A66Cu;
    // 0x21a670: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x21A66Cu, 0x21A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A674u;
label_21a674:
    // 0x21a674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a678:
    // 0x21a678: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x21a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x21a67c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a680: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x21a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x21a684: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x21a684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x21a688: 0x2021007  srav        $v0, $v0, $s0
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21a68c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21a690: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21A690u;
    {
        const bool branch_taken_0x21a690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A690u;
        // 0x21a694: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a690) {
            ctx->pc = 0x21A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a640;
        }
    }
    ctx->pc = 0x21A698u;
    // 0x21a698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A698u;
    {
        const bool branch_taken_0x21a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A698u;
        // 0x21a69c: 0x3c060015  lui         $a2, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a698) {
            ctx->pc = 0x21A6B0u;
            goto label_21a6b0;
        }
    }
    ctx->pc = 0x21A6A0u;
label_21a6a0:
    // 0x21a6a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a6a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6a8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x21a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x21a6ac: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x21a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
label_21a6b0:
    // 0x21a6b0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x21a6b4: 0x24a55c4c  addiu       $a1, $a1, 0x5C4C
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23628));
    // 0x21a6b8: 0x24c65c48  addiu       $a2, $a2, 0x5C48
    ctx->pc = 0x21a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23624));
    // 0x21a6bc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a6c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21a6c4: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x21a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x21a6c8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x21a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x21a6cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a6d0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x21a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x21a6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a6d8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x21a6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21a6dc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a6e0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21a6e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a6e8: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x21A6E8u;
    {
        const bool branch_taken_0x21a6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6E8u;
        // 0x21a6ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6e8) {
            ctx->pc = 0x21A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a5a8;
        }
    }
    ctx->pc = 0x21A6F0u;
label_21a6f0:
    // 0x21a6f0: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21a6f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21a6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6f8: 0xc0867ba  jal         func_219EE8
    ctx->pc = 0x21A6F8u;
    SET_GPR_U32(ctx, 31, 0x21A700u);
    ctx->pc = 0x21A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6F8u;
    // 0x21a6fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EE8u, 0x21A6F8u, 0x21A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A700u;
label_21a700:
    // 0x21a700: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a704: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21A704u;
    {
        const bool branch_taken_0x21a704 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A704u;
        // 0x21a708: 0x8fa301a4  lw          $v1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a704) {
            ctx->pc = 0x21A740u;
            goto label_21a740;
        }
    }
    ctx->pc = 0x21A70Cu;
    // 0x21a70c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_21a710:
    // 0x21a710: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x21a714: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21a718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a720: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a724: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A724u;
    SET_GPR_U32(ctx, 31, 0x21A72Cu);
    ctx->pc = 0x21A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A724u;
    // 0x21a728: 0x90440001  lbu         $a0, 0x1($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A724u, 0x21A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A72Cu;
label_21a72c:
    // 0x21a72c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a730: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a734: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x21A734u;
    {
        const bool branch_taken_0x21a734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a734) {
            ctx->pc = 0x21A738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A734u;
            // 0x21a738: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a710;
        }
    }
    ctx->pc = 0x21A73Cu;
    // 0x21a73c: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x21a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_21a740:
    // 0x21a740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a744: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21A744u;
    {
        const bool branch_taken_0x21a744 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A744u;
        // 0x21a748: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a744) {
            ctx->pc = 0x21A77Cu;
            goto label_21a77c;
        }
    }
    ctx->pc = 0x21A74Cu;
    // 0x21a74c: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x21a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_21a750:
    // 0x21a750: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21a750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a754: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21a758: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21a75c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a75cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a760: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A760u;
    SET_GPR_U32(ctx, 31, 0x21A768u);
    ctx->pc = 0x21A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A760u;
    // 0x21a764: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A760u, 0x21A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A768u;
label_21a768:
    // 0x21a768: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x21a76c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a770: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a774: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21A774u;
    {
        const bool branch_taken_0x21a774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A774u;
        // 0x21a778: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a774) {
            ctx->pc = 0x21A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a750;
        }
    }
    ctx->pc = 0x21A77Cu;
label_21a77c:
    // 0x21a77c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x21a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21a780: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A780u;
    SET_GPR_U32(ctx, 31, 0x21A788u);
    ctx->pc = 0x21A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A780u;
    // 0x21a784: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A780u, 0x21A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A788u;
label_21a788:
    // 0x21a788: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x21a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21a78c: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x21a78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21a790: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A790u;
    {
        const bool branch_taken_0x21a790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A790u;
        // 0x21a794: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a790) {
            ctx->pc = 0x21A7A8u;
            goto label_21a7a8;
        }
    }
    ctx->pc = 0x21A798u;
    // 0x21a798: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x21a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a79c: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A79Cu;
    SET_GPR_U32(ctx, 31, 0x21A7A4u);
    ctx->pc = 0x21A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A79Cu;
    // 0x21a7a0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A79Cu, 0x21A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A7A4u;
label_21a7a4:
    // 0x21a7a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_21a7a8:
    // 0x21a7a8: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x21a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x21a7ac: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x21a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x21a7b0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x21A7B0u;
    {
        const bool branch_taken_0x21a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7B0u;
        // 0x21a7b4: 0x8fa501a0  lw          $a1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7b0) {
            ctx->pc = 0x21A988u;
            goto label_21a988;
        }
    }
    ctx->pc = 0x21A7B8u;
    // 0x21a7b8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x21a7bc: 0x27b50140  addiu       $s5, $sp, 0x140
    ctx->pc = 0x21a7bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x21a7c0: 0x24666868  addiu       $a2, $v1, 0x6868
    ctx->pc = 0x21a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 26728));
    // 0x21a7c4: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x21a7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21a7c8: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x21a7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21a7cc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x21a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21a7d0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x21a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21a7d4: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x21a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21a7d8: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x21a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21a7dc: 0xb2a70007  sdl         $a3, 0x7($s5)
    ctx->pc = 0x21a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7e0: 0xb6a70000  sdr         $a3, 0x0($s5)
    ctx->pc = 0x21a7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7e4: 0xb2a4000f  sdl         $a0, 0xF($s5)
    ctx->pc = 0x21a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7e8: 0xb6a40008  sdr         $a0, 0x8($s5)
    ctx->pc = 0x21a7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7ec: 0xb2a50017  sdl         $a1, 0x17($s5)
    ctx->pc = 0x21a7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7f0: 0xb6a50010  sdr         $a1, 0x10($s5)
    ctx->pc = 0x21a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a7f4: 0x68c7001f  ldl         $a3, 0x1F($a2)
    ctx->pc = 0x21a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21a7f8: 0x6cc70018  ldr         $a3, 0x18($a2)
    ctx->pc = 0x21a7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21a7fc: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x21a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x466888u));
    // 0x21a800: 0xb2a7001f  sdl         $a3, 0x1F($s5)
    ctx->pc = 0x21a800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a804: 0xb6a70018  sdr         $a3, 0x18($s5)
    ctx->pc = 0x21a804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a808: 0xaea40020  sw          $a0, 0x20($s5)
    ctx->pc = 0x21a808u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 4));
    // 0x21a80c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x21a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21a810: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x21a810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21a814: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A814u;
    {
        const bool branch_taken_0x21a814 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A814u;
        // 0x21a818: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a814) {
            ctx->pc = 0x21A824u;
            goto label_21a824;
        }
    }
    ctx->pc = 0x21A81Cu;
    // 0x21a81c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A81Cu;
    {
        const bool branch_taken_0x21a81c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A81Cu;
        // 0x21a820: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a81c) {
            ctx->pc = 0x21A828u;
            goto label_21a828;
        }
    }
    ctx->pc = 0x21A824u;
label_21a824:
    // 0x21a824: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21a828:
    // 0x21a828: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x21a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21a82c: 0x14b080  sll         $s6, $s4, 2
    ctx->pc = 0x21a82cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x21a830: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x21a834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a838: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x21A838u;
    {
        const bool branch_taken_0x21a838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A838u;
        // 0x21a83c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a838) {
            ctx->pc = 0x21A960u;
            goto label_21a960;
        }
    }
    ctx->pc = 0x21A840u;
    // 0x21a840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a844: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x21a844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a848: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x21a848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a84c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a84cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a850: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x21a854: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21a854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_21a858:
    // 0x21a858: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a85c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21a860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a864: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a868: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21a86c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a870: 0x10490005  beq         $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A870u;
    {
        const bool branch_taken_0x21a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x21A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A870u;
        // 0x21a874: 0x2a650009  slti        $a1, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a870) {
            ctx->pc = 0x21A888u;
            goto label_21a888;
        }
    }
    ctx->pc = 0x21A878u;
    // 0x21a878: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21a87c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a880: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x21a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21a884: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21a884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21a888:
    // 0x21a888: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x21A888u;
    {
        const bool branch_taken_0x21a888 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A888u;
        // 0x21a88c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a888) {
            ctx->pc = 0x21A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A890u;
    // 0x21a890: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21A890u;
    {
        const bool branch_taken_0x21a890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A890u;
        // 0x21a894: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a890) {
            ctx->pc = 0x21A960u;
            goto label_21a960;
        }
    }
    ctx->pc = 0x21A898u;
    // 0x21a898: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A898u;
    SET_GPR_U32(ctx, 31, 0x21A8A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A898u, 0x21A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8A0u;
label_21a8a0:
    // 0x21a8a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21a8a4: 0x24718858  addiu       $s1, $v1, -0x77A8
    ctx->pc = 0x21a8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x21a8a8: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x21a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21a8ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a8b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a8b4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21a8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21a8b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a8bc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21a8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21a8c0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21a8c4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x21a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x21a8c8: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21a8cc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21a8ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21a8d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21a8d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21a8d4: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x21a8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a8dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a8e0: 0x8c720170  lw          $s2, 0x170($v1)
    ctx->pc = 0x21a8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x21a8e4: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x21A8E4u;
    SET_GPR_U32(ctx, 31, 0x21A8ECu);
    ctx->pc = 0x21A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A8E4u;
    // 0x21a8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x21A8E4u, 0x21A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8ECu;
label_21a8ec:
    // 0x21a8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A8F0u;
    {
        const bool branch_taken_0x21a8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F0u;
        // 0x21a8f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f0) {
            ctx->pc = 0x21A930u;
            goto label_21a930;
        }
    }
    ctx->pc = 0x21A8F8u;
    // 0x21a8f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A8F8u;
    SET_GPR_U32(ctx, 31, 0x21A900u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A8F8u, 0x21A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A900u;
label_21a900:
    // 0x21a900: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x21a904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a908: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a90c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21a910: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a914: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21a914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21a918: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21a91c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x21a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x21a920: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21a924: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21a924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21a928: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21a928u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21a92c: 0x23bc3  sra         $a3, $v0, 15
    ctx->pc = 0x21a92cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 15));
label_21a930:
    // 0x21a930: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21a934: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x21a934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x21a938: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
    // 0x21a93c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21a940: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x21a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x21a944: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a948: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x21a948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a94c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a950: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x21a950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x21a954: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x21a954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x21a958: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x21a958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x21a95c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21a95cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a960:
    // 0x21a960: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21a960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_21a964:
    // 0x21a964: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a968: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x21a96c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a970: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A970u;
    SET_GPR_U32(ctx, 31, 0x21A978u);
    ctx->pc = 0x21A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A970u;
    // 0x21a974: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A970u, 0x21A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A978u;
label_21a978:
    // 0x21a978: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x21a978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21a97c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A97Cu;
    {
        const bool branch_taken_0x21a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A97Cu;
        // 0x21a980: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a97c) {
            ctx->pc = 0x21A964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a964;
        }
    }
    ctx->pc = 0x21A984u;
    // 0x21a984: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x21a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_21a988:
    // 0x21a988: 0x18a0005f  blez        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x21A988u;
    {
        const bool branch_taken_0x21a988 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A988u;
        // 0x21a98c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a988) {
            ctx->pc = 0x21AB08u;
            goto label_21ab08;
        }
    }
    ctx->pc = 0x21A990u;
    // 0x21a990: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21a994: 0x24778858  addiu       $s7, $v1, -0x77A8
    ctx->pc = 0x21a994u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x21a998: 0x16a880  sll         $s5, $s6, 2
    ctx->pc = 0x21a998u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x21a99c: 0x0  nop
    ctx->pc = 0x21a99cu;
    // NOP
label_21a9a0:
    // 0x21a9a0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21a9a4: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x21a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x21a9a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a9ac: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x21A9ACu;
    {
        const bool branch_taken_0x21a9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9ACu;
        // 0x21a9b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9ac) {
            ctx->pc = 0x21AAF4u;
            goto label_21aaf4;
        }
    }
    ctx->pc = 0x21A9B4u;
    // 0x21a9b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a9b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21a9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21a9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9c0: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21A9C0u;
    SET_GPR_U32(ctx, 31, 0x21A9C8u);
    ctx->pc = 0x21A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9C0u;
    // 0x21a9c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21A9C0u, 0x21A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A9C8u;
label_21a9c8:
    // 0x21a9c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9cc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A9CCu;
    {
        const bool branch_taken_0x21a9cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9CCu;
        // 0x21a9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9cc) {
            ctx->pc = 0x21AA0Cu;
            goto label_21aa0c;
        }
    }
    ctx->pc = 0x21A9D4u;
    // 0x21a9d4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A9D4u;
    SET_GPR_U32(ctx, 31, 0x21A9DCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A9D4u, 0x21A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A9DCu;
label_21a9dc:
    // 0x21a9dc: 0x8ee40064  lw          $a0, 0x64($s7)
    ctx->pc = 0x21a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x21a9e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a9e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a9e8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21a9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a9f0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21a9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21a9f4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21a9f8: 0xaee30064  sw          $v1, 0x64($s7)
    ctx->pc = 0x21a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 100), GPR_U32(ctx, 3));
    // 0x21a9fc: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21aa00: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21aa00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21aa04: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21aa04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21aa08: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21aa08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21aa0c:
    // 0x21aa0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21aa10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21aa14: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x21aa14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21aa18: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x21AA18u;
    SET_GPR_U32(ctx, 31, 0x21AA20u);
    ctx->pc = 0x21AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA18u;
    // 0x21aa1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x21AA18u, 0x21AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA20u;
label_21aa20:
    // 0x21aa20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21aa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa24: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x21AA24u;
    {
        const bool branch_taken_0x21aa24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA24u;
        // 0x21aa28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa24) {
            ctx->pc = 0x21AA64u;
            goto label_21aa64;
        }
    }
    ctx->pc = 0x21AA2Cu;
    // 0x21aa2c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21AA2Cu;
    SET_GPR_U32(ctx, 31, 0x21AA34u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21AA2Cu, 0x21AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA34u;
label_21aa34:
    // 0x21aa34: 0x8ee40064  lw          $a0, 0x64($s7)
    ctx->pc = 0x21aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x21aa38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21aa3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21aa40: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21aa44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21aa48: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21aa48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21aa4c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21aa50: 0xaee30064  sw          $v1, 0x64($s7)
    ctx->pc = 0x21aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 100), GPR_U32(ctx, 3));
    // 0x21aa54: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21aa58: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21aa58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21aa5c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21aa5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21aa60: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21aa64:
    // 0x21aa64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21AA68u;
    {
        const bool branch_taken_0x21aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA68u;
        // 0x21aa6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa68) {
            ctx->pc = 0x21AA7Cu;
            goto label_21aa7c;
        }
    }
    ctx->pc = 0x21AA70u;
label_21aa70:
    // 0x21aa70: 0xc09358e  jal         func_24D638
    ctx->pc = 0x21AA70u;
    SET_GPR_U32(ctx, 31, 0x21AA78u);
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x21AA70u, 0x21AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA78u;
label_21aa78:
    // 0x21aa78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21aa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21aa7c:
    // 0x21aa7c: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x21aa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21aa80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AA80u;
    {
        const bool branch_taken_0x21aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA80u;
        // 0x21aa84: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa80) {
            ctx->pc = 0x21AAB0u;
            goto label_21aab0;
        }
    }
    ctx->pc = 0x21AA88u;
    // 0x21aa88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa8c: 0xc086396  jal         func_218E58
    ctx->pc = 0x21AA8Cu;
    SET_GPR_U32(ctx, 31, 0x21AA94u);
    ctx->pc = 0x21AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA8Cu;
    // 0x21aa90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21AA8Cu, 0x21AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA94u;
label_21aa94:
    // 0x21aa94: 0xc0862ee  jal         func_218BB8
    ctx->pc = 0x21AA94u;
    SET_GPR_U32(ctx, 31, 0x21AA9Cu);
    ctx->pc = 0x21AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA94u;
    // 0x21aa98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB8u, 0x21AA94u, 0x21AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA9Cu;
label_21aa9c:
    // 0x21aa9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aaa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21aaa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aaa4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21aaa8: 0x1240fff1  beqz        $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x21AAA8u;
    {
        const bool branch_taken_0x21aaa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAA8u;
        // 0x21aaac: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aaa8) {
            ctx->pc = 0x21AA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa70;
        }
    }
    ctx->pc = 0x21AAB0u;
label_21aab0:
    // 0x21aab0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21aab4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x21aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x21aab8: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x21aabc: 0x24425c4c  addiu       $v0, $v0, 0x5C4C
    ctx->pc = 0x21aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23628));
    // 0x21aac0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21aac4: 0x24a55c48  addiu       $a1, $a1, 0x5C48
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23624));
    // 0x21aac8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x21aac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21aacc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21aad0: 0x953021  addu        $a2, $a0, $s5
    ctx->pc = 0x21aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x21aad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad8: 0x12800a  movz        $s0, $zero, $s2
    ctx->pc = 0x21aad8u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x21aadc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aae0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21aae4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21aae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aae8: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x21aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x21aaec: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21AAECu;
    SET_GPR_U32(ctx, 31, 0x21AAF4u);
    ctx->pc = 0x21AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAECu;
    // 0x21aaf0: 0xacf00000  sw          $s0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21AAECu, 0x21AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAF4u;
label_21aaf4:
    // 0x21aaf4: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21aaf8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x21aafc: 0x2c6102a  slt         $v0, $s6, $a2
    ctx->pc = 0x21aafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21ab00: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x21AB00u;
    {
        const bool branch_taken_0x21ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB00u;
        // 0x21ab04: 0x16a880  sll         $s5, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab00) {
            ctx->pc = 0x21A9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a9a0;
        }
    }
    ctx->pc = 0x21AB08u;
label_21ab08:
    // 0x21ab08: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x21ab08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x21ab0c: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x21ab0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x21ab10: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x21ab10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x21ab14: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x21ab14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x21ab18: 0xdfb401d0  ld          $s4, 0x1D0($sp)
    ctx->pc = 0x21ab18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x21ab1c: 0xdfb501d8  ld          $s5, 0x1D8($sp)
    ctx->pc = 0x21ab1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x21ab20: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x21ab20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x21ab24: 0xdfb701e8  ld          $s7, 0x1E8($sp)
    ctx->pc = 0x21ab24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x21ab28: 0xdfbe01f0  ld          $fp, 0x1F0($sp)
    ctx->pc = 0x21ab28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x21ab2c: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x21ab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x21ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB30u;
        // 0x21ab34: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AB38u;
}
