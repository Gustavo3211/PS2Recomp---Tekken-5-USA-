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

// Function: sub_0012C610
// Address: 0x12c610 - 0x12c840
void sub_0012C610_0x12c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C610_0x12c610");
#endif

    switch (ctx->pc) {
        case 0x12c6a0u: goto label_12c6a0;
        case 0x12c718u: goto label_12c718;
        case 0x12c74cu: goto label_12c74c;
        case 0x12c768u: goto label_12c768;
        case 0x12c7e8u: goto label_12c7e8;
        default: break;
    }

    ctx->pc = 0x12c610u;

    // 0x12c610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12c614: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x12c614u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c618: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12c61c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12c61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c62c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12c630: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12c634: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12c638: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x12c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12c63c: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x12c63cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x12c640: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x12c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12c644: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12c648: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x12C648u;
    {
        const bool branch_taken_0x12c648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C648u;
        // 0x12c64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c648) {
            ctx->pc = 0x12C814u;
            goto label_12c814;
        }
    }
    ctx->pc = 0x12C650u;
    // 0x12c650: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x12c654: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x12c658: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12c658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12c65c: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x12c660: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x12c664: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x12c664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12c668: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c66c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x12c66cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c670: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12c674: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12c67c: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x12c67cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x12c680: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C680u;
            // 0x12c684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C688u;
            goto label_12c688;
        }
    }
    ctx->pc = 0x12C688u;
label_12c688:
    // 0x12c688: 0xa812  mflo        $s5
    ctx->pc = 0x12c688u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x12c68c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x12c68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c690: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C690u;
    {
        const bool branch_taken_0x12c690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C690u;
        // 0x12c694: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c690) {
            ctx->pc = 0x12C740u;
            goto label_12c740;
        }
    }
    ctx->pc = 0x12C698u;
    // 0x12c698: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12c698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c69c: 0x0  nop
    ctx->pc = 0x12c69cu;
    // NOP
label_12c6a0:
    // 0x12c6a0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12c6a4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12c6a8: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x12c6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12c6ac: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x12c6acu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12c6b0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12c6b4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x12c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12c6b8: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x12c6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12c6bc: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x12c6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12c6c0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x12c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12c6c4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x12c6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x12c6c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12c6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12c6cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12c6d0: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x12c6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12c6d4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12c6d8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x12c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12c6dc: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x12c6e0: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x12c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x12c6e4: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x12c6e4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12c6e8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12c6ec: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x12c6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c6f0: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x12c6f4: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x12c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x12c6f8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x12c6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12c6fc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x12c700: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12C700u;
    {
        const bool branch_taken_0x12c700 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C700u;
        // 0x12c704: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c700) {
            ctx->pc = 0x12C6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c6a0;
        }
    }
    ctx->pc = 0x12C708u;
    // 0x12c708: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12C708u;
    {
        const bool branch_taken_0x12c708 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c708) {
            ctx->pc = 0x12C70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C708u;
            // 0x12c70c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C710u;
    // 0x12c710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C710u;
    {
        const bool branch_taken_0x12c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C710u;
        // 0x12c714: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c710) {
            ctx->pc = 0x12C71Cu;
            goto label_12c71c;
        }
    }
    ctx->pc = 0x12C718u;
label_12c718:
    // 0x12c718: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12c71c:
    // 0x12c71c: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x12c71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12c720: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C720u;
    {
        const bool branch_taken_0x12c720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c720) {
            ctx->pc = 0x12C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C720u;
            // 0x12c724: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C740u;
            goto label_12c740;
        }
    }
    ctx->pc = 0x12C728u;
    // 0x12c728: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12c72c: 0x0  nop
    ctx->pc = 0x12c72cu;
    // NOP
    // 0x12c730: 0x0  nop
    ctx->pc = 0x12c730u;
    // NOP
    // 0x12c734: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12C734u;
    {
        const bool branch_taken_0x12c734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c734) {
            ctx->pc = 0x12C738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C734u;
            // 0x12c738: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c718;
        }
    }
    ctx->pc = 0x12C73Cu;
    // 0x12c73c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x12c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_12c740:
    // 0x12c740: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12c740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12c744:
    // 0x12c744: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12C744u;
    SET_GPR_U32(ctx, 31, 0x12C74Cu);
    ctx->pc = 0x12C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C744u;
    // 0x12c748: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12C744u, 0x12C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C74Cu;
label_12c74c:
    // 0x12c74c: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x12C74Cu;
    {
        const bool branch_taken_0x12c74c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C74Cu;
        // 0x12c750: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c74c) {
            ctx->pc = 0x12C810u;
            goto label_12c810;
        }
    }
    ctx->pc = 0x12C754u;
    // 0x12c754: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x12c754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12c758: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12c758u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c75c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12c75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c760: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12c760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c764: 0x0  nop
    ctx->pc = 0x12c764u;
    // NOP
label_12c768:
    // 0x12c768: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12c76c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12c770: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x12c770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12c774: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12c778: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12c77c: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x12c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12c780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c784: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12c784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12c788: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12c78c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x12c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12c790: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x12c790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12c794: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12c798: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12c79c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x12c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12c7a0: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x12c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x12c7a4: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x12c7a4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12c7a8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12c7ac: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x12c7acu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c7b0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x12c7b4: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x12c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x12c7b8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x12c7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12c7bc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x12c7c0: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12C7C0u;
    {
        const bool branch_taken_0x12c7c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7C0u;
        // 0x12c7c4: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7c0) {
            ctx->pc = 0x12C768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c768;
        }
    }
    ctx->pc = 0x12C7C8u;
    // 0x12c7c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12c7cc: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12c7d0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x12c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12c7d4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12C7D4u;
    {
        const bool branch_taken_0x12c7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7D4u;
        // 0x12c7d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7d4) {
            ctx->pc = 0x12C814u;
            goto label_12c814;
        }
    }
    ctx->pc = 0x12C7DCu;
    // 0x12c7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C7DCu;
    {
        const bool branch_taken_0x12c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7DCu;
        // 0x12c7e0: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7dc) {
            ctx->pc = 0x12C7ECu;
            goto label_12c7ec;
        }
    }
    ctx->pc = 0x12C7E4u;
    // 0x12c7e4: 0x0  nop
    ctx->pc = 0x12c7e4u;
    // NOP
label_12c7e8:
    // 0x12c7e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12c7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12c7ec:
    // 0x12c7ec: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12c7f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C7F0u;
            // 0x12c7f4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C810u;
            goto label_12c810;
        }
    }
    ctx->pc = 0x12C7F8u;
    // 0x12c7f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12c7fc: 0x0  nop
    ctx->pc = 0x12c7fcu;
    // NOP
    // 0x12c800: 0x0  nop
    ctx->pc = 0x12c800u;
    // NOP
    // 0x12c804: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12C804u;
    {
        const bool branch_taken_0x12c804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c804) {
            ctx->pc = 0x12C808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C804u;
            // 0x12c808: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c7e8;
        }
    }
    ctx->pc = 0x12C80Cu;
    // 0x12c80c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x12c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_12c810:
    // 0x12c810: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c814:
    // 0x12c814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c81c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12c820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c824: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12c824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c828: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12c828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c82c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12c82cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c830: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12c834: 0x3e00008  jr          $ra
    ctx->pc = 0x12C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C834u;
        // 0x12c838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C83Cu;
    // 0x12c83c: 0x0  nop
    ctx->pc = 0x12c83cu;
    // NOP
    ctx->pc = 0x12c840u;
}
