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

// Function: sub_0049F588
// Address: 0x49f588 - 0x49fa10
void sub_0049F588_0x49f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F588_0x49f588");
#endif

    ctx->pc = 0x49f588u;

    // 0x49f588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49f58c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49f58cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49f590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49f590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49f594: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49f594u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49f598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49f59c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x49f59cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x49f5a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49f5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49f5a4: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x49f5a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x49f5a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49f5ac: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x49f5acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x49f5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49f5b4: 0x26680bb0  addiu       $t0, $s3, 0xBB0
    ctx->pc = 0x49f5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2992));
    // 0x49f5b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49f5bc: 0x2682d680  addiu       $v0, $s4, -0x2980
    ctx->pc = 0x49f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x49f5c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49f5c4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49f5c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49f5c8: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x49f5c8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f5cc: 0x844724a0  lh          $a3, 0x24A0($v0)
    ctx->pc = 0x49f5ccu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x72FB20u));
    // 0x49f5d0: 0x27190118  addiu       $t9, $t8, 0x118
    ctx->pc = 0x49f5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 280));
    // 0x49f5d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49f5d8: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x49f5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x49f5dc: 0xaec50bc0  sw          $a1, 0xBC0($s6)
    ctx->pc = 0x49f5dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BC0u, _value); } while (0);
    // 0x49f5e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f5e4: 0xad440bbc  sw          $a0, 0xBBC($t2)
    ctx->pc = 0x49f5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0BBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BBCu, _value); } while (0);
    // 0x49f5e8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x49f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x49f5ec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49f5f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f5f4: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49f5f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f5f8: 0x87240000  lh          $a0, 0x0($t9)
    ctx->pc = 0x49f5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49f5fc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49f600: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49f604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f608: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49f608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49f60c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49f60cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f610: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F610u;
    {
        const bool branch_taken_0x49f610 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F610u;
        // 0x49f614: 0x26450bb8  addiu       $a1, $s2, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f610) {
            ctx->pc = 0x49F628u;
            goto label_49f628;
        }
    }
    ctx->pc = 0x49F618u;
    // 0x49f618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49F61Cu;
    {
        const bool branch_taken_0x49f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F61Cu;
        // 0x49f620: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f61c) {
            ctx->pc = 0x49F630u;
            goto label_49f630;
        }
    }
    ctx->pc = 0x49F624u;
    // 0x49f624: 0x0  nop
    ctx->pc = 0x49f624u;
    // NOP
