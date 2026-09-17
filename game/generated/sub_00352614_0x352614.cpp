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

// Function: sub_00352614
// Address: 0x352614 - 0x3526d0
void sub_00352614_0x352614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352614_0x352614");
#endif

    switch (ctx->pc) {
        case 0x352614u: goto label_352614;
        case 0x352618u: goto label_352618;
        case 0x35261cu: goto label_35261c;
        case 0x352620u: goto label_352620;
        case 0x352624u: goto label_352624;
        case 0x352628u: goto label_352628;
        case 0x35262cu: goto label_35262c;
        case 0x352630u: goto label_352630;
        case 0x352634u: goto label_352634;
        case 0x352638u: goto label_352638;
        case 0x35263cu: goto label_35263c;
        case 0x352640u: goto label_352640;
        case 0x352644u: goto label_352644;
        case 0x352648u: goto label_352648;
        case 0x35264cu: goto label_35264c;
        case 0x352650u: goto label_352650;
        case 0x352654u: goto label_352654;
        case 0x352658u: goto label_352658;
        case 0x35265cu: goto label_35265c;
        case 0x352660u: goto label_352660;
        case 0x352664u: goto label_352664;
        case 0x352668u: goto label_352668;
        case 0x35266cu: goto label_35266c;
        case 0x352670u: goto label_352670;
        case 0x352674u: goto label_352674;
        case 0x352678u: goto label_352678;
        case 0x35267cu: goto label_35267c;
        case 0x352680u: goto label_352680;
        case 0x352684u: goto label_352684;
        case 0x352688u: goto label_352688;
        case 0x35268cu: goto label_35268c;
        case 0x352690u: goto label_352690;
        case 0x352694u: goto label_352694;
        case 0x352698u: goto label_352698;
        case 0x35269cu: goto label_35269c;
        case 0x3526a0u: goto label_3526a0;
        case 0x3526a4u: goto label_3526a4;
        case 0x3526a8u: goto label_3526a8;
        case 0x3526acu: goto label_3526ac;
        case 0x3526b0u: goto label_3526b0;
        case 0x3526b4u: goto label_3526b4;
        case 0x3526b8u: goto label_3526b8;
        case 0x3526bcu: goto label_3526bc;
        case 0x3526c0u: goto label_3526c0;
        case 0x3526c4u: goto label_3526c4;
        case 0x3526c8u: goto label_3526c8;
        case 0x3526ccu: goto label_3526cc;
        default: break;
    }

    ctx->pc = 0x352614u;

label_352614:
    // 0x352614: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352618:
    // 0x352618: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_35261c:
    // 0x35261c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352620:
    // 0x352620: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352620u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352624:
    // 0x352624: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352628:
    // 0x352628: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35262c:
    // 0x35262c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35262cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352630:
    // 0x352630: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352634:
    // 0x352634: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352638:
    // 0x352638: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35263c:
    // 0x35263c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x35263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352640:
    // 0x352640: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352644:
    // 0x352644: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352648:
    // 0x352648: 0xc0d30ad  jal         func_34C2B4
label_35264c:
    if (ctx->pc == 0x35264Cu) {
        ctx->pc = 0x352650u;
        goto label_352650;
    }
    ctx->pc = 0x352648u;
    SET_GPR_U32(ctx, 31, 0x352650u);
    ctx->pc = 0x34C2B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B4u, 0x352648u, 0x352650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352650u;
label_352650:
    // 0x352650: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352654:
    // 0x352654: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352658:
    // 0x352658: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_35265c:
    // 0x35265c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352660:
    if (ctx->pc == 0x352660u) {
        ctx->pc = 0x352664u;
        goto label_352664;
    }
    ctx->pc = 0x35265Cu;
    {
        const bool branch_taken_0x35265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35265c) {
            ctx->pc = 0x3526B4u;
            goto label_3526b4;
        }
    }
    ctx->pc = 0x352664u;
label_352664:
    // 0x352664: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352668:
    // 0x352668: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35266c:
    // 0x35266c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x35266cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352670:
    // 0x352670: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352674:
    // 0x352674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352678:
    // 0x352678: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35267c:
    // 0x35267c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x35267cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_352680:
    // 0x352680: 0x40f809  jalr        $v0
label_352684:
    if (ctx->pc == 0x352684u) {
        ctx->pc = 0x352688u;
        goto label_352688;
    }
    ctx->pc = 0x352680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352688u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352680u, 0x352688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352688u;
label_352688:
    // 0x352688: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352688u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_35268c:
    // 0x35268c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352690:
    // 0x352690: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352694:
    if (ctx->pc == 0x352694u) {
        ctx->pc = 0x352698u;
        goto label_352698;
    }
    ctx->pc = 0x352690u;
    {
        const bool branch_taken_0x352690 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352690) {
            ctx->pc = 0x3526B4u;
            goto label_3526b4;
        }
    }
    ctx->pc = 0x352698u;
label_352698:
    // 0x352698: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_35269c:
    // 0x35269c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3526a0:
    // 0x3526a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3526a4:
    if (ctx->pc == 0x3526A4u) {
        ctx->pc = 0x3526A8u;
        goto label_3526a8;
    }
    ctx->pc = 0x3526A0u;
    {
        const bool branch_taken_0x3526a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3526a0) {
            ctx->pc = 0x3526B4u;
            goto label_3526b4;
        }
    }
    ctx->pc = 0x3526A8u;
label_3526a8:
    // 0x3526a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3526a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3526ac:
    // 0x3526ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_3526b0:
    if (ctx->pc == 0x3526B0u) {
        ctx->pc = 0x3526B4u;
        goto label_3526b4;
    }
    ctx->pc = 0x3526ACu;
    {
        const bool branch_taken_0x3526ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526ac) {
            ctx->pc = 0x3526B8u;
            goto label_3526b8;
        }
    }
    ctx->pc = 0x3526B4u;
label_3526b4:
    // 0x3526b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3526b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3526b8:
    // 0x3526b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3526b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3526bc:
    // 0x3526bc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3526bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3526c0:
    // 0x3526c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3526c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3526c4:
    // 0x3526c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3526c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3526c8:
    // 0x3526c8: 0x3e00008  jr          $ra
label_3526cc:
    if (ctx->pc == 0x3526CCu) {
        ctx->pc = 0x3526D0u;
        goto label_fallthrough_0x3526c8;
    }
    ctx->pc = 0x3526C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3526c8:
    ctx->pc = 0x3526D0u;
}
