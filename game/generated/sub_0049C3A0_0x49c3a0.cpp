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

// Function: sub_0049C3A0
// Address: 0x49c3a0 - 0x49cea0
void sub_0049C3A0_0x49c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C3A0_0x49c3a0");
#endif

    switch (ctx->pc) {
        case 0x49c7fcu: goto label_49c7fc;
        case 0x49c888u: goto label_49c888;
        case 0x49cac8u: goto label_49cac8;
        case 0x49cafcu: goto label_49cafc;
        case 0x49cb1cu: goto label_49cb1c;
        case 0x49cc58u: goto label_49cc58;
        case 0x49ccc0u: goto label_49ccc0;
        case 0x49ccd0u: goto label_49ccd0;
        case 0x49cce0u: goto label_49cce0;
        case 0x49ccf0u: goto label_49ccf0;
        default: break;
    }

    ctx->pc = 0x49c3a0u;

label_49c3a0:
    // 0x49c3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49c3a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49c3a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x49c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x49c3ac: 0x24570b84  addiu       $s7, $v0, 0xB84
    ctx->pc = 0x49c3acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x49c3b0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49c3b4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49c3b8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x49c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x49c3bc: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x49c3bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x49c3c0: 0x94850b9c  lhu         $a1, 0xB9C($a0)
    ctx->pc = 0x49c3c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0B9Cu));
    // 0x49c3c4: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x49c3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x49c3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49c3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c3d0: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x49c3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49c3d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49c3d8: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c3dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49c3e0: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x49c3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c3e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49c3e8: 0x2c6300b4  sltiu       $v1, $v1, 0xB4
    ctx->pc = 0x49c3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x49c3ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49c3f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49c3f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49c3f8: 0x106001a6  beqz        $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x49C3F8u;
    {
        const bool branch_taken_0x49c3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3F8u;
        // 0x49c3fc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3f8) {
            ctx->pc = 0x49CA94u;
            goto label_49ca94;
        }
    }
    ctx->pc = 0x49C400u;
    // 0x49c400: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49c404: 0x9e1824  and         $v1, $a0, $fp
    ctx->pc = 0x49c404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x49c408: 0x244f0b98  addiu       $t7, $v0, 0xB98
    ctx->pc = 0x49c408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
    // 0x49c40c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49c410: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x49c410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49c414: 0x94850ba0  lhu         $a1, 0xBA0($a0)
    ctx->pc = 0x49c414u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0BA0u));
    // 0x49c418: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49c418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49c41c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c420: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c424: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x49c424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c428: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x49c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x49c42c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c430: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49c430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49c434: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c43c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c440: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c444: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x49c444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c448: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49c44c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c450: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c454: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c454u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c458: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x49c458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c45c: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x49C45Cu;
    {
        const bool branch_taken_0x49c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C45Cu;
        // 0x49c460: 0x3c07007f  lui         $a3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c45c) {
            ctx->pc = 0x49C8F0u;
            goto label_49c8f0;
        }
    }
    ctx->pc = 0x49C464u;
    // 0x49c464: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49c464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49c468: 0x7e2825  or          $a1, $v1, $fp
    ctx->pc = 0x49c468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c46c: 0x26100bac  addiu       $s0, $s0, 0xBAC
    ctx->pc = 0x49c46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2988));
    // 0x49c470: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49c470u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49c474: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c478: 0x26520b88  addiu       $s2, $s2, 0xB88
    ctx->pc = 0x49c478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2952));
    // 0x49c47c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x49c47cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x49c480: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x49c480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c484: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x49c484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x49c488: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x49c488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x49c48c: 0x26310ba8  addiu       $s1, $s1, 0xBA8
    ctx->pc = 0x49c48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2984));
    // 0x49c490: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x49c490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49c494: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c498: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x49c498u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x49c49c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c4a0: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x49c4a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x49c4a4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49c4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49c4a8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49c4a8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x49c4ac: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x49c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x49c4b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49c4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49c4b4: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x49c4b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x49c4b8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c4bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49c4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49c4c0: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x49c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x49c4c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49c4c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49c4c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x49c4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x49c4cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c4d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c4d4: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x49c4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x49c4d8: 0x5e7024  and         $t6, $v0, $fp
    ctx->pc = 0x49c4d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x49c4dc: 0x35c3ffff  ori         $v1, $t6, 0xFFFF
    ctx->pc = 0x49c4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49c4e0: 0x647024  and         $t6, $v1, $a0
    ctx->pc = 0x49c4e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c4e4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x49c4e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x49c4e8: 0x1de1024  and         $v0, $t6, $fp
    ctx->pc = 0x49c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x49c4ec: 0x1de4025  or          $t0, $t6, $fp
    ctx->pc = 0x49c4ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | GPR_U64(ctx, 30));
    // 0x49c4f0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c4f4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49c4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c4f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c4fc: 0xa46e0008  sh          $t6, 0x8($v1)
    ctx->pc = 0x49c4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 14));
    // 0x49c500: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x49c500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c504: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x49c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c508: 0x94c20016  lhu         $v0, 0x16($a2)
    ctx->pc = 0x49c508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x49c50c: 0x24c7000a  addiu       $a3, $a2, 0xA
    ctx->pc = 0x49c50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x49c510: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x49c510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x49c514: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c518: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c51c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c520: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c520u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c524: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c528: 0x84c20018  lh          $v0, 0x18($a2)
    ctx->pc = 0x49c528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49c52c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c530: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c534: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c534u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c538: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c53c: 0x84c5000c  lh          $a1, 0xC($a2)
    ctx->pc = 0x49c53cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x49c540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c548: 0xbe2825  or          $a1, $a1, $fp
    ctx->pc = 0x49c548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 30));
    // 0x49c54c: 0x1027024  and         $t6, $t0, $v0
    ctx->pc = 0x49c54cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49c550: 0x35c3ffff  ori         $v1, $t6, 0xFFFF
    ctx->pc = 0x49c550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49c554: 0x657024  and         $t6, $v1, $a1
    ctx->pc = 0x49c554u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49c558: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x49c558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x49c55c: 0x1de1024  and         $v0, $t6, $fp
    ctx->pc = 0x49c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x49c560: 0x1de4025  or          $t0, $t6, $fp
    ctx->pc = 0x49c560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | GPR_U64(ctx, 30));
    // 0x49c564: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c568: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c568u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c56c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c570: 0xa46e000c  sh          $t6, 0xC($v1)
    ctx->pc = 0x49c570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 14));
    // 0x49c574: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x49c574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c578: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x49c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c57c: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x49c57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x49c580: 0x24c7000e  addiu       $a3, $a2, 0xE
    ctx->pc = 0x49c580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x49c584: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x49c584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x49c588: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c590: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c594: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c594u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c598: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c59c: 0x84c2001c  lh          $v0, 0x1C($a2)
    ctx->pc = 0x49c59cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x49c5a0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c5a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c5a8: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c5ac: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c5acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c5b0: 0x84c50010  lh          $a1, 0x10($a2)
    ctx->pc = 0x49c5b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x49c5b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c5b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c5bc: 0xbe2825  or          $a1, $a1, $fp
    ctx->pc = 0x49c5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 30));
    // 0x49c5c0: 0x1027024  and         $t6, $t0, $v0
    ctx->pc = 0x49c5c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49c5c4: 0x35c3ffff  ori         $v1, $t6, 0xFFFF
    ctx->pc = 0x49c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49c5c8: 0x657024  and         $t6, $v1, $a1
    ctx->pc = 0x49c5c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49c5cc: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x49c5ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x49c5d0: 0x1de1024  and         $v0, $t6, $fp
    ctx->pc = 0x49c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x49c5d4: 0x1de4025  or          $t0, $t6, $fp
    ctx->pc = 0x49c5d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | GPR_U64(ctx, 30));
    // 0x49c5d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c5dc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c5e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c5e4: 0xa46e0010  sh          $t6, 0x10($v1)
    ctx->pc = 0x49c5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 14));
    // 0x49c5e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49c5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c5ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x49c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c5f0: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x49c5f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x49c5f4: 0x24a7001e  addiu       $a3, $a1, 0x1E
    ctx->pc = 0x49c5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x49c5f8: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49c5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c5fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c600: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c608: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49c608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49c60c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c610: 0x84a20026  lh          $v0, 0x26($a1)
    ctx->pc = 0x49c610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x49c614: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x49c614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c618: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c61c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c620: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49c620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49c624: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c628: 0x84a40020  lh          $a0, 0x20($a1)
    ctx->pc = 0x49c628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x49c62c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c630: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c634: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x49c634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x49c638: 0x1027024  and         $t6, $t0, $v0
    ctx->pc = 0x49c638u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49c63c: 0x35c3ffff  ori         $v1, $t6, 0xFFFF
    ctx->pc = 0x49c63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49c640: 0x647024  and         $t6, $v1, $a0
    ctx->pc = 0x49c640u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c644: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x49c644u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x49c648: 0x1de1024  and         $v0, $t6, $fp
    ctx->pc = 0x49c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x49c64c: 0x1de4025  or          $t0, $t6, $fp
    ctx->pc = 0x49c64cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | GPR_U64(ctx, 30));
    // 0x49c650: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c654: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c654u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c658: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c65c: 0xa46e0020  sh          $t6, 0x20($v1)
    ctx->pc = 0x49c65cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 14));
    // 0x49c660: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49c660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c664: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x49c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c668: 0x94a20028  lhu         $v0, 0x28($a1)
    ctx->pc = 0x49c668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x49c66c: 0x24a60022  addiu       $a2, $a1, 0x22
    ctx->pc = 0x49c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
    // 0x49c670: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c674: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x49c674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c678: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c67c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c680: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c684: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49c684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49c688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c68c: 0x84a2002a  lh          $v0, 0x2A($a1)
    ctx->pc = 0x49c68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x49c690: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c698: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49c698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49c69c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49c69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49c6a0: 0x84a40024  lh          $a0, 0x24($a1)
    ctx->pc = 0x49c6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x49c6a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c6ac: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x49c6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x49c6b0: 0x1027024  and         $t6, $t0, $v0
    ctx->pc = 0x49c6b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49c6b4: 0x35c3ffff  ori         $v1, $t6, 0xFFFF
    ctx->pc = 0x49c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49c6b8: 0x647024  and         $t6, $v1, $a0
    ctx->pc = 0x49c6b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c6bc: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x49c6bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x49c6c0: 0x1de1024  and         $v0, $t6, $fp
    ctx->pc = 0x49c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x49c6c4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c6c8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49c6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c6cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c6d0: 0xa46e0024  sh          $t6, 0x24($v1)
    ctx->pc = 0x49c6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 14));
    // 0x49c6d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x49c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49c6d8: 0xa4a90000  sh          $t1, 0x0($a1)
    ctx->pc = 0x49c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x49c6dc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49c6e0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49c6e4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x49c6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x49c6e8: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x49c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49c6ec: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x49c6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x49c6f0: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x49c6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49c6f4: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x49c6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x49c6f8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x49c6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c6fc: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x49c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x49c700: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49c700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49c704: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x49c704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x49c708: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x49c708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49c70c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c710: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c714: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x49c714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x49c718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c71c: 0x85640b8c  lh          $a0, 0xB8C($t3)
    ctx->pc = 0x49c71cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2956)));
    // 0x49c720: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c724: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c728: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c728u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c72c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c730: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x49c730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c734: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49c734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49c738: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c73c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c740: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c740u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c744: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x49c744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c748: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49c748u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c74c: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x49c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x49c750: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c754: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c758: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x49c758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x49c75c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c760: 0x85840b90  lh          $a0, 0xB90($t4)
    ctx->pc = 0x49c760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2960)));
    // 0x49c764: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c76c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c774: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x49c774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c778: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49c778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49c77c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c784: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c784u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c788: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x49c788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c78c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c78cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c790: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x49c790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x49c794: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c798: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c79c: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x49c79cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x49c7a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c7a4: 0x85a40b94  lh          $a0, 0xB94($t5)
    ctx->pc = 0x49c7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2964)));
    // 0x49c7a8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c7ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c7b0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c7b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c7b8: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x49c7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c7bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49c7c0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c7c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c7c8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c7cc: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x49c7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c7d0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49c7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c7d4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49c7d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c7dc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c7e0: 0x8482001e  lh          $v0, 0x1E($a0)
    ctx->pc = 0x49c7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x49c7e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c7e8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c7ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c7f0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c7f4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49C7F4u;
    SET_GPR_U32(ctx, 31, 0x49C7FCu);
    ctx->pc = 0x49C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C7F4u;
    // 0x49c7f8: 0x86e40000  lh          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49C7F4u, 0x49C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C7FCu;
