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

// Function: sub_00309FA0
// Address: 0x309fa0 - 0x30a318
void sub_00309FA0_0x309fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309FA0_0x309fa0");
#endif

    switch (ctx->pc) {
        case 0x309ff8u: goto label_309ff8;
        case 0x30a058u: goto label_30a058;
        case 0x30a090u: goto label_30a090;
        case 0x30a138u: goto label_30a138;
        case 0x30a1d8u: goto label_30a1d8;
        case 0x30a280u: goto label_30a280;
        default: break;
    }

    ctx->pc = 0x309fa0u;

    // 0x309fa0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x309fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x309fa4: 0x8c830368  lw          $v1, 0x368($a0)
    ctx->pc = 0x309fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x309fa8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x309fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x309fac: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x309facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x309fb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x309fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x309fb4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x309fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309fbc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x309fc0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x309fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309fc4: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x309fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x309fc8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x309fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x309fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309fd0: 0x3401aa40  ori         $at, $zero, 0xAA40
    ctx->pc = 0x309fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43584);
    // 0x309fd4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x309fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x309fd8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x309fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x309fdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x309fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x309fe0: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x309fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x309fe4: 0x9c820008  lwu         $v0, 0x8($a0)
    ctx->pc = 0x309fe4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x309fe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x309fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309fec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x309fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x309ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x309FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FF0u;
        // 0x309ff4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309FF8u;
label_309ff8:
    // 0x309ff8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x309ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x309ffc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a000: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x30a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30a004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30a008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30a00c: 0x24910168  addiu       $s1, $a0, 0x168
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x30a010: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30a014: 0x24930068  addiu       $s3, $a0, 0x68
    ctx->pc = 0x30a014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x30a018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30a01c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30a020: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30a024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30a024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30a028: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x30a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30a02c: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x30a030: 0x8c830368  lw          $v1, 0x368($a0)
    ctx->pc = 0x30a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30a034: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30a038: 0x24900268  addiu       $s0, $a0, 0x268
    ctx->pc = 0x30a038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
    // 0x30a03c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x30a03cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a044: 0x3401aa40  ori         $at, $zero, 0xAA40
    ctx->pc = 0x30a044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43584);
    // 0x30a048: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x30a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x30a04c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30a050: 0x24690050  addiu       $t1, $v1, 0x50
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x30a054: 0x25ee0004  addiu       $t6, $t7, 0x4
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_30a058:
    // 0x30a058: 0x1ee102a  slt         $v0, $t7, $t6
    ctx->pc = 0x30a058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x30a05c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30A05Cu;
    {
        const bool branch_taken_0x30a05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A05Cu;
        // 0x30a060: 0x25e80008  addiu       $t0, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a05c) {
            ctx->pc = 0x30A0FCu;
            goto label_30a0fc;
        }
    }
    ctx->pc = 0x30A064u;
    // 0x30a064: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x30a064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x30a068: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x30a06c: 0x536021  addu        $t4, $v0, $s3
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30a070: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x30a070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a074: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x30a074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30a078: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x30a078u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a07c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x30a07cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x30a080: 0x505821  addu        $t3, $v0, $s0
    ctx->pc = 0x30a080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30a084: 0x515021  addu        $t2, $v0, $s1
    ctx->pc = 0x30a084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30a088: 0x1cf4023  subu        $t0, $t6, $t7
    ctx->pc = 0x30a088u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x30a08c: 0x0  nop
    ctx->pc = 0x30a08cu;
    // NOP
