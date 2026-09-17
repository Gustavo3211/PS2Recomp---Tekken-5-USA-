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

// Function: sub_0034F5E0
// Address: 0x34f5e0 - 0x34f6c0
void sub_0034F5E0_0x34f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F5E0_0x34f5e0");
#endif

    switch (ctx->pc) {
        case 0x34f5e0u: goto label_34f5e0;
        case 0x34f5e4u: goto label_34f5e4;
        case 0x34f5e8u: goto label_34f5e8;
        case 0x34f5ecu: goto label_34f5ec;
        case 0x34f5f0u: goto label_34f5f0;
        case 0x34f5f4u: goto label_34f5f4;
        case 0x34f5f8u: goto label_34f5f8;
        case 0x34f5fcu: goto label_34f5fc;
        case 0x34f600u: goto label_34f600;
        case 0x34f604u: goto label_34f604;
        case 0x34f608u: goto label_34f608;
        case 0x34f60cu: goto label_34f60c;
        case 0x34f610u: goto label_34f610;
        case 0x34f614u: goto label_34f614;
        case 0x34f618u: goto label_34f618;
        case 0x34f61cu: goto label_34f61c;
        case 0x34f620u: goto label_34f620;
        case 0x34f624u: goto label_34f624;
        case 0x34f628u: goto label_34f628;
        case 0x34f62cu: goto label_34f62c;
        case 0x34f630u: goto label_34f630;
        case 0x34f634u: goto label_34f634;
        case 0x34f638u: goto label_34f638;
        case 0x34f63cu: goto label_34f63c;
        case 0x34f640u: goto label_34f640;
        case 0x34f644u: goto label_34f644;
        case 0x34f648u: goto label_34f648;
        case 0x34f64cu: goto label_34f64c;
        case 0x34f650u: goto label_34f650;
        case 0x34f654u: goto label_34f654;
        case 0x34f658u: goto label_34f658;
        case 0x34f65cu: goto label_34f65c;
        case 0x34f660u: goto label_34f660;
        case 0x34f664u: goto label_34f664;
        case 0x34f668u: goto label_34f668;
        case 0x34f66cu: goto label_34f66c;
        case 0x34f670u: goto label_34f670;
        case 0x34f674u: goto label_34f674;
        case 0x34f678u: goto label_34f678;
        case 0x34f67cu: goto label_34f67c;
        case 0x34f680u: goto label_34f680;
        case 0x34f684u: goto label_34f684;
        case 0x34f688u: goto label_34f688;
        case 0x34f68cu: goto label_34f68c;
        case 0x34f690u: goto label_34f690;
        case 0x34f694u: goto label_34f694;
        case 0x34f698u: goto label_34f698;
        case 0x34f69cu: goto label_34f69c;
        case 0x34f6a0u: goto label_34f6a0;
        case 0x34f6a4u: goto label_34f6a4;
        case 0x34f6a8u: goto label_34f6a8;
        case 0x34f6acu: goto label_34f6ac;
        case 0x34f6b0u: goto label_34f6b0;
        case 0x34f6b4u: goto label_34f6b4;
        case 0x34f6b8u: goto label_34f6b8;
        case 0x34f6bcu: goto label_34f6bc;
        default: break;
    }

    ctx->pc = 0x34f5e0u;

label_34f5e0:
    // 0x34f5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f5e4:
    // 0x34f5e4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f5e8:
    // 0x34f5e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f5ec:
    // 0x34f5ec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f5ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f5f0:
    // 0x34f5f0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f5f4:
    // 0x34f5f4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f5f8:
    // 0x34f5f8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f5fc:
    // 0x34f5fc: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34f600:
    // 0x34f600: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34f600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_34f604:
    // 0x34f604: 0xc0d3f53  jal         func_34FD4C
label_34f608:
    if (ctx->pc == 0x34F608u) {
        ctx->pc = 0x34F60Cu;
        goto label_34f60c;
    }
    ctx->pc = 0x34F604u;
    SET_GPR_U32(ctx, 31, 0x34F60Cu);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F604u, 0x34F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F60Cu;
