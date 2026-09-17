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

// Function: sub_00510788
// Address: 0x510788 - 0x510c68
void sub_00510788_0x510788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510788_0x510788");
#endif

    switch (ctx->pc) {
        case 0x510868u: goto label_510868;
        case 0x5108e0u: goto label_5108e0;
        case 0x51094cu: goto label_51094c;
        case 0x5109d8u: goto label_5109d8;
        case 0x510aacu: goto label_510aac;
        case 0x510af0u: goto label_510af0;
        case 0x510bd8u: goto label_510bd8;
        case 0x510c20u: goto label_510c20;
        default: break;
    }

    ctx->pc = 0x510788u;

    // 0x510788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x510788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x51078c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x51078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x510790: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x510790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x510794: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x510794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x510798: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x510798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x51079c: 0x269e006c  addiu       $fp, $s4, 0x6C
    ctx->pc = 0x51079cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    // 0x5107a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x5107a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x5107a4: 0x2462f080  addiu       $v0, $v1, -0xF80
    ctx->pc = 0x5107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x5107a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x5107a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x5107ac: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5107acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5107b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x5107b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x5107b4: 0x24adc6bc  addiu       $t5, $a1, -0x3944
    ctx->pc = 0x5107b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952636));
    // 0x5107b8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x5107b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x5107bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x5107bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x5107c0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x5107c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x5107c4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5107c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5107c8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x5107c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x5107cc: 0x24acc6cc  addiu       $t4, $a1, -0x3934
    ctx->pc = 0x5107ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952652));
    // 0x5107d0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x5107d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x5107d4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5107d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5107d8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x5107d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x5107dc: 0x24aec6c0  addiu       $t6, $a1, -0x3940
    ctx->pc = 0x5107dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952640));
    // 0x5107e0: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x5107e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EC6CCu));
    // 0x5107e4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5107e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5107e8: 0x8c490064  lw          $t1, 0x64($v0)
    ctx->pc = 0x5107e8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x8FF0E4u));
    // 0x5107ec: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5107ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5107f0: 0x244bc6c8  addiu       $t3, $v0, -0x3938
    ctx->pc = 0x5107f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952648));
    // 0x5107f4: 0x24a8c6c4  addiu       $t0, $a1, -0x393C
    ctx->pc = 0x5107f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952644));
    // 0x5107f8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x5107f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8EC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC6BCu, _value); } while (0);
    // 0x5107fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x5107fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x510800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x510800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x510804: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x510804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x510808: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x510808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6C8u));
    // 0x51080c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x51080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x510810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x510810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x510814: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x510814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x510818: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51081c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x51081cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x510820: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510824: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x510824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x510828: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x510828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x51082c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x51082cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510830: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x510830u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x510834: 0x86820068  lh          $v0, 0x68($s4)
    ctx->pc = 0x510834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x510838: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x510838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x51083c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x51083cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x510840: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x510840u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x510844: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x510844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x510848: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x510848u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x51084c: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x51084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x510850: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x510850u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x510854: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x510854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x510858: 0x14470005  bne         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x510858u;
    {
        const bool branch_taken_0x510858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x51085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510858u;
        // 0x51085c: 0xaa1024  and         $v0, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510858) {
            ctx->pc = 0x510870u;
            goto label_510870;
        }
    }
    ctx->pc = 0x510860u;
    // 0x510860: 0xc1441d8  jal         func_510760
    ctx->pc = 0x510860u;
    SET_GPR_U32(ctx, 31, 0x510868u);
    ctx->pc = 0x510760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510760u, 0x510860u, 0x510868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510868u;
label_510868:
    // 0x510868: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x510868u;
    {
        const bool branch_taken_0x510868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510868u;
        // 0x51086c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510868) {
            ctx->pc = 0x510B48u;
            goto label_510b48;
        }
    }
    ctx->pc = 0x510870u;
