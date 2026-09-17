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

// Function: sub_00497418
// Address: 0x497418 - 0x497898
void sub_00497418_0x497418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497418_0x497418");
#endif

    switch (ctx->pc) {
        case 0x4976c4u: goto label_4976c4;
        case 0x4976e8u: goto label_4976e8;
        case 0x497724u: goto label_497724;
        case 0x497760u: goto label_497760;
        case 0x497798u: goto label_497798;
        case 0x4977d4u: goto label_4977d4;
        default: break;
    }

    ctx->pc = 0x497418u;

    // 0x497418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x497418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49741c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x49741cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x497420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x497420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x497424: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x497424u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x497428: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x497428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49742c: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x49742cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x497430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x497430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x497434: 0x264a0af8  addiu       $t2, $s2, 0xAF8
    ctx->pc = 0x497434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
    // 0x497438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x497438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49743c: 0x26c9d680  addiu       $t1, $s6, -0x2980
    ctx->pc = 0x49743cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x497440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x497440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x497444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x497444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497448: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x497448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49744c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x497450: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x497450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x497454: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x497454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AF8u));
    // 0x497458: 0x85220008  lh          $v0, 0x8($t1)
    ctx->pc = 0x497458u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D688u));
    // 0x49745c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497460: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x497460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x497464: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497468: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x497468u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x49746c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x49746cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x497470: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x497470u;
    {
        const bool branch_taken_0x497470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x497474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497470u;
        // 0x497474: 0x3c0c0073  lui         $t4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497470) {
            ctx->pc = 0x4974D0u;
            goto label_4974d0;
        }
    }
    ctx->pc = 0x497478u;
    // 0x497478: 0x252922a0  addiu       $t1, $t1, 0x22A0
    ctx->pc = 0x497478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8864));
    // 0x49747c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49747cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x497480: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x497480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x497484: 0x24c60b08  addiu       $a2, $a2, 0xB08
    ctx->pc = 0x497484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2824));
    // 0x497488: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x497488u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B08u, _value); } while (0);
    // 0x49748c: 0x2585d600  addiu       $a1, $t4, -0x2A00
    ctx->pc = 0x49748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956544));
    // 0x497490: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x497490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x497494: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x497494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x497498: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x497498u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49749c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x49749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4974a0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4974a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B08u, _value); } while (0);
    // 0x4974a4: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x4974a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x4974a8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4974a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4974ac: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4974acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7F0B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B08u, _value); } while (0);
    // 0x4974b0: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x4974b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x4974b4: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x4974b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4974b8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4974b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4974bc: 0xa4a4003c  sh          $a0, 0x3C($a1)
    ctx->pc = 0x4974bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x4974c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4974c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B08u, _value); } while (0);
    // 0x4974c4: 0xa4a0004a  sh          $zero, 0x4A($a1)
    ctx->pc = 0x4974c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x4974c8: 0xa4a0003e  sh          $zero, 0x3E($a1)
    ctx->pc = 0x4974c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x4974cc: 0xa4a00040  sh          $zero, 0x40($a1)
    ctx->pc = 0x4974ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 0));
label_4974d0:
    // 0x4974d0: 0x2584d600  addiu       $a0, $t4, -0x2A00
    ctx->pc = 0x4974d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956544));
    // 0x4974d4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4974d8: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x4974d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4974dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4974dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4974e0: 0x84850034  lh          $a1, 0x34($a0)
    ctx->pc = 0x4974e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4974e4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4974e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x4974e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4974e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4974ec: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4974ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4974f0: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4974f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4974f4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4974f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4974f8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4974f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4974fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4974fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497500: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x497500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x497504: 0x24420ccd  addiu       $v0, $v0, 0xCCD
    ctx->pc = 0x497504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3277));
    // 0x497508: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x497508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49750c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x49750cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497510: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x497510u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x497514: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x497514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x497518: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x497518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49751c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x49751cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x497520: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x497520u;
    {
        const bool branch_taken_0x497520 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x497524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497520u;
        // 0x497524: 0x2ca2199a  sltiu       $v0, $a1, 0x199A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6554) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x497520) {
            ctx->pc = 0x497550u;
            goto label_497550;
        }
    }
    ctx->pc = 0x497528u;
    // 0x497528: 0x8b1024  and         $v0, $a0, $t3
    ctx->pc = 0x497528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x49752c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49752cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x497530: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x497530u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x497534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x497538: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x497538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49753c: 0x3063199a  andi        $v1, $v1, 0x199A
    ctx->pc = 0x49753cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6554);
    // 0x497540: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x497540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x497544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497548: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x497548u;
    {
        const bool branch_taken_0x497548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497548u;
        // 0x49754c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497548) {
            ctx->pc = 0x497598u;
            goto label_497598;
        }
    }
    ctx->pc = 0x497550u;
