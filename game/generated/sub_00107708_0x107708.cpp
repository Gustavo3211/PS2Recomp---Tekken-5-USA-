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

// Function: sub_00107708
// Address: 0x107708 - 0x107b30
void sub_00107708_0x107708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107708_0x107708");
#endif

    switch (ctx->pc) {
        case 0x107758u: goto label_107758;
        case 0x10777cu: goto label_10777c;
        case 0x1077f4u: goto label_1077f4;
        case 0x10788cu: goto label_10788c;
        case 0x1078b0u: goto label_1078b0;
        case 0x10791cu: goto label_10791c;
        case 0x107940u: goto label_107940;
        case 0x1079b4u: goto label_1079b4;
        case 0x107a78u: goto label_107a78;
        case 0x107a9cu: goto label_107a9c;
        default: break;
    }

    ctx->pc = 0x107708u;

    // 0x107708: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x107708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10770c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107714: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x107714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x107718: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x107718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10771c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10771cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107720: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x107720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107724: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x107724u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107728: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x107728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10772c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x10772cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107730: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107734: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107738: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10773c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10773cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107744: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x107744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107748: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x107748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10774c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10774cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107750: 0xc042226  jal         func_108898
    ctx->pc = 0x107750u;
    SET_GPR_U32(ctx, 31, 0x107758u);
    ctx->pc = 0x107754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107750u;
    // 0x107754: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107750u, 0x107758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107758u;
label_107758:
    // 0x107758: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10775c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x10775cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x107760: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107764: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x107768: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107768u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10776c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107770: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x107770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x107774: 0xc042142  jal         func_108508
    ctx->pc = 0x107774u;
    SET_GPR_U32(ctx, 31, 0x10777Cu);
    ctx->pc = 0x107778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107774u;
    // 0x107778: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x107774u, 0x10777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10777Cu;
label_10777c:
    // 0x10777c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10777cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107780: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107784: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107788: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x10778c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107790: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107790u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107794: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107794u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x107798: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x107798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10779c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10779cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1077a0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1077A0u;
    {
        const bool branch_taken_0x1077a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A0u;
        // 0x1077a4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077a0) {
            ctx->pc = 0x1077B8u;
            goto label_1077b8;
        }
    }
    ctx->pc = 0x1077A8u;
    // 0x1077a8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1077a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1077ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1077acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1077b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1077B0u;
    {
        const bool branch_taken_0x1077b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077B0u;
        // 0x1077b4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077b0) {
            ctx->pc = 0x1077BCu;
            goto label_1077bc;
        }
    }
    ctx->pc = 0x1077B8u;
label_1077b8:
    // 0x1077b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1077b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1077bc:
    // 0x1077bc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1077bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1077c0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1077c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1077c4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1077c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1077c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1077c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1077cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1077ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1077d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1077d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1077d4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1077d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1077d8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1077D8u;
    {
        const bool branch_taken_0x1077d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077D8u;
        // 0x1077dc: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077d8) {
            ctx->pc = 0x1077FCu;
            goto label_1077fc;
        }
    }
    ctx->pc = 0x1077E0u;
    // 0x1077e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1077E0u;
    {
        const bool branch_taken_0x1077e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E0u;
        // 0x1077e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077e0) {
            ctx->pc = 0x107800u;
            goto label_107800;
        }
    }
    ctx->pc = 0x1077E8u;
    // 0x1077e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1077e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077ec: 0xc0421a2  jal         func_108688
    ctx->pc = 0x1077ECu;
    SET_GPR_U32(ctx, 31, 0x1077F4u);
    ctx->pc = 0x1077F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077ECu;
    // 0x1077f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x1077ECu, 0x1077F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077F4u;
label_1077f4:
    // 0x1077f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1077F4u;
    {
        const bool branch_taken_0x1077f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077F4u;
        // 0x1077f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077f4) {
            ctx->pc = 0x107800u;
            goto label_107800;
        }
    }
    ctx->pc = 0x1077FCu;