label_49c7fc:
    // 0x49c7fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c800: 0x5e1824  and         $v1, $v0, $fp
    ctx->pc = 0x49c800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x49c804: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49c804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49c808: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49c808u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49c80c: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x49c80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49c810: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x49c810u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c814: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c818: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49c818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c81c: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x49c81cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c820: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x49c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c824: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49c828: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x49c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x49c82c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c830: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c834: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49c838: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x49c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49c83c: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x49c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49c840: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x49c840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c844: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x49c844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x49c848: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49c848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49c84c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c850: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49c850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49c854: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x49c854u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49c858: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49c858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49c85c: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x49c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x49c860: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x49c860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49c864: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c868: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x49c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c86c: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x49c86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x49c870: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c874: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c878: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c87c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x49c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x49c880: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49C880u;
    SET_GPR_U32(ctx, 31, 0x49C888u);
    ctx->pc = 0x49C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C880u;
    // 0x49c884: 0x86e40000  lh          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49C880u, 0x49C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C888u;
label_49c888:
    // 0x49c888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49c888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c88c: 0x5e1824  and         $v1, $v0, $fp
    ctx->pc = 0x49c88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x49c890: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49c890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49c894: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49c894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49c898: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x49c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49c89c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x49c89cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c8a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49c8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c8a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49c8a8: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x49c8a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c8ac: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x49c8acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x49c8b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x49c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c8b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49c8b8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x49c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x49c8bc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49c8c0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x49c8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c8c4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49c8c8: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x49c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49c8cc: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x49c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49c8d0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49c8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c8d4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49c8d8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x49c8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c8dc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49c8e0: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x49c8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x49c8e4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x49C8E4u;
    {
        const bool branch_taken_0x49c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8E4u;
        // 0x49c8e8: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c8e4) {
            ctx->pc = 0x49CA94u;
            goto label_49ca94;
        }
    }
    ctx->pc = 0x49C8ECu;
    // 0x49c8ec: 0x0  nop
    ctx->pc = 0x49c8ecu;
    // NOP
