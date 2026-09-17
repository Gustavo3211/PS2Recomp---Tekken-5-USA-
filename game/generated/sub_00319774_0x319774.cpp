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

// Function: sub_00319774
// Address: 0x319774 - 0x31996c
void sub_00319774_0x319774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319774_0x319774");
#endif

    switch (ctx->pc) {
        case 0x3197c4u: goto label_3197c4;
        case 0x3197f0u: goto label_3197f0;
        case 0x319820u: goto label_319820;
        case 0x31986cu: goto label_31986c;
        case 0x3198b4u: goto label_3198b4;
        case 0x3198d4u: goto label_3198d4;
        case 0x319938u: goto label_319938;
        case 0x319950u: goto label_319950;
        default: break;
    }

    ctx->pc = 0x319774u;

    // 0x319774: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319778: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x319778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x31977c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x319780: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319780u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319784: 0xafc40018  sw          $a0, 0x18($fp)
    ctx->pc = 0x319784u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 4));
    // 0x319788: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x319788u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x31978c: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x31978cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x319790: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x319790u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x319794: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x319794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319798: 0x8c4343c4  lw          $v1, 0x43C4($v0)
    ctx->pc = 0x319798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x31979c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3197a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3197A0u;
    {
        const bool branch_taken_0x3197a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3197a0) {
            ctx->pc = 0x3197B4u;
            goto label_3197b4;
        }
    }
    ctx->pc = 0x3197A8u;
    // 0x3197a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3197a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197ac: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3197ACu;
    {
        const bool branch_taken_0x3197ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197ac) {
            ctx->pc = 0x319954u;
            goto label_319954;
        }
    }
    ctx->pc = 0x3197B4u;
label_3197b4:
    // 0x3197b4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3197b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3197b8: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x3197b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x3197bc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3197BCu;
    SET_GPR_U32(ctx, 31, 0x3197C4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3197BCu, 0x3197C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197C4u;
label_3197c4:
    // 0x3197c4: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x3197c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3197c8: 0x8c8343d0  lw          $v1, 0x43D0($a0)
    ctx->pc = 0x3197c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17360)));
    // 0x3197cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3197ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3197d0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3197D0u;
    {
        const bool branch_taken_0x3197d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3197d0) {
            ctx->pc = 0x3198C0u;
            goto label_3198c0;
        }
    }
    ctx->pc = 0x3197D8u;
    // 0x3197d8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3197dc: 0x8c4443c4  lw          $a0, 0x43C4($v0)
    ctx->pc = 0x3197dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x3197e0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3197e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3197e4: 0x8c6543d0  lw          $a1, 0x43D0($v1)
    ctx->pc = 0x3197e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17360)));
    // 0x3197e8: 0xc0d69fa  jal         func_35A7E8
    ctx->pc = 0x3197E8u;
    SET_GPR_U32(ctx, 31, 0x3197F0u);
    ctx->pc = 0x35A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7E8u, 0x3197E8u, 0x3197F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197F0u;
label_3197f0:
    // 0x3197f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3197f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3197f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3197f8: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3197F8u;
    {
        const bool branch_taken_0x3197f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3197f8) {
            ctx->pc = 0x319940u;
            goto label_319940;
        }
    }
    ctx->pc = 0x319800u;
    // 0x319800: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319804: 0x248243d8  addiu       $v0, $a0, 0x43D8
    ctx->pc = 0x319804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x319808: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31980c: 0x248343d0  addiu       $v1, $a0, 0x43D0
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    // 0x319810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319814: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x319814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319818: 0xc0dcea4  jal         func_373A90
    ctx->pc = 0x319818u;
    SET_GPR_U32(ctx, 31, 0x319820u);
    ctx->pc = 0x373A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A90u, 0x319818u, 0x319820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319820u;
label_319820:
    // 0x319820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319824: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x319824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319828: 0xac6243d0  sw          $v0, 0x43D0($v1)
    ctx->pc = 0x319828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17360), GPR_U32(ctx, 2));
    // 0x31982c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319830: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x319830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x319834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319834u;
    {
        const bool branch_taken_0x319834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319834) {
            ctx->pc = 0x319848u;
            goto label_319848;
        }
    }
    ctx->pc = 0x31983Cu;
    // 0x31983c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319840: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319844: 0xac8244cc  sw          $v0, 0x44CC($a0)
    ctx->pc = 0x319844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17612), GPR_U32(ctx, 2));