label_30a090:
    // 0x30a090: 0xfd340008  sd          $s4, 0x8($t1)
    ctx->pc = 0x30a090u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 20));
    // 0x30a094: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30a094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30a098: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x30a098u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x30a09c: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x30a09cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x30a0a0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x30a0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x30a0a4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x30a0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30a0a8: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x30a0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x30a0ac: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x30a0acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x30a0b0: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x30a0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x30a0b4: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x30a0b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x30a0b8: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x30a0bc: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x30a0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30a0c0: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x30a0c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30a0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30a0c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30a0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30a0cc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x30a0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x30a0d0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30a0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30a0d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30a0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30a0d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x30a0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x30a0dc: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x30a0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x30a0e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30a0e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30a0e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a0ec: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x30a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x30a0f0: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30A0F0u;
    {
        const bool branch_taken_0x30a0f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F0u;
        // 0x30a0f4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f0) {
            ctx->pc = 0x30A090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a090;
        }
    }
    ctx->pc = 0x30A0F8u;
    // 0x30a0f8: 0x25e80008  addiu       $t0, $t7, 0x8
    ctx->pc = 0x30a0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_30a0fc:
    // 0x30a0fc: 0x25ed000c  addiu       $t5, $t7, 0xC
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x30a100: 0x10d102a  slt         $v0, $t0, $t5
    ctx->pc = 0x30a100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30a104: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x30A104u;
    {
        const bool branch_taken_0x30a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A104u;
        // 0x30a108: 0x100c02d  daddu       $t8, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a104) {
            ctx->pc = 0x30A1A0u;
            goto label_30a1a0;
        }
    }
    ctx->pc = 0x30A10Cu;
    // 0x30a10c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x30a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30a110: 0x1a84023  subu        $t0, $t5, $t0
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x30a114: 0x536021  addu        $t4, $v0, $s3
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30a118: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x30a11c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x30a11cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a120: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x30a120u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30a124: 0x34198000  ori         $t9, $zero, 0x8000
    ctx->pc = 0x30a124u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a128: 0x19cc38  dsll        $t9, $t9, 16
    ctx->pc = 0x30a128u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x30a12c: 0x505821  addu        $t3, $v0, $s0
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30a130: 0x515021  addu        $t2, $v0, $s1
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30a134: 0x0  nop
    ctx->pc = 0x30a134u;
    // NOP
label_30a138:
    // 0x30a138: 0xfd340008  sd          $s4, 0x8($t1)
    ctx->pc = 0x30a138u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 20));
    // 0x30a13c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30a13cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30a140: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x30a140u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x30a144: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x30a144u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x30a148: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x30a148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x30a14c: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x30a14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30a150: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x30a150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x30a154: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x30a154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x30a158: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x30a158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x30a15c: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x30a15cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x30a160: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x30a160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x30a164: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x30a164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30a168: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x30a168u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x30a16c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30a16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30a170: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30a174: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x30a174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x30a178: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30a178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30a17c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30a17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30a180: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x30a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x30a184: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x30a184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x30a188: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30a18c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30a190: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a194: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x30a194u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x30a198: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30A198u;
    {
        const bool branch_taken_0x30a198 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A198u;
        // 0x30a19c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a198) {
            ctx->pc = 0x30A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a138;
        }
    }
    ctx->pc = 0x30A1A0u;