label_49c8f0:
    // 0x49c8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c8f4: 0x24e70ba8  addiu       $a3, $a3, 0xBA8
    ctx->pc = 0x49c8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2984));
    // 0x49c8f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49c8fc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x49c8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c900: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49c900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49c904: 0x25080bac  addiu       $t0, $t0, 0xBAC
    ctx->pc = 0x49c904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2988));
    // 0x49c908: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49c908u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49c90c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49c90cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c910: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49c910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49c914: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x49c914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x49c918: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x49c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49c91c: 0x24c90004  addiu       $t1, $a2, 0x4
    ctx->pc = 0x49c91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49c920: 0x24cb0006  addiu       $t3, $a2, 0x6
    ctx->pc = 0x49c920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x49c924: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x49c924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49c928: 0x24cf000c  addiu       $t7, $a2, 0xC
    ctx->pc = 0x49c928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x49c92c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x49c92cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x49c930: 0x24cd0008  addiu       $t5, $a2, 0x8
    ctx->pc = 0x49c930u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x49c934: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49c934u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c938: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x49c938u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x49c93c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49c940: 0x24ce000a  addiu       $t6, $a2, 0xA
    ctx->pc = 0x49c940u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x49c944: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x49c944u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49c948: 0x24d0000e  addiu       $s0, $a2, 0xE
    ctx->pc = 0x49c948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x49c94c: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x49c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x49c950: 0x24d10010  addiu       $s1, $a2, 0x10
    ctx->pc = 0x49c950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49c954: 0x24157fff  addiu       $s5, $zero, 0x7FFF
    ctx->pc = 0x49c954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49c958: 0x24d20014  addiu       $s2, $a2, 0x14
    ctx->pc = 0x49c958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x49c95c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c960: 0x24d60018  addiu       $s6, $a2, 0x18
    ctx->pc = 0x49c960u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x49c964: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x49c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c968: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x49c968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49c96c: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x49c96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x49c970: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c974: 0x85450b8c  lh          $a1, 0xB8C($t2)
    ctx->pc = 0x49c974u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49c978: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x49c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x49c97c: 0x24ca0012  addiu       $t2, $a2, 0x12
    ctx->pc = 0x49c97cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x49c980: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49c984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c988: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c988u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c98c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c990: 0x24c60016  addiu       $a2, $a2, 0x16
    ctx->pc = 0x49c990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x49c994: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x49c994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c998: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x49c998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49c99c: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49c99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c9a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49c9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49c9a4: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c9a8: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x49c9a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c9ac: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x49c9acu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c9b0: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x49c9b4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x49c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49c9b8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x49c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c9bc: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x49c9bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x49c9c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c9c4: 0x85850b90  lh          $a1, 0xB90($t4)
    ctx->pc = 0x49c9c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2960)));
    // 0x49c9c8: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c9cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49c9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49c9d0: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c9d4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c9d8: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x49c9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c9dc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x49c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49c9e0: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49c9e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49c9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49c9e8: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49c9ec: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x49c9ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49c9f0: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x49c9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c9f4: 0xaced0000  sw          $t5, 0x0($a3)
    ctx->pc = 0x49c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 13));
    // 0x49c9f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x49c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49c9fc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x49c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49ca00: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x49ca00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x49ca04: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49ca04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49ca08: 0x86650b94  lh          $a1, 0xB94($s3)
    ctx->pc = 0x49ca08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2964)));
    // 0x49ca0c: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49ca0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49ca10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49ca10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49ca14: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49ca18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49ca18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49ca1c: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x49ca1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49ca20: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x49ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49ca24: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x49ca24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x49ca28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49ca28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49ca2c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x49ca30: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x49ca30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49ca34: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x49ca34u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49ca38: 0xacee0000  sw          $t6, 0x0($a3)
    ctx->pc = 0x49ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
    // 0x49ca3c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49ca40: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x49ca40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x49ca44: 0xa5c40000  sh          $a0, 0x0($t6)
    ctx->pc = 0x49ca44u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49ca48: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x49ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x49ca4c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49ca50: 0x9464002c  lhu         $a0, 0x2C($v1)
    ctx->pc = 0x49ca50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x49ca54: 0xa5e40000  sh          $a0, 0x0($t7)
    ctx->pc = 0x49ca54u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49ca58: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x49ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x49ca5c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x49ca5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49ca60: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x49ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x49ca64: 0xa6350000  sh          $s5, 0x0($s1)
    ctx->pc = 0x49ca64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x49ca68: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x49ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x49ca6c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49ca70: 0x9464002e  lhu         $a0, 0x2E($v1)
    ctx->pc = 0x49ca70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x49ca74: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x49ca74u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49ca78: 0xacf20000  sw          $s2, 0x0($a3)
    ctx->pc = 0x49ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 18));
    // 0x49ca7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49ca80: 0x94640030  lhu         $a0, 0x30($v1)
    ctx->pc = 0x49ca80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x49ca84: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x49ca84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49ca88: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x49ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x49ca8c: 0xa4d40000  sh          $s4, 0x0($a2)
    ctx->pc = 0x49ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x49ca90: 0xacf60000  sw          $s6, 0x0($a3)
    ctx->pc = 0x49ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 22));
