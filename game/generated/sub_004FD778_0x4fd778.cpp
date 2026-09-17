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

// Function: sub_004FD778
// Address: 0x4fd778 - 0x4fd8d0
void sub_004FD778_0x4fd778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD778_0x4fd778");
#endif

    switch (ctx->pc) {
        case 0x4fd808u: goto label_4fd808;
        case 0x4fd87cu: goto label_4fd87c;
        default: break;
    }

    ctx->pc = 0x4fd778u;

    // 0x4fd778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fd778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4fd77c: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x4fd77cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x4fd780: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4fd780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4fd784: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x4fd784u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x4fd788: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fd788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fd78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd790: 0x8ea8ced4  lw          $t0, -0x312C($s5)
    ctx->pc = 0x4fd790u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x56CED4u));
    // 0x4fd794: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4fd794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4fd798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fd798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fd79c: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x4fd79cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x4fd7a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4fd7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4fd7a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4fd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4fd7a8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4fd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4fd7ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4fd7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4fd7b0: 0x252aa34c  addiu       $t2, $t1, -0x5CB4
    ctx->pc = 0x4fd7b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943564));
    // 0x4fd7b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4fd7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4fd7b8: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x4fd7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x4fd7bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4fd7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4fd7c0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x4fd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x4fd7c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4fd7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4fd7c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4fd7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4fd7cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4fd7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4fd7d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fd7d4: 0xacf1a348  sw          $s1, -0x5CB8($a3)
    ctx->pc = 0x4fd7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x8EA348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA348u, _value); } while (0);
    // 0x4fd7d8: 0xacc0a350  sw          $zero, -0x5CB0($a2)
    ctx->pc = 0x4fd7d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EA350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA350u, _value); } while (0);
    // 0x4fd7dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fd7e0: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x4fd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x4fd7e4: 0x1038021  addu        $s0, $t0, $v1
    ctx->pc = 0x4fd7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4fd7e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd7ec: 0x1044002b  beq         $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4FD7ECu;
    {
        const bool branch_taken_0x4fd7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4FD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD7ECu;
        // 0x4fd7f0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd7ec) {
            ctx->pc = 0x4FD89Cu;
            goto label_4fd89c;
        }
    }
    ctx->pc = 0x4FD7F4u;
    // 0x4fd7f4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x4fd7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd7f8: 0x241e0d76  addiu       $fp, $zero, 0xD76
    ctx->pc = 0x4fd7f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3446));
    // 0x4fd7fc: 0x3c170014  lui         $s7, 0x14
    ctx->pc = 0x4fd7fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)20 << 16));
    // 0x4fd800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4fd800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd804: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4fd804u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4fd808:
    // 0x4fd808: 0x8d23a34c  lw          $v1, -0x5CB4($t1)
    ctx->pc = 0x4fd808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943564)));
    // 0x4fd80c: 0x23e2826  xor         $a1, $s1, $fp
    ctx->pc = 0x4fd80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 30));
    // 0x4fd810: 0x8ea4ced4  lw          $a0, -0x312C($s5)
    ctx->pc = 0x4fd810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954708)));
    // 0x4fd814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fd814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fd818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4fd818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4fd81c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fd820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fd824: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4fd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4fd828: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4fd828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4fd82c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x4fd82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd830: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4fd830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4fd834: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4fd834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd838: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x4fd838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4fd83c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4fd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4fd840: 0x1171825  or          $v1, $t0, $s7
    ctx->pc = 0x4fd840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x4fd844: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4fd844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4fd848: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x4fd848u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x4fd84c: 0x10d20013  beq         $a2, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x4FD84Cu;
    {
        const bool branch_taken_0x4fd84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x4FD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD84Cu;
        // 0x4fd850: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd84c) {
            ctx->pc = 0x4FD89Cu;
            goto label_4fd89c;
        }
    }
    ctx->pc = 0x4FD854u;
    // 0x4fd854: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4fd854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4fd858: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x4fd858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4fd85c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd860: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FD860u;
    {
        const bool branch_taken_0x4fd860 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4fd860) {
            ctx->pc = 0x4FD864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD860u;
            // 0x4fd864: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD880u;
            goto label_4fd880;
        }
    }
    ctx->pc = 0x4FD868u;
    // 0x4fd868: 0x58c00005  blezl       $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FD868u;
    {
        const bool branch_taken_0x4fd868 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x4fd868) {
            ctx->pc = 0x4FD86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD868u;
            // 0x4fd86c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD880u;
            goto label_4fd880;
        }
    }
    ctx->pc = 0x4FD870u;
    // 0x4fd870: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4fd870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd874: 0xc13f59e  jal         func_4FD678
    ctx->pc = 0x4FD874u;
    SET_GPR_U32(ctx, 31, 0x4FD87Cu);
    ctx->pc = 0x4FD878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD874u;
    // 0x4fd878: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD678u, 0x4FD874u, 0x4FD87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD87Cu;
label_4fd87c:
    // 0x4fd87c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4fd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd880:
    // 0x4fd880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4fd880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4fd884: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4fd884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fd888: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4fd888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4fd88c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4fd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4fd890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4fd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd894: 0x1492ffdc  bne         $a0, $s2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4FD894u;
    {
        const bool branch_taken_0x4fd894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x4FD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD894u;
        // 0x4fd898: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd894) {
            ctx->pc = 0x4FD808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fd808;
        }
    }
    ctx->pc = 0x4FD89Cu;
label_4fd89c:
    // 0x4fd89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fd89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fd8a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fd8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fd8a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4fd8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fd8a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4fd8a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fd8ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4fd8acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd8b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4fd8b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fd8b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4fd8b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fd8b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4fd8b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fd8bc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4fd8bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fd8c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4fd8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fd8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD8C4u;
        // 0x4fd8c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD8CCu;
    // 0x4fd8cc: 0x0  nop
    ctx->pc = 0x4fd8ccu;
    // NOP
    ctx->pc = 0x4fd8d0u;
}