label_30a1a0:
    // 0x30a1a0: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x30a1a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a1a4: 0x118102a  slt         $v0, $t0, $t8
    ctx->pc = 0x30a1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x30a1a8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x30A1A8u;
    {
        const bool branch_taken_0x30a1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1a8) {
            ctx->pc = 0x30A1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A1A8u;
            // 0x30a1ac: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A244u;
            goto label_30a244;
        }
    }
    ctx->pc = 0x30A1B0u;
    // 0x30a1b0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x30a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30a1b4: 0x3084023  subu        $t0, $t8, $t0
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x30a1b8: 0x536021  addu        $t4, $v0, $s3
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30a1bc: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x30a1c0: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x30a1c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a1c4: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x30a1c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30a1c8: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x30a1c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a1cc: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x30a1ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x30a1d0: 0x505821  addu        $t3, $v0, $s0
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30a1d4: 0x515021  addu        $t2, $v0, $s1
    ctx->pc = 0x30a1d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30a1d8:
    // 0x30a1d8: 0xfd340008  sd          $s4, 0x8($t1)
    ctx->pc = 0x30a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 20));
    // 0x30a1dc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30a1e0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x30a1e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x30a1e4: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x30a1e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x30a1e8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x30a1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x30a1ec: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x30a1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30a1f0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x30a1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x30a1f4: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x30a1f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x30a1f8: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x30a1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x30a1fc: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x30a1fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x30a200: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x30a204: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x30a204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30a208: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x30a208u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x30a20c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30a20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30a210: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30a210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30a214: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x30a214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x30a218: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30a218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30a21c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30a21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30a220: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x30a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x30a224: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x30a224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x30a228: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30a22c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30a22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30a230: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a234: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x30a234u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x30a238: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30A238u;
    {
        const bool branch_taken_0x30a238 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A238u;
        // 0x30a23c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a238) {
            ctx->pc = 0x30A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a1d8;
        }
    }
    ctx->pc = 0x30A240u;
    // 0x30a240: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x30a240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_30a244:
    // 0x30a244: 0x25ed0010  addiu       $t5, $t7, 0x10
    ctx->pc = 0x30a244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x30a248: 0x10d102a  slt         $v0, $t0, $t5
    ctx->pc = 0x30a248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30a24c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30A24Cu;
    {
        const bool branch_taken_0x30a24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A24Cu;
        // 0x30a250: 0x1a0782d  daddu       $t7, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a24c) {
            ctx->pc = 0x30A2ECu;
            goto label_30a2ec;
        }
    }
    ctx->pc = 0x30A254u;
    // 0x30a254: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x30a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30a258: 0x1a84023  subu        $t0, $t5, $t0
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x30a25c: 0x536021  addu        $t4, $v0, $s3
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30a260: 0x24120054  addiu       $s2, $zero, 0x54
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x30a264: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x30a264u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a268: 0xf7c3c  dsll32      $t7, $t7, 16
    ctx->pc = 0x30a268u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 16));
    // 0x30a26c: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x30a26cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a270: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x30a270u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x30a274: 0x505821  addu        $t3, $v0, $s0
    ctx->pc = 0x30a274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30a278: 0x515021  addu        $t2, $v0, $s1
    ctx->pc = 0x30a278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30a27c: 0x0  nop
    ctx->pc = 0x30a27cu;
    // NOP
label_30a280:
    // 0x30a280: 0xfd320008  sd          $s2, 0x8($t1)
    ctx->pc = 0x30a280u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 18));
    // 0x30a284: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30a284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30a288: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x30a288u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x30a28c: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x30a28cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x30a290: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x30a294: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x30a294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30a298: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x30a298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x30a29c: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x30a29cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x30a2a0: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x30a2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x30a2a4: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x30a2a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x30a2a8: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x30a2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x30a2ac: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x30a2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x30a2b0: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x30a2b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x30a2b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30a2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30a2b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30a2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30a2bc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x30a2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x30a2c0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30a2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30a2c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30a2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30a2c8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x30a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x30a2cc: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x30a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x30a2d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30a2d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30a2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30a2d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a2dc: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x30a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x30a2e0: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30A2E0u;
    {
        const bool branch_taken_0x30a2e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2E0u;
        // 0x30a2e4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2e0) {
            ctx->pc = 0x30A280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a280;
        }
    }
    ctx->pc = 0x30A2E8u;
    // 0x30a2e8: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x30a2e8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_30a2ec:
    // 0x30a2ec: 0x29e20080  slti        $v0, $t7, 0x80
    ctx->pc = 0x30a2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30a2f0: 0x5440ff59  bnel        $v0, $zero, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x30A2F0u;
    {
        const bool branch_taken_0x30a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a2f0) {
            ctx->pc = 0x30A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A2F0u;
            // 0x30a2f4: 0x25ee0004  addiu       $t6, $t7, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a058;
        }
    }
    ctx->pc = 0x30A2F8u;
    // 0x30a2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30a2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a2fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30a2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30a300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30a304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a308: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30a308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a30c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A30Cu;
        // 0x30a310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A314u;
    // 0x30a314: 0x0  nop
    ctx->pc = 0x30a314u;
    // NOP
    ctx->pc = 0x30a318u;
}
