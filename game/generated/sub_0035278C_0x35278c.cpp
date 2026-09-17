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

// Function: sub_0035278C
// Address: 0x35278c - 0x352848
void sub_0035278C_0x35278c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035278C_0x35278c");
#endif

    switch (ctx->pc) {
        case 0x35278cu: goto label_35278c;
        case 0x352790u: goto label_352790;
        case 0x352794u: goto label_352794;
        case 0x352798u: goto label_352798;
        case 0x35279cu: goto label_35279c;
        case 0x3527a0u: goto label_3527a0;
        case 0x3527a4u: goto label_3527a4;
        case 0x3527a8u: goto label_3527a8;
        case 0x3527acu: goto label_3527ac;
        case 0x3527b0u: goto label_3527b0;
        case 0x3527b4u: goto label_3527b4;
        case 0x3527b8u: goto label_3527b8;
        case 0x3527bcu: goto label_3527bc;
        case 0x3527c0u: goto label_3527c0;
        case 0x3527c4u: goto label_3527c4;
        case 0x3527c8u: goto label_3527c8;
        case 0x3527ccu: goto label_3527cc;
        case 0x3527d0u: goto label_3527d0;
        case 0x3527d4u: goto label_3527d4;
        case 0x3527d8u: goto label_3527d8;
        case 0x3527dcu: goto label_3527dc;
        case 0x3527e0u: goto label_3527e0;
        case 0x3527e4u: goto label_3527e4;
        case 0x3527e8u: goto label_3527e8;
        case 0x3527ecu: goto label_3527ec;
        case 0x3527f0u: goto label_3527f0;
        case 0x3527f4u: goto label_3527f4;
        case 0x3527f8u: goto label_3527f8;
        case 0x3527fcu: goto label_3527fc;
        case 0x352800u: goto label_352800;
        case 0x352804u: goto label_352804;
        case 0x352808u: goto label_352808;
        case 0x35280cu: goto label_35280c;
        case 0x352810u: goto label_352810;
        case 0x352814u: goto label_352814;
        case 0x352818u: goto label_352818;
        case 0x35281cu: goto label_35281c;
        case 0x352820u: goto label_352820;
        case 0x352824u: goto label_352824;
        case 0x352828u: goto label_352828;
        case 0x35282cu: goto label_35282c;
        case 0x352830u: goto label_352830;
        case 0x352834u: goto label_352834;
        case 0x352838u: goto label_352838;
        case 0x35283cu: goto label_35283c;
        case 0x352840u: goto label_352840;
        case 0x352844u: goto label_352844;
        default: break;
    }

    ctx->pc = 0x35278cu;

label_35278c:
    // 0x35278c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35278cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352790:
    // 0x352790: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352794:
    // 0x352794: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352798:
    // 0x352798: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352798u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35279c:
    // 0x35279c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35279cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3527a0:
    // 0x3527a0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3527a4:
    // 0x3527a4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3527a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3527a8:
    // 0x3527a8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3527a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527ac:
    // 0x3527ac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3527acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527b0:
    // 0x3527b0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3527b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527b4:
    // 0x3527b4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3527b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3527b8:
    // 0x3527b8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3527b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3527bc:
    // 0x3527bc: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x3527bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3527c0:
    // 0x3527c0: 0xc0d3154  jal         func_34C550
label_3527c4:
    if (ctx->pc == 0x3527C4u) {
        ctx->pc = 0x3527C8u;
        goto label_3527c8;
    }
    ctx->pc = 0x3527C0u;
    SET_GPR_U32(ctx, 31, 0x3527C8u);
    ctx->pc = 0x34C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C550u, 0x3527C0u, 0x3527C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527C8u;
label_3527c8:
    // 0x3527c8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3527c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3527cc:
    // 0x3527cc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3527ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527d0:
    // 0x3527d0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3527d4:
    // 0x3527d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3527d8:
    if (ctx->pc == 0x3527D8u) {
        ctx->pc = 0x3527DCu;
        goto label_3527dc;
    }
    ctx->pc = 0x3527D4u;
    {
        const bool branch_taken_0x3527d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3527d4) {
            ctx->pc = 0x35282Cu;
            goto label_35282c;
        }
    }
    ctx->pc = 0x3527DCu;
label_3527dc:
    // 0x3527dc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3527dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527e0:
    // 0x3527e0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527e4:
    // 0x3527e4: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3527e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3527e8:
    // 0x3527e8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3527e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3527ec:
    // 0x3527ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3527ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3527f0:
    // 0x3527f0: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3527f4:
    // 0x3527f4: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3527f8:
    // 0x3527f8: 0x40f809  jalr        $v0
label_3527fc:
    if (ctx->pc == 0x3527FCu) {
        ctx->pc = 0x352800u;
        goto label_352800;
    }
    ctx->pc = 0x3527F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352800u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3527F8u, 0x352800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352800u;
label_352800:
    // 0x352800: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352804:
    // 0x352804: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352808:
    // 0x352808: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_35280c:
    if (ctx->pc == 0x35280Cu) {
        ctx->pc = 0x352810u;
        goto label_352810;
    }
    ctx->pc = 0x352808u;
    {
        const bool branch_taken_0x352808 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352808) {
            ctx->pc = 0x35282Cu;
            goto label_35282c;
        }
    }
    ctx->pc = 0x352810u;
label_352810:
    // 0x352810: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352814:
    // 0x352814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352818:
    // 0x352818: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35281c:
    if (ctx->pc == 0x35281Cu) {
        ctx->pc = 0x352820u;
        goto label_352820;
    }
    ctx->pc = 0x352818u;
    {
        const bool branch_taken_0x352818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352818) {
            ctx->pc = 0x35282Cu;
            goto label_35282c;
        }
    }
    ctx->pc = 0x352820u;
label_352820:
    // 0x352820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352824:
    // 0x352824: 0x10000002  b           . + 4 + (0x2 << 2)
label_352828:
    if (ctx->pc == 0x352828u) {
        ctx->pc = 0x35282Cu;
        goto label_35282c;
    }
    ctx->pc = 0x352824u;
    {
        const bool branch_taken_0x352824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352824) {
            ctx->pc = 0x352830u;
            goto label_352830;
        }
    }
    ctx->pc = 0x35282Cu;
label_35282c:
    // 0x35282c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352830:
    // 0x352830: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352830u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352834:
    // 0x352834: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352838:
    // 0x352838: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35283c:
    // 0x35283c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35283cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352840:
    // 0x352840: 0x3e00008  jr          $ra
label_352844:
    if (ctx->pc == 0x352844u) {
        ctx->pc = 0x352848u;
        goto label_fallthrough_0x352840;
    }
    ctx->pc = 0x352840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352840:
    ctx->pc = 0x352848u;
}
