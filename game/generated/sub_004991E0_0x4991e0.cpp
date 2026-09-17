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

// Function: sub_004991E0
// Address: 0x4991e0 - 0x499698
void sub_004991E0_0x4991e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004991E0_0x4991e0");
#endif

    switch (ctx->pc) {
        case 0x4993d0u: goto label_4993d0;
        case 0x49942cu: goto label_49942c;
        case 0x4994b8u: goto label_4994b8;
        case 0x4994dcu: goto label_4994dc;
        case 0x4995dcu: goto label_4995dc;
        case 0x4995fcu: goto label_4995fc;
        case 0x499660u: goto label_499660;
        default: break;
    }

    ctx->pc = 0x4991e0u;

    // 0x4991e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4991e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4991e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4991e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4991e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4991e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4991ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4991ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4991f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4991f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4991f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4991f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4991f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4991f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4991fc: 0x24460b1c  addiu       $a2, $v0, 0xB1C
    ctx->pc = 0x4991fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2844));
    // 0x499200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x499200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x499204: 0x2463d600  addiu       $v1, $v1, -0x2A00
    ctx->pc = 0x499204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
    // 0x499208: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x499208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49920c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49920cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x499210: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x499210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x499214: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x499214u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x499218: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x499218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49921c: 0x256a0b20  addiu       $t2, $t3, 0xB20
    ctx->pc = 0x49921cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 2848));
    // 0x499220: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x499220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x499224: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x499224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x499228: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x499228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x49922c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x49922cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0B1Cu));
    // 0x499230: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x499230u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D612u));
    // 0x499234: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x499234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x499238: 0x84670032  lh          $a3, 0x32($v1)
    ctx->pc = 0x499238u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x72D632u));
    // 0x49923c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x499240: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x499240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x499244: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x499244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x499248: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x499248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49924c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x49924cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499250: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499250u;
    {
        const bool branch_taken_0x499250 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x499254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499250u;
        // 0x499254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499250) {
            ctx->pc = 0x499268u;
            goto label_499268;
        }
    }
    ctx->pc = 0x499258u;
    // 0x499258: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x499258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49925c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49925Cu;
    {
        const bool branch_taken_0x49925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49925Cu;
        // 0x499260: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49925c) {
            ctx->pc = 0x499270u;
            goto label_499270;
        }
    }
    ctx->pc = 0x499264u;
    // 0x499264: 0x0  nop
    ctx->pc = 0x499264u;
    // NOP