label_1077fc:
    // 0x1077fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1077fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107800:
    // 0x107800: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x107800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107804: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x107804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x107808: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x107808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x10780c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x10780cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x107810: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107810u;
    {
        const bool branch_taken_0x107810 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x107814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107810u;
        // 0x107814: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107810) {
            ctx->pc = 0x107844u;
            goto label_107844;
        }
    }
    ctx->pc = 0x107818u;
    // 0x107818: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x107818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10781c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x107820: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x107820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x107824: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x107824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107828: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10782c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x10782cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107830: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107830u;
    {
        const bool branch_taken_0x107830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107830u;
        // 0x107834: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107830) {
            ctx->pc = 0x107878u;
            goto label_107878;
        }
    }
    ctx->pc = 0x107838u;
    // 0x107838: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x107838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x10783c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10783Cu;
    {
        const bool branch_taken_0x10783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10783Cu;
        // 0x107840: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10783c) {
            ctx->pc = 0x107874u;
            goto label_107874;
        }
    }
    ctx->pc = 0x107844u;
label_107844:
    // 0x107844: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107844u;
    {
        const bool branch_taken_0x107844 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x107848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107844u;
        // 0x107848: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107844) {
            ctx->pc = 0x107878u;
            goto label_107878;
        }
    }
    ctx->pc = 0x10784Cu;
    // 0x10784c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x10784cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x107850: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x107850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x107854: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x107854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x107858: 0x61823  negu        $v1, $a2
    ctx->pc = 0x107858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x10785c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107860: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x107860u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x107864: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107868: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x107868u;
    {
        const bool branch_taken_0x107868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107868u;
        // 0x10786c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107868) {
            ctx->pc = 0x107874u;
            goto label_107874;
        }
    }
    ctx->pc = 0x107870u;
    // 0x107870: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_107874:
    // 0x107874: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x107874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_107878:
    // 0x107878: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x107878u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10787c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x10787Cu;
    {
        const bool branch_taken_0x10787c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x107880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10787Cu;
        // 0x107880: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10787c) {
            ctx->pc = 0x107914u;
            goto label_107914;
        }
    }
    ctx->pc = 0x107884u;
    // 0x107884: 0xc042226  jal         func_108898
    ctx->pc = 0x107884u;
    SET_GPR_U32(ctx, 31, 0x10788Cu);
    ctx->pc = 0x107888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107884u;
    // 0x107888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107884u, 0x10788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10788Cu;
label_10788c:
    // 0x10788c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107890: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x107894: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107898: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x10789c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10789cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1078a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1078a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078a4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x1078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x1078a8: 0xc042142  jal         func_108508
    ctx->pc = 0x1078A8u;
    SET_GPR_U32(ctx, 31, 0x1078B0u);
    ctx->pc = 0x1078ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078A8u;
    // 0x1078ac: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x1078A8u, 0x1078B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078B0u;
label_1078b0:
    // 0x1078b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1078b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1078b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1078b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1078bc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1078bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1078c0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1078c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1078c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1078c4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x1078c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1078c8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1078cc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1078ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1078d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1078d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1078d4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1078D4u;
    {
        const bool branch_taken_0x1078d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1078D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D4u;
        // 0x1078d8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078d4) {
            ctx->pc = 0x1078ECu;
            goto label_1078ec;
        }
    }
    ctx->pc = 0x1078DCu;
    // 0x1078dc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1078dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1078e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1078e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1078e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1078E4u;
    {
        const bool branch_taken_0x1078e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078E4u;
        // 0x1078e8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078e4) {
            ctx->pc = 0x1078F0u;
            goto label_1078f0;
        }
    }
    ctx->pc = 0x1078ECu;
