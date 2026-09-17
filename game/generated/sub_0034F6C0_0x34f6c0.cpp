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

// Function: sub_0034F6C0
// Address: 0x34f6c0 - 0x34f794
void sub_0034F6C0_0x34f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F6C0_0x34f6c0");
#endif

    switch (ctx->pc) {
        case 0x34f6c0u: goto label_34f6c0;
        case 0x34f6c4u: goto label_34f6c4;
        case 0x34f6c8u: goto label_34f6c8;
        case 0x34f6ccu: goto label_34f6cc;
        case 0x34f6d0u: goto label_34f6d0;
        case 0x34f6d4u: goto label_34f6d4;
        case 0x34f6d8u: goto label_34f6d8;
        case 0x34f6dcu: goto label_34f6dc;
        case 0x34f6e0u: goto label_34f6e0;
        case 0x34f6e4u: goto label_34f6e4;
        case 0x34f6e8u: goto label_34f6e8;
        case 0x34f6ecu: goto label_34f6ec;
        case 0x34f6f0u: goto label_34f6f0;
        case 0x34f6f4u: goto label_34f6f4;
        case 0x34f6f8u: goto label_34f6f8;
        case 0x34f6fcu: goto label_34f6fc;
        case 0x34f700u: goto label_34f700;
        case 0x34f704u: goto label_34f704;
        case 0x34f708u: goto label_34f708;
        case 0x34f70cu: goto label_34f70c;
        case 0x34f710u: goto label_34f710;
        case 0x34f714u: goto label_34f714;
        case 0x34f718u: goto label_34f718;
        case 0x34f71cu: goto label_34f71c;
        case 0x34f720u: goto label_34f720;
        case 0x34f724u: goto label_34f724;
        case 0x34f728u: goto label_34f728;
        case 0x34f72cu: goto label_34f72c;
        case 0x34f730u: goto label_34f730;
        case 0x34f734u: goto label_34f734;
        case 0x34f738u: goto label_34f738;
        case 0x34f73cu: goto label_34f73c;
        case 0x34f740u: goto label_34f740;
        case 0x34f744u: goto label_34f744;
        case 0x34f748u: goto label_34f748;
        case 0x34f74cu: goto label_34f74c;
        case 0x34f750u: goto label_34f750;
        case 0x34f754u: goto label_34f754;
        case 0x34f758u: goto label_34f758;
        case 0x34f75cu: goto label_34f75c;
        case 0x34f760u: goto label_34f760;
        case 0x34f764u: goto label_34f764;
        case 0x34f768u: goto label_34f768;
        case 0x34f76cu: goto label_34f76c;
        case 0x34f770u: goto label_34f770;
        case 0x34f774u: goto label_34f774;
        case 0x34f778u: goto label_34f778;
        case 0x34f77cu: goto label_34f77c;
        case 0x34f780u: goto label_34f780;
        case 0x34f784u: goto label_34f784;
        case 0x34f788u: goto label_34f788;
        case 0x34f78cu: goto label_34f78c;
        case 0x34f790u: goto label_34f790;
        default: break;
    }

    ctx->pc = 0x34f6c0u;

label_34f6c0:
    // 0x34f6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f6c4:
    // 0x34f6c4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f6c8:
    // 0x34f6c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f6cc:
    // 0x34f6cc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f6ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f6d0:
    // 0x34f6d0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f6d4:
    // 0x34f6d4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f6d8:
    // 0x34f6d8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f6dc:
    // 0x34f6dc: 0xc0d3f53  jal         func_34FD4C
label_34f6e0:
    if (ctx->pc == 0x34F6E0u) {
        ctx->pc = 0x34F6E4u;
        goto label_34f6e4;
    }
    ctx->pc = 0x34F6DCu;
    SET_GPR_U32(ctx, 31, 0x34F6E4u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F6DCu, 0x34F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6E4u;
label_34f6e4:
    // 0x34f6e4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f6e8:
    // 0x34f6e8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f6ec:
    // 0x34f6ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f6f0:
    if (ctx->pc == 0x34F6F0u) {
        ctx->pc = 0x34F6F4u;
        goto label_34f6f4;
    }
    ctx->pc = 0x34F6ECu;
    {
        const bool branch_taken_0x34f6ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f6ec) {
            ctx->pc = 0x34F700u;
            goto label_34f700;
        }
    }
    ctx->pc = 0x34F6F4u;
