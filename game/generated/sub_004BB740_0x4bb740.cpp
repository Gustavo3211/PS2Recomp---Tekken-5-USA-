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

// Function: sub_004BB740
// Address: 0x4bb740 - 0x4bba40
void sub_004BB740_0x4bb740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BB740_0x4bb740");
#endif

    ctx->pc = 0x4bb740u;

    // 0x4bb740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bb740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bb744: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4bb744u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4bb748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bb748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bb74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bb74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb750: 0x25c50dd8  addiu       $a1, $t6, 0xDD8
    ctx->pc = 0x4bb750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb754: 0x26190118  addiu       $t9, $s0, 0x118
    ctx->pc = 0x4bb754u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4bb758: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bb758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DD8u));
    // 0x4bb75c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bb75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb760: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x4bb760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4bb764: 0x3c0d0073  lui         $t5, 0x73
    ctx->pc = 0x4bb764u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)115 << 16));
    // 0x4bb768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb76c: 0x25a4d680  addiu       $a0, $t5, -0x2980
    ctx->pc = 0x4bb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb770: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb774: 0x948624a0  lhu         $a2, 0x24A0($a0)
    ctx->pc = 0x4bb774u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x72FB20u));
    // 0x4bb778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb77c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4bb77cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4bb780: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bb780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bb784: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bb784u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb788: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4bb78c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb790: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB790u;
    {
        const bool branch_taken_0x4bb790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB790u;
        // 0x4bb794: 0x25e70ddc  addiu       $a3, $t7, 0xDDC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 3548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb790) {
            ctx->pc = 0x4BB7A8u;
            goto label_4bb7a8;
        }
    }
    ctx->pc = 0x4BB798u;
    // 0x4bb798: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bb798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bb79c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BB79Cu;
    {
        const bool branch_taken_0x4bb79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB79Cu;
        // 0x4bb7a0: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb79c) {
            ctx->pc = 0x4BB7B0u;
            goto label_4bb7b0;
        }
    }
    ctx->pc = 0x4BB7A4u;
    // 0x4bb7a4: 0x0  nop
    ctx->pc = 0x4bb7a4u;
    // NOP
label_4bb7a8:
    // 0x4bb7a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bb7ac: 0x482824  and         $a1, $v0, $t0
    ctx->pc = 0x4bb7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4bb7b0:
    // 0x4bb7b0: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4bb7b0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4bb7b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bb7b8: 0x270c0de0  addiu       $t4, $t8, 0xDE0
    ctx->pc = 0x4bb7b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 3552));
    // 0x4bb7bc: 0x94440de4  lhu         $a0, 0xDE4($v0)
    ctx->pc = 0x4bb7bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7F0DE4u));
    // 0x4bb7c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4bb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DE0u));
    // 0x4bb7c4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bb7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb7c8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4bb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4bb7cc: 0x25ca0dd8  addiu       $t2, $t6, 0xDD8
    ctx->pc = 0x4bb7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb7d0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4bb7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4bb7d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bb7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bb7d8: 0x25a4d680  addiu       $a0, $t5, -0x2980
    ctx->pc = 0x4bb7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb7dc: 0x95e80ddc  lhu         $t0, 0xDDC($t7)
    ctx->pc = 0x4bb7dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3548)));
    // 0x4bb7e0: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4bb7e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb7e4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bb7e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb7ec: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x4bb7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4bb7f0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4bb7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb7f4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4bb7f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bb7f8: 0x948b24a0  lhu         $t3, 0x24A0($a0)
    ctx->pc = 0x4bb7f8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9376)));
    // 0x4bb7fc: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4bb7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4bb800: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4bb800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb804: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb808: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb80c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bb80cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bb810: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb818: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bb818u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bb81c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb820: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bb820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb824: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bb824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bb828: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb82c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb830: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bb830u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bb834: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bb834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb838: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4bb838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bb83c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4bb83cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4bb840: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4bb840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4bb844: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4bb844u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4bb848: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4bb848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb84c: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4bb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4bb850: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb854: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB854u;
    {
        const bool branch_taken_0x4bb854 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB854u;
        // 0x4bb858: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb854) {
            ctx->pc = 0x4BB864u;
            goto label_4bb864;
        }
    }
    ctx->pc = 0x4BB85Cu;
    // 0x4bb85c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bb860: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4bb860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bb864:
    // 0x4bb864: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4bb864u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4bb868: 0x25e70ddc  addiu       $a3, $t7, 0xDDC
    ctx->pc = 0x4bb868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 3548));
    // 0x4bb86c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4bb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bb870: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bb870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bb874: 0x8f040de0  lw          $a0, 0xDE0($t8)
    ctx->pc = 0x4bb874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 3552)));
    // 0x4bb878: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4bb878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb87c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bb87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bb880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4bb880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4bb884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bb884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bb888: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4bb888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bb88c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BB88Cu;
    {
        const bool branch_taken_0x4bb88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB88Cu;
        // 0x4bb890: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb88c) {
            ctx->pc = 0x4BB8B8u;
            goto label_4bb8b8;
        }
    }
    ctx->pc = 0x4BB894u;
    // 0x4bb894: 0x25c50dd8  addiu       $a1, $t6, 0xDD8
    ctx->pc = 0x4bb894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb898: 0x25a2d680  addiu       $v0, $t5, -0x2980
    ctx->pc = 0x4bb898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb89c: 0x844324a0  lh          $v1, 0x24A0($v0)
    ctx->pc = 0x4bb89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 9376)));
    // 0x4bb8a0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4bb8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb8a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bb8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb8a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bb8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bb8ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb8b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb8b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4bb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4bb8b8:
    // 0x4bb8b8: 0x25c40dd8  addiu       $a0, $t6, 0xDD8
    ctx->pc = 0x4bb8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb8bc: 0x25a5d680  addiu       $a1, $t5, -0x2980
    ctx->pc = 0x4bb8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb8c0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4bb8c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bb8c4: 0x260c011c  addiu       $t4, $s0, 0x11C
    ctx->pc = 0x4bb8c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4bb8c8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bb8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb8cc: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x4bb8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bb8d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bb8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bb8d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bb8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bb8d8: 0xa4a224a0  sh          $v0, 0x24A0($a1)
    ctx->pc = 0x4bb8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb8dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb8e0: 0x94a624a2  lhu         $a2, 0x24A2($a1)
    ctx->pc = 0x4bb8e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9378)));
    // 0x4bb8e4: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bb8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb8e8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb8ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb8f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bb8f4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bb8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bb8f8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4bb8fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb900: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB900u;
    {
        const bool branch_taken_0x4bb900 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB900u;
        // 0x4bb904: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb900) {
            ctx->pc = 0x4BB910u;
            goto label_4bb910;
        }
    }
    ctx->pc = 0x4BB908u;
    // 0x4bb908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BB908u;
    {
        const bool branch_taken_0x4bb908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB908u;
        // 0x4bb90c: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb908) {
            ctx->pc = 0x4BB914u;
            goto label_4bb914;
        }
    }
    ctx->pc = 0x4BB910u;