label_319848:
    // 0x319848: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x319848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31984c: 0x8c6244bc  lw          $v0, 0x44BC($v1)
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17596)));
    // 0x319850: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x319850u;
    {
        const bool branch_taken_0x319850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319850) {
            ctx->pc = 0x3198A4u;
            goto label_3198a4;
        }
    }
    ctx->pc = 0x319858u;
    // 0x319858: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31985c: 0x248243d8  addiu       $v0, $a0, 0x43D8
    ctx->pc = 0x31985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x319860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319864: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x319864u;
    SET_GPR_U32(ctx, 31, 0x31986Cu);
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x319864u, 0x31986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31986Cu;
label_31986c:
    // 0x31986c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31986cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319870: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319874: 0x8c8243d4  lw          $v0, 0x43D4($a0)
    ctx->pc = 0x319874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17364)));
    // 0x319878: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x319878u;
    {
        const bool branch_taken_0x319878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319878) {
            ctx->pc = 0x319898u;
            goto label_319898;
        }
    }
    ctx->pc = 0x319880u;
    // 0x319880: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319884: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x319884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x319888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319888u;
    {
        const bool branch_taken_0x319888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319888) {
            ctx->pc = 0x319898u;
            goto label_319898;
        }
    }
    ctx->pc = 0x319890u;
    // 0x319890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x319890u;
    {
        const bool branch_taken_0x319890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319890) {
            ctx->pc = 0x3198A4u;
            goto label_3198a4;
        }
    }
    ctx->pc = 0x319898u;
label_319898:
    // 0x319898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31989c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x31989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3198a0: 0xac6244bc  sw          $v0, 0x44BC($v1)
    ctx->pc = 0x3198a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17596), GPR_U32(ctx, 2));
label_3198a4:
    // 0x3198a4: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3198a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3198a8: 0x8c4443c0  lw          $a0, 0x43C0($v0)
    ctx->pc = 0x3198a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
    // 0x3198ac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3198ACu;
    SET_GPR_U32(ctx, 31, 0x3198B4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3198ACu, 0x3198B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198B4u;
label_3198b4:
    // 0x3198b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3198b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198b8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3198B8u;
    {
        const bool branch_taken_0x3198b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3198b8) {
            ctx->pc = 0x319954u;
            goto label_319954;
        }
    }
    ctx->pc = 0x3198C0u;
label_3198c0:
    // 0x3198c0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3198c4: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x3198c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x3198c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3198c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198cc: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x3198CCu;
    SET_GPR_U32(ctx, 31, 0x3198D4u);
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x3198CCu, 0x3198D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198D4u;
label_3198d4:
    // 0x3198d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3198d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198d8: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x3198d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3198dc: 0x8c8243d4  lw          $v0, 0x43D4($a0)
    ctx->pc = 0x3198dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17364)));
    // 0x3198e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3198e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3198e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3198E4u;
    {
        const bool branch_taken_0x3198e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3198e4) {
            ctx->pc = 0x319940u;
            goto label_319940;
        }
    }
    ctx->pc = 0x3198ECu;
    // 0x3198ec: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3198ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3198f0: 0x317c3  sra         $v0, $v1, 31
    ctx->pc = 0x3198f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 31));
    // 0x3198f4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3198f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3198fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3198fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x319900: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x319900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x319904: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319908: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x319908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x31990c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x31990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319910: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x319910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319914: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x319914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319918: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x319918u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x31991c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x31991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319920: 0x8c4443c4  lw          $a0, 0x43C4($v0)
    ctx->pc = 0x319920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x319924: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x319924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319928: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x319928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x31992c: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x31992cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319930: 0xc0d69ee  jal         func_35A7B8
    ctx->pc = 0x319930u;
    SET_GPR_U32(ctx, 31, 0x319938u);
    ctx->pc = 0x35A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7B8u, 0x319930u, 0x319938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319938u;
label_319938:
    // 0x319938: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x319938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31993c: 0xac6243d0  sw          $v0, 0x43D0($v1)
    ctx->pc = 0x31993cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17360), GPR_U32(ctx, 2));
label_319940:
    // 0x319940: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x319940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319944: 0x8c4443c0  lw          $a0, 0x43C0($v0)
    ctx->pc = 0x319944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
    // 0x319948: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319948u;
    SET_GPR_U32(ctx, 31, 0x319950u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319948u, 0x319950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319950u;
label_319950:
    // 0x319950: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_319954:
    // 0x319954: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319954u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319958: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x319958u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31995c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x319960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x319960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319964: 0x3e00008  jr          $ra
    ctx->pc = 0x319964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31996Cu;
}
