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

// Function: sub_004A2710
// Address: 0x4a2710 - 0x4a29e0
void sub_004A2710_0x4a2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2710_0x4a2710");
#endif

    switch (ctx->pc) {
        case 0x4a2768u: goto label_4a2768;
        case 0x4a2778u: goto label_4a2778;
        case 0x4a29b0u: goto label_4a29b0;
        default: break;
    }

    ctx->pc = 0x4a2710u;

    // 0x4a2710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a2710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a2714: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a2718: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4a2718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4a271c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x4a271cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x4a2720: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4a2720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4a2724: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x4a2724u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2728: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4a2728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4a272c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a272cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2730: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4a2730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4a2734: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a2734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2738: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4a2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4a273c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a273cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2740: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4a2740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4a2744: 0x245488c0  addiu       $s4, $v0, -0x7740
    ctx->pc = 0x4a2744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
    // 0x4a2748: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4a2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4a274c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a274cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2750: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4a2750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4a2754: 0x24160560  addiu       $s6, $zero, 0x560
    ctx->pc = 0x4a2754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x4a2758: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4a2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4a275c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x4a275cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2760: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4a2760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4a2764: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x4a2764u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a2768:
    // 0x4a2768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a276c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x4a276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x4a2770: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A2770u;
    SET_GPR_U32(ctx, 31, 0x4A2778u);
    ctx->pc = 0x4A2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2770u;
    // 0x4a2774: 0x7fb90020  sq          $t9, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A2770u, 0x4A2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2778u;
