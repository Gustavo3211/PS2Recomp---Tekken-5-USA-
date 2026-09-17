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

// Function: sub_00352848
// Address: 0x352848 - 0x3528f4
void sub_00352848_0x352848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352848_0x352848");
#endif

    switch (ctx->pc) {
        case 0x352848u: goto label_352848;
        case 0x35284cu: goto label_35284c;
        case 0x352850u: goto label_352850;
        case 0x352854u: goto label_352854;
        case 0x352858u: goto label_352858;
        case 0x35285cu: goto label_35285c;
        case 0x352860u: goto label_352860;
        case 0x352864u: goto label_352864;
        case 0x352868u: goto label_352868;
        case 0x35286cu: goto label_35286c;
        case 0x352870u: goto label_352870;
        case 0x352874u: goto label_352874;
        case 0x352878u: goto label_352878;
        case 0x35287cu: goto label_35287c;
        case 0x352880u: goto label_352880;
        case 0x352884u: goto label_352884;
        case 0x352888u: goto label_352888;
        case 0x35288cu: goto label_35288c;
        case 0x352890u: goto label_352890;
        case 0x352894u: goto label_352894;
        case 0x352898u: goto label_352898;
        case 0x35289cu: goto label_35289c;
        case 0x3528a0u: goto label_3528a0;
        case 0x3528a4u: goto label_3528a4;
        case 0x3528a8u: goto label_3528a8;
        case 0x3528acu: goto label_3528ac;
        case 0x3528b0u: goto label_3528b0;
        case 0x3528b4u: goto label_3528b4;
        case 0x3528b8u: goto label_3528b8;
        case 0x3528bcu: goto label_3528bc;
        case 0x3528c0u: goto label_3528c0;
        case 0x3528c4u: goto label_3528c4;
        case 0x3528c8u: goto label_3528c8;
        case 0x3528ccu: goto label_3528cc;
        case 0x3528d0u: goto label_3528d0;
        case 0x3528d4u: goto label_3528d4;
        case 0x3528d8u: goto label_3528d8;
        case 0x3528dcu: goto label_3528dc;
        case 0x3528e0u: goto label_3528e0;
        case 0x3528e4u: goto label_3528e4;
        case 0x3528e8u: goto label_3528e8;
        case 0x3528ecu: goto label_3528ec;
        case 0x3528f0u: goto label_3528f0;
        default: break;
    }

    ctx->pc = 0x352848u;

label_352848:
    // 0x352848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35284c:
    // 0x35284c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352850:
    // 0x352850: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352854:
    // 0x352854: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352854u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352858:
    // 0x352858: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_35285c:
    // 0x35285c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352860:
    // 0x352860: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352864:
    // 0x352864: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352868:
    // 0x352868: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35286c:
    // 0x35286c: 0xc0d3192  jal         func_34C648
label_352870:
    if (ctx->pc == 0x352870u) {
        ctx->pc = 0x352874u;
        goto label_352874;
    }
    ctx->pc = 0x35286Cu;
    SET_GPR_U32(ctx, 31, 0x352874u);
    ctx->pc = 0x34C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C648u, 0x35286Cu, 0x352874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352874u;
label_352874:
    // 0x352874: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352878:
    // 0x352878: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35287c:
    // 0x35287c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x35287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352880:
    // 0x352880: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352884:
    if (ctx->pc == 0x352884u) {
        ctx->pc = 0x352888u;
        goto label_352888;
    }
    ctx->pc = 0x352880u;
    {
        const bool branch_taken_0x352880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352880) {
            ctx->pc = 0x3528D8u;
            goto label_3528d8;
        }
    }
    ctx->pc = 0x352888u;
label_352888:
    // 0x352888: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35288c:
    // 0x35288c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352890:
    // 0x352890: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352894:
    // 0x352894: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352898:
    // 0x352898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35289c:
    // 0x35289c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35289cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3528a0:
    // 0x3528a0: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x3528a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3528a4:
    // 0x3528a4: 0x40f809  jalr        $v0
label_3528a8:
    if (ctx->pc == 0x3528A8u) {
        ctx->pc = 0x3528ACu;
        goto label_3528ac;
    }
    ctx->pc = 0x3528A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3528ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3528A4u, 0x3528ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3528ACu;
label_3528ac:
    // 0x3528ac: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3528acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3528b0:
    // 0x3528b0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3528b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3528b4:
    // 0x3528b4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3528b8:
    if (ctx->pc == 0x3528B8u) {
        ctx->pc = 0x3528BCu;
        goto label_3528bc;
    }
    ctx->pc = 0x3528B4u;
    {
        const bool branch_taken_0x3528b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3528b4) {
            ctx->pc = 0x3528D8u;
            goto label_3528d8;
        }
    }
    ctx->pc = 0x3528BCu;
label_3528bc:
    // 0x3528bc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3528bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3528c0:
    // 0x3528c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3528c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3528c4:
    // 0x3528c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3528c8:
    if (ctx->pc == 0x3528C8u) {
        ctx->pc = 0x3528CCu;
        goto label_3528cc;
    }
    ctx->pc = 0x3528C4u;
    {
        const bool branch_taken_0x3528c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3528c4) {
            ctx->pc = 0x3528D8u;
            goto label_3528d8;
        }
    }
    ctx->pc = 0x3528CCu;
label_3528cc:
    // 0x3528cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3528d0:
    // 0x3528d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3528d4:
    if (ctx->pc == 0x3528D4u) {
        ctx->pc = 0x3528D8u;
        goto label_3528d8;
    }
    ctx->pc = 0x3528D0u;
    {
        const bool branch_taken_0x3528d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3528d0) {
            ctx->pc = 0x3528DCu;
            goto label_3528dc;
        }
    }
    ctx->pc = 0x3528D8u;
label_3528d8:
    // 0x3528d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3528d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3528dc:
    // 0x3528dc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3528dcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3528e0:
    // 0x3528e0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3528e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3528e4:
    // 0x3528e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3528e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3528e8:
    // 0x3528e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3528e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3528ec:
    // 0x3528ec: 0x3e00008  jr          $ra
label_3528f0:
    if (ctx->pc == 0x3528F0u) {
        ctx->pc = 0x3528F4u;
        goto label_fallthrough_0x3528ec;
    }
    ctx->pc = 0x3528ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3528ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3528ec:
    ctx->pc = 0x3528F4u;
}