label_49f628:
    // 0x49f628: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f62c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x49f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_49f630:
    // 0x49f630: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49f630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49f634: 0x254a0bbc  addiu       $t2, $t2, 0xBBC
    ctx->pc = 0x49f634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3004));
    // 0x49f638: 0x26500bb8  addiu       $s0, $s2, 0xBB8
    ctx->pc = 0x49f638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3000));
    // 0x49f63c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x49f63cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x49f640: 0x960d0000  lhu         $t5, 0x0($s0)
    ctx->pc = 0x49f640u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49f644: 0x266b0bb0  addiu       $t3, $s3, 0xBB0
    ctx->pc = 0x49f644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 2992));
    // 0x49f648: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x49f648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f64c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x49f64cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x49f650: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x49f650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f654: 0xd1c00  sll         $v1, $t5, 16
    ctx->pc = 0x49f654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x49f658: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x49f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x49f65c: 0x37403  sra         $t6, $v1, 16
    ctx->pc = 0x49f65cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49f660: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f664: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f668: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f66c: 0x26a90bb4  addiu       $t1, $s5, 0xBB4
    ctx->pc = 0x49f66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 2996));
    // 0x49f670: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f674: 0x27110136  addiu       $s1, $t8, 0x136
    ctx->pc = 0x49f674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), 310));
    // 0x49f678: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49f678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49f67c: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x49f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x49f680: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f684: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x49f684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f688: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x49f688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f68c: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x49f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49f690: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f694: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f698: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x49f698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f69c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49f69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49f6a0: 0x2448000f  addiu       $t0, $v0, 0xF
    ctx->pc = 0x49f6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x49f6a4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x49f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x49f6a8: 0x28470000  slti        $a3, $v0, 0x0
    ctx->pc = 0x49f6a8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x49f6ac: 0x107100b  movn        $v0, $t0, $a3
    ctx->pc = 0x49f6acu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x49f6b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f6b4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x49f6b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49f6b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x49f6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x49f6bc: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f6c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49f6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f6c4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f6c8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x49f6c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x49f6cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49f6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49f6d0: 0x85450000  lh          $a1, 0x0($t2)
    ctx->pc = 0x49f6d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f6d4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x49f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x49f6d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49f6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f6dc: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f6e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f6e4: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f6e8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49f6e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f6ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49f6f0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f6f4: 0x6d1826  xor         $v1, $v1, $t5
    ctx->pc = 0x49f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 13));
    // 0x49f6f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49f6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f6fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49f700: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f700u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f704: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f708: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49f708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49f70c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x49f70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f710: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f714: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49f714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49f718: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x49f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x49f71c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x49f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x49f720: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f724: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x49f724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f728: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f72c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x49f72cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f730: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f734: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49f734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f738: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x49f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49f73c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f740: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f744: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f748: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f74c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49f74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49f750: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x49f750u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x49f754: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x49f754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x49f758: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f75c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x49f75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f760: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49f760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f764: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x49f764u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f768: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f768u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f76c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f76cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f770: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49f774: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F774u;
    {
        const bool branch_taken_0x49f774 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x49F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F774u;
        // 0x49f778: 0xac1024  and         $v0, $a1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f774) {
            ctx->pc = 0x49F78Cu;
            goto label_49f78c;
        }
    }
    ctx->pc = 0x49F77Cu;
    // 0x49f77c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x49f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x49f780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f784: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x49f784u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x49f788: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x49f788u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_49f78c:
    // 0x49f78c: 0xcd1026  xor         $v0, $a2, $t5
    ctx->pc = 0x49f78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 13));
    // 0x49f790: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x49f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f794: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f798: 0x2684d680  addiu       $a0, $s4, -0x2980
    ctx->pc = 0x49f798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x49f79c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f79cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f7a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f7a4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f7a8: 0x270f011c  addiu       $t7, $t8, 0x11C
    ctx->pc = 0x49f7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 284));
    // 0x49f7ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f7b0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f7b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f7b8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x49f7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f7bc: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x49f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x49f7c0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x49f7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x49f7c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f7c8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f7cc: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x49f7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f7d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x49f7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f7d4: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49f7d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f7d8: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x49f7d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49f7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49f7e0: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x49f7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f7e4: 0x848324a2  lh          $v1, 0x24A2($a0)
    ctx->pc = 0x49f7e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9378)));
    // 0x49f7e8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x49f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f7ec: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f7f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49f7f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49f7f8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x49f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x49f7fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49f800: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x49f800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f804: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x49f804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49f808: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x49f808u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49f80c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x49f80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x49f810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49f814: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x49f814u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x49f818: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x49f818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f81c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F81Cu;
    {
        const bool branch_taken_0x49f81c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F81Cu;
        // 0x49f820: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f81c) {
            ctx->pc = 0x49F830u;
            goto label_49f830;
        }
    }
    ctx->pc = 0x49F824u;
    // 0x49f824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49F824u;
    {
        const bool branch_taken_0x49f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F824u;
        // 0x49f828: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f824) {
            ctx->pc = 0x49F834u;
            goto label_49f834;
        }
    }
    ctx->pc = 0x49F82Cu;
    // 0x49f82c: 0x0  nop
    ctx->pc = 0x49f82cu;
    // NOP
