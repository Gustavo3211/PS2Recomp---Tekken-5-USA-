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

// Function: sub_0034F794
// Address: 0x34f794 - 0x34f870
void sub_0034F794_0x34f794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F794_0x34f794");
#endif

    switch (ctx->pc) {
        case 0x34f794u: goto label_34f794;
        case 0x34f798u: goto label_34f798;
        case 0x34f79cu: goto label_34f79c;
        case 0x34f7a0u: goto label_34f7a0;
        case 0x34f7a4u: goto label_34f7a4;
        case 0x34f7a8u: goto label_34f7a8;
        case 0x34f7acu: goto label_34f7ac;
        case 0x34f7b0u: goto label_34f7b0;
        case 0x34f7b4u: goto label_34f7b4;
        case 0x34f7b8u: goto label_34f7b8;
        case 0x34f7bcu: goto label_34f7bc;
        case 0x34f7c0u: goto label_34f7c0;
        case 0x34f7c4u: goto label_34f7c4;
        case 0x34f7c8u: goto label_34f7c8;
        case 0x34f7ccu: goto label_34f7cc;
        case 0x34f7d0u: goto label_34f7d0;
        case 0x34f7d4u: goto label_34f7d4;
        case 0x34f7d8u: goto label_34f7d8;
        case 0x34f7dcu: goto label_34f7dc;
        case 0x34f7e0u: goto label_34f7e0;
        case 0x34f7e4u: goto label_34f7e4;
        case 0x34f7e8u: goto label_34f7e8;
        case 0x34f7ecu: goto label_34f7ec;
        case 0x34f7f0u: goto label_34f7f0;
        case 0x34f7f4u: goto label_34f7f4;
        case 0x34f7f8u: goto label_34f7f8;
        case 0x34f7fcu: goto label_34f7fc;
        case 0x34f800u: goto label_34f800;
        case 0x34f804u: goto label_34f804;
        case 0x34f808u: goto label_34f808;
        case 0x34f80cu: goto label_34f80c;
        case 0x34f810u: goto label_34f810;
        case 0x34f814u: goto label_34f814;
        case 0x34f818u: goto label_34f818;
        case 0x34f81cu: goto label_34f81c;
        case 0x34f820u: goto label_34f820;
        case 0x34f824u: goto label_34f824;
        case 0x34f828u: goto label_34f828;
        case 0x34f82cu: goto label_34f82c;
        case 0x34f830u: goto label_34f830;
        case 0x34f834u: goto label_34f834;
        case 0x34f838u: goto label_34f838;
        case 0x34f83cu: goto label_34f83c;
        case 0x34f840u: goto label_34f840;
        case 0x34f844u: goto label_34f844;
        case 0x34f848u: goto label_34f848;
        case 0x34f84cu: goto label_34f84c;
        case 0x34f850u: goto label_34f850;
        case 0x34f854u: goto label_34f854;
        case 0x34f858u: goto label_34f858;
        case 0x34f85cu: goto label_34f85c;
        case 0x34f860u: goto label_34f860;
        case 0x34f864u: goto label_34f864;
        case 0x34f868u: goto label_34f868;
        case 0x34f86cu: goto label_34f86c;
        default: break;
    }

    ctx->pc = 0x34f794u;

label_34f794:
    // 0x34f794: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f798:
    // 0x34f798: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f79c:
    // 0x34f79c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f7a0:
    // 0x34f7a0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f7a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f7a4:
    // 0x34f7a4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f7a8:
    // 0x34f7a8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f7ac:
    // 0x34f7ac: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f7b0:
    // 0x34f7b0: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34f7b4:
    // 0x34f7b4: 0xc0d3f53  jal         func_34FD4C
label_34f7b8:
    if (ctx->pc == 0x34F7B8u) {
        ctx->pc = 0x34F7BCu;
        goto label_34f7bc;
    }
    ctx->pc = 0x34F7B4u;
    SET_GPR_U32(ctx, 31, 0x34F7BCu);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F7B4u, 0x34F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7BCu;