label_499268:
    // 0x499268: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x499268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49926c: 0x482824  and         $a1, $v0, $t0
    ctx->pc = 0x49926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_499270:
    // 0x499270: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x499270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x499274: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x499274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x499278: 0x24840b24  addiu       $a0, $a0, 0xB24
    ctx->pc = 0x499278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2852));
    // 0x49927c: 0x24670b1c  addiu       $a3, $v1, 0xB1C
    ctx->pc = 0x49927cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2844));
    // 0x499280: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x499280u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0B1Cu));
    // 0x499284: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x499284u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x499288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x499288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B24u));
    // 0x49928c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x49928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x499290: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x499290u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x499294: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x499294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x499298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x499298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49929c: 0x95660b20  lhu         $a2, 0xB20($t3)
    ctx->pc = 0x49929cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2848)));
    // 0x4992a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4992a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4992a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4992a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4992a8: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x4992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4992ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4992acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4992b0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4992b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4992b4: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4992b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4992b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4992bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4992bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4992c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4992c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4992c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4992c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4992c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4992c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4992cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4992ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4992d0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4992d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4992d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4992d8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4992d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4992dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4992dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4992e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4992e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4992e4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4992e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4992e8: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x4992e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4992ec: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4992ECu;
    {
        const bool branch_taken_0x4992ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4992ec) {
            ctx->pc = 0x4992F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4992ECu;
            // 0x4992f0: 0x84e20000  lh          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499388u;
            goto label_499388;
        }
    }
    ctx->pc = 0x4992F4u;
    // 0x4992f4: 0x2654011a  addiu       $s4, $s2, 0x11A
    ctx->pc = 0x4992f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 282));
    // 0x4992f8: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x4992f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4992fc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4992fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x499300: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x499300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x499304: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499308: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x499308u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49930c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x49930cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499310: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x499310u;
    {
        const bool branch_taken_0x499310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x499314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499310u;
        // 0x499314: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499310) {
            ctx->pc = 0x4993DCu;
            goto label_4993dc;
        }
    }
    ctx->pc = 0x499318u;
    // 0x499318: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x499318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x49931c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49931Cu;
    {
        const bool branch_taken_0x49931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49931Cu;
        // 0x499320: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49931c) {
            ctx->pc = 0x499350u;
            goto label_499350;
        }
    }
    ctx->pc = 0x499324u;
    // 0x499324: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x499324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x499328: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49932c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x499330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499334: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x499334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x499338: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x499338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49933c: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x49933Cu;
    {
        const bool branch_taken_0x49933c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x499340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49933Cu;
        // 0x499340: 0x3462ffff  ori         $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49933c) {
            ctx->pc = 0x4993C8u;
            goto label_4993c8;
        }
    }
    ctx->pc = 0x499344u;
    // 0x499344: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x499344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x499348: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x499348u;
    {
        const bool branch_taken_0x499348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499348u;
        // 0x49934c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499348) {
            ctx->pc = 0x4993C8u;
            goto label_4993c8;
        }
    }
    ctx->pc = 0x499350u;
label_499350:
    // 0x499350: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499354: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x499354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x499358: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49935c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49935cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x499360: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x499360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499364: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x499364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x499368: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x499368u;
    {
        const bool branch_taken_0x499368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499368u;
        // 0x49936c: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x499368) {
            ctx->pc = 0x4993C8u;
            goto label_4993c8;
        }
    }
    ctx->pc = 0x499370u;
    // 0x499370: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x499370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x499374: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x499374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x499378: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49937c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x49937Cu;
    {
        const bool branch_taken_0x49937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49937Cu;
        // 0x499380: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49937c) {
            ctx->pc = 0x4993C8u;
            goto label_4993c8;
        }
    }
    ctx->pc = 0x499384u;
    // 0x499384: 0x0  nop
    ctx->pc = 0x499384u;
    // NOP
label_499388:
    // 0x499388: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x499388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49938c: 0x2654011a  addiu       $s4, $s2, 0x11A
    ctx->pc = 0x49938cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 282));
    // 0x499390: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x499390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x499394: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x499394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x499398: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x499398u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x49939c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x49939cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x4993a0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4993a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4993a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4993a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4993a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4993a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4993ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4993acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4993b0: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4993b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4993b4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4993b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4993b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4993bc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4993bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4993c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4993c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4993c4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4993c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_4993c8:
    // 0x4993c8: 0xc126228  jal         func_4988A0
    ctx->pc = 0x4993C8u;
    SET_GPR_U32(ctx, 31, 0x4993D0u);
    ctx->pc = 0x4993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4993C8u;
    // 0x4993cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4988A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4988A0u, 0x4993C8u, 0x4993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4993D0u;
label_4993d0:
    // 0x4993d0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4993d4: 0x94820b1c  lhu         $v0, 0xB1C($a0)
    ctx->pc = 0x4993d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B1Cu));
    // 0x4993d8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4993d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_4993dc:
    // 0x4993dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4993e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4993e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4993e4: 0x24550b34  addiu       $s5, $v0, 0xB34
    ctx->pc = 0x4993e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2868));
    // 0x4993e8: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x4993e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x4993ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B34u));
    // 0x4993f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4993f4: 0x24730b30  addiu       $s3, $v1, 0xB30
    ctx->pc = 0x4993f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2864));
    // 0x4993f8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4993f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4993fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4993fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499400: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x499400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B30u));
    // 0x499404: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x499404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x499408: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x499408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49940c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x49940cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x499410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499414: 0x24910b38  addiu       $s1, $a0, 0xB38
    ctx->pc = 0x499414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2872));
    // 0x499418: 0x86420118  lh          $v0, 0x118($s2)
    ctx->pc = 0x499418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x49941c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499420: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499424: 0xc124620  jal         func_491880
    ctx->pc = 0x499424u;
    SET_GPR_U32(ctx, 31, 0x49942Cu);
    ctx->pc = 0x499428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499424u;
    // 0x499428: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x499424u, 0x49942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49942Cu;