label_34f6f4:
    // 0x34f6f4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f6f8:
    // 0x34f6f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_34f6fc:
    if (ctx->pc == 0x34F6FCu) {
        ctx->pc = 0x34F700u;
        goto label_34f700;
    }
    ctx->pc = 0x34F6F8u;
    {
        const bool branch_taken_0x34f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f6f8) {
            ctx->pc = 0x34F77Cu;
            goto label_34f77c;
        }
    }
    ctx->pc = 0x34F700u;
label_34f700:
    // 0x34f700: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f704:
    // 0x34f704: 0xc0d3fc6  jal         func_34FF18
label_34f708:
    if (ctx->pc == 0x34F708u) {
        ctx->pc = 0x34F70Cu;
        goto label_34f70c;
    }
    ctx->pc = 0x34F704u;
    SET_GPR_U32(ctx, 31, 0x34F70Cu);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F704u, 0x34F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F70Cu;
label_34f70c:
    // 0x34f70c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f710:
    // 0x34f710: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f714:
    // 0x34f714: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f718:
    if (ctx->pc == 0x34F718u) {
        ctx->pc = 0x34F71Cu;
        goto label_34f71c;
    }
    ctx->pc = 0x34F714u;
    {
        const bool branch_taken_0x34f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f714) {
            ctx->pc = 0x34F72Cu;
            goto label_34f72c;
        }
    }
    ctx->pc = 0x34F71Cu;
label_34f71c:
    // 0x34f71c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f720:
    // 0x34f720: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f724:
    // 0x34f724: 0x10000015  b           . + 4 + (0x15 << 2)
label_34f728:
    if (ctx->pc == 0x34F728u) {
        ctx->pc = 0x34F72Cu;
        goto label_34f72c;
    }
    ctx->pc = 0x34F724u;
    {
        const bool branch_taken_0x34f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f724) {
            ctx->pc = 0x34F77Cu;
            goto label_34f77c;
        }
    }
    ctx->pc = 0x34F72Cu;
label_34f72c:
    // 0x34f72c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f730:
    // 0x34f730: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f734:
    // 0x34f734: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f738:
    // 0x34f738: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f73c:
    // 0x34f73c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f740:
    // 0x34f740: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f744:
    // 0x34f744: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f748:
    // 0x34f748: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f74c:
    // 0x34f74c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f750:
    // 0x34f750: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x34f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_34f754:
    // 0x34f754: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f758:
    // 0x34f758: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f75c:
    // 0x34f75c: 0x40f809  jalr        $v0
label_34f760:
    if (ctx->pc == 0x34F760u) {
        ctx->pc = 0x34F764u;
        goto label_34f764;
    }
    ctx->pc = 0x34F75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F75Cu, 0x34F764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F764u;
label_34f764:
    // 0x34f764: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f764u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f768:
    // 0x34f768: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f76c:
    // 0x34f76c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f770:
    // 0x34f770: 0xc0d3f96  jal         func_34FE58
label_34f774:
    if (ctx->pc == 0x34F774u) {
        ctx->pc = 0x34F778u;
        goto label_34f778;
    }
    ctx->pc = 0x34F770u;
    SET_GPR_U32(ctx, 31, 0x34F778u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F770u, 0x34F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F778u;
label_34f778:
    // 0x34f778: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f77c:
    // 0x34f77c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f77cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f780:
    // 0x34f780: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f784:
    // 0x34f784: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f788:
    // 0x34f788: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f78c:
    // 0x34f78c: 0x3e00008  jr          $ra
label_34f790:
    if (ctx->pc == 0x34F790u) {
        ctx->pc = 0x34F794u;
        goto label_fallthrough_0x34f78c;
    }
    ctx->pc = 0x34F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f78c:
    ctx->pc = 0x34F794u;
}
