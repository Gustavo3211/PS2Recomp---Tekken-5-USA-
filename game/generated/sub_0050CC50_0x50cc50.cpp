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

// Function: sub_0050CC50
// Address: 0x50cc50 - 0x50ce38
void sub_0050CC50_0x50cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050CC50_0x50cc50");
#endif

    switch (ctx->pc) {
        case 0x50cda0u: goto label_50cda0;
        case 0x50cda8u: goto label_50cda8;
        default: break;
    }

    ctx->pc = 0x50cc50u;

    // 0x50cc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50cc54: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x50cc54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cc58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50cc5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50cc60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50cc64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50cc68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50cc6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x50cc70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50cc74: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x50cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x50cc78: 0x852200fa  lh          $v0, 0xFA($t1)
    ctx->pc = 0x50cc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 250)));
    // 0x50cc7c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x50CC7Cu;
    {
        const bool branch_taken_0x50cc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CC7Cu;
        // 0x50cc80: 0x3c16008f  lui         $s6, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cc7c) {
            ctx->pc = 0x50CD10u;
            goto label_50cd10;
        }
    }
    ctx->pc = 0x50CC84u;
    // 0x50cc84: 0x852200ec  lh          $v0, 0xEC($t1)
    ctx->pc = 0x50cc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 236)));
    // 0x50cc88: 0x26c6c650  addiu       $a2, $s6, -0x39B0
    ctx->pc = 0x50cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952528));
    // 0x50cc8c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50cc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50cc90: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x50cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cc94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50cc98: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x50cc98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50cc9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50cc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50cca0: 0x26a8c654  addiu       $t0, $s5, -0x39AC
    ctx->pc = 0x50cca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952532));
    // 0x50cca4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50cca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50cca8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x50cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50ccac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x50ccb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50ccb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50ccb4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50ccb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50ccb8: 0x8d2200e4  lw          $v0, 0xE4($t1)
    ctx->pc = 0x50ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 228)));
    // 0x50ccbc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x50ccbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ccc0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x50ccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x50ccc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ccc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ccc8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x50ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50cccc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50ccd0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50ccd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50ccd4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x50ccd8: 0x852200ee  lh          $v0, 0xEE($t1)
    ctx->pc = 0x50ccd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 238)));
    // 0x50ccdc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50cce0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50cce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50cce4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x50cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x50cce8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50cce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50ccec: 0x8d2200e8  lw          $v0, 0xE8($t1)
    ctx->pc = 0x50ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x50ccf0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x50ccf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50ccf4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x50ccf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x50ccf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ccf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ccfc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x50ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50cd00: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50cd04: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x50cd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50cd08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x50CD08u;
    {
        const bool branch_taken_0x50cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CD08u;
        // 0x50cd0c: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cd08) {
            ctx->pc = 0x50CDF8u;
            goto label_50cdf8;
        }
    }
    ctx->pc = 0x50CD10u;
label_50cd10:
    // 0x50cd10: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x50cd10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50cd14: 0x26b1c654  addiu       $s1, $s5, -0x39AC
    ctx->pc = 0x50cd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952532));
    // 0x50cd18: 0x26d2c650  addiu       $s2, $s6, -0x39B0
    ctx->pc = 0x50cd18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952528));
    // 0x50cd1c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x50cd1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC654u, _value); } while (0);
    // 0x50cd20: 0x253300e4  addiu       $s3, $t1, 0xE4
    ctx->pc = 0x50cd20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 228));
    // 0x50cd24: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x50cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x50cd28: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x50cd28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x50cd2c: 0x253400e8  addiu       $s4, $t1, 0xE8
    ctx->pc = 0x50cd2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 232));
    // 0x50cd30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50cd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cd34: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x50cd34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50cd38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x50cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x50cd3c: 0x8d2300f0  lw          $v1, 0xF0($t1)
    ctx->pc = 0x50cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 240)));
    // 0x50cd40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50cd44: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x50cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x50cd48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x50cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50cd4c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50cd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50cd50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cd54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50cd58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cd5c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x50cd60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50cd64: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x50cd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50cd68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cd6c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50cd70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cd74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50cd78: 0x8d2300f4  lw          $v1, 0xF4($t1)
    ctx->pc = 0x50cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 244)));
    // 0x50cd7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50cd80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50cd84: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x50cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50cd88: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50cd88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50cd8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cd90: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50cd94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cd98: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50CD98u;
    SET_GPR_U32(ctx, 31, 0x50CDA0u);
    ctx->pc = 0x50CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CD98u;
    // 0x50cd9c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50CD98u, 0x50CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CDA0u;
label_50cda0:
    // 0x50cda0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50CDA0u;
    SET_GPR_U32(ctx, 31, 0x50CDA8u);
    ctx->pc = 0x50CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CDA0u;
    // 0x50cda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50CDA0u, 0x50CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CDA8u;
label_50cda8:
    // 0x50cda8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x50cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50cdac: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x50cdacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50cdb0: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x50cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x50cdb4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50cdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50cdb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50cdb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50cdbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50cdc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50cdc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cdc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cdcc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x50cdd0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x50cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50cdd4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x50cdd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50cdd8: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x50cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x50cddc: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x50cddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x50cde0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50cde0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50cde4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50cde8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50cdec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cdf0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50cdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50cdf4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x50cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_50cdf8:
    // 0x50cdf8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50cdfc: 0x86c6c650  lh          $a2, -0x39B0($s6)
    ctx->pc = 0x50cdfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952528)));
    // 0x50ce00: 0x86a7c654  lh          $a3, -0x39AC($s5)
    ctx->pc = 0x50ce00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952532)));
    // 0x50ce04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50ce08: 0x8445c658  lh          $a1, -0x39A8($v0)
    ctx->pc = 0x50ce08u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x8EC658u));
    // 0x50ce0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50ce0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ce10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50ce10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50ce14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50ce14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50ce18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50ce18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50ce1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50ce1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50ce20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50ce20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50ce24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x50ce24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50ce28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x50ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50ce2c: 0x8144526  j           func_511498
    ctx->pc = 0x50CE2Cu;
    ctx->pc = 0x50CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CE2Cu;
    // 0x50ce30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511498u, 0x50CE2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50CE34u;
    // 0x50ce34: 0x0  nop
    ctx->pc = 0x50ce34u;
    // NOP
    ctx->pc = 0x50ce38u;
}