label_49ca94:
    // 0x49ca94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ca94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ca98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49ca98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ca9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ca9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49caa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49caa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49caa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49caa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49caa8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49caa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49caac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49caacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49cab0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x49cab0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49cab4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x49cab4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49cab8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x49cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49cabc: 0x3e00008  jr          $ra
    ctx->pc = 0x49CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CABCu;
        // 0x49cac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49CAC4u;
    // 0x49cac4: 0x0  nop
    ctx->pc = 0x49cac4u;
    // NOP
label_49cac8:
    // 0x49cac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49cacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49caccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49cad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49cad4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49cad8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49cadc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x49cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x49cae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49cae4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49cae8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49caec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x49caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x49caf0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x49caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x49caf4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49CAF4u;
    SET_GPR_U32(ctx, 31, 0x49CAFCu);
    ctx->pc = 0x49CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CAF4u;
    // 0x49caf8: 0x3c1e007f  lui         $fp, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49CAF4u, 0x49CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CAFCu;
label_49cafc:
    // 0x49cafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49cafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cb00: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49cb04: 0x2451d680  addiu       $s1, $v0, -0x2980
    ctx->pc = 0x49cb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49cb08: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49cb0c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x49cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x49cb10: 0x24720ba8  addiu       $s2, $v1, 0xBA8
    ctx->pc = 0x49cb10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2984));
    // 0x49cb14: 0xc124620  jal         func_491880
    ctx->pc = 0x49CB14u;
    SET_GPR_U32(ctx, 31, 0x49CB1Cu);
    ctx->pc = 0x49CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CB14u;
    // 0x49cb18: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x49CB14u, 0x49CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CB1Cu;
