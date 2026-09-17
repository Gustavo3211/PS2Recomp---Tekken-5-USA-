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

// Function: sub_004B5690
// Address: 0x4b5690 - 0x4b5c58
void sub_004B5690_0x4b5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5690_0x4b5690");
#endif

    switch (ctx->pc) {
        case 0x4b57b0u: goto label_4b57b0;
        case 0x4b582cu: goto label_4b582c;
        case 0x4b5834u: goto label_4b5834;
        case 0x4b5900u: goto label_4b5900;
        case 0x4b5908u: goto label_4b5908;
        case 0x4b5914u: goto label_4b5914;
        case 0x4b59e0u: goto label_4b59e0;
        case 0x4b59e8u: goto label_4b59e8;
        case 0x4b59f0u: goto label_4b59f0;
        case 0x4b5a24u: goto label_4b5a24;
        default: break;
    }

    ctx->pc = 0x4b5690u;

    // 0x4b5690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b5690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b5694: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b5694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b5698: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b5698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b569c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b569cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b56a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b56a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b56a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b56a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b56ac: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4b56acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4b56b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b56b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b56b4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b56b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b56b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b56b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b56bc: 0x24740d3c  addiu       $s4, $v1, 0xD3C
    ctx->pc = 0x4b56bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3388));
    // 0x4b56c0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b56c4: 0x24550d44  addiu       $s5, $v0, 0xD44
    ctx->pc = 0x4b56c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3396));
    // 0x4b56c8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b56cc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4b56ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b56d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4b56d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4b56d4: 0x36520600  ori         $s2, $s2, 0x600
    ctx->pc = 0x4b56d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1536);
    // 0x4b56d8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4b56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4b56dc: 0x26710d40  addiu       $s1, $s3, 0xD40
    ctx->pc = 0x4b56dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x4b56e0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4b56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4b56e4: 0x26c40130  addiu       $a0, $s6, 0x130
    ctx->pc = 0x4b56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    // 0x4b56e8: 0x26c90132  addiu       $t1, $s6, 0x132
    ctx->pc = 0x4b56e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 306));
    // 0x4b56ec: 0x26c30134  addiu       $v1, $s6, 0x134
    ctx->pc = 0x4b56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 308));
    // 0x4b56f0: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4b56f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0D44u));
    // 0x4b56f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4b56f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D40u, _value); } while (0);
    // 0x4b56f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b56f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b56fc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4b56fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D3Cu, _value); } while (0);
    // 0x4b5700: 0xf23824  and         $a3, $a3, $s2
    ctx->pc = 0x4b5700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 18));
    // 0x4b5704: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4b5704u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4b5708: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b5708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b570c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4b570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4b5710: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4b5710u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5714: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x4b5714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x4b5718: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b5718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b571c: 0x25280d34  addiu       $t0, $t1, 0xD34
    ctx->pc = 0x4b571cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b5720: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b5720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5724: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4b5724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4b5728: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4b5728u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b572c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4b572cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4b5730: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4b5730u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5734: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4b5734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5738: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b5738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b573c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b5740: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4b5740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b5744: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b5744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5748: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4b5748u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b574c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4b574cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4b5750: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5754: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4b5754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4b5758: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x4b5758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b575c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b575cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b5760: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4b5760u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b5764: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b5764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b5768: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b5768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b576c: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4b576cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4b5770: 0x86c2015a  lh          $v0, 0x15A($s6)
    ctx->pc = 0x4b5770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 346)));
    // 0x4b5774: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b577c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b577cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b5780: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5784: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x4b5784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x4b5788: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b578c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5790: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b5790u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b5794: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5798: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4b5798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b579c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b57a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b57a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b57a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b57a8: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B57A8u;
    SET_GPR_U32(ctx, 31, 0x4B57B0u);
    ctx->pc = 0x4B57ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B57A8u;
    // 0x4b57ac: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B57A8u, 0x4B57B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B57B0u;
label_4b57b0:
    // 0x4b57b0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4B57B0u;
    {
        const bool branch_taken_0x4b57b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B57B0u;
        // 0x4b57b4: 0x26c30124  addiu       $v1, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b57b0) {
            ctx->pc = 0x4B5898u;
            goto label_4b5898;
        }
    }
    ctx->pc = 0x4B57B8u;
    // 0x4b57b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b57bc: 0x96880000  lhu         $t0, 0x0($s4)
    ctx->pc = 0x4b57bcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b57c0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b57c4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4b57c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b57c8: 0x24492494  addiu       $t1, $v0, 0x2494
    ctx->pc = 0x4b57c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9364));
    // 0x4b57cc: 0x244a249c  addiu       $t2, $v0, 0x249C
    ctx->pc = 0x4b57ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 9372));
    // 0x4b57d0: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x4b57d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b57d4: 0x24422498  addiu       $v0, $v0, 0x2498
    ctx->pc = 0x4b57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9368));
    // 0x4b57d8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4b57d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4b57dc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4b57dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4b57e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b57e4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4b57e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b57e8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4b57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b57ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b57f0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b57f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b57f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b57f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b57f8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b57f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b57fc: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4b57fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4b5800: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b5800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5804: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b5804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b5808: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4b5808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4b580c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b580cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b5810: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b5810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b5814: 0x26d70128  addiu       $s7, $s6, 0x128
    ctx->pc = 0x4b5814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4b5818: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b5818u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b581c: 0x26de012c  addiu       $fp, $s6, 0x12C
    ctx->pc = 0x4b581cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4b5820: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b5820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b5824: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B5824u;
    SET_GPR_U32(ctx, 31, 0x4B582Cu);
    ctx->pc = 0x4B5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5824u;
    // 0x4b5828: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B5824u, 0x4B582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B582Cu;
