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

// Function: sub_00108508
// Address: 0x108508 - 0x108688
void sub_00108508_0x108508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108508_0x108508");
#endif

    switch (ctx->pc) {
        case 0x108598u: goto label_108598;
        case 0x1085f4u: goto label_1085f4;
        case 0x108618u: goto label_108618;
        case 0x10862cu: goto label_10862c;
        default: break;
    }

    ctx->pc = 0x108508u;

    // 0x108508: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x108508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10850c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108514: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108518: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x108518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10851c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108520: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x108520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x108524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108528: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x108528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10852c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x108530: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108534: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108538: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10853c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108540: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108544: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x108548: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x108548u;
    {
        const bool branch_taken_0x108548 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x108548) {
            ctx->pc = 0x10854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108548u;
            // 0x10854c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108654u;
            goto label_108654;
        }
    }
    ctx->pc = 0x108550u;
    // 0x108550: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108554: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x108558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10855c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x108560: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x108560u;
    {
        const bool branch_taken_0x108560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108560) {
            ctx->pc = 0x108564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108560u;
            // 0x108564: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108654u;
            goto label_108654;
        }
    }
    ctx->pc = 0x108568u;
    // 0x108568: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x108568u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x10856c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x10856cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x108570: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x108570u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x108574: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x108574u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x108578: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x108578u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x10857c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x108580: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x108580u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x108584: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x108588: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x108588u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10858c: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x108590: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x108590u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x108594: 0x0  nop
    ctx->pc = 0x108594u;
    // NOP
label_108598:
    // 0x108598: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x108598u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 21), 0))); // MMIO: 0x10002020
    // 0x10859c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x10859cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1085a0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x1085a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x1085a4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x1085a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1085a8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x1085a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1085ac: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1085acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1085b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1085b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1085b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1085b8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x1085b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1085bc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1085BCu;
    {
        const bool branch_taken_0x1085bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x1085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085BCu;
        // 0x1085c0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085bc) {
            ctx->pc = 0x1085D4u;
            goto label_1085d4;
        }
    }
    ctx->pc = 0x1085C4u;
    // 0x1085c4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1085C4u;
    {
        const bool branch_taken_0x1085c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x1085c4) {
            ctx->pc = 0x1085C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1085C4u;
            // 0x1085c8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1085D8u;
            goto label_1085d8;
        }
    }
    ctx->pc = 0x1085CCu;
    // 0x1085cc: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x1085CCu;
    {
        const bool branch_taken_0x1085cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1085cc) {
            ctx->pc = 0x1085D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1085CCu;
            // 0x1085d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108604u;
            goto label_108604;
        }
    }
    ctx->pc = 0x1085D4u;
label_1085d4:
    // 0x1085d4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1085d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1085d8:
    // 0x1085d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1085D8u;
    {
        const bool branch_taken_0x1085d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D8u;
        // 0x1085dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d8) {
            ctx->pc = 0x108604u;
            goto label_108604;
        }
    }
    ctx->pc = 0x1085E0u;
    // 0x1085e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1085e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1085e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1085E4u;
    {
        const bool branch_taken_0x1085e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E4u;
        // 0x1085e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e4) {
            ctx->pc = 0x108604u;
            goto label_108604;
        }
    }
    ctx->pc = 0x1085ECu;
    // 0x1085ec: 0xc0411a4  jal         func_104690
    ctx->pc = 0x1085ECu;
    SET_GPR_U32(ctx, 31, 0x1085F4u);
    ctx->pc = 0x1085F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085ECu;
    // 0x1085f0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x1085ECu, 0x1085F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085F4u;
label_1085f4:
    // 0x1085f4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1085f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1085F8u;
    {
        const bool branch_taken_0x1085f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085F8u;
        // 0x1085fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085f8) {
            ctx->pc = 0x108624u;
            goto label_108624;
        }
    }
    ctx->pc = 0x108600u;
    // 0x108600: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x108600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_108604:
    // 0x108604: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x108604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x108608: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108608u;
    {
        const bool branch_taken_0x108608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108608u;
        // 0x10860c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108608) {
            ctx->pc = 0x108634u;
            goto label_108634;
        }
    }
    ctx->pc = 0x108610u;
    // 0x108610: 0xc0411a4  jal         func_104690
    ctx->pc = 0x108610u;
    SET_GPR_U32(ctx, 31, 0x108618u);
    ctx->pc = 0x108614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108610u;
    // 0x108614: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x108610u, 0x108618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108618u;
label_108618:
    // 0x108618: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x108618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10861c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10861Cu;
    {
        const bool branch_taken_0x10861c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10861Cu;
        // 0x108620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10861c) {
            ctx->pc = 0x108634u;
            goto label_108634;
        }
    }
    ctx->pc = 0x108624u;
label_108624:
    // 0x108624: 0xc041782  jal         func_105E08
    ctx->pc = 0x108624u;
    SET_GPR_U32(ctx, 31, 0x10862Cu);
    ctx->pc = 0x105E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E08u, 0x108624u, 0x10862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10862Cu;
label_10862c:
    // 0x10862c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10862Cu;
    {
        const bool branch_taken_0x10862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10862Cu;
        // 0x108630: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10862c) {
            ctx->pc = 0x108654u;
            goto label_108654;
        }
    }
    ctx->pc = 0x108634u;
label_108634:
    // 0x108634: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x108634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108638: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x108638u;
    {
        const bool branch_taken_0x108638 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x108638) {
            ctx->pc = 0x10863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108638u;
            // 0x10863c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108654u;
            goto label_108654;
        }
    }
    ctx->pc = 0x108640u;
    // 0x108640: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x108640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108644: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x108644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x108648: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x108648u;
    {
        const bool branch_taken_0x108648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108648) {
            ctx->pc = 0x108598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108598;
        }
    }
    ctx->pc = 0x108650u;
    // 0x108650: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x108650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_108654:
    // 0x108654: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x108654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x108658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10865c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10865cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108660: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108664: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108668: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108668u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10866c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10866cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108670: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108678: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10867c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10867cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108680: 0x3e00008  jr          $ra
    ctx->pc = 0x108680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108680u;
        // 0x108684: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108688u;
}
