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

// Function: sub_00500430
// Address: 0x500430 - 0x500610
void sub_00500430_0x500430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500430_0x500430");
#endif

    switch (ctx->pc) {
        case 0x500454u: goto label_500454;
        case 0x500568u: goto label_500568;
        default: break;
    }

    ctx->pc = 0x500430u;

    // 0x500430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500434: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x500434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x500438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x500438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50043c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x500440: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x500440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x500444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50044c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50044Cu;
    SET_GPR_U32(ctx, 31, 0x500454u);
    ctx->pc = 0x500450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50044Cu;
    // 0x500450: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50044Cu, 0x500454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500454u;
label_500454:
    // 0x500454: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x500454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x500458: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x500458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50045c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x50045cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500460: 0x244aa668  addiu       $t2, $v0, -0x5998
    ctx->pc = 0x500460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944360));
    // 0x500464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x500464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500468: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x500468u;
    {
        const bool branch_taken_0x500468 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x50046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500468u;
        // 0x50046c: 0x97a80004  lhu         $t0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500468) {
            ctx->pc = 0x500478u;
            goto label_500478;
        }
    }
    ctx->pc = 0x500470u;
    // 0x500470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x500470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x500474: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x500474u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
label_500478:
    // 0x500478: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x500478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50047c: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x50047cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x500480: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x500480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500484: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x500484u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x500488: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x500488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50048c: 0x87a60002  lh          $a2, 0x2($sp)
    ctx->pc = 0x50048cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x500490: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x500490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x500494: 0x9443a66c  lhu         $v1, -0x5994($v0)
    ctx->pc = 0x500494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944364)));
    // 0x500498: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x500498u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x50049c: 0x2012  mflo        $a0
    ctx->pc = 0x50049cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x5004a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5004a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5004a4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x5004a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x5004a8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5004a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5004ac: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x5004acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5004b0: 0x9464a670  lhu         $a0, -0x5990($v1)
    ctx->pc = 0x5004b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EA670u));
    // 0x5004b4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x5004b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5004b8: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x5004b8u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x5004bc: 0x70001012  mflo1       $v0
    ctx->pc = 0x5004bcu;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x5004c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5004c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5004c4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x5004C4u;
    {
        const bool branch_taken_0x5004c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x5004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5004C4u;
        // 0x5004c8: 0xa6040002  sh          $a0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5004c4) {
            ctx->pc = 0x5004F8u;
            goto label_5004f8;
        }
    }
    ctx->pc = 0x5004CCu;
    // 0x5004cc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5004ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5004d0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x5004d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5004d4: 0x8462a6a4  lh          $v0, -0x595C($v1)
    ctx->pc = 0x5004d4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EA6A4u));
    // 0x5004d8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5004dc: 0x8c64a6a8  lw          $a0, -0x5958($v1)
    ctx->pc = 0x5004dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EA6A8u));
    // 0x5004e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5004e4: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x5004e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x5004e8: 0x1012  mflo        $v0
    ctx->pc = 0x5004e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x5004ec: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x5004ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5004f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5004f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5004f4: 0x44b03  sra         $t1, $a0, 12
    ctx->pc = 0x5004f4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 12));
label_5004f8:
    // 0x5004f8: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5004F8u;
    {
        const bool branch_taken_0x5004f8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x5004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5004F8u;
        // 0x5004fc: 0x29221001  slti        $v0, $t1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5004f8) {
            ctx->pc = 0x50050Cu;
            goto label_50050c;
        }
    }
    ctx->pc = 0x500500u;
    // 0x500500: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x500500u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500504: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x500504u;
    {
        const bool branch_taken_0x500504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x500504) {
            ctx->pc = 0x500508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x500504u;
            // 0x500508: 0x240b1000  addiu       $t3, $zero, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50050Cu;
            goto label_50050c;
        }
    }
    ctx->pc = 0x50050Cu;
label_50050c:
    // 0x50050c: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x50050cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x500510: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x500510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x500514: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x500514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x500518: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x500518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50051c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x50051cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x500520: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x500520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500524: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x500524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500528: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x500528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50052c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x50052cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x500530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x500530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500534: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x500534u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x500538: 0x3e00008  jr          $ra
    ctx->pc = 0x500538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500538u;
        // 0x50053c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500540u;
    // 0x500540: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x500540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x500544: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x500548: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x500548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50054c: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x50054cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x500550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x500550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x500554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x500554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500558: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x500558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50055c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x50055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x500560: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x500560u;
    SET_GPR_U32(ctx, 31, 0x500568u);
    ctx->pc = 0x500564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500560u;
    // 0x500564: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x500560u, 0x500568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500568u;
label_500568:
    // 0x500568: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x500568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50056c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x500570: 0x2469a668  addiu       $t1, $v1, -0x5998
    ctx->pc = 0x500570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944360));
    // 0x500574: 0x8c43cfac  lw          $v1, -0x3054($v0)
    ctx->pc = 0x500574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFACu));
    // 0x500578: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x500578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50057c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x50057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x500580: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x500580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x500584: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x500584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x500588: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x500588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50058c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x50058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x500590: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x500590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x500594: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x500594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x500598: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x500598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x50059c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x50059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x5005a0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x5005a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x5005a4: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x5005A4u;
    {
        const bool branch_taken_0x5005a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x5005A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5005A4u;
        // 0x5005a8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5005a4) {
            ctx->pc = 0x5005F0u;
            goto label_5005f0;
        }
    }
    ctx->pc = 0x5005ACu;
    // 0x5005ac: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5005acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5005b0: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5005b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5005b4: 0x9464a66c  lhu         $a0, -0x5994($v1)
    ctx->pc = 0x5005b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EA66Cu));
    // 0x5005b8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5005b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5005bc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x5005bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5005c0: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x5005c0u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x5005c4: 0x70001012  mflo1       $v0
    ctx->pc = 0x5005c4u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x5005c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5005c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5005cc: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x5005ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x5005d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5005d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5005d4: 0x9464a670  lhu         $a0, -0x5990($v1)
    ctx->pc = 0x5005d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294944368)));
    // 0x5005d8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x5005d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5005dc: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x5005dcu;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x5005e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x5005e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x5005e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5005e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5005e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x5005E8u;
    {
        const bool branch_taken_0x5005e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5005E8u;
        // 0x5005ec: 0xa6040002  sh          $a0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5005e8) {
            ctx->pc = 0x5005F8u;
            goto label_5005f8;
        }
    }
    ctx->pc = 0x5005F0u;
label_5005f0:
    // 0x5005f0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x5005f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x5005f4: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x5005f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_5005f8:
    // 0x5005f8: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x5005f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5005fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x5005fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500600: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x500600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x500604: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x500604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500608: 0x3e00008  jr          $ra
    ctx->pc = 0x500608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500608u;
        // 0x50060c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500610u;
}