label_497550:
    // 0x497550: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x497550u;
    {
        const bool branch_taken_0x497550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497550u;
        // 0x497554: 0x26470af8  addiu       $a3, $s2, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497550) {
            ctx->pc = 0x49759Cu;
            goto label_49759c;
        }
    }
    ctx->pc = 0x497558u;
    // 0x497558: 0x3401e666  ori         $at, $zero, 0xE666
    ctx->pc = 0x497558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58982);
    // 0x49755c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x49755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x497560: 0x8b2824  and         $a1, $a0, $t3
    ctx->pc = 0x497560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x497564: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x497564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x497568: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x497568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49756c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x49756cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x497570: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x497570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x497574: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x497574u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x497578: 0x26440af8  addiu       $a0, $s2, 0xAF8
    ctx->pc = 0x497578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
    // 0x49757c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49757cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497580: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497584: 0x3042199a  andi        $v0, $v0, 0x199A
    ctx->pc = 0x497584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6554);
    // 0x497588: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x497588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49758c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497590: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497594: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_497598:
    // 0x497598: 0x26470af8  addiu       $a3, $s2, 0xAF8
    ctx->pc = 0x497598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
label_49759c:
    // 0x49759c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49759cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4975a0: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4975a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4975a4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4975a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4975a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4975a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4975ac: 0x2586d600  addiu       $a2, $t4, -0x2A00
    ctx->pc = 0x4975acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956544));
    // 0x4975b0: 0x2442f333  addiu       $v0, $v0, -0xCCD
    ctx->pc = 0x4975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964019));
    // 0x4975b4: 0x8e640af4  lw          $a0, 0xAF4($s3)
    ctx->pc = 0x4975b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x4975b8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4975b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4975bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4975bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4975c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4975c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4975c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4975c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4975c8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4975c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4975cc: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x4975ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x4975d0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4975d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4975d4: 0x84c20012  lh          $v0, 0x12($a2)
    ctx->pc = 0x4975d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4975d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4975d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4975dc: 0x84c50032  lh          $a1, 0x32($a2)
    ctx->pc = 0x4975dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
    // 0x4975e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4975e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4975e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4975e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4975e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4975e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4975ec: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4975ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4975f0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x4975f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4975f4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4975f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4975f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4975f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4975fc: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4975fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x497600: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x497600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x497604: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x497604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x497608: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x497608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49760c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49760cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x497610: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x497610u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x497614: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x497614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497618: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x497618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49761c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49761Cu;
    {
        const bool branch_taken_0x49761c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x497620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49761Cu;
        // 0x497620: 0x2c822000  sltiu       $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49761c) {
            ctx->pc = 0x497630u;
            goto label_497630;
        }
    }
    ctx->pc = 0x497624u;
    // 0x497624: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x497624u;
    {
        const bool branch_taken_0x497624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497624u;
        // 0x497628: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497624) {
            ctx->pc = 0x497650u;
            goto label_497650;
        }
    }
    ctx->pc = 0x49762Cu;
    // 0x49762c: 0x0  nop
    ctx->pc = 0x49762cu;
    // NOP
label_497630:
    // 0x497630: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x497630u;
    {
        const bool branch_taken_0x497630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497630) {
            ctx->pc = 0x497634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497630u;
            // 0x497634: 0x26520af8  addiu       $s2, $s2, 0xAF8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497678u;
            goto label_497678;
        }
    }
    ctx->pc = 0x497638u;
    // 0x497638: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x497638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x49763c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x497640: 0x682024  and         $a0, $v1, $t0
    ctx->pc = 0x497640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x497644: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x497644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x497648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49764c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x49764cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_497650:
    // 0x497650: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x497650u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x497654: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497658: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x497658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49765c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x49765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x497660: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x497660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497664: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x497664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x497668: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x497668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49766c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497670: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x497670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x497674: 0x26520af8  addiu       $s2, $s2, 0xAF8
    ctx->pc = 0x497674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
label_497678:
    // 0x497678: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x497678u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x49767c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x49767cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497680: 0x26730af4  addiu       $s3, $s3, 0xAF4
    ctx->pc = 0x497680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2804));
    // 0x497684: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x497684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497688: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x497688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49768c: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x49768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x497690: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x497690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497694: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x497694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x497698: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49769c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4976a0: 0x26100afc  addiu       $s0, $s0, 0xAFC
    ctx->pc = 0x4976a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2812));
    // 0x4976a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4976a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4976a8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4976a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4976ac: 0x26310b00  addiu       $s1, $s1, 0xB00
    ctx->pc = 0x4976acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2816));
    // 0x4976b0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4976b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4976b4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4976b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4976b8: 0x26940b04  addiu       $s4, $s4, 0xB04
    ctx->pc = 0x4976b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2820));
    // 0x4976bc: 0xc12acca  jal         func_4AB328
    ctx->pc = 0x4976BCu;
    SET_GPR_U32(ctx, 31, 0x4976C4u);
    ctx->pc = 0x4976C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4976BCu;
    // 0x4976c0: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB328u, 0x4976BCu, 0x4976C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4976C4u;
label_4976c4:
    // 0x4976c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4976c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4976c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4976cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4976ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4976d0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x4976d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4976d4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4976d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4976d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4976d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4976dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4976dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4976e0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4976E0u;
    SET_GPR_U32(ctx, 31, 0x4976E8u);
    ctx->pc = 0x4976E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4976E0u;
    // 0x4976e4: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4976E0u, 0x4976E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4976E8u;