label_49942c:
    // 0x49942c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49942cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x499430: 0x34019804  ori         $at, $zero, 0x9804
    ctx->pc = 0x499430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38916);
    // 0x499434: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x499434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x499438: 0x24670b28  addiu       $a3, $v1, 0xB28
    ctx->pc = 0x499438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2856));
    // 0x49943c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49943cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x499440: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x499440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x499444: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x499444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B28u));
    // 0x499448: 0x21023  negu        $v0, $v0
    ctx->pc = 0x499448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49944c: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x49944cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x499450: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x499450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499454: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499458: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49945c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x499460: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x499460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x499464: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499468: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x499468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x49946c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49946cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499470: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x499470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499474: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x499474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x499478: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x499478u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49947c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x49947cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x499480: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x499480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x499484: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x499484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x499488: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x499488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49948c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499490: 0x4c00071  bltz        $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x499490u;
    {
        const bool branch_taken_0x499490 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x499494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499490u;
        // 0x499494: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499490) {
            ctx->pc = 0x499658u;
            goto label_499658;
        }
    }
    ctx->pc = 0x499498u;
    // 0x499498: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x499498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49949c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49949cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4994a0: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x4994a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994a4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x4994a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994a8: 0x24510b1c  addiu       $s1, $v0, 0xB1C
    ctx->pc = 0x4994a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2844));
    // 0x4994ac: 0x247e0b20  addiu       $fp, $v1, 0xB20
    ctx->pc = 0x4994acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 2848));
    // 0x4994b0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4994b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994b4: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x4994b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4994b8:
    // 0x4994b8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4994b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4994bc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4994c0: 0x94820b28  lhu         $v0, 0xB28($a0)
    ctx->pc = 0x4994c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B28u));
    // 0x4994c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4994c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4994c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4994cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4994ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4994d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4994d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4994d4: 0xc126204  jal         func_498810
    ctx->pc = 0x4994D4u;
    SET_GPR_U32(ctx, 31, 0x4994DCu);
    ctx->pc = 0x4994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4994D4u;
    // 0x4994d8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498810u, 0x4994D4u, 0x4994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4994DCu;