label_510870:
    // 0x510870: 0x25250006  addiu       $a1, $t1, 0x6
    ctx->pc = 0x510870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x510874: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x510874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x510878: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x510878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x51087c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x51087cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x510880: 0x26820070  addiu       $v0, $s4, 0x70
    ctx->pc = 0x510880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x510884: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x510884u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x510888: 0x25240004  addiu       $a0, $t1, 0x4
    ctx->pc = 0x510888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x51088c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x51088cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x510890: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x510890u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x510894: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x510894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x510898: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x510898u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x51089c: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x51089cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x5108a0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x5108a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x5108a4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5108a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5108a8: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x5108a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x5108ac: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x5108acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x5108b0: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x5108b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x5108b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x5108b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5108b8: 0x4400095  bltz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x5108B8u;
    {
        const bool branch_taken_0x5108b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5108B8u;
        // 0x5108bc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5108b8) {
            ctx->pc = 0x510B10u;
            goto label_510b10;
        }
    }
    ctx->pc = 0x5108C0u;
    // 0x5108c0: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x5108c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5108c4: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x5108c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5108c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x5108c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x5108cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x5108ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5108d0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x5108d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x5108d4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x5108d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5108d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x5108d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5108dc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x5108dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5108e0:
    // 0x5108e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5108e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5108e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x5108e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5108e8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x5108e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x5108ec: 0x84b00000  lh          $s0, 0x0($a1)
    ctx->pc = 0x5108ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5108f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x5108f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5108f4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x5108f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x5108f8: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x5108f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5108fc: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x5108fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x510900: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x510900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510904: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x510904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x510908: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x51090c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x51090cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x510910: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510914: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510918: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x510918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x51091c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x51091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510920: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x510920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510924: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x510924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x510928: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x510928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x51092c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x51092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510930: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510934: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x510934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x510938: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x510938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51093c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x51093cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x510940: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x510940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x510944: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x510944u;
    SET_GPR_U32(ctx, 31, 0x51094Cu);
    ctx->pc = 0x510948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510944u;
    // 0x510948: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x510944u, 0x51094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51094Cu;
label_51094c:
    // 0x51094c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x51094cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x510950: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x510950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x510954: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x510954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510958: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x510958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x51095c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x51095cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x510960: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x510960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510964: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x510964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x510968: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x510968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x51096c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x51096cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x510970: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x510970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x510974: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x510974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x510978: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x510978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x51097c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x51097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x510980: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x510980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x510984: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x510984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x510988: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x510988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x51098c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x51098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x510990: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x510990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x510994: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510998: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x510998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x51099c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x51099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5109a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x5109a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x5109a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5109a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5109a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x5109a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5109ac: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x5109acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
    // 0x5109b0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x5109b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5109b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x5109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5109b8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x5109b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x5109bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x5109bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x5109c0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x5109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x5109c4: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x5109c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5109c8: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x5109c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5109cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5109ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5109d0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5109D0u;
    SET_GPR_U32(ctx, 31, 0x5109D8u);
    ctx->pc = 0x5109D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5109D0u;
    // 0x5109d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5109D0u, 0x5109D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5109D8u;
label_5109d8:
    // 0x5109d8: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x5109d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5109dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x5109dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5109e0: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x5109e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5109e4: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x5109e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5109e8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x5109e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x5109ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5109ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5109f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x5109f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x5109f4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x5109f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5109f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5109f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5109fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5109fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510a04: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x510a04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510a08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x510a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x510a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510a10: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x510a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x510a14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x510a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x510a18: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x510a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510a1c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x510a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x510a20: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x510a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x510a24: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x510a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x510a28: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510a2c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x510a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x510a30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510a34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x510a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x510a38: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x510a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x510a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510a40: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x510a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510a44: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x510a44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510a48: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x510a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x510a4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x510a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x510a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x510a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x510a54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x510a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x510a58: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510a5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x510a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x510a60: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x510a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x510a64: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x510a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x510a68: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x510a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x510a6c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x510a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x510a70: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510a74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510a78: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x510a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x510a7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510a80: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x510a80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x510a84: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x510a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510a88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x510a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x510a8c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x510a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x510a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510a94: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x510a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x510a98: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x510a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510a9c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x510a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x510aa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x510aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x510aa4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x510AA4u;
    SET_GPR_U32(ctx, 31, 0x510AACu);
    ctx->pc = 0x510AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510AA4u;
    // 0x510aa8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x510AA4u, 0x510AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510AACu;
label_510aac:
    // 0x510aac: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x510aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x510ab0: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x510ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x510ab4: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x510ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510ab8: 0x24a7c6bc  addiu       $a3, $a1, -0x3944
    ctx->pc = 0x510ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952636));
    // 0x510abc: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x510abcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x510ac0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x510ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x510ac4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x510ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x510ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x510acc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x510accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x510ad0: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x510ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510ad4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x510ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x510ad8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x510ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x510adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x510adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x510ae0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x510ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x510ae4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x510ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x510ae8: 0xc1449ee  jal         func_5127B8
    ctx->pc = 0x510AE8u;
    SET_GPR_U32(ctx, 31, 0x510AF0u);
    ctx->pc = 0x510AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510AE8u;
    // 0x510aec: 0x87a60004  lh          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5127B8u, 0x510AE8u, 0x510AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510AF0u;
label_510af0:
    // 0x510af0: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x510af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x510af4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x510af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x510af8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x510af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x510afc: 0x8483c6cc  lh          $v1, -0x3934($a0)
    ctx->pc = 0x510afcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294952652)));
    // 0x510b00: 0x2bc03  sra         $s7, $v0, 16
    ctx->pc = 0x510b00u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
    // 0x510b04: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x510b04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x510b08: 0x5060ff75  beql        $v1, $zero, . + 4 + (-0x8B << 2)
    ctx->pc = 0x510B08u;
    {
        const bool branch_taken_0x510b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x510b08) {
            ctx->pc = 0x510B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x510B08u;
            // 0x510b0c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5108E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5108e0;
        }
    }
    ctx->pc = 0x510B10u;