label_4b582c:
    // 0x4b582c: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B582Cu;
    SET_GPR_U32(ctx, 31, 0x4B5834u);
    ctx->pc = 0x4B5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B582Cu;
    // 0x4b5830: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B582Cu, 0x4B5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5834u;
label_4b5834:
    // 0x4b5834: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5838: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b5838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b583c: 0x26c50124  addiu       $a1, $s6, 0x124
    ctx->pc = 0x4b583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x4b5840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5844: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4b5844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5848: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4b5848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4b584c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b5850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5854: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4b5854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5858: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4b5858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b585c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b585cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b5860: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b5860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b5864: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b5864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b5868: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4b5868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b586c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b586cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b5870: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5874: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b5874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b5878: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4b5878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4b587c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x4b587cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5880: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b5880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b5884: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5888: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b5888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b588c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B588Cu;
    {
        const bool branch_taken_0x4b588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B588Cu;
        // 0x4b5890: 0xaea50000  sw          $a1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b588c) {
            ctx->pc = 0x4B58E4u;
            goto label_4b58e4;
        }
    }
    ctx->pc = 0x4B5894u;
    // 0x4b5894: 0x0  nop
    ctx->pc = 0x4b5894u;
    // NOP
label_4b5898:
    // 0x4b5898: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b589c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4b589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b58a0: 0x26d70128  addiu       $s7, $s6, 0x128
    ctx->pc = 0x4b58a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4b58a4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4b58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4b58a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b58a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b58ac: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4b58acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4b58b0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4b58b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4b58b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b58b8: 0x26de012c  addiu       $fp, $s6, 0x12C
    ctx->pc = 0x4b58b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4b58bc: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b58c0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b58c4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4b58c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4b58c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b58cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b58d0: 0xac800d30  sw          $zero, 0xD30($a0)
    ctx->pc = 0x4b58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 0));
    // 0x4b58d4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4b58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b58d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4b58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4b58dc: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x4b58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x4b58e0: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x4b58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_4b58e4:
    // 0x4b58e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b58e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b58e8: 0x26720d40  addiu       $s2, $s3, 0xD40
    ctx->pc = 0x4b58e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x4b58ec: 0x24f10d3c  addiu       $s1, $a3, 0xD3C
    ctx->pc = 0x4b58ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b58f0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b58f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b58f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b58f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b58f8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B58F8u;
    SET_GPR_U32(ctx, 31, 0x4B5900u);
    ctx->pc = 0x4B58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B58F8u;
    // 0x4b58fc: 0x25330d44  addiu       $s3, $t1, 0xD44 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 3396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B58F8u, 0x4B5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5900u;
label_4b5900:
    // 0x4b5900: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5900u;
    SET_GPR_U32(ctx, 31, 0x4B5908u);
    ctx->pc = 0x4B5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5900u;
    // 0x4b5904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5900u, 0x4B5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5908u;
label_4b5908:
    // 0x4b5908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b5908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b590c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B590Cu;
    SET_GPR_U32(ctx, 31, 0x4B5914u);
    ctx->pc = 0x4B5910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B590Cu;
    // 0x4b5910: 0x26d40010  addiu       $s4, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B590Cu, 0x4B5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5914u;
label_4b5914:
    // 0x4b5914: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b5914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5918: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b5918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b591c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b591cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5920: 0x26d50014  addiu       $s5, $s6, 0x14
    ctx->pc = 0x4b5920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4b5924: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5928: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b5928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b592c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b592cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b5930: 0x26d60018  addiu       $s6, $s6, 0x18
    ctx->pc = 0x4b5930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4b5934: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b5934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b5938: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b5938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b593c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b593cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b5940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5944: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4b5944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5948: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b594c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5950: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b5950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b5954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5958: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b5958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b595c: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4b595cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b5960: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5964: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5968: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b5968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b596c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4b596cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b5970: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b5974: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b5974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b5978: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b5978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b597c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4b597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b5980: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4b5980u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5984: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b5984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b5988: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b5988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b598c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4b598cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4b5990: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4b5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b5994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b5994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5998: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b5998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b599c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b59a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b59a4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b59a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b59a8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b59ac: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b59b0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b59b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b59b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b59b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b59b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b59b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b59bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b59bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b59c0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b59c4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4b59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b59c8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b59c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b59cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b59ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b59d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b59d4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b59d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b59d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B59D8u;
    SET_GPR_U32(ctx, 31, 0x4B59E0u);
    ctx->pc = 0x4B59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59D8u;
    // 0x4b59dc: 0xaec50000  sw          $a1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B59D8u, 0x4B59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59E0u;
