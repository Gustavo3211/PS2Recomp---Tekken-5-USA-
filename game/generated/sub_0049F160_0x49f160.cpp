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

// Function: sub_0049F160
// Address: 0x49f160 - 0x49f588
void sub_0049F160_0x49f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F160_0x49f160");
#endif

    ctx->pc = 0x49f160u;

    // 0x49f160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f164: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x49f164u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x49f168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49f16c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49f16cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49f170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49f174: 0x25c90bb0  addiu       $t1, $t6, 0xBB0
    ctx->pc = 0x49f174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 2992));
    // 0x49f178: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49f17c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49f17cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x49f180: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x49f180u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49f184: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x49f184u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x49f188: 0x8462fb22  lh          $v0, -0x4DE($v1)
    ctx->pc = 0x49f188u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FB22u));
    // 0x49f18c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x49f18cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x49f190: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49f190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49f194: 0xaf240bbc  sw          $a0, 0xBBC($t9)
    ctx->pc = 0x49f194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0BBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BBCu, _value); } while (0);
    // 0x49f198: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x49f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x49f19c: 0xae050bc0  sw          $a1, 0xBC0($s0)
    ctx->pc = 0x49f19cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BC0u, _value); } while (0);
    // 0x49f1a0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x49f1a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49f1a4: 0xad660bc4  sw          $a2, 0xBC4($t3)
    ctx->pc = 0x49f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 3012), GPR_U32(ctx, 6));
    // 0x49f1a8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x49f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x49f1ac: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x49f1acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f1b0: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x49f1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49f1b4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49f1b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x49f1b8: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f1bc: 0x8583011c  lh          $v1, 0x11C($t4)
    ctx->pc = 0x49f1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 284)));
    // 0x49f1c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49f1c4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x49f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x49f1c8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49f1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f1cc: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49f1d0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f1d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f1d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F1D4u;
    {
        const bool branch_taken_0x49f1d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1D4u;
        // 0x49f1d8: 0x25a50bb4  addiu       $a1, $t5, 0xBB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 2996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f1d4) {
            ctx->pc = 0x49F1E8u;
            goto label_49f1e8;
        }
    }
    ctx->pc = 0x49F1DCu;
    // 0x49f1dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49F1E0u;
    {
        const bool branch_taken_0x49f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1E0u;
        // 0x49f1e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f1e0) {
            ctx->pc = 0x49F1F0u;
            goto label_49f1f0;
        }
    }
    ctx->pc = 0x49F1E8u;
label_49f1e8:
    // 0x49f1e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f1ec: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x49f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_49f1f0:
    // 0x49f1f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49f1f4: 0x25c50bb0  addiu       $a1, $t6, 0xBB0
    ctx->pc = 0x49f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2992));
    // 0x49f1f8: 0x25aa0bb4  addiu       $t2, $t5, 0xBB4
    ctx->pc = 0x49f1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2996));
    // 0x49f1fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49f1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49f200: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x49f200u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49f204: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f208: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f20c: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x49f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49f210: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x49f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x49f214: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x49f214u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x49f218: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f220: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f224: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49f228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f22c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f234: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49f234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f238: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49f23c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49f240: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f244: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f248: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f24c: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x49f24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x49f250: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x49F250u;
    {
        const bool branch_taken_0x49f250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F250u;
        // 0x49f254: 0x258f0120  addiu       $t7, $t4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f250) {
            ctx->pc = 0x49F400u;
            goto label_49f400;
        }
    }
    ctx->pc = 0x49F258u;
    // 0x49f258: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49f258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49f25c: 0x95620bc4  lhu         $v0, 0xBC4($t3)
    ctx->pc = 0x49f25cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 3012)));
    // 0x49f260: 0x25050bb8  addiu       $a1, $t0, 0xBB8
    ctx->pc = 0x49f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3000));
    // 0x49f264: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49f264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB8u));
    // 0x49f268: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x49f268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x49f26c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f270: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f274: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f278: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f27c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x49f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x49f280: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f284: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f288: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49f28c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f290: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f298: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49f298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f29c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49f2a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49f2a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f2a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f2ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f2b0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49f2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f2b4: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x49f2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49f2b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49f2bc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49f2c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f2c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f2c8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49f2c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f2cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F2CCu;
    {
        const bool branch_taken_0x49f2cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2CCu;
        // 0x49f2d0: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f2cc) {
            ctx->pc = 0x49F2E0u;
            goto label_49f2e0;
        }
    }
    ctx->pc = 0x49F2D4u;
    // 0x49f2d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49F2D4u;
    {
        const bool branch_taken_0x49f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2D4u;
        // 0x49f2d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f2d4) {
            ctx->pc = 0x49F2E4u;
            goto label_49f2e4;
        }
    }
    ctx->pc = 0x49F2DCu;
    // 0x49f2dc: 0x0  nop
    ctx->pc = 0x49f2dcu;
    // NOP