label_4994dc:
    // 0x4994dc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4994dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4994e0: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4994E0u;
    {
        const bool branch_taken_0x4994e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994E0u;
        // 0x4994e4: 0x24650b1c  addiu       $a1, $v1, 0xB1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994e0) {
            ctx->pc = 0x4995FCu;
            goto label_4995fc;
        }
    }
    ctx->pc = 0x4994E8u;
    // 0x4994e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4994ec: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4994f0: 0x94830b30  lhu         $v1, 0xB30($a0)
    ctx->pc = 0x4994f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0B30u));
    // 0x4994f4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4994f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4994f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4994f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4994fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4994fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x499500: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x499500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499504: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x499504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499508: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x499508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49950c: 0x2c630027  sltiu       $v1, $v1, 0x27
    ctx->pc = 0x49950cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x499510: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x499510u;
    {
        const bool branch_taken_0x499510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x499514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499510u;
        // 0x499514: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499510) {
            ctx->pc = 0x499550u;
            goto label_499550;
        }
    }
    ctx->pc = 0x499518u;
    // 0x499518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x499518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49951c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499520: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x499520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499524: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x499524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x499528: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x499528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49952c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49952cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499530: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x499530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x499534: 0x2c630028  sltiu       $v1, $v1, 0x28
    ctx->pc = 0x499534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x499538: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x499538u;
    {
        const bool branch_taken_0x499538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499538u;
        // 0x49953c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499538) {
            ctx->pc = 0x499550u;
            goto label_499550;
        }
    }
    ctx->pc = 0x499540u;
    // 0x499540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x499540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x499544: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x499544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499548: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x499548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49954c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49954cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_499550:
    // 0x499550: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x499550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499554: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x499554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499558: 0x244206a6  addiu       $v0, $v0, 0x6A6
    ctx->pc = 0x499558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1702));
    // 0x49955c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499560: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499564: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499568: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x499568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49956c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49956cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x499570: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x499570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499574: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x499574u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x499578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x499578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49957c: 0x94620b30  lhu         $v0, 0xB30($v1)
    ctx->pc = 0x49957cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B30u));
    // 0x499580: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x499580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x499584: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x499584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x499588: 0x8c650b38  lw          $a1, 0xB38($v1)
    ctx->pc = 0x499588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2872)));
    // 0x49958c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x49958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x499590: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x499590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x499594: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499598: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x499598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49959c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49959cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4995a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4995a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4995a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4995a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4995a8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4995a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4995ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4995acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4995b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4995b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4995b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4995b8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4995b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4995bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4995c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4995c4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4995c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4995c8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4995c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4995cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4995ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4995d0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4995d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4995d4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4995D4u;
    SET_GPR_U32(ctx, 31, 0x4995DCu);
    ctx->pc = 0x4995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4995D4u;
    // 0x4995d8: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4995D4u, 0x4995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4995DCu;
label_4995dc:
    // 0x4995dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4995dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995e0: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x4995e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4995e4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4995e8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4995e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4995ec: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x4995ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4995f0: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4995f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4995f4: 0xc128b10  jal         func_4A2C40
    ctx->pc = 0x4995F4u;
    SET_GPR_U32(ctx, 31, 0x4995FCu);
    ctx->pc = 0x4995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4995F4u;
    // 0x4995f8: 0xa6420028  sh          $v0, 0x28($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2C40u, 0x4995F4u, 0x4995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4995FCu;
label_4995fc:
    // 0x4995fc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4995fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x499600: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x499600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x499604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x499604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x499608: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x499608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49960c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x499610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499614: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x499614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x499618: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49961c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x49961cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x499620: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x499620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x499624: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x499624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x499628: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x499628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49962c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49962cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x499630: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x499630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x499634: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x499634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x499638: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x499638u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49963c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49963cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x499640: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x499640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x499644: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x499644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x499648: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x499648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x49964c: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x49964cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x499650: 0x441ff99  bgez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x499650u;
    {
        const bool branch_taken_0x499650 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x499654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499650u;
        // 0x499654: 0xaec70000  sw          $a3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499650) {
            ctx->pc = 0x4994B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4994b8;
        }
    }
    ctx->pc = 0x499658u;
label_499658:
    // 0x499658: 0xc126274  jal         func_4989D0
    ctx->pc = 0x499658u;
    SET_GPR_U32(ctx, 31, 0x499660u);
    ctx->pc = 0x49965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499658u;
    // 0x49965c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4989D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4989D0u, 0x499658u, 0x499660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499660u;
label_499660:
    // 0x499660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x499660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x499664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x499668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49966c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49966cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x499670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x499674: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x499674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499678: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x499678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49967c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49967cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499680: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x499680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x499684: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x499684u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499688: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x499688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49968c: 0x8126176  j           func_4985D8
    ctx->pc = 0x49968Cu;
    ctx->pc = 0x499690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49968Cu;
    // 0x499690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4985D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4985D8u, 0x49968Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x499694u;
    // 0x499694: 0x0  nop
    ctx->pc = 0x499694u;
    // NOP
    ctx->pc = 0x499698u;
}