label_49f830:
    // 0x49f830: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x49f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_49f834:
    // 0x49f834: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49f834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49f838: 0x26c90bc0  addiu       $t1, $s6, 0xBC0
    ctx->pc = 0x49f838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 3008));
    // 0x49f83c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x49f83cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x49f840: 0x26a80bb4  addiu       $t0, $s5, 0xBB4
    ctx->pc = 0x49f840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 2996));
    // 0x49f844: 0x964c0bb8  lhu         $t4, 0xBB8($s2)
    ctx->pc = 0x49f844u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3000)));
    // 0x49f848: 0x266a0bb0  addiu       $t2, $s3, 0xBB0
    ctx->pc = 0x49f848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 2992));
    // 0x49f84c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x49f84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f850: 0x270e0138  addiu       $t6, $t8, 0x138
    ctx->pc = 0x49f850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 312));
    // 0x49f854: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f858: 0xc1c00  sll         $v1, $t4, 16
    ctx->pc = 0x49f858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x49f85c: 0x4c1026  xor         $v0, $v0, $t4
    ctx->pc = 0x49f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 12));
    // 0x49f860: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x49f860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f864: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f868: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f86c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f86cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f870: 0x36c03  sra         $t5, $v1, 16
    ctx->pc = 0x49f870u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49f874: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f878: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f87c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49f87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f880: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f884: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f888: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x49f888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f88c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x49f88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f890: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x49f890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49f894: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x49f894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x49f898: 0x2447000f  addiu       $a3, $v0, 0xF
    ctx->pc = 0x49f898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x49f89c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49f89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49f8a0: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x49f8a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x49f8a4: 0xe6100b  movn        $v0, $a3, $a2
    ctx->pc = 0x49f8a4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x49f8a8: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x49f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f8ac: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f8b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x49f8b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x49f8b4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f8b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49f8b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f8bc: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x49f8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49f8c0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x49f8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x49f8c4: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x49f8c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f8c8: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x49f8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f8cc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x49f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x49f8d0: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x49f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x49f8d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49f8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49f8d8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x49f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x49f8dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f8e0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49f8e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f8e4: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x49f8e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f8e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x49f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x49f8ec: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f8f0: 0x6c1826  xor         $v1, $v1, $t4
    ctx->pc = 0x49f8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x49f8f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49f8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49f8f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49f8fc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x49f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x49f900: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f904: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49f904u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49f908: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49f908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f90c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x49f90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x49f910: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49f910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49f914: 0x4c1026  xor         $v0, $v0, $t4
    ctx->pc = 0x49f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 12));
    // 0x49f918: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x49f918u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x49f91c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f920: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x49f920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f924: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f928: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x49f928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f92c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f930: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49f930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49f934: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x49f934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49f938: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x49f938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x49f93c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f940: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x49f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x49f944: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49f944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f948: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49f948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49f94c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x49f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x49f950: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x49f950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x49f954: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f958: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x49f958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f95c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49f95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49f960: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x49f960u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f964: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x49f964u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x49f968: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49f968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49f96c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49f970: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F970u;
    {
        const bool branch_taken_0x49f970 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x49F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F970u;
        // 0x49f974: 0xcb1024  and         $v0, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f970) {
            ctx->pc = 0x49F988u;
            goto label_49f988;
        }
    }
    ctx->pc = 0x49F978u;
    // 0x49f978: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x49f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x49f97c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f980: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x49f980u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x49f984: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x49f984u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_49f988:
    // 0x49f988: 0x8c1026  xor         $v0, $a0, $t4
    ctx->pc = 0x49f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 12));
    // 0x49f98c: 0x2684d680  addiu       $a0, $s4, -0x2980
    ctx->pc = 0x49f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x49f990: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x49f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f998: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49f99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f9a0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f9a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f9ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49f9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49f9b0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x49f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x49f9b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f9b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49f9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f9bc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x49f9bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f9c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49f9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49f9c4: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x49f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x49f9c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49f9c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f9cc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x49f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49f9d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49f9d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49f9d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f9d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49f9d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49f9dc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x49f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x49f9e0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x49f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f9e4: 0xa5c20000  sh          $v0, 0x0($t6)
    ctx->pc = 0x49f9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f9e8: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x49f9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f9ec: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x49f9ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49f9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49f9f4: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x49f9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f9f8: 0x97230000  lhu         $v1, 0x0($t9)
    ctx->pc = 0x49f9f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49f9fc: 0xa48324a0  sh          $v1, 0x24A0($a0)
    ctx->pc = 0x49f9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fa00: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x49fa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49fa04: 0xa48224a2  sh          $v0, 0x24A2($a0)
    ctx->pc = 0x49fa04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9378), (uint16_t)GPR_U32(ctx, 2));
    // 0x49fa08: 0x3e00008  jr          $ra
    ctx->pc = 0x49FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FA08u;
        // 0x49fa0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FA10u;
}