label_49f2e0:
    // 0x49f2e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_49f2e4:
    // 0x49f2e4: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x49f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x49f2e8: 0x25070bb8  addiu       $a3, $t0, 0xBB8
    ctx->pc = 0x49f2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3000));
    // 0x49f2ec: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49f2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49f2f0: 0x25c50bb0  addiu       $a1, $t6, 0xBB0
    ctx->pc = 0x49f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2992));
    // 0x49f2f4: 0x95a90bb4  lhu         $t1, 0xBB4($t5)
    ctx->pc = 0x49f2f4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2996)));
    // 0x49f2f8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49f2f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f2fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f300: 0x92400  sll         $a0, $t1, 16
    ctx->pc = 0x49f300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x49f304: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x49f304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x49f308: 0x45c03  sra         $t3, $a0, 16
    ctx->pc = 0x49f308u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 4), 16));
    // 0x49f30c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f310: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f314: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f318: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f31c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f324: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49f324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49f328: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49f328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49f32c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f330: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49f330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f334: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x49f334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x49f338: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f33c: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x49f33cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f340: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x49f340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x49f344: 0x8582015a  lh          $v0, 0x15A($t4)
    ctx->pc = 0x49f344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 346)));
    // 0x49f348: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f34c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x49f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49f350: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f354: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x49f354u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f358: 0x2cc22000  sltiu       $v0, $a2, 0x2000
    ctx->pc = 0x49f358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x49f35c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x49F35Cu;
    {
        const bool branch_taken_0x49f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f35c) {
            ctx->pc = 0x49F360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F35Cu;
            // 0x49f360: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F380u;
            goto label_49f380;
        }
    }
    ctx->pc = 0x49F364u;
    // 0x49f364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x49f368: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f36c: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x49f36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x49f370: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f374: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f378: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x49f378u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f37c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49f380:
    // 0x49f380: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x49f380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49f384: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x49f384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x49f388: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x49f388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f38c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f390: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f398: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f39c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f3a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x49f3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49f3a4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F3A4u;
    {
        const bool branch_taken_0x49f3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f3a4) {
            ctx->pc = 0x49F3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F3A4u;
            // 0x49f3a8: 0x891026  xor         $v0, $a0, $t1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F3C4u;
            goto label_49f3c4;
        }
    }
    ctx->pc = 0x49F3ACu;
    // 0x49f3ac: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x49f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x49f3b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x49f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x49f3b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f3b8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x49f3bc: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x49f3bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f3c0: 0x891026  xor         $v0, $a0, $t1
    ctx->pc = 0x49f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 9));
label_49f3c4:
    // 0x49f3c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f3c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f3cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f3ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f3d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f3d4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f3d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f3dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49f3e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f3e4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49f3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f3e8: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x49f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x49f3ec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f3f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f3f4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49f3f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x49F3F8u;
    {
        const bool branch_taken_0x49f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F3F8u;
        // 0x49f3fc: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f3f8) {
            ctx->pc = 0x49F568u;
            goto label_49f568;
        }
    }
    ctx->pc = 0x49F400u;
label_49f400:
    // 0x49f400: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x49f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f404: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x49f404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49f408: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x49f408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x49f40c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49f410: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49f410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49f414: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x49f414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f418: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F418u;
    {
        const bool branch_taken_0x49f418 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x49F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F418u;
        // 0x49f41c: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f418) {
            ctx->pc = 0x49F428u;
            goto label_49f428;
        }
    }
    ctx->pc = 0x49F420u;
    // 0x49f420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49F420u;
    {
        const bool branch_taken_0x49f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F420u;
        // 0x49f424: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f420) {
            ctx->pc = 0x49F42Cu;
            goto label_49f42c;
        }
    }
    ctx->pc = 0x49F428u;
