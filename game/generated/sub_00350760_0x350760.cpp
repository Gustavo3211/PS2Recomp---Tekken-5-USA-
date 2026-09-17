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

// Function: sub_00350760
// Address: 0x350760 - 0x3508d8
void sub_00350760_0x350760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350760_0x350760");
#endif

    switch (ctx->pc) {
        case 0x3507a4u: goto label_3507a4;
        case 0x3507b0u: goto label_3507b0;
        case 0x3508b0u: goto label_3508b0;
        case 0x3508bcu: goto label_3508bc;
        default: break;
    }

    ctx->pc = 0x350760u;

    // 0x350760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350764: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x350764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x350768: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35076c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35076cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350770: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350774: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350778: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x350778u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x35077c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x35077cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x350780: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350788: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x350788u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x35078c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x35078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350790: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350794: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x350794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x350798: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x35079c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x35079Cu;
    SET_GPR_U32(ctx, 31, 0x3507A4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x35079Cu, 0x3507A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507A4u;
label_3507a4:
    // 0x3507a4: 0x8f82cbd8  lw          $v0, -0x3428($gp)
    ctx->pc = 0x3507a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953944)));
    // 0x3507a8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3507a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3507ac: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x3507acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_3507b0:
    // 0x3507b0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3507b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3507B4u;
    {
        const bool branch_taken_0x3507b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3507b4) {
            ctx->pc = 0x3507C4u;
            goto label_3507c4;
        }
    }
    ctx->pc = 0x3507BCu;
    // 0x3507bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3507BCu;
    {
        const bool branch_taken_0x3507bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507bc) {
            ctx->pc = 0x350854u;
            goto label_350854;
        }
    }
    ctx->pc = 0x3507C4u;
label_3507c4:
    // 0x3507c4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3507c8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3507c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3507cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3507ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3507d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3507d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3507d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3507D4u;
    {
        const bool branch_taken_0x3507d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507d4) {
            ctx->pc = 0x350838u;
            goto label_350838;
        }
    }
    ctx->pc = 0x3507DCu;
    // 0x3507dc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3507e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3507E0u;
    {
        const bool branch_taken_0x3507e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507e0) {
            ctx->pc = 0x350808u;
            goto label_350808;
        }
    }
    ctx->pc = 0x3507E8u;
    // 0x3507e8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3507e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3507ec: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3507f0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3507f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3507f4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3507f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3507f8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3507f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3507fc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3507fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x350800: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x350800u;
    {
        const bool branch_taken_0x350800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350800) {
            ctx->pc = 0x350818u;
            goto label_350818;
        }
    }
    ctx->pc = 0x350808u;
label_350808:
    // 0x350808: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35080c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x35080cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x350810: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350814: 0xaf82cbd8  sw          $v0, -0x3428($gp)
    ctx->pc = 0x350814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953944), GPR_U32(ctx, 2));
label_350818:
    // 0x350818: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x350818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35081c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350820: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x350820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x350824: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x350824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350828: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35082c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x35082cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x350830u;
    {
        const bool branch_taken_0x350830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350830) {
            ctx->pc = 0x350854u;
            goto label_350854;
        }
    }
    ctx->pc = 0x350838u;
label_350838:
    // 0x350838: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35083c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35083cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x350840: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350844: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x350844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x350848: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x350848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x35084c: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x35084Cu;
    {
        const bool branch_taken_0x35084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35084c) {
            ctx->pc = 0x3507B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3507b0;
        }
    }
    ctx->pc = 0x350854u;
label_350854:
    // 0x350854: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350858: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x350858u;
    {
        const bool branch_taken_0x350858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350858) {
            ctx->pc = 0x3508A4u;
            goto label_3508a4;
        }
    }
    ctx->pc = 0x350860u;
    // 0x350860: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350864: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x350864u;
    {
        const bool branch_taken_0x350864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350864) {
            ctx->pc = 0x35088Cu;
            goto label_35088c;
        }
    }
    ctx->pc = 0x35086Cu;
    // 0x35086c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x35086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350870: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350874: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350878: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x350878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35087c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350880: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x350880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x350884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x350884u;
    {
        const bool branch_taken_0x350884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350884) {
            ctx->pc = 0x35089Cu;
            goto label_35089c;
        }
    }
    ctx->pc = 0x35088Cu;
label_35088c:
    // 0x35088c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350890: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x350890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x350894: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350898: 0xaf82cbd8  sw          $v0, -0x3428($gp)
    ctx->pc = 0x350898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953944), GPR_U32(ctx, 2));
label_35089c:
    // 0x35089c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3508a0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3508a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_3508a4:
    // 0x3508a4: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x3508a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x3508a8: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3508A8u;
    SET_GPR_U32(ctx, 31, 0x3508B0u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3508A8u, 0x3508B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508B0u;
label_3508b0:
    // 0x3508b0: 0x8f84cbc8  lw          $a0, -0x3438($gp)
    ctx->pc = 0x3508b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953928)));
    // 0x3508b4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3508B4u;
    SET_GPR_U32(ctx, 31, 0x3508BCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3508B4u, 0x3508BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508BCu;
label_3508bc:
    // 0x3508bc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3508bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3508c0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3508c0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508c4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3508c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3508c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3508c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3508cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3508ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3508d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3508D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3508D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3508D8u;
}
