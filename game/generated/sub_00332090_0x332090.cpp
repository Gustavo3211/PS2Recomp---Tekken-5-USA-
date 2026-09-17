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

// Function: sub_00332090
// Address: 0x332090 - 0x332210
void sub_00332090_0x332090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332090_0x332090");
#endif

    switch (ctx->pc) {
        case 0x3320c8u: goto label_3320c8;
        case 0x3320e8u: goto label_3320e8;
        case 0x332120u: goto label_332120;
        case 0x332160u: goto label_332160;
        default: break;
    }

    ctx->pc = 0x332090u;

    // 0x332090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332094: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x332094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33209c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x33209cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3320a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3320a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3320a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3320a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3320ac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3320acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3320b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3320b4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3320b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3320b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3320bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3320bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3320c0: 0xc0d1552  jal         func_345548
    ctx->pc = 0x3320C0u;
    SET_GPR_U32(ctx, 31, 0x3320C8u);
    ctx->pc = 0x3320C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320C0u;
    // 0x3320c4: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345548u, 0x3320C0u, 0x3320C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320C8u;
label_3320c8:
    // 0x3320c8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3320c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320cc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x3320ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3320d0: 0x53c823  subu        $t9, $v0, $s3
    ctx->pc = 0x3320d0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3320d4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x3320d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3320d8: 0xf7a3c  dsll32      $t7, $t7, 8
    ctx->pc = 0x3320d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 8));
    // 0x3320dc: 0xf7a3a  dsrl        $t7, $t7, 8
    ctx->pc = 0x3320dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 8);
    // 0x3320e0: 0x2418000f  addiu       $t8, $zero, 0xF
    ctx->pc = 0x3320e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3320e4: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x3320e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3320e8:
    // 0x3320e8: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3320e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3320ec: 0x2546821  addu        $t5, $s2, $s4
    ctx->pc = 0x3320ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3320f0: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3320f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3320f4: 0xd203c  dsll32      $a0, $t5, 0
    ctx->pc = 0x3320f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3320f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3320f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3320fc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3320fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x332100: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x332100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x332104: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x332104u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332108: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x332108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33210c: 0x2443a  dsrl        $t0, $v0, 16
    ctx->pc = 0x33210cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> 16);
    // 0x332110: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x332110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x332114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332118: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x332118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33211c: 0x0  nop
    ctx->pc = 0x33211cu;
    // NOP
label_332120:
    // 0x332120: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x332120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x332124: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x332124u;
    {
        const bool branch_taken_0x332124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332124u;
        // 0x332128: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332124) {
            ctx->pc = 0x3321C0u;
            goto label_3321c0;
        }
    }
    ctx->pc = 0x33212Cu;
    // 0x33212c: 0x28c3000f  slti        $v1, $a2, 0xF
    ctx->pc = 0x33212cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x332130: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x332130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x332134: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x332134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x332138: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x332138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x33213c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x33213cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x332140: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x332140u;
    {
        const bool branch_taken_0x332140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332140u;
        // 0x332144: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332140) {
            ctx->pc = 0x33219Cu;
            goto label_33219c;
        }
    }
    ctx->pc = 0x332148u;
    // 0x332148: 0xc4c38  dsll        $t1, $t4, 16
    ctx->pc = 0x332148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << 16);
    // 0x33214c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x33214cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332150: 0xa523c  dsll32      $t2, $t2, 8
    ctx->pc = 0x332150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 8));
    // 0x332154: 0xa523a  dsrl        $t2, $t2, 8
    ctx->pc = 0x332154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 8);
    // 0x332158: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33215c: 0x0  nop
    ctx->pc = 0x33215cu;
    // NOP
label_332160:
    // 0x332160: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x332160u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x332164: 0x28c2000f  slti        $v0, $a2, 0xF
    ctx->pc = 0x332164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x332168: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x332168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x33216c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33216Cu;
    {
        const bool branch_taken_0x33216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33216Cu;
        // 0x332170: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33216c) {
            ctx->pc = 0x33219Cu;
            goto label_33219c;
        }
    }
    ctx->pc = 0x332174u;
    // 0x332174: 0x0  nop
    ctx->pc = 0x332174u;
    // NOP
    // 0x332178: 0x0  nop
    ctx->pc = 0x332178u;
    // NOP
    // 0x33217c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33217Cu;
    {
        const bool branch_taken_0x33217c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33217c) {
            ctx->pc = 0x332180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33217Cu;
            // 0x332180: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332160;
        }
    }
    ctx->pc = 0x332184u;
    // 0x332184: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x332184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x332188: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x332188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33218c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x33218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x332190: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x332190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x332194: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x332194u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x332198: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x332198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_33219c:
    // 0x33219c: 0x54d80009  bnel        $a2, $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x33219Cu;
    {
        const bool branch_taken_0x33219c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 24));
        if (branch_taken_0x33219c) {
            ctx->pc = 0x3321A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33219Cu;
            // 0x3321a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x3321A4u;
    // 0x3321a4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3321a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3321a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3321a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3321ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3321acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3321b0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x3321b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x3321b4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x3321b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x3321b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3321B8u;
    {
        const bool branch_taken_0x3321b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321B8u;
        // 0x3321bc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321b8) {
            ctx->pc = 0x3321D4u;
            goto label_3321d4;
        }
    }
    ctx->pc = 0x3321C0u;
label_3321c0:
    // 0x3321c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3321c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3321c4:
    // 0x3321c4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x3321c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3321c8: 0x28c2000f  slti        $v0, $a2, 0xF
    ctx->pc = 0x3321c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3321cc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3321CCu;
    {
        const bool branch_taken_0x3321cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321CCu;
        // 0x3321d0: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321cc) {
            ctx->pc = 0x332120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332120;
        }
    }
    ctx->pc = 0x3321D4u;
label_3321d4:
    // 0x3321d4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3321d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3321d8: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x3321d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321dc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x3321dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x3321e0: 0x5c1ffc1  bgez        $t6, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3321E0u;
    {
        const bool branch_taken_0x3321e0 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x3321E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321E0u;
        // 0x3321e4: 0x2198023  subu        $s0, $s0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321e0) {
            ctx->pc = 0x3320E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3320e8;
        }
    }
    ctx->pc = 0x3321E8u;
    // 0x3321e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3321e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3321ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3321f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3321f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3321f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3321f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3321f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3321f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3321fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3321fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332200: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x332200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x332204: 0x3e00008  jr          $ra
    ctx->pc = 0x332204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332204u;
        // 0x332208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33220Cu;
    // 0x33220c: 0x0  nop
    ctx->pc = 0x33220cu;
    // NOP
    ctx->pc = 0x332210u;
}