label_4b59e0:
    // 0x4b59e0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B59E0u;
    SET_GPR_U32(ctx, 31, 0x4B59E8u);
    ctx->pc = 0x4B59E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59E0u;
    // 0x4b59e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B59E0u, 0x4B59E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59E8u;
label_4b59e8:
    // 0x4b59e8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B59E8u;
    SET_GPR_U32(ctx, 31, 0x4B59F0u);
    ctx->pc = 0x4B59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59E8u;
    // 0x4b59ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B59E8u, 0x4B59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59F0u;
label_4b59f0:
    // 0x4b59f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b59f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b59f4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x4b59f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b59f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b59f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b59fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b59fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b5a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a04: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4b5a04u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5a08: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b5a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5a0c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b5a10: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b5a10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5a14: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b5a14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5a18: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4b5a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5a1c: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4B5A1Cu;
    SET_GPR_U32(ctx, 31, 0x4B5A24u);
    ctx->pc = 0x4B5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5A1Cu;
    // 0x4b5a20: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4B5A1Cu, 0x4B5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5A24u;
label_4b5a24:
    // 0x4b5a24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4b5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5a28: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b5a2c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4b5a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5a30: 0x8c4b0d64  lw          $t3, 0xD64($v0)
    ctx->pc = 0x4b5a30u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b5a34: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b5a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b5a38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b5a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b5a3c: 0x252d0d30  addiu       $t5, $t1, 0xD30
    ctx->pc = 0x4b5a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 3376));
    // 0x4b5a40: 0x8d620050  lw          $v0, 0x50($t3)
    ctx->pc = 0x4b5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x4b5a44: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b5a48: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4b5a48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5a4c: 0x24ae0d34  addiu       $t6, $a1, 0xD34
    ctx->pc = 0x4b5a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 3380));
    // 0x4b5a50: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5a54: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4b5a54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5a58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5a5c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b5a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5a60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5a64: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4b5a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5a68: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b5a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5a6c: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4b5a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b5a70: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b5a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b5a74: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b5a74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b5a78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4b5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4b5a7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b5a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b5a80: 0x258c0d38  addiu       $t4, $t4, 0xD38
    ctx->pc = 0x4b5a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3384));
    // 0x4b5a84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b5a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b5a88: 0x8d620054  lw          $v0, 0x54($t3)
    ctx->pc = 0x4b5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x4b5a8c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b5a8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b5a90: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4b5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4b5a94: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5a98: 0x962a0000  lhu         $t2, 0x0($s1)
    ctx->pc = 0x4b5a98u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5a9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5a9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5aa0: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4b5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b5aa4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b5aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b5aa8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b5aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b5aac: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4b5aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4b5ab0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5ab4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b5ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b5ab8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x4b5ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4b5abc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4b5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4b5ac0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b5ac0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b5ac4: 0x8d620058  lw          $v0, 0x58($t3)
    ctx->pc = 0x4b5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
    // 0x4b5ac8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5acc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5ad0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b5ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b5ad4: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4b5ad4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4b5ad8: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b5ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b5adc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4b5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4b5ae0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5ae4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5ae8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5aec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5af0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b5af0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b5af4: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4b5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4b5af8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5afc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5b00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5b00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5b04: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5b0c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4b5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4b5b10: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4b5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b5b14: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b5b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b5b18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5b18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5b1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b20: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b5b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b5b24: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4b5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4b5b28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5b2c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b30: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4b5b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4b5b34: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b5b34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b5b38: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b5b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5b3c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5b40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b5b44: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5b50: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b5b54: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b5b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5b58: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4b5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b5b5c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b5b60: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5b68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b5b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5b6c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4b5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4b5b70: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4b5b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b5b74: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b5b74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5b78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5b7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b5b80: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5b84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5b8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b5b90: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x4b5b90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b5b94: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b5b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5b98: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4b5b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5b9c: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x4b5b9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b5ba0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5ba4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4b5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4b5ba8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5bac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b5bb0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b5bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b5bb4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b5bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b5bb8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b5bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b5bbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5bc0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b5bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b5bc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b5bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b5bc8: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4b5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4b5bcc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b5bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b5bd0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b5bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b5bd4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4b5bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b5bd8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b5bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5bdc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b5be0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5be4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b5be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b5be8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b5be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5bf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5bf4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b5bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b5bf8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b5bfc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b5bfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b5c00: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b5c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5c04: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4b5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b5c08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5c0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b5c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b5c10: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b5c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5c14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5c18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5c1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b5c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b5c20: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4b5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4b5c24: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b5c24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b5c28: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b5c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5c2c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4b5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b5c30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5c34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b5c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b5c38: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b5c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b5c3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b5c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5c40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5c44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5c48: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4b5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4b5c4c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b5c4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b5c50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5C50u;
        // 0x4b5c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5C58u;
}
