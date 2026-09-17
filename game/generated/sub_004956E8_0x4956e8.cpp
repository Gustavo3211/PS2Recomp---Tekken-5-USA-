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

// Function: sub_004956E8
// Address: 0x4956e8 - 0x495928
void sub_004956E8_0x4956e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004956E8_0x4956e8");
#endif

    switch (ctx->pc) {
        case 0x495888u: goto label_495888;
        case 0x495890u: goto label_495890;
        default: break;
    }

    ctx->pc = 0x4956e8u;

    // 0x4956e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4956e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4956ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4956ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4956f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4956f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4956f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4956f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4956f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4956fc: 0x261101b6  addiu       $s1, $s0, 0x1B6
    ctx->pc = 0x4956fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x495700: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x495704: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x495704u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x495708: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x495708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49570c: 0x24730ab0  addiu       $s3, $v1, 0xAB0
    ctx->pc = 0x49570cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x495710: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x495710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x495714: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x495714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x495718: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x495718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49571c: 0x2474d680  addiu       $s4, $v1, -0x2980
    ctx->pc = 0x49571cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x495720: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x495720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495724: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x495724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x495728: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49572c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x495730: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x495730u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495734: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x495734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AB0u));
    // 0x495738: 0x860201b8  lh          $v0, 0x1B8($s0)
    ctx->pc = 0x495738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x49573c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495740: 0x8e862308  lw          $a2, 0x2308($s4)
    ctx->pc = 0x495740u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72F988u));
    // 0x495744: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495748: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x495748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49574c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x49574cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x495750: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x495750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495754: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x495754u;
    {
        const bool branch_taken_0x495754 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x495758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495754u;
        // 0x495758: 0x260a01ba  addiu       $t2, $s0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495754) {
            ctx->pc = 0x495770u;
            goto label_495770;
        }
    }
    ctx->pc = 0x49575Cu;
    // 0x49575c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x49575cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x495760: 0xa68224a0  sh          $v0, 0x24A0($s4)
    ctx->pc = 0x495760u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x495764: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x495764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x495768: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x495768u;
    {
        const bool branch_taken_0x495768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495768u;
        // 0x49576c: 0xa68324a2  sh          $v1, 0x24A2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 9378), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495768) {
            ctx->pc = 0x4958FCu;
            goto label_4958fc;
        }
    }
    ctx->pc = 0x495770u;
label_495770:
    // 0x495770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x495770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x495774: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x495774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x495778: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49577c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x495780: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x495780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x495784: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495788: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x495788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49578c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49578cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495790: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x495790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x495794: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x495794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x495798: 0x24e70ab4  addiu       $a3, $a3, 0xAB4
    ctx->pc = 0x495798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2740));
    // 0x49579c: 0x2616015c  addiu       $s6, $s0, 0x15C
    ctx->pc = 0x49579cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x4957a0: 0x2615015a  addiu       $s5, $s0, 0x15A
    ctx->pc = 0x4957a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 346));
    // 0x4957a4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4957a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4957a8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4957a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0AB4u));
    // 0x4957ac: 0xc9001a  div         $zero, $a2, $t1
    ctx->pc = 0x4957acu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4957b0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4957b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4957b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4957b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4957b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4957b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4957bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4957bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4957c0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4957c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4957c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4957c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4957c8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4957c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4957cc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x4957ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x4957d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4957d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4957d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4957d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4957d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4957d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4957dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4957dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4957e0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4957e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4957e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4957e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4957e8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4957e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4957ec: 0x3012  mflo        $a2
    ctx->pc = 0x4957ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4957f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4957f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4957f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4957f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4957f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4957fc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4957fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x495800: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x495800u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x495804: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x495804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x495808: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x495808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49580c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49580cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495810: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495814: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x495814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495818: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x495818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x49581c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49581cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495820: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x495820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495824: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x495824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x495828: 0xa603011a  sh          $v1, 0x11A($s0)
    ctx->pc = 0x495828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x49582c: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x49582cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x495830: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x495830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x495834: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x495834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x495838: 0xa6030122  sh          $v1, 0x122($s0)
    ctx->pc = 0x495838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x49583c: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x49583cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x495840: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x495840u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495844: 0xa6a00000  sh          $zero, 0x0($s5)
    ctx->pc = 0x495844u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x495848: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x495848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49584c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x49584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x495850: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x495850u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495854: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x495854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x495858: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x495858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x49585c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x495860: 0xa6832324  sh          $v1, 0x2324($s4)
    ctx->pc = 0x495860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8996), (uint16_t)GPR_U32(ctx, 3));
    // 0x495864: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x495864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x495868: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x495868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49586c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x495870: 0xa6822326  sh          $v0, 0x2326($s4)
    ctx->pc = 0x495870u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8998), (uint16_t)GPR_U32(ctx, 2));
    // 0x495874: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x495874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x495878: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x495878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x49587c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49587cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x495880: 0xc125302  jal         func_494C08
    ctx->pc = 0x495880u;
    SET_GPR_U32(ctx, 31, 0x495888u);
    ctx->pc = 0x495884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495880u;
    // 0x495884: 0xa6832328  sh          $v1, 0x2328($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 9000), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494C08u, 0x495880u, 0x495888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495888u;
label_495888:
    // 0x495888: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x495888u;
    SET_GPR_U32(ctx, 31, 0x495890u);
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x495888u, 0x495890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495890u;
label_495890:
    // 0x495890: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x495890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495894: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x495894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495898: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49589c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4958a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4958a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4958a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4958a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4958a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4958a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4958ac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4958acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4958b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4958b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4958b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4958b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4958b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4958b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4958bc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4958bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4958c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4958c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4958c4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4958c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4958c8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4958c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4958cc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4958CCu;
    {
        const bool branch_taken_0x4958cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4958cc) {
            ctx->pc = 0x4958D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4958CCu;
            // 0x4958d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495900u;
            goto label_495900;
        }
    }
    ctx->pc = 0x4958D4u;
    // 0x4958d4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4958d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4958d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4958d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4958dc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4958dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4958e0: 0x968324a0  lhu         $v1, 0x24A0($s4)
    ctx->pc = 0x4958e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 9376)));
    // 0x4958e4: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4958e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4958e8: 0x968424a2  lhu         $a0, 0x24A2($s4)
    ctx->pc = 0x4958e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 9378)));
    // 0x4958ec: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4958ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4958f0: 0xa604011c  sh          $a0, 0x11C($s0)
    ctx->pc = 0x4958f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x4958f4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4958f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4958f8: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4958f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_4958fc:
    // 0x4958fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4958fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_495900:
    // 0x495900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x495900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x495904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x495904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x495908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49590c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49590cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495910: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x495910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x495914: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x495914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495918: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x495918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49591c: 0x3e00008  jr          $ra
    ctx->pc = 0x49591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49591Cu;
        // 0x495920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495924u;
    // 0x495924: 0x0  nop
    ctx->pc = 0x495924u;
    // NOP
    ctx->pc = 0x495928u;
}
