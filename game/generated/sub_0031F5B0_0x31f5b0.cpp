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

// Function: sub_0031F5B0
// Address: 0x31f5b0 - 0x31f968
void sub_0031F5B0_0x31f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F5B0_0x31f5b0");
#endif

    switch (ctx->pc) {
        case 0x31f650u: goto label_31f650;
        case 0x31f660u: goto label_31f660;
        case 0x31f688u: goto label_31f688;
        case 0x31f6e8u: goto label_31f6e8;
        case 0x31f778u: goto label_31f778;
        case 0x31f828u: goto label_31f828;
        case 0x31f874u: goto label_31f874;
        case 0x31f89cu: goto label_31f89c;
        default: break;
    }

    ctx->pc = 0x31f5b0u;

    // 0x31f5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31f5b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31f5bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31f5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5c0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31f5c4: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x31f5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31f5c8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31f5cc: 0x24460400  addiu       $a2, $v0, 0x400
    ctx->pc = 0x31f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x31f5d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31f5d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31f5d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31f5dc: 0x246703c0  addiu       $a3, $v1, 0x3C0
    ctx->pc = 0x31f5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x31f5e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31f5e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31f5e8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31f5ec: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31f5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31f5f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31f5f4: 0x94940400  lhu         $s4, 0x400($a0)
    ctx->pc = 0x31f5f4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x31f5f8: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x31f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400418u));
    // 0x31f5fc: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x31f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31f600: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x31f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31f604: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x31f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31f608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31f608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31f60c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f610: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31f614: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x31f614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x31f618: 0xa2b823  subu        $s7, $a1, $v0
    ctx->pc = 0x31f618u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31f61c: 0xacd70018  sw          $s7, 0x18($a2)
    ctx->pc = 0x31f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 23));
    // 0x31f620: 0x12800096  beqz        $s4, . + 4 + (0x96 << 2)
    ctx->pc = 0x31F620u;
    {
        const bool branch_taken_0x31f620 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F620u;
        // 0x31f624: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f620) {
            ctx->pc = 0x31F87Cu;
            goto label_31f87c;
        }
    }
    ctx->pc = 0x31F628u;
    // 0x31f628: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31f62c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x31f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x31f630: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x31f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x31f634: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x31f634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x31f638: 0x34c6d020  ori         $a2, $a2, 0xD020
    ctx->pc = 0x31f638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53280);
    // 0x31f63c: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x31f63cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x31f640: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x31f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x31f644: 0x37ded080  ori         $fp, $fp, 0xD080
    ctx->pc = 0x31f644u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53376);
    // 0x31f648: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x31f648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x31f64c: 0x0  nop
    ctx->pc = 0x31f64cu;
    // NOP