label_49cb1c:
    // 0x49cb1c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49cb20: 0x340ea800  ori         $t6, $zero, 0xA800
    ctx->pc = 0x49cb20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x49cb24: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x49cb24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x49cb28: 0x24930bac  addiu       $s3, $a0, 0xBAC
    ctx->pc = 0x49cb28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2988));
    // 0x49cb2c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49cb30: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x49cb30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x7F0BACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BACu, _value); } while (0);
    // 0x49cb34: 0x24c50b8c  addiu       $a1, $a2, 0xB8C
    ctx->pc = 0x49cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2956));
    // 0x49cb38: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49cb38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49cb3c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49cb3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49cb40: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B8Cu));
    // 0x49cb44: 0x25470b90  addiu       $a3, $t2, 0xB90
    ctx->pc = 0x49cb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 2960));
    // 0x49cb48: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x49cb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x49cb4c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x49cb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x49cb50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49cb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49cb54: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x49cb54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0B90u));
    // 0x49cb58: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49cb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49cb5c: 0x25290ba0  addiu       $t1, $t1, 0xBA0
    ctx->pc = 0x49cb5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2976));
    // 0x49cb60: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49cb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49cb64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49cb68: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x49cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x49cb6c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x49cb70: 0x246f0b98  addiu       $t7, $v1, 0xB98
    ctx->pc = 0x49cb70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 2968));
    // 0x49cb74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49cb74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49cb78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x49cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49cb7c: 0x348405b6  ori         $a0, $a0, 0x5B6
    ctx->pc = 0x49cb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1462);
    // 0x49cb80: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x49cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0B98u));
    // 0x49cb84: 0x27cc0b94  addiu       $t4, $fp, 0xB94
    ctx->pc = 0x49cb84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 2964));
    // 0x49cb88: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x49cb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49cb8c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49cb8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x49cb90: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49cb90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49cb94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49cb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49cb98: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49cb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49cb9c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x49cb9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x49cba0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49cba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49cba4: 0x34aaffff  ori         $t2, $a1, 0xFFFF
    ctx->pc = 0x49cba4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49cba8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x49cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x49cbac: 0x25ad0b9c  addiu       $t5, $t5, 0xB9C
    ctx->pc = 0x49cbacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2972));
    // 0x49cbb0: 0x3401a802  ori         $at, $zero, 0xA802
    ctx->pc = 0x49cbb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43010);
    // 0x49cbb4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x49cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49cbb8: 0x96270004  lhu         $a3, 0x4($s1)
    ctx->pc = 0x49cbb8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49cbbc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x49cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x49cbc0: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x49cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x49cbc4: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x49cbc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x49cbc8: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x49cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49cbcc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x49cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49cbd0: 0x862b0092  lh          $t3, 0x92($s1)
    ctx->pc = 0x49cbd0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x49cbd4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49cbd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49cbd8: 0x85e50000  lh          $a1, 0x0($t7)
    ctx->pc = 0x49cbd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49cbdc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49cbe0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49cbe4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49cbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49cbe8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x49cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x49cbec: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x49cbecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x49cbf0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x49cbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x49cbf4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49cbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49cbf8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49cbf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49cbfc: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x49cbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x49cc00: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x49cc00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x49cc04: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x49cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x49cc08: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49cc0c: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x49cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x49cc10: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x49cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49cc14: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x49cc14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49cc18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49cc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49cc1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x49cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x49cc20: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49cc24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49cc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49cc28: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x49cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x49cc2c: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x49cc2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49cc30: 0x4400089  bltz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x49CC30u;
    {
        const bool branch_taken_0x49cc30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC30u;
        // 0x49cc34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc30) {
            ctx->pc = 0x49CE58u;
            goto label_49ce58;
        }
    }
    ctx->pc = 0x49CC38u;
    // 0x49cc38: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49cc3c: 0x1e0a82d  daddu       $s5, $t7, $zero
    ctx->pc = 0x49cc3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cc40: 0x24500b84  addiu       $s0, $v0, 0xB84
    ctx->pc = 0x49cc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x49cc44: 0x1a0a02d  daddu       $s4, $t5, $zero
    ctx->pc = 0x49cc44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cc48: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49cc48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49cc4c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x49cc4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49cc50: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x49cc50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49cc54: 0x0  nop
    ctx->pc = 0x49cc54u;
    // NOP