label_4976e8:
    // 0x4976e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4976e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4976ec: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x4976ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4976f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4976f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4976f4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4976f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4976f8: 0xa48300ac  sh          $v1, 0xAC($a0)
    ctx->pc = 0x4976f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 172), (uint16_t)GPR_U32(ctx, 3));
    // 0x4976fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4976fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497700: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x497700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497704: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x497704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497708: 0xa4a300ae  sh          $v1, 0xAE($a1)
    ctx->pc = 0x497708u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 174), (uint16_t)GPR_U32(ctx, 3));
    // 0x49770c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x497710: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x497710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497714: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x497714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x497718: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x497718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49771c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49771Cu;
    SET_GPR_U32(ctx, 31, 0x497724u);
    ctx->pc = 0x497720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49771Cu;
    // 0x497720: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49771Cu, 0x497724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497724u;
label_497724:
    // 0x497724: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x497724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497728: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x497728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49772c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497730: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x497730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x497734: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x497734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497738: 0xb51024  and         $v0, $a1, $s5
    ctx->pc = 0x497738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x49773c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x49773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x497740: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x497740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x497744: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x497744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x497748: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x497748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x49774c: 0xa4c20014  sh          $v0, 0x14($a2)
    ctx->pc = 0x49774cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x497750: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x497750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497754: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x497754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497758: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x497758u;
    SET_GPR_U32(ctx, 31, 0x497760u);
    ctx->pc = 0x49775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497758u;
    // 0x49775c: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x497758u, 0x497760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497760u;
label_497760:
    // 0x497760: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x497760u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x497764: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x497764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x497768: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x497768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49776c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x49776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x497770: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x497770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497774: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x497774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x497778: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x497778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x49777c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49777cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497780: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x497780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x497784: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x497784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x497788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49778c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49778cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x497790: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x497790u;
    SET_GPR_U32(ctx, 31, 0x497798u);
    ctx->pc = 0x497794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497790u;
    // 0x497794: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x497790u, 0x497798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497798u;
label_497798:
    // 0x497798: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x497798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49779c: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x49779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4977a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4977a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4977a4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4977a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4977a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4977a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4977ac: 0xa4c300b0  sh          $v1, 0xB0($a2)
    ctx->pc = 0x4977acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x4977b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4977b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4977b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4977b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4977b8: 0xa4a300b2  sh          $v1, 0xB2($a1)
    ctx->pc = 0x4977b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 3));
    // 0x4977bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4977bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4977c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4977c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4977c4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4977c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4977c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4977c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4977cc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4977CCu;
    SET_GPR_U32(ctx, 31, 0x4977D4u);
    ctx->pc = 0x4977D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4977CCu;
    // 0x4977d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4977CCu, 0x4977D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4977D4u;
label_4977d4:
    // 0x4977d4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4977d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4977d8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4977d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4977dc: 0x26c6d680  addiu       $a2, $s6, -0x2980
    ctx->pc = 0x4977dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4977e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4977e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4977e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4977e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4977e8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4977e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4977ec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4977ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4977f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4977f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4977f4: 0x951024  and         $v0, $a0, $s5
    ctx->pc = 0x4977f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x4977f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4977f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4977fc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4977fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x497800: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x497800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x497804: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x497804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x497808: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x497808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x49780c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x49780cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497810: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x497810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497814: 0xa4640012  sh          $a0, 0x12($v1)
    ctx->pc = 0x497814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x497818: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x497818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49781c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x49781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497820: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x497820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x497824: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x497824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x497828: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x497828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x49782c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497830: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x497830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x497834: 0xa483001a  sh          $v1, 0x1A($a0)
    ctx->pc = 0x497834u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x497838: 0x84c2220a  lh          $v0, 0x220A($a2)
    ctx->pc = 0x497838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8714)));
    // 0x49783c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x49783cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x497840: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x497840u;
    {
        const bool branch_taken_0x497840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497840u;
        // 0x497844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497840) {
            ctx->pc = 0x497870u;
            goto label_497870;
        }
    }
    ctx->pc = 0x497848u;
    // 0x497848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49784c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49784cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497850: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x497850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x497854: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x497854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497858: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x497858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49785c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49785cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497860: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x497860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x497864: 0x8125c18  j           func_497060
    ctx->pc = 0x497864u;
    ctx->pc = 0x497868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497864u;
    // 0x497868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497060u, 0x497864u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49786Cu;
    // 0x49786c: 0x0  nop
    ctx->pc = 0x49786cu;
    // NOP
label_497870:
    // 0x497870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x497874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x497878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49787c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49787cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497880: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x497880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x497884: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x497884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497888: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x497888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49788c: 0x3e00008  jr          $ra
    ctx->pc = 0x49788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49788Cu;
        // 0x497890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497894u;
    // 0x497894: 0x0  nop
    ctx->pc = 0x497894u;
    // NOP
    ctx->pc = 0x497898u;
}