label_4a2778:
    // 0x4a2778: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a277c: 0x240400e8  addiu       $a0, $zero, 0xE8
    ctx->pc = 0x4a277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x4a2780: 0x36a2ffff  ori         $v0, $s5, 0xFFFF
    ctx->pc = 0x4a2780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x4a2784: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a2788: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x4a2788u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a278c: 0x171c00  sll         $v1, $s7, 16
    ctx->pc = 0x4a278cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x4a2790: 0x53a824  and         $s5, $v0, $s3
    ctx->pc = 0x4a2790u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a2794: 0x3472ffff  ori         $s2, $v1, 0xFFFF
    ctx->pc = 0x4a2794u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a2798: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a279c: 0x36adffff  ori         $t5, $s5, 0xFFFF
    ctx->pc = 0x4a279cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x4a27a0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a27a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a27a4: 0x36e8ffff  ori         $t0, $s7, 0xFFFF
    ctx->pc = 0x4a27a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4a27a8: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x4a27a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a27ac: 0x37c5ffff  ori         $a1, $fp, 0xFFFF
    ctx->pc = 0x4a27acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4a27b0: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x4a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x4a27b4: 0x3c09ff33  lui         $t1, 0xFF33
    ctx->pc = 0x4a27b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65331 << 16));
    // 0x4a27b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a27bc: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a27c0: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x4a27c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a27c4: 0x103b824  and         $s7, $t0, $v1
    ctx->pc = 0x4a27c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4a27c8: 0xa496000c  sh          $s6, 0xC($a0)
    ctx->pc = 0x4a27c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 22));
    // 0x4a27cc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a27ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a27d0: 0x61403  sra         $v0, $a2, 16
    ctx->pc = 0x4a27d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4a27d4: 0x163400  sll         $a2, $s6, 16
    ctx->pc = 0x4a27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4a27d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a27dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a27e0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a27e4: 0x3c0afc00  lui         $t2, 0xFC00
    ctx->pc = 0x4a27e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64512 << 16));
    // 0x4a27e8: 0xa4800138  sh          $zero, 0x138($a0)
    ctx->pc = 0x4a27e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a27ec: 0xa2f024  and         $fp, $a1, $v0
    ctx->pc = 0x4a27ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a27f0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a27f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a27f4: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x4a27f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4a27f8: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4a27f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a27fc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4a27fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4a2800: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2804: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x4a2804u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x4a2808: 0x356b9a00  ori         $t3, $t3, 0x9A00
    ctx->pc = 0x4a2808u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)39424);
    // 0x4a280c: 0x2138025  or          $s0, $s0, $s3
    ctx->pc = 0x4a280cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 19));
    // 0x4a2810: 0xa444013a  sh          $a0, 0x13A($v0)
    ctx->pc = 0x4a2810u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a2814: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x4a2814u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a2818: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4a2818u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4a281c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4a281cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2820: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4a2820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a2824: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4a2824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4a2828: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a282c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x4a282cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x4a2830: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a2834: 0x358c0080  ori         $t4, $t4, 0x80
    ctx->pc = 0x4a2834u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)128);
    // 0x4a2838: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4a2838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4a283c: 0x1a2a824  and         $s5, $t5, $v0
    ctx->pc = 0x4a283cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x4a2840: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a2840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2844: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x4a2844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x4a2848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a284c: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x4a284cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x4a2850: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4a2850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4a2854: 0x36c7ffff  ori         $a3, $s6, 0xFFFF
    ctx->pc = 0x4a2854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4a2858: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a2858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a285c: 0x1e7400  sll         $t6, $fp, 16
    ctx->pc = 0x4a285cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x4a2860: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a2860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a2864: 0xe6b024  and         $s6, $a3, $a2
    ctx->pc = 0x4a2864u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4a2868: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4a2868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a286c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2870: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4a2870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4a2874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2878: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a2878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a287c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4a287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4a2880: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a2880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a2884: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a2884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2888: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4a2888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4a288c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2890: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a2894: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4a2894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4a2898: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a2898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a289c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28a0: 0x7bb90020  lq          $t9, 0x20($sp)
    ctx->pc = 0x4a28a0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a28a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a28a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a28ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a28acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a28b0: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x4a28b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x4a28b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a28b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28bc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a28c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a28c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a28c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a28c8: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x4a28c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x4a28cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a28ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a28d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28d4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x4a28d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x4a28d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a28dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a28dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a28e0: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x4a28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x4a28e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a28e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28ec: 0xa46f0130  sh          $t7, 0x130($v1)
    ctx->pc = 0x4a28ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 15));
    // 0x4a28f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28f4: 0xa4400132  sh          $zero, 0x132($v0)
    ctx->pc = 0x4a28f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a28f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a28fc: 0xac6b012c  sw          $t3, 0x12C($v1)
    ctx->pc = 0x4a28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 11));
    // 0x4a2900: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2904: 0xa4510118  sh          $s1, 0x118($v0)
    ctx->pc = 0x4a2904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a2908: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a290c: 0xa460011c  sh          $zero, 0x11C($v1)
    ctx->pc = 0x4a290cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a2910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2914: 0xa451011e  sh          $s1, 0x11E($v0)
    ctx->pc = 0x4a2914u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 286), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a2918: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a291c: 0xa4710120  sh          $s1, 0x120($v1)
    ctx->pc = 0x4a291cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a2920: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4a2920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a2924: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4a2924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4a2928: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4a2928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a292c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4a292cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4a2930: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2934: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2938: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a293c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4a293cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4a2940: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4a2940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4a2944: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4a2944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a2948: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x4a2948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a294c: 0x2131024  and         $v0, $s0, $s3
    ctx->pc = 0x4a294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x4a2950: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a2950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a2954: 0xa4a20134  sh          $v0, 0x134($a1)
    ctx->pc = 0x4a2954u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2958: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a295c: 0xa4700136  sh          $s0, 0x136($v1)
    ctx->pc = 0x4a295cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 310), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a2960: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2964: 0xa458002e  sh          $t8, 0x2E($v0)
    ctx->pc = 0x4a2964u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 24));
    // 0x4a2968: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a296c: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x4a296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x4a2970: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2974: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a2974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a2978: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a2978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a297c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a297cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a2980: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a2980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2984: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x4a2984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4a2988: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a298c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a2990: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x4a2990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x4a2994: 0x5c1ff74  bgez        $t6, . + 4 + (-0x8C << 2)
    ctx->pc = 0x4A2994u;
    {
        const bool branch_taken_0x4a2994 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x4A2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2994u;
        // 0x4a2998: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2994) {
            ctx->pc = 0x4A2768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2768;
        }
    }
    ctx->pc = 0x4A299Cu;
    // 0x4a299c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a29a0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a29a4: 0xa440220a  sh          $zero, 0x220A($v0)
    ctx->pc = 0x4a29a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F88Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F88Au, _value); } while (0);
    // 0x4a29a8: 0xc12487a  jal         func_4921E8
    ctx->pc = 0x4A29A8u;
    SET_GPR_U32(ctx, 31, 0x4A29B0u);
    ctx->pc = 0x4A29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A29A8u;
    // 0x4a29ac: 0xa440220e  sh          $zero, 0x220E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 8718), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4921E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4921E8u, 0x4A29A8u, 0x4A29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A29B0u;
label_4a29b0:
    // 0x4a29b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4a29b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a29b4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4a29b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a29b8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4a29b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a29bc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4a29bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a29c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4a29c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a29c4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4a29c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a29c8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4a29c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a29cc: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4a29ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4a29d0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4a29d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a29d4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4a29d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4a29d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29D8u;
        // 0x4a29dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A29D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A29E0u;
}