label_49cc58:
    // 0x49cc58: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49cc5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cc60: 0x8cc40bac  lw          $a0, 0xBAC($a2)
    ctx->pc = 0x49cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49cc64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cc68: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49cc68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49cc6c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cc70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cc74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cc78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49cc78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cc7c: 0x10770012  beq         $v1, $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x49CC7Cu;
    {
        const bool branch_taken_0x49cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x49CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC7Cu;
        // 0x49cc80: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc7c) {
            ctx->pc = 0x49CCC8u;
            goto label_49ccc8;
        }
    }
    ctx->pc = 0x49CC84u;
    // 0x49cc84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49CC84u;
    {
        const bool branch_taken_0x49cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cc84) {
            ctx->pc = 0x49CC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49CC84u;
            // 0x49cc88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49CCA0u;
            goto label_49cca0;
        }
    }
    ctx->pc = 0x49CC8Cu;
    // 0x49cc8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x49CC8Cu;
    {
        const bool branch_taken_0x49cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cc8c) {
            ctx->pc = 0x49CCB8u;
            goto label_49ccb8;
        }
    }
    ctx->pc = 0x49CC94u;
    // 0x49cc94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49CC94u;
    {
        const bool branch_taken_0x49cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cc94) {
            ctx->pc = 0x49CCF4u;
            goto label_49ccf4;
        }
    }
    ctx->pc = 0x49CC9Cu;
    // 0x49cc9c: 0x0  nop
    ctx->pc = 0x49cc9cu;
    // NOP
