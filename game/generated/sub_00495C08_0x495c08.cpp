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

// Function: sub_00495C08
// Address: 0x495c08 - 0x495e48
void sub_00495C08_0x495c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495C08_0x495c08");
#endif

    switch (ctx->pc) {
        case 0x495da8u: goto label_495da8;
        case 0x495db0u: goto label_495db0;
        default: break;
    }

    ctx->pc = 0x495c08u;

    // 0x495c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x495c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x495c0c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x495c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x495c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x495c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x495c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x495c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x495c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x495c1c: 0x261101b6  addiu       $s1, $s0, 0x1B6
    ctx->pc = 0x495c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x495c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x495c24: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x495c24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x495c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x495c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x495c2c: 0x24730ab0  addiu       $s3, $v1, 0xAB0
    ctx->pc = 0x495c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x495c30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x495c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x495c34: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x495c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x495c38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x495c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x495c3c: 0x2474d680  addiu       $s4, $v1, -0x2980
    ctx->pc = 0x495c3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x495c40: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x495c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495c44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x495c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x495c48: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495c4c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x495c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x495c50: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x495c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495c54: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x495c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AB0u));
    // 0x495c58: 0x860201b8  lh          $v0, 0x1B8($s0)
    ctx->pc = 0x495c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x495c5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495c60: 0x8e862308  lw          $a2, 0x2308($s4)
    ctx->pc = 0x495c60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72F988u));
    // 0x495c64: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495c68: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x495c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495c6c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x495c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x495c70: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x495c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495c74: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x495C74u;
    {
        const bool branch_taken_0x495c74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x495C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495C74u;
        // 0x495c78: 0x260a01ba  addiu       $t2, $s0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495c74) {
            ctx->pc = 0x495C90u;
            goto label_495c90;
        }
    }
    ctx->pc = 0x495C7Cu;
    // 0x495c7c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x495c7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x495c80: 0xa68224a0  sh          $v0, 0x24A0($s4)
    ctx->pc = 0x495c80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x495c84: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x495c84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x495c88: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x495C88u;
    {
        const bool branch_taken_0x495c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495C88u;
        // 0x495c8c: 0xa68324a2  sh          $v1, 0x24A2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 9378), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495c88) {
            ctx->pc = 0x495E1Cu;
            goto label_495e1c;
        }
    }
    ctx->pc = 0x495C90u;
label_495c90:
    // 0x495c90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x495c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x495c94: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x495c94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x495c98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495c9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x495c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x495ca0: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x495ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x495ca4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495ca8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x495ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x495cac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x495cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495cb0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x495cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x495cb4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x495cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x495cb8: 0x24e70ab4  addiu       $a3, $a3, 0xAB4
    ctx->pc = 0x495cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2740));
    // 0x495cbc: 0x2616015c  addiu       $s6, $s0, 0x15C
    ctx->pc = 0x495cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x495cc0: 0x2615015a  addiu       $s5, $s0, 0x15A
    ctx->pc = 0x495cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 346));
    // 0x495cc4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x495cc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495cc8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x495cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0AB4u));
    // 0x495ccc: 0xc9001a  div         $zero, $a2, $t1
    ctx->pc = 0x495cccu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x495cd0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x495cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495cd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495cd8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495cdc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x495cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x495ce0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x495ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x495ce4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495ce8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x495ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495cec: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x495cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x495cf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x495cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x495cf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495cf8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495cfc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x495cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x495d00: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x495d00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x495d04: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495d08: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x495d08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495d0c: 0x3012  mflo        $a2
    ctx->pc = 0x495d0cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x495d10: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x495d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x495d14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x495d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x495d18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x495d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x495d1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x495d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x495d20: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x495d20u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x495d24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x495d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x495d28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x495d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x495d2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x495d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495d30: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495d34: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x495d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495d38: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x495d38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x495d3c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x495d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495d40: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x495d40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495d44: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x495d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x495d48: 0xa603011a  sh          $v1, 0x11A($s0)
    ctx->pc = 0x495d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x495d4c: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x495d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x495d50: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x495d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x495d54: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x495d54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x495d58: 0xa6030122  sh          $v1, 0x122($s0)
    ctx->pc = 0x495d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x495d5c: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x495d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x495d60: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x495d60u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495d64: 0xa6a00000  sh          $zero, 0x0($s5)
    ctx->pc = 0x495d64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x495d68: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x495d68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x495d6c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x495d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x495d70: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x495d70u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495d74: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x495d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x495d78: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x495d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x495d7c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x495d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x495d80: 0xa6832324  sh          $v1, 0x2324($s4)
    ctx->pc = 0x495d80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8996), (uint16_t)GPR_U32(ctx, 3));
    // 0x495d84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x495d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x495d88: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x495d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x495d8c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x495d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x495d90: 0xa6822326  sh          $v0, 0x2326($s4)
    ctx->pc = 0x495d90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8998), (uint16_t)GPR_U32(ctx, 2));
    // 0x495d94: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x495d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x495d98: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x495d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x495d9c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x495d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x495da0: 0xc12557c  jal         func_4955F0
    ctx->pc = 0x495DA0u;
    SET_GPR_U32(ctx, 31, 0x495DA8u);
    ctx->pc = 0x495DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495DA0u;
    // 0x495da4: 0xa6832328  sh          $v1, 0x2328($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 9000), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4955F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4955F0u, 0x495DA0u, 0x495DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495DA8u;
label_495da8:
    // 0x495da8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x495DA8u;
    SET_GPR_U32(ctx, 31, 0x495DB0u);
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x495DA8u, 0x495DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495DB0u;
label_495db0:
    // 0x495db0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x495db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495db4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x495db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495db8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495dbc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495dc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495dc4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x495dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x495dc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495dcc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x495dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495dd0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x495dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x495dd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x495dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x495dd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495ddc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495de0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495de4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x495de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x495de8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x495de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495dec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x495DECu;
    {
        const bool branch_taken_0x495dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495dec) {
            ctx->pc = 0x495DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495DECu;
            // 0x495df0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495E20u;
            goto label_495e20;
        }
    }
    ctx->pc = 0x495DF4u;
    // 0x495df4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495df8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x495df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x495dfc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x495dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495e00: 0x968324a0  lhu         $v1, 0x24A0($s4)
    ctx->pc = 0x495e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 9376)));
    // 0x495e04: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x495e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x495e08: 0x968424a2  lhu         $a0, 0x24A2($s4)
    ctx->pc = 0x495e08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 9378)));
    // 0x495e0c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x495e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x495e10: 0xa604011c  sh          $a0, 0x11C($s0)
    ctx->pc = 0x495e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x495e14: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x495e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x495e18: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x495e18u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_495e1c:
    // 0x495e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x495e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_495e20:
    // 0x495e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x495e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x495e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x495e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495e28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x495e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x495e2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x495e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495e30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x495e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x495e34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x495e34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495e38: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x495e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x495e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x495E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495E3Cu;
        // 0x495e40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495E44u;
    // 0x495e44: 0x0  nop
    ctx->pc = 0x495e44u;
    // NOP
    ctx->pc = 0x495e48u;
}