label_49f428:
    // 0x49f428: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x49f428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_49f42c:
    // 0x49f42c: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x49f42cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x49f430: 0x95620bc4  lhu         $v0, 0xBC4($t3)
    ctx->pc = 0x49f430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 3012)));
    // 0x49f434: 0x270b0bb8  addiu       $t3, $t8, 0xBB8
    ctx->pc = 0x49f434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 3000));
    // 0x49f438: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49f438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49f43c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x49f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB8u));
    // 0x49f440: 0x25c90bb0  addiu       $t1, $t6, 0xBB0
    ctx->pc = 0x49f440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 2992));
    // 0x49f444: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x49f444u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x49f448: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x49f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49f44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f450: 0x95aa0bb4  lhu         $t2, 0xBB4($t5)
    ctx->pc = 0x49f450u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2996)));
    // 0x49f454: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x49f454u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f458: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f458u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f45c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f460: 0xa3400  sll         $a2, $t2, 16
    ctx->pc = 0x49f460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x49f464: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x49f464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f468: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x49f468u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x49f46c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x49f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f470: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f474: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x49f474u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x49f478: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f47c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49f480: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49f480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49f484: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49f488: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f48c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f490: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f490u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f498: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x49f498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f49c: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x49f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x49f4a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f4a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f4a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f4a8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f4ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f4b0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f4b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f4b8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x49f4b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f4bc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x49f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49f4c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f4c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f4c8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x49f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x49f4cc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x49f4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f4d0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x49f4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x49f4d4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x49f4d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x49f4d8: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x49f4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x49f4dc: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x49f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x49f4e0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49f4e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49f4e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F4E4u;
    {
        const bool branch_taken_0x49f4e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4E4u;
        // 0x49f4e8: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4e4) {
            ctx->pc = 0x49F4F4u;
            goto label_49f4f4;
        }
    }
    ctx->pc = 0x49F4ECu;
    // 0x49f4ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x49f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x49f4f0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x49f4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49f4f4:
    // 0x49f4f4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x49f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x49f4f8: 0x25a60bb4  addiu       $a2, $t5, 0xBB4
    ctx->pc = 0x49f4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 2996));
    // 0x49f4fc: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x49f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x49f500: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x49f500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f504: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x49f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f508: 0x93020bb8  lbu         $v0, 0xBB8($t8)
    ctx->pc = 0x49f508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3000)));
    // 0x49f50c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49f510: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x49f510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x49f514: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f518: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49f518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49f51c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x49f51cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F520u;
    {
        const bool branch_taken_0x49f520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F520u;
        // 0x49f524: 0x3464ffff  ori         $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f520) {
            ctx->pc = 0x49F530u;
            goto label_49f530;
        }
    }
    ctx->pc = 0x49F528u;
    // 0x49f528: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x49f52c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x49f52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49f530:
    // 0x49f530: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x49f530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x49f534: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49f534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49f538: 0x25c50bb0  addiu       $a1, $t6, 0xBB0
    ctx->pc = 0x49f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2992));
    // 0x49f53c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f540: 0x95a40bb4  lhu         $a0, 0xBB4($t5)
    ctx->pc = 0x49f540u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2996)));
    // 0x49f544: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f548: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49f54c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f550: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f554: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f558: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49f55c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f560: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49f560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49f564: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49f564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49f568:
    // 0x49f568: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x49f568u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f56c: 0x8e050bc0  lw          $a1, 0xBC0($s0)
    ctx->pc = 0x49f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3008)));
    // 0x49f570: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x49f570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f574: 0x8f240bbc  lw          $a0, 0xBBC($t9)
    ctx->pc = 0x49f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 3004)));
    // 0x49f578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49f578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f57c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49f57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49f580: 0x8127d62  j           func_49F588
    ctx->pc = 0x49F580u;
    ctx->pc = 0x49F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F580u;
    // 0x49f584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    sub_0049F588_0x49f588(rdram, ctx, runtime); return;
    ctx->pc = 0x49F588u;
}