label_49cca0:
    // 0x49cca0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x49CCA0u;
    {
        const bool branch_taken_0x49cca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49cca0) {
            ctx->pc = 0x49CCD8u;
            goto label_49ccd8;
        }
    }
    ctx->pc = 0x49CCA8u;
    // 0x49cca8: 0x1076000f  beq         $v1, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x49CCA8u;
    {
        const bool branch_taken_0x49cca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x49cca8) {
            ctx->pc = 0x49CCE8u;
            goto label_49cce8;
        }
    }
    ctx->pc = 0x49CCB0u;
    // 0x49ccb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49CCB0u;
    {
        const bool branch_taken_0x49ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ccb0) {
            ctx->pc = 0x49CCF4u;
            goto label_49ccf4;
        }
    }
    ctx->pc = 0x49CCB8u;
label_49ccb8:
    // 0x49ccb8: 0xc127018  jal         func_49C060
    ctx->pc = 0x49CCB8u;
    SET_GPR_U32(ctx, 31, 0x49CCC0u);
    ctx->pc = 0x49C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C060u, 0x49CCB8u, 0x49CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CCC0u;
label_49ccc0:
    // 0x49ccc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49CCC0u;
    {
        const bool branch_taken_0x49ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCC0u;
        // 0x49ccc4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ccc0) {
            ctx->pc = 0x49CCF4u;
            goto label_49ccf4;
        }
    }
    ctx->pc = 0x49CCC8u;
label_49ccc8:
    // 0x49ccc8: 0xc12702a  jal         func_49C0A8
    ctx->pc = 0x49CCC8u;
    SET_GPR_U32(ctx, 31, 0x49CCD0u);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x49CCC8u, 0x49CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CCD0u;
label_49ccd0:
    // 0x49ccd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49CCD0u;
    {
        const bool branch_taken_0x49ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCD0u;
        // 0x49ccd4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ccd0) {
            ctx->pc = 0x49CCF4u;
            goto label_49ccf4;
        }
    }
    ctx->pc = 0x49CCD8u;
label_49ccd8:
    // 0x49ccd8: 0xc1270d8  jal         func_49C360
    ctx->pc = 0x49CCD8u;
    SET_GPR_U32(ctx, 31, 0x49CCE0u);
    ctx->pc = 0x49C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C360u, 0x49CCD8u, 0x49CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CCE0u;
label_49cce0:
    // 0x49cce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49CCE0u;
    {
        const bool branch_taken_0x49cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCE0u;
        // 0x49cce4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cce0) {
            ctx->pc = 0x49CCF4u;
            goto label_49ccf4;
        }
    }
    ctx->pc = 0x49CCE8u;