label_31f650:
    // 0x31f650: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31f650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31f654: 0x24a503cc  addiu       $a1, $a1, 0x3CC
    ctx->pc = 0x31f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 972));
    // 0x31f658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f65c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31f65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31f660:
    // 0x31f660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f664: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x31f664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31f668: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x31F668u;
    {
        const bool branch_taken_0x31f668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F668u;
        // 0x31f66c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f668) {
            ctx->pc = 0x31F7F8u;
            goto label_31f7f8;
        }
    }
    ctx->pc = 0x31F670u;
    // 0x31f670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31f670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31f674: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x31f674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31f678: 0x0  nop
    ctx->pc = 0x31f678u;
    // NOP
    // 0x31f67c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31F67Cu;
    {
        const bool branch_taken_0x31f67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F67Cu;
        // 0x31f680: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f67c) {
            ctx->pc = 0x31F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f660;
        }
    }
    ctx->pc = 0x31F684u;
    // 0x31f684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f688:
    // 0x31f688: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31f688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31f68c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31f690: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x31f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x31f694: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x31f694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x31f698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f69c: 0x283a80a  movz        $s5, $s4, $v1
    ctx->pc = 0x31f69cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 20));
    // 0x31f6a0: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x31f6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f6a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31f6a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x31f6ac: 0x1aa0002b  blez        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x31F6ACu;
    {
        const bool branch_taken_0x31f6ac = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x31F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6ACu;
        // 0x31f6b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6ac) {
            ctx->pc = 0x31F75Cu;
            goto label_31f75c;
        }
    }
    ctx->pc = 0x31F6B4u;
    // 0x31f6b4: 0x3c080fff  lui         $t0, 0xFFF
    ctx->pc = 0x31f6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
    // 0x31f6b8: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x31f6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31f6bc: 0x3c0ef000  lui         $t6, 0xF000
    ctx->pc = 0x31f6bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61440 << 16));
    // 0x31f6c0: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x31f6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
    // 0x31f6c4: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x31f6c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x31f6c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x31f6c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x31f6cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31f6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6d0: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x31f6d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x31f6d4: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x31f6d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x31f6d8: 0x35ad0004  ori         $t5, $t5, 0x4
    ctx->pc = 0x31f6d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)4);
    // 0x31f6dc: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x31f6dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31f6e0: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x31f6e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x31f6e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31f6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f6e8:
    // 0x31f6e8: 0xce400010  pref        0x00, 0x10($s2)
    ctx->pc = 0x31f6e8u;
    // PREF instruction (ignored)
    // 0x31f6ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f6f0: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x31f6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x31f6f4: 0x482024  and         $a0, $v0, $t0
    ctx->pc = 0x31f6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x31f6f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31f6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31f6fc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x31f6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x31f700: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31f700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31f704: 0x104a0002  beq         $v0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x31F704u;
    {
        const bool branch_taken_0x31f704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x31F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F704u;
        // 0x31f708: 0x691825  or          $v1, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f704) {
            ctx->pc = 0x31F710u;
            goto label_31f710;
        }
    }
    ctx->pc = 0x31F70Cu;
    // 0x31f70c: 0x891825  or          $v1, $a0, $t1
    ctx->pc = 0x31f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_31f710:
    // 0x31f710: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x31f710u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x31f714: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31f714u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31f718: 0xfcad0010  sd          $t5, 0x10($a1)
    ctx->pc = 0x31f718u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 13));
    // 0x31f71c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x31f720: 0xfcac0018  sd          $t4, 0x18($a1)
    ctx->pc = 0x31f720u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 12));
    // 0x31f724: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x31f724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x31f728: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x31f728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x31f72c: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x31f72cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31f730: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x31f730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x31f734: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x31f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31f738: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31f738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31f73c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f740: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31f740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31f744: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31f744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31f748: 0xfcab0028  sd          $t3, 0x28($a1)
    ctx->pc = 0x31f748u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 11));
    // 0x31f74c: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x31f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x31f750: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31F750u;
    {
        const bool branch_taken_0x31f750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F750u;
        // 0x31f754: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f750) {
            ctx->pc = 0x31F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f6e8;
        }
    }
    ctx->pc = 0x31F758u;
    // 0x31f758: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x31f758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31f75c:
    // 0x31f75c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x31f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x31f760: 0x158040  sll         $s0, $s5, 1
    ctx->pc = 0x31f760u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x31f764: 0x24d303c0  addiu       $s3, $a2, 0x3C0
    ctx->pc = 0x31f764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x31f768: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x31f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x31f76c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f770: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31F770u;
    SET_GPR_U32(ctx, 31, 0x31F778u);
    ctx->pc = 0x31F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F770u;
    // 0x31f774: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31F770u, 0x31F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F778u;
label_31f778:
    // 0x31f778: 0x101902  srl         $v1, $s0, 4
    ctx->pc = 0x31f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x31f77c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31f780: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f788: 0x32253fff  andi        $a1, $s1, 0x3FFF
    ctx->pc = 0x31f788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x31f78c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x31f790: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x31f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x31f794: 0x295a023  subu        $s4, $s4, $s5
    ctx->pc = 0x31f794u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x31f798: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x31f798u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x31f79c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x31f79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31f7a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f7a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31f7a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x31f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x31f7ac: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31f7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31f7b0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31f7b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f7b8: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x31f7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x31f7bc: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x31f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x31f7c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31f7c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x31f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31f7c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31f7c8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2)); // MMIO: 0x1000e010
    // 0x31f7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x31f7d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x31f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31f7d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31f7d4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x31f7d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f7dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x31f7e0: 0x1471000d  bne         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x31F7E0u;
    {
        const bool branch_taken_0x31f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x31F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E0u;
        // 0x31f7e4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7e0) {
            ctx->pc = 0x31F818u;
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F7E8u;
    // 0x31f7e8: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x31f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x31f7ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31F7ECu;
    {
        const bool branch_taken_0x31f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7ECu;
        // 0x31f7f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7ec) {
            ctx->pc = 0x31F854u;
            goto label_31f854;
        }
    }
    ctx->pc = 0x31F7F4u;
    // 0x31f7f4: 0x0  nop
    ctx->pc = 0x31f7f4u;
    // NOP
label_31f7f8:
    // 0x31f7f8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x31f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31f7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f800: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x31f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31f804: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x31f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x31f808: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x31f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x31f80c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x31f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x31f810: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
    ctx->pc = 0x31F810u;
    {
        const bool branch_taken_0x31f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F810u;
        // 0x31f814: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f810) {
            ctx->pc = 0x31F688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f688;
        }
    }
    ctx->pc = 0x31F818u;