label_34f7bc:
    // 0x34f7bc: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f7c0:
    // 0x34f7c0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f7c4:
    // 0x34f7c4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f7c8:
    if (ctx->pc == 0x34F7C8u) {
        ctx->pc = 0x34F7CCu;
        goto label_34f7cc;
    }
    ctx->pc = 0x34F7C4u;
    {
        const bool branch_taken_0x34f7c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f7c4) {
            ctx->pc = 0x34F7D8u;
            goto label_34f7d8;
        }
    }
    ctx->pc = 0x34F7CCu;
label_34f7cc:
    // 0x34f7cc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f7d0:
    // 0x34f7d0: 0x10000021  b           . + 4 + (0x21 << 2)
label_34f7d4:
    if (ctx->pc == 0x34F7D4u) {
        ctx->pc = 0x34F7D8u;
        goto label_34f7d8;
    }
    ctx->pc = 0x34F7D0u;
    {
        const bool branch_taken_0x34f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f7d0) {
            ctx->pc = 0x34F858u;
            goto label_34f858;
        }
    }
    ctx->pc = 0x34F7D8u;
label_34f7d8:
    // 0x34f7d8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f7dc:
    // 0x34f7dc: 0xc0d3fc6  jal         func_34FF18
label_34f7e0:
    if (ctx->pc == 0x34F7E0u) {
        ctx->pc = 0x34F7E4u;
        goto label_34f7e4;
    }
    ctx->pc = 0x34F7DCu;
    SET_GPR_U32(ctx, 31, 0x34F7E4u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F7DCu, 0x34F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7E4u;
label_34f7e4:
    // 0x34f7e4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_34f7e8:
    // 0x34f7e8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f7ec:
    // 0x34f7ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f7f0:
    if (ctx->pc == 0x34F7F0u) {
        ctx->pc = 0x34F7F4u;
        goto label_34f7f4;
    }
    ctx->pc = 0x34F7ECu;
    {
        const bool branch_taken_0x34f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f7ec) {
            ctx->pc = 0x34F804u;
            goto label_34f804;
        }
    }
    ctx->pc = 0x34F7F4u;
label_34f7f4:
    // 0x34f7f4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f7f8:
    // 0x34f7f8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f7fc:
    // 0x34f7fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_34f800:
    if (ctx->pc == 0x34F800u) {
        ctx->pc = 0x34F804u;
        goto label_34f804;
    }
    ctx->pc = 0x34F7FCu;
    {
        const bool branch_taken_0x34f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f7fc) {
            ctx->pc = 0x34F858u;
            goto label_34f858;
        }
    }
    ctx->pc = 0x34F804u;
label_34f804:
    // 0x34f804: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f808:
    // 0x34f808: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f80c:
    // 0x34f80c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f810:
    // 0x34f810: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f814:
    // 0x34f814: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f818:
    // 0x34f818: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f81c:
    // 0x34f81c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f820:
    // 0x34f820: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f824:
    // 0x34f824: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f828:
    // 0x34f828: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x34f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_34f82c:
    // 0x34f82c: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f830:
    // 0x34f830: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f834:
    // 0x34f834: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34f834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f838:
    // 0x34f838: 0x40f809  jalr        $v0
label_34f83c:
    if (ctx->pc == 0x34F83Cu) {
        ctx->pc = 0x34F840u;
        goto label_34f840;
    }
    ctx->pc = 0x34F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F840u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F838u, 0x34F840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F840u;
label_34f840:
    // 0x34f840: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f844:
    // 0x34f844: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f848:
    // 0x34f848: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f84c:
    // 0x34f84c: 0xc0d3f96  jal         func_34FE58
label_34f850:
    if (ctx->pc == 0x34F850u) {
        ctx->pc = 0x34F854u;
        goto label_34f854;
    }
    ctx->pc = 0x34F84Cu;
    SET_GPR_U32(ctx, 31, 0x34F854u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F84Cu, 0x34F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F854u;
label_34f854:
    // 0x34f854: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f858:
    // 0x34f858: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f858u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f85c:
    // 0x34f85c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f85cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f860:
    // 0x34f860: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f864:
    // 0x34f864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f868:
    // 0x34f868: 0x3e00008  jr          $ra
label_34f86c:
    if (ctx->pc == 0x34F86Cu) {
        ctx->pc = 0x34F870u;
        goto label_fallthrough_0x34f868;
    }
    ctx->pc = 0x34F868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f868:
    ctx->pc = 0x34F870u;
}