label_510b10:
    // 0x510b10: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x510b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510b14: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x510b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x510b18: 0x9683006e  lhu         $v1, 0x6E($s4)
    ctx->pc = 0x510b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 110)));
    // 0x510b1c: 0x24a4f080  addiu       $a0, $a1, -0xF80
    ctx->pc = 0x510b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x510b20: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x510b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x510b24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x510b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x510b28: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x510b28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x510b2c: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x510b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x510b30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x510b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x510b34: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x510b34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x510b38: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x510b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x510b3c: 0x8c43c6bc  lw          $v1, -0x3944($v0)
    ctx->pc = 0x510b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6BCu));
    // 0x510b40: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x510b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0E4u, _value); } while (0);
    // 0x510b44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x510b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_510b48:
    // 0x510b48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x510b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x510b4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x510b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x510b50: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x510b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x510b54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x510b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x510b58: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x510b58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x510b5c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x510b5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x510b60: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x510b60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x510b64: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x510b64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x510b68: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x510b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x510b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x510B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510B6Cu;
        // 0x510b70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510B74u;
    // 0x510b74: 0x0  nop
    ctx->pc = 0x510b74u;
    // NOP
    // 0x510b78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x510b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x510b7c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x510b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x510b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510b84: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x510b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x510b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x510b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x510b8c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x510b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x510b90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x510b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x510b94: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x510b94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x510b98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x510b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x510b9c: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x510b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x510ba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x510ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x510ba4: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x510ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x510ba8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x510ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x510bac: 0x2495a8c0  addiu       $s5, $a0, -0x5740
    ctx->pc = 0x510bacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944960));
    // 0x510bb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x510bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x510bb4: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x510bb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x510bb8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x510bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x510bbc: 0x3c170090  lui         $s7, 0x90
    ctx->pc = 0x510bbcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)144 << 16));
    // 0x510bc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x510bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x510bc4: 0x26e2f080  addiu       $v0, $s7, -0xF80
    ctx->pc = 0x510bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963328));
    // 0x510bc8: 0x2471c6cc  addiu       $s1, $v1, -0x3934
    ctx->pc = 0x510bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952652));
    // 0x510bcc: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x510bccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8FF0E4u));
    // 0x510bd0: 0xaec5c6bc  sw          $a1, -0x3944($s6)
    ctx->pc = 0x510bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC6BCu, _value); } while (0);
    // 0x510bd4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x510bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510bd8:
    // 0x510bd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x510bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510bdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x510bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x510be0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x510be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x510be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x510be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x510be8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x510be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x510bec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x510becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x510bf0: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x510bf0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x510bf4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x510bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x510bf8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x510bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x510bfc: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x510bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x510c00: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x510c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x510c04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x510c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x510c08: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x510c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x510c0c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x510c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x510c10: 0xae86c6c8  sw          $a2, -0x3938($s4)
    ctx->pc = 0x510c10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952648), GPR_U32(ctx, 6));
    // 0x510c14: 0xae64c6c0  sw          $a0, -0x3940($s3)
    ctx->pc = 0x510c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952640), GPR_U32(ctx, 4));
    // 0x510c18: 0xc14413a  jal         func_5104E8
    ctx->pc = 0x510C18u;
    SET_GPR_U32(ctx, 31, 0x510C20u);
    ctx->pc = 0x510C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510C18u;
    // 0x510c1c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5104E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5104E8u, 0x510C18u, 0x510C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510C20u;
label_510c20:
    // 0x510c20: 0x2a020013  slti        $v0, $s0, 0x13
    ctx->pc = 0x510c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x510c24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x510C24u;
    {
        const bool branch_taken_0x510c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x510C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510C24u;
        // 0x510c28: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510c24) {
            ctx->pc = 0x510BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510bd8;
        }
    }
    ctx->pc = 0x510C2Cu;
    // 0x510c2c: 0x8ec3c6bc  lw          $v1, -0x3944($s6)
    ctx->pc = 0x510c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952636)));
    // 0x510c30: 0x26e2f080  addiu       $v0, $s7, -0xF80
    ctx->pc = 0x510c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963328));
    // 0x510c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x510c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510c3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x510c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x510c40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x510c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x510c44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x510c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x510c48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x510c48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x510c4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x510c4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x510c50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x510c50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x510c54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x510c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x510c58: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x510c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x510c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x510C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510C5Cu;
        // 0x510c60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510C64u;
    // 0x510c64: 0x0  nop
    ctx->pc = 0x510c64u;
    // NOP
    ctx->pc = 0x510c68u;
}