label_34f60c:
    // 0x34f60c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_34f610:
    // 0x34f610: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f614:
    // 0x34f614: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f618:
    if (ctx->pc == 0x34F618u) {
        ctx->pc = 0x34F61Cu;
        goto label_34f61c;
    }
    ctx->pc = 0x34F614u;
    {
        const bool branch_taken_0x34f614 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f614) {
            ctx->pc = 0x34F628u;
            goto label_34f628;
        }
    }
    ctx->pc = 0x34F61Cu;
label_34f61c:
    // 0x34f61c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f620:
    // 0x34f620: 0x10000021  b           . + 4 + (0x21 << 2)
label_34f624:
    if (ctx->pc == 0x34F624u) {
        ctx->pc = 0x34F628u;
        goto label_34f628;
    }
    ctx->pc = 0x34F620u;
    {
        const bool branch_taken_0x34f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f620) {
            ctx->pc = 0x34F6A8u;
            goto label_34f6a8;
        }
    }
    ctx->pc = 0x34F628u;
label_34f628:
    // 0x34f628: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f62c:
    // 0x34f62c: 0xc0d3fc6  jal         func_34FF18
label_34f630:
    if (ctx->pc == 0x34F630u) {
        ctx->pc = 0x34F634u;
        goto label_34f634;
    }
    ctx->pc = 0x34F62Cu;
    SET_GPR_U32(ctx, 31, 0x34F634u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F62Cu, 0x34F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F634u;
label_34f634:
    // 0x34f634: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34f634u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_34f638:
    // 0x34f638: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f63c:
    // 0x34f63c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f640:
    if (ctx->pc == 0x34F640u) {
        ctx->pc = 0x34F644u;
        goto label_34f644;
    }
    ctx->pc = 0x34F63Cu;
    {
        const bool branch_taken_0x34f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f63c) {
            ctx->pc = 0x34F654u;
            goto label_34f654;
        }
    }
    ctx->pc = 0x34F644u;
label_34f644:
    // 0x34f644: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f648:
    // 0x34f648: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f64c:
    // 0x34f64c: 0x10000016  b           . + 4 + (0x16 << 2)
label_34f650:
    if (ctx->pc == 0x34F650u) {
        ctx->pc = 0x34F654u;
        goto label_34f654;
    }
    ctx->pc = 0x34F64Cu;
    {
        const bool branch_taken_0x34f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f64c) {
            ctx->pc = 0x34F6A8u;
            goto label_34f6a8;
        }
    }
    ctx->pc = 0x34F654u;
label_34f654:
    // 0x34f654: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34f654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f658:
    // 0x34f658: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f65c:
    // 0x34f65c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f660:
    // 0x34f660: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f664:
    // 0x34f664: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f668:
    // 0x34f668: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f66c:
    // 0x34f66c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f670:
    // 0x34f670: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f674:
    // 0x34f674: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f678:
    // 0x34f678: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x34f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_34f67c:
    // 0x34f67c: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x34f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f680:
    // 0x34f680: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34f680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f684:
    // 0x34f684: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34f684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f688:
    // 0x34f688: 0x40f809  jalr        $v0
label_34f68c:
    if (ctx->pc == 0x34F68Cu) {
        ctx->pc = 0x34F690u;
        goto label_34f690;
    }
    ctx->pc = 0x34F688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F690u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F688u, 0x34F690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F690u;
label_34f690:
    // 0x34f690: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f694:
    // 0x34f694: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f698:
    // 0x34f698: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f69c:
    // 0x34f69c: 0xc0d3f96  jal         func_34FE58
label_34f6a0:
    if (ctx->pc == 0x34F6A0u) {
        ctx->pc = 0x34F6A4u;
        goto label_34f6a4;
    }
    ctx->pc = 0x34F69Cu;
    SET_GPR_U32(ctx, 31, 0x34F6A4u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F69Cu, 0x34F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6A4u;
label_34f6a4:
    // 0x34f6a4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f6a8:
    // 0x34f6a8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f6a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f6ac:
    // 0x34f6ac: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f6acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f6b0:
    // 0x34f6b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f6b4:
    // 0x34f6b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f6b8:
    // 0x34f6b8: 0x3e00008  jr          $ra
label_34f6bc:
    if (ctx->pc == 0x34F6BCu) {
        ctx->pc = 0x34F6C0u;
        goto label_fallthrough_0x34f6b8;
    }
    ctx->pc = 0x34F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f6b8:
    ctx->pc = 0x34F6C0u;
}