label_49cce8:
    // 0x49cce8: 0xc1270e8  jal         func_49C3A0
    ctx->pc = 0x49CCE8u;
    SET_GPR_U32(ctx, 31, 0x49CCF0u);
    ctx->pc = 0x49C3A0u;
    goto label_49c3a0;
    ctx->pc = 0x49CCF0u;
label_49ccf0:
    // 0x49ccf0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x49ccf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ccf4:
    // 0x49ccf4: 0x55370046  bnel        $t1, $s7, . + 4 + (0x46 << 2)
    ctx->pc = 0x49CCF4u;
    {
        const bool branch_taken_0x49ccf4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 23));
        if (branch_taken_0x49ccf4) {
            ctx->pc = 0x49CCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49CCF4u;
            // 0x49ccf8: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49CE10u;
            goto label_49ce10;
        }
    }
    ctx->pc = 0x49CCFCu;
    // 0x49ccfc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x49ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49cd00: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49cd00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49cd04: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x49cd04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49cd08: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49cd0c: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x49cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49cd10: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x49cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49cd14: 0x95420b98  lhu         $v0, 0xB98($t2)
    ctx->pc = 0x49cd14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B98u));
    // 0x49cd18: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49cd18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49cd1c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x49cd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x49cd20: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x49cd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x49cd24: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x49cd24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49cd28: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x49cd28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x49cd2c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49cd30: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x49cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x49cd34: 0xa4760000  sh          $s6, 0x0($v1)
    ctx->pc = 0x49cd34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x49cd38: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x49cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x49cd3c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49cd40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cd44: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x49cd44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x49cd48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cd4c: 0x85440b8c  lh          $a0, 0xB8C($t2)
    ctx->pc = 0x49cd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49cd50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cd54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cd58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cd5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cd60: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49cd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cd64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49cd68: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cd6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cd70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cd74: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49cd74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cd78: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49cd78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49cd7c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49cd80: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x49cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x49cd84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49cd88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cd8c: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x49cd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x49cd90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cd94: 0x84c40b90  lh          $a0, 0xB90($a2)
    ctx->pc = 0x49cd94u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x7F0B90u));
    // 0x49cd98: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cd9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cda0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cda4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cda8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49cda8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cdac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49cdb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cdb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cdb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cdbc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49cdbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cdc0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49cdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49cdc4: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x49cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x49cdc8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49cdcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cdd0: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x49cdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x49cdd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cdd8: 0x87c40b94  lh          $a0, 0xB94($fp)
    ctx->pc = 0x49cdd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2964)));
    // 0x49cddc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cde0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cde4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cde8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cdec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49cdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cdf0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x49cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49cdf4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cdf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cdfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49ce00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49ce00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ce04: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49ce04u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ce08: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x49ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49ce0c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x49ce0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_49ce10:
    // 0x49ce10: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x49ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49ce14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ce18: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x49ce18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49ce1c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49ce20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ce20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49ce24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49ce24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49ce28: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x49ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49ce2c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x49ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x49ce30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49ce34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49ce34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49ce38: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x49ce38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x49ce3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x49ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49ce40: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x49ce40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49ce44: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x49ce44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49ce48: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x49ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x49ce4c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x49ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x49ce50: 0x461ff81  bgez        $v1, . + 4 + (-0x7F << 2)
    ctx->pc = 0x49CE50u;
    {
        const bool branch_taken_0x49ce50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE50u;
        // 0x49ce54: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce50) {
            ctx->pc = 0x49CC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cc58;
        }
    }
    ctx->pc = 0x49CE58u;
label_49ce58:
    // 0x49ce58: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49ce58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49ce5c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x49ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x49ce60: 0x8d430ba8  lw          $v1, 0xBA8($t2)
    ctx->pc = 0x49ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BA8u));
    // 0x49ce64: 0x2482d680  addiu       $v0, $a0, -0x2980
    ctx->pc = 0x49ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49ce68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ce68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ce6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49ce6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ce70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ce70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ce74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49ce74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ce78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49ce78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ce7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49ce7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49ce80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49ce80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ce84: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x49ce84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49ce88: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x49ce88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49ce8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x49ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49ce90: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x49ce90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D6C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6C0u, _value); } while (0);
    // 0x49ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x49CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE94u;
        // 0x49ce98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49CE9Cu;
    // 0x49ce9c: 0x0  nop
    ctx->pc = 0x49ce9cu;
    // NOP
    ctx->pc = 0x49cea0u;
}