label_31f818:
    // 0x31f818: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x31f81c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31f81cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31f820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f824: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31f824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31f828:
    // 0x31f828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31f82c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F82Cu;
    {
        const bool branch_taken_0x31f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F82Cu;
        // 0x31f830: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f82c) {
            ctx->pc = 0x31F83Cu;
            goto label_31f83c;
        }
    }
    ctx->pc = 0x31F834u;
    // 0x31f834: 0x50e30007  beql        $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F834u;
    {
        const bool branch_taken_0x31f834 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f834) {
            ctx->pc = 0x31F838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F834u;
            // 0x31f838: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F854u;
            goto label_31f854;
        }
    }
    ctx->pc = 0x31F83Cu;
label_31f83c:
    // 0x31f83c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31f840: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31f844: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x31f844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31f848: 0x0  nop
    ctx->pc = 0x31f848u;
    // NOP
    // 0x31f84c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31F84Cu;
    {
        const bool branch_taken_0x31f84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F84Cu;
        // 0x31f850: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f84c) {
            ctx->pc = 0x31F828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f828;
        }
    }
    ctx->pc = 0x31F854u;
label_31f854:
    // 0x31f854: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x31f854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x31f858: 0x24c403c0  addiu       $a0, $a2, 0x3C0
    ctx->pc = 0x31f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x31f85c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4003C0u));
    // 0x31f860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31f864: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F864u;
    {
        const bool branch_taken_0x31f864 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F864u;
        // 0x31f868: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f864) {
            ctx->pc = 0x31F874u;
            goto label_31f874;
        }
    }
    ctx->pc = 0x31F86Cu;
    // 0x31f86c: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31F86Cu;
    SET_GPR_U32(ctx, 31, 0x31F874u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31F86Cu, 0x31F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F874u;
label_31f874:
    // 0x31f874: 0x1680ff76  bnez        $s4, . + 4 + (-0x8A << 2)
    ctx->pc = 0x31F874u;
    {
        const bool branch_taken_0x31f874 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f874) {
            ctx->pc = 0x31F650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f650;
        }
    }
    ctx->pc = 0x31F87Cu;
label_31f87c:
    // 0x31f87c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f880: 0x244403c0  addiu       $a0, $v0, 0x3C0
    ctx->pc = 0x31f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x31f884: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31f884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4003C0u));
    // 0x31f888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31f88c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F88Cu;
    {
        const bool branch_taken_0x31f88c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F88Cu;
        // 0x31f890: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f88c) {
            ctx->pc = 0x31F89Cu;
            goto label_31f89c;
        }
    }
    ctx->pc = 0x31F894u;
    // 0x31f894: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31F894u;
    SET_GPR_U32(ctx, 31, 0x31F89Cu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31F894u, 0x31F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F89Cu;
label_31f89c:
    // 0x31f89c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31f8a0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31f8a4: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x31f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x31f8a8: 0x2e51824  and         $v1, $s7, $a1
    ctx->pc = 0x31f8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x31f8ac: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x31f8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x31f8b0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x31f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x31f8b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f8b8: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F8B8u;
    {
        const bool branch_taken_0x31f8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b8) {
            ctx->pc = 0x31F8D0u;
            goto label_31f8d0;
        }
    }
    ctx->pc = 0x31F8C0u;
    // 0x31f8c0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f8c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f8c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31F8C8u;
    {
        const bool branch_taken_0x31f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8C8u;
        // 0x31f8cc: 0x2e21025  or          $v0, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8c8) {
            ctx->pc = 0x31F8E0u;
            goto label_31f8e0;
        }
    }
    ctx->pc = 0x31F8D0u;
label_31f8d0:
    // 0x31f8d0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f8d4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f8d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f8dc: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x31f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_31f8e0:
    // 0x31f8e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f8e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f8e8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x31f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x31f8ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f8f0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x31f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31f8f4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f8f8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F8F8u;
    {
        const bool branch_taken_0x31f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f8f8) {
            ctx->pc = 0x31F8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8F8u;
            // 0x31f8fc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F910u;
            goto label_31f910;
        }
    }
    ctx->pc = 0x31F900u;
    // 0x31f900: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f904: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F908u;
    {
        const bool branch_taken_0x31f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F908u;
        // 0x31f90c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f908) {
            ctx->pc = 0x31F91Cu;
            goto label_31f91c;
        }
    }
    ctx->pc = 0x31F910u;
label_31f910:
    // 0x31f910: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f918: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f91c:
    // 0x31f91c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f920: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f928: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f928u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f92c: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x31f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x31f930: 0xacd60000  sw          $s6, 0x0($a2)
    ctx->pc = 0x31f930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 22));
    // 0x31f934: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31f934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f938: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31f938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31f93c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31f93cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f940: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31f940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31f944: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31f944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f948: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31f948u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31f94c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31f94cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f950: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31f950u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f954: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31f954u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f958: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31f958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F95Cu;
        // 0x31f960: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F964u;
    // 0x31f964: 0x0  nop
    ctx->pc = 0x31f964u;
    // NOP
    ctx->pc = 0x31f968u;
}