label_4bb910:
    // 0x4bb910: 0x482824  and         $a1, $v0, $t0
    ctx->pc = 0x4bb910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4bb914:
    // 0x4bb914: 0x270b0de0  addiu       $t3, $t8, 0xDE0
    ctx->pc = 0x4bb914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 3552));
    // 0x4bb918: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bb918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bb91c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4bb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb920: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bb920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb924: 0x94440de8  lhu         $a0, 0xDE8($v0)
    ctx->pc = 0x4bb924u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7F0DE8u));
    // 0x4bb928: 0x25c90dd8  addiu       $t1, $t6, 0xDD8
    ctx->pc = 0x4bb928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb92c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4bb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4bb930: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4bb930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4bb934: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bb934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bb938: 0x25aad680  addiu       $t2, $t5, -0x2980
    ctx->pc = 0x4bb938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb93c: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4bb93cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bb940: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bb944: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb948: 0x95e50ddc  lhu         $a1, 0xDDC($t7)
    ctx->pc = 0x4bb948u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3548)));
    // 0x4bb94c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4bb94cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb950: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4bb950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bb954: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4bb954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4bb958: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4bb958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4bb95c: 0x954524a2  lhu         $a1, 0x24A2($t2)
    ctx->pc = 0x4bb95cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 9378)));
    // 0x4bb960: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb964: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4bb964u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4bb968: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb96c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bb96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bb970: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb974: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb978: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bb978u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bb97c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb980: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4bb980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb984: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4bb984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bb988: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb98c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb990: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bb990u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bb994: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4bb994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb998: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4bb998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bb99c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4bb99cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4bb9a0: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4bb9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4bb9a4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4bb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4bb9a8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4bb9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bb9ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bb9b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb9b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB9B4u;
    {
        const bool branch_taken_0x4bb9b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB9B4u;
        // 0x4bb9b8: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb9b4) {
            ctx->pc = 0x4BB9C4u;
            goto label_4bb9c4;
        }
    }
    ctx->pc = 0x4BB9BCu;
    // 0x4bb9bc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bb9c0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4bb9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bb9c4:
    // 0x4bb9c4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4bb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4bb9c8: 0x25e50ddc  addiu       $a1, $t7, 0xDDC
    ctx->pc = 0x4bb9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 3548));
    // 0x4bb9cc: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4bb9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bb9d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb9d4: 0x8f040de0  lw          $a0, 0xDE0($t8)
    ctx->pc = 0x4bb9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 3552)));
    // 0x4bb9d8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4bb9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb9dc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bb9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bb9e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4bb9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4bb9e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bb9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bb9e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4bb9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bb9ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BB9ECu;
    {
        const bool branch_taken_0x4bb9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB9ECu;
        // 0x4bb9f0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb9ec) {
            ctx->pc = 0x4BBA18u;
            goto label_4bba18;
        }
    }
    ctx->pc = 0x4BB9F4u;
    // 0x4bb9f4: 0x25c50dd8  addiu       $a1, $t6, 0xDD8
    ctx->pc = 0x4bb9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bb9f8: 0x25a2d680  addiu       $v0, $t5, -0x2980
    ctx->pc = 0x4bb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bb9fc: 0x844324a2  lh          $v1, 0x24A2($v0)
    ctx->pc = 0x4bb9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 9378)));
    // 0x4bba00: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4bba00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4bba04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bba08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bba0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bba10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bba14: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4bba14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4bba18:
    // 0x4bba18: 0x25c40dd8  addiu       $a0, $t6, 0xDD8
    ctx->pc = 0x4bba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 3544));
    // 0x4bba1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bba1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bba20: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bba20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bba24: 0x25a5d680  addiu       $a1, $t5, -0x2980
    ctx->pc = 0x4bba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4bba28: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4bba28u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bba2c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4bba2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bba30: 0xa4a324a2  sh          $v1, 0x24A2($a1)
    ctx->pc = 0x4bba30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9378), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bba34: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBA34u;
        // 0x4bba38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBA3Cu;
    // 0x4bba3c: 0x0  nop
    ctx->pc = 0x4bba3cu;
    // NOP
    ctx->pc = 0x4bba40u;
}