label_1078ec:
    // 0x1078ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1078ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1078f0:
    // 0x1078f0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1078f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1078f4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1078f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1078f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1078f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1078fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1078fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107900: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x107900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107904: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107908: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x10790c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x10790cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x107910: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x107910u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_107914:
    // 0x107914: 0xc042226  jal         func_108898
    ctx->pc = 0x107914u;
    SET_GPR_U32(ctx, 31, 0x10791Cu);
    ctx->pc = 0x107918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107914u;
    // 0x107918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107914u, 0x10791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10791Cu;
label_10791c:
    // 0x10791c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107920: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x107924: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107928: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x10792c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10792cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107934: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x107934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x107938: 0xc042142  jal         func_108508
    ctx->pc = 0x107938u;
    SET_GPR_U32(ctx, 31, 0x107940u);
    ctx->pc = 0x10793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107938u;
    // 0x10793c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x107938u, 0x107940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107940u;
label_107940:
    // 0x107940: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107944: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107948: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10794c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x10794cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107950: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107954: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107954u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107958: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107958u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10795c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107960: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107964: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107964u;
    {
        const bool branch_taken_0x107964 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x107968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107964u;
        // 0x107968: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107964) {
            ctx->pc = 0x10797Cu;
            goto label_10797c;
        }
    }
    ctx->pc = 0x10796Cu;
    // 0x10796c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x10796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107970: 0x21023  negu        $v0, $v0
    ctx->pc = 0x107970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107974u;
    {
        const bool branch_taken_0x107974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107974u;
        // 0x107978: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107974) {
            ctx->pc = 0x107980u;
            goto label_107980;
        }
    }
    ctx->pc = 0x10797Cu;
label_10797c:
    // 0x10797c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_107980:
    // 0x107980: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x107980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107984: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x107984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107988: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x107988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10798c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10798cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107990: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x107990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107994: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107998: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x10799c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x10799Cu;
    {
        const bool branch_taken_0x10799c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10799Cu;
        // 0x1079a0: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10799c) {
            ctx->pc = 0x1079BCu;
            goto label_1079bc;
        }
    }
    ctx->pc = 0x1079A4u;
    // 0x1079a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1079A4u;
    {
        const bool branch_taken_0x1079a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079A4u;
        // 0x1079a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079a4) {
            ctx->pc = 0x1079BCu;
            goto label_1079bc;
        }
    }
    ctx->pc = 0x1079ACu;
    // 0x1079ac: 0xc0421a2  jal         func_108688
    ctx->pc = 0x1079ACu;
    SET_GPR_U32(ctx, 31, 0x1079B4u);
    ctx->pc = 0x1079B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079ACu;
    // 0x1079b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x1079ACu, 0x1079B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079B4u;
label_1079b4:
    // 0x1079b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1079B4u;
    {
        const bool branch_taken_0x1079b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B4u;
        // 0x1079b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079b4) {
            ctx->pc = 0x1079C0u;
            goto label_1079c0;
        }
    }
    ctx->pc = 0x1079BCu;
label_1079bc:
    // 0x1079bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1079bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1079c0:
    // 0x1079c0: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1079C0u;
    {
        const bool branch_taken_0x1079c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1079c0) {
            ctx->pc = 0x1079C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079C0u;
            // 0x1079c4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079D8u;
            goto label_1079d8;
        }
    }
    ctx->pc = 0x1079C8u;
    // 0x1079c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1079c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1079cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1079ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1079d0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1079d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1079d4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1079d8:
    // 0x1079d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1079d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1079dc: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x1079dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1079e0: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1079e4: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1079e8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1079E8u;
    {
        const bool branch_taken_0x1079e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1079ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079E8u;
        // 0x1079ec: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079e8) {
            ctx->pc = 0x107A1Cu;
            goto label_107a1c;
        }
    }
    ctx->pc = 0x1079F0u;
    // 0x1079f0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1079f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1079f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1079f8: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x1079f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1079fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107a00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x107a04: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x107a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107a08: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107A08u;
    {
        const bool branch_taken_0x107a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A08u;
        // 0x107a0c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a08) {
            ctx->pc = 0x107A50u;
            goto label_107a50;
        }
    }
    ctx->pc = 0x107A10u;
    // 0x107a10: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x107a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x107a14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107A14u;
    {
        const bool branch_taken_0x107a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A14u;
        // 0x107a18: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a14) {
            ctx->pc = 0x107A4Cu;
            goto label_107a4c;
        }
    }
    ctx->pc = 0x107A1Cu;
