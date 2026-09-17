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

// Function: sub_00352400
// Address: 0x352400 - 0x3524bc
void sub_00352400_0x352400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352400_0x352400");
#endif

    switch (ctx->pc) {
        case 0x352400u: goto label_352400;
        case 0x352404u: goto label_352404;
        case 0x352408u: goto label_352408;
        case 0x35240cu: goto label_35240c;
        case 0x352410u: goto label_352410;
        case 0x352414u: goto label_352414;
        case 0x352418u: goto label_352418;
        case 0x35241cu: goto label_35241c;
        case 0x352420u: goto label_352420;
        case 0x352424u: goto label_352424;
        case 0x352428u: goto label_352428;
        case 0x35242cu: goto label_35242c;
        case 0x352430u: goto label_352430;
        case 0x352434u: goto label_352434;
        case 0x352438u: goto label_352438;
        case 0x35243cu: goto label_35243c;
        case 0x352440u: goto label_352440;
        case 0x352444u: goto label_352444;
        case 0x352448u: goto label_352448;
        case 0x35244cu: goto label_35244c;
        case 0x352450u: goto label_352450;
        case 0x352454u: goto label_352454;
        case 0x352458u: goto label_352458;
        case 0x35245cu: goto label_35245c;
        case 0x352460u: goto label_352460;
        case 0x352464u: goto label_352464;
        case 0x352468u: goto label_352468;
        case 0x35246cu: goto label_35246c;
        case 0x352470u: goto label_352470;
        case 0x352474u: goto label_352474;
        case 0x352478u: goto label_352478;
        case 0x35247cu: goto label_35247c;
        case 0x352480u: goto label_352480;
        case 0x352484u: goto label_352484;
        case 0x352488u: goto label_352488;
        case 0x35248cu: goto label_35248c;
        case 0x352490u: goto label_352490;
        case 0x352494u: goto label_352494;
        case 0x352498u: goto label_352498;
        case 0x35249cu: goto label_35249c;
        case 0x3524a0u: goto label_3524a0;
        case 0x3524a4u: goto label_3524a4;
        case 0x3524a8u: goto label_3524a8;
        case 0x3524acu: goto label_3524ac;
        case 0x3524b0u: goto label_3524b0;
        case 0x3524b4u: goto label_3524b4;
        case 0x3524b8u: goto label_3524b8;
        default: break;
    }

    ctx->pc = 0x352400u;

label_352400:
    // 0x352400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352404:
    // 0x352404: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352408:
    // 0x352408: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35240c:
    // 0x35240c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35240cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352410:
    // 0x352410: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352410u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352414:
    // 0x352414: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352418:
    // 0x352418: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_35241c:
    // 0x35241c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352420:
    // 0x352420: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352424:
    // 0x352424: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352428:
    // 0x352428: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35242c:
    // 0x35242c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x35242cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352430:
    // 0x352430: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352434:
    // 0x352434: 0xc0d3031  jal         func_34C0C4
label_352438:
    if (ctx->pc == 0x352438u) {
        ctx->pc = 0x35243Cu;
        goto label_35243c;
    }
    ctx->pc = 0x352434u;
    SET_GPR_U32(ctx, 31, 0x35243Cu);
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x352434u, 0x35243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35243Cu;
label_35243c:
    // 0x35243c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35243cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352440:
    // 0x352440: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352444:
    // 0x352444: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352448:
    // 0x352448: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_35244c:
    if (ctx->pc == 0x35244Cu) {
        ctx->pc = 0x352450u;
        goto label_352450;
    }
    ctx->pc = 0x352448u;
    {
        const bool branch_taken_0x352448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352448) {
            ctx->pc = 0x3524A0u;
            goto label_3524a0;
        }
    }
    ctx->pc = 0x352450u;
label_352450:
    // 0x352450: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352454:
    // 0x352454: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352458:
    // 0x352458: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35245c:
    // 0x35245c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x35245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352460:
    // 0x352460: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352464:
    // 0x352464: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352468:
    // 0x352468: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x352468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_35246c:
    // 0x35246c: 0x40f809  jalr        $v0
label_352470:
    if (ctx->pc == 0x352470u) {
        ctx->pc = 0x352474u;
        goto label_352474;
    }
    ctx->pc = 0x35246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352474u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35246Cu, 0x352474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352474u;
label_352474:
    // 0x352474: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352478:
    // 0x352478: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35247c:
    // 0x35247c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352480:
    if (ctx->pc == 0x352480u) {
        ctx->pc = 0x352484u;
        goto label_352484;
    }
    ctx->pc = 0x35247Cu;
    {
        const bool branch_taken_0x35247c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35247c) {
            ctx->pc = 0x3524A0u;
            goto label_3524a0;
        }
    }
    ctx->pc = 0x352484u;
label_352484:
    // 0x352484: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352488:
    // 0x352488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35248c:
    // 0x35248c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352490:
    if (ctx->pc == 0x352490u) {
        ctx->pc = 0x352494u;
        goto label_352494;
    }
    ctx->pc = 0x35248Cu;
    {
        const bool branch_taken_0x35248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35248c) {
            ctx->pc = 0x3524A0u;
            goto label_3524a0;
        }
    }
    ctx->pc = 0x352494u;
label_352494:
    // 0x352494: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352498:
    // 0x352498: 0x10000002  b           . + 4 + (0x2 << 2)
label_35249c:
    if (ctx->pc == 0x35249Cu) {
        ctx->pc = 0x3524A0u;
        goto label_3524a0;
    }
    ctx->pc = 0x352498u;
    {
        const bool branch_taken_0x352498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352498) {
            ctx->pc = 0x3524A4u;
            goto label_3524a4;
        }
    }
    ctx->pc = 0x3524A0u;
label_3524a0:
    // 0x3524a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3524a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3524a4:
    // 0x3524a4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3524a4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3524a8:
    // 0x3524a8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3524a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3524ac:
    // 0x3524ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3524acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3524b0:
    // 0x3524b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3524b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3524b4:
    // 0x3524b4: 0x3e00008  jr          $ra
label_3524b8:
    if (ctx->pc == 0x3524B8u) {
        ctx->pc = 0x3524BCu;
        goto label_fallthrough_0x3524b4;
    }
    ctx->pc = 0x3524B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3524B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3524b4:
    ctx->pc = 0x3524BCu;
}