label_107a1c:
    // 0x107a1c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107A1Cu;
    {
        const bool branch_taken_0x107a1c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x107A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A1Cu;
        // 0x107a20: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a1c) {
            ctx->pc = 0x107A50u;
            goto label_107a50;
        }
    }
    ctx->pc = 0x107A24u;
    // 0x107a24: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x107a24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x107a28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x107a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x107a2c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x107a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x107a30: 0x61823  negu        $v1, $a2
    ctx->pc = 0x107a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x107a34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107a38: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x107a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x107a3c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107a40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x107A40u;
    {
        const bool branch_taken_0x107a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A40u;
        // 0x107a44: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a40) {
            ctx->pc = 0x107A4Cu;
            goto label_107a4c;
        }
    }
    ctx->pc = 0x107A48u;
    // 0x107a48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_107a4c:
    // 0x107a4c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x107a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_107a50:
    // 0x107a50: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x107a50u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x107a54: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A54u;
    {
        const bool branch_taken_0x107a54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A54u;
        // 0x107a58: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a54) {
            ctx->pc = 0x107A68u;
            goto label_107a68;
        }
    }
    ctx->pc = 0x107A5Cu;
    // 0x107a5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x107a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107a60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x107a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x107a64: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x107a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_107a68:
    // 0x107a68: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x107A68u;
    {
        const bool branch_taken_0x107a68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A68u;
        // 0x107a6c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a68) {
            ctx->pc = 0x107B04u;
            goto label_107b04;
        }
    }
    ctx->pc = 0x107A70u;
    // 0x107a70: 0xc042226  jal         func_108898
    ctx->pc = 0x107A70u;
    SET_GPR_U32(ctx, 31, 0x107A78u);
    ctx->pc = 0x107A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A70u;
    // 0x107a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107A70u, 0x107A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A78u;
label_107a78:
    // 0x107a78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107a7c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x107a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x107a80: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107a84: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x107a88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107a88u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a90: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x107a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x107a94: 0xc042142  jal         func_108508
    ctx->pc = 0x107A94u;
    SET_GPR_U32(ctx, 31, 0x107A9Cu);
    ctx->pc = 0x107A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A94u;
    // 0x107a98: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x107A94u, 0x107A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A9Cu;
label_107a9c:
    // 0x107a9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107aa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107aa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107aa8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107aac: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107ab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107ab4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107ab4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x107ab8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x107ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107abc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107ac0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107AC0u;
    {
        const bool branch_taken_0x107ac0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x107AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AC0u;
        // 0x107ac4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ac0) {
            ctx->pc = 0x107AD8u;
            goto label_107ad8;
        }
    }
    ctx->pc = 0x107AC8u;
    // 0x107ac8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x107ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107acc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x107accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107AD0u;
    {
        const bool branch_taken_0x107ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AD0u;
        // 0x107ad4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ad0) {
            ctx->pc = 0x107ADCu;
            goto label_107adc;
        }
    }
    ctx->pc = 0x107AD8u;
label_107ad8:
    // 0x107ad8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_107adc:
    // 0x107adc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x107adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107ae0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x107ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107ae4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x107ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x107ae8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107aec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x107aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107af0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107af4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x107af8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x107af8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x107afc: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x107afcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x107b00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x107b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_107b04:
    // 0x107b04: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x107b04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107b08: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x107b08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107b0c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107b0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107b10: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107b10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107b14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107b14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107b18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107b1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107b20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107b28: 0x3e00008  jr          $ra
    ctx->pc = 0x107B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B28u;
        // 0x107b2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B30u;
}
