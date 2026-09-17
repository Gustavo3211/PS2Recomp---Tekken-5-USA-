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

// Function: sub_003545D0
// Address: 0x3545d0 - 0x354690
void sub_003545D0_0x3545d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003545D0_0x3545d0");
#endif

    switch (ctx->pc) {
        case 0x3545d0u: goto label_3545d0;
        case 0x3545d4u: goto label_3545d4;
        case 0x3545d8u: goto label_3545d8;
        case 0x3545dcu: goto label_3545dc;
        case 0x3545e0u: goto label_3545e0;
        case 0x3545e4u: goto label_3545e4;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545ecu: goto label_3545ec;
        case 0x3545f0u: goto label_3545f0;
        case 0x3545f4u: goto label_3545f4;
        case 0x3545f8u: goto label_3545f8;
        case 0x3545fcu: goto label_3545fc;
        case 0x354600u: goto label_354600;
        case 0x354604u: goto label_354604;
        case 0x354608u: goto label_354608;
        case 0x35460cu: goto label_35460c;
        case 0x354610u: goto label_354610;
        case 0x354614u: goto label_354614;
        case 0x354618u: goto label_354618;
        case 0x35461cu: goto label_35461c;
        case 0x354620u: goto label_354620;
        case 0x354624u: goto label_354624;
        case 0x354628u: goto label_354628;
        case 0x35462cu: goto label_35462c;
        case 0x354630u: goto label_354630;
        case 0x354634u: goto label_354634;
        case 0x354638u: goto label_354638;
        case 0x35463cu: goto label_35463c;
        case 0x354640u: goto label_354640;
        case 0x354644u: goto label_354644;
        case 0x354648u: goto label_354648;
        case 0x35464cu: goto label_35464c;
        case 0x354650u: goto label_354650;
        case 0x354654u: goto label_354654;
        case 0x354658u: goto label_354658;
        case 0x35465cu: goto label_35465c;
        case 0x354660u: goto label_354660;
        case 0x354664u: goto label_354664;
        case 0x354668u: goto label_354668;
        case 0x35466cu: goto label_35466c;
        case 0x354670u: goto label_354670;
        case 0x354674u: goto label_354674;
        case 0x354678u: goto label_354678;
        case 0x35467cu: goto label_35467c;
        case 0x354680u: goto label_354680;
        case 0x354684u: goto label_354684;
        case 0x354688u: goto label_354688;
        case 0x35468cu: goto label_35468c;
        default: break;
    }

    ctx->pc = 0x3545d0u;

label_3545d0:
    // 0x3545d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3545d4:
    // 0x3545d4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3545d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3545d8:
    // 0x3545d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3545d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3545dc:
    // 0x3545dc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3545dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3545e0:
    // 0x3545e0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3545e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3545e4:
    // 0x3545e4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3545e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_3545e8:
    // 0x3545e8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3545ec:
    // 0x3545ec: 0xc0d5288  jal         func_354A20
label_3545f0:
    if (ctx->pc == 0x3545F0u) {
        ctx->pc = 0x3545F4u;
        goto label_3545f4;
    }
    ctx->pc = 0x3545ECu;
    SET_GPR_U32(ctx, 31, 0x3545F4u);
    ctx->pc = 0x354A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A20u, 0x3545ECu, 0x3545F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545F4u;
label_3545f4:
    // 0x3545f4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3545f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3545f8:
    // 0x3545f8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3545f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3545fc:
    // 0x3545fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354600:
    if (ctx->pc == 0x354600u) {
        ctx->pc = 0x354604u;
        goto label_354604;
    }
    ctx->pc = 0x3545FCu;
    {
        const bool branch_taken_0x3545fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3545fc) {
            ctx->pc = 0x354614u;
            goto label_354614;
        }
    }
    ctx->pc = 0x354604u;
label_354604:
    // 0x354604: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x354604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_354608:
    // 0x354608: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x354608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_35460c:
    // 0x35460c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_354610:
    if (ctx->pc == 0x354610u) {
        ctx->pc = 0x354614u;
        goto label_354614;
    }
    ctx->pc = 0x35460Cu;
    {
        const bool branch_taken_0x35460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35460c) {
            ctx->pc = 0x354678u;
            goto label_354678;
        }
    }
    ctx->pc = 0x354614u;
label_354614:
    // 0x354614: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_354618:
    // 0x354618: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x354618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35461c:
    // 0x35461c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x35461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_354620:
    // 0x354620: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x354620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_354624:
    // 0x354624: 0x40f809  jalr        $v0
label_354628:
    if (ctx->pc == 0x354628u) {
        ctx->pc = 0x35462Cu;
        goto label_35462c;
    }
    ctx->pc = 0x354624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35462Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354624u, 0x35462Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35462Cu;
label_35462c:
    // 0x35462c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35462cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_354630:
    // 0x354630: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354634:
    // 0x354634: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_354638:
    if (ctx->pc == 0x354638u) {
        ctx->pc = 0x35463Cu;
        goto label_35463c;
    }
    ctx->pc = 0x354634u;
    {
        const bool branch_taken_0x354634 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354634) {
            ctx->pc = 0x354648u;
            goto label_354648;
        }
    }
    ctx->pc = 0x35463Cu;
label_35463c:
    // 0x35463c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354640:
    // 0x354640: 0x1000000d  b           . + 4 + (0xD << 2)
label_354644:
    if (ctx->pc == 0x354644u) {
        ctx->pc = 0x354648u;
        goto label_354648;
    }
    ctx->pc = 0x354640u;
    {
        const bool branch_taken_0x354640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354640) {
            ctx->pc = 0x354678u;
            goto label_354678;
        }
    }
    ctx->pc = 0x354648u;
label_354648:
    // 0x354648: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x354648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_35464c:
    // 0x35464c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35464cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_354650:
    // 0x354650: 0xc0d52c0  jal         func_354B00
label_354654:
    if (ctx->pc == 0x354654u) {
        ctx->pc = 0x354658u;
        goto label_354658;
    }
    ctx->pc = 0x354650u;
    SET_GPR_U32(ctx, 31, 0x354658u);
    ctx->pc = 0x354B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B00u, 0x354650u, 0x354658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354658u;
label_354658:
    // 0x354658: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x354658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_35465c:
    // 0x35465c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354660:
    // 0x354660: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_354664:
    if (ctx->pc == 0x354664u) {
        ctx->pc = 0x354668u;
        goto label_354668;
    }
    ctx->pc = 0x354660u;
    {
        const bool branch_taken_0x354660 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354660) {
            ctx->pc = 0x354674u;
            goto label_354674;
        }
    }
    ctx->pc = 0x354668u;
label_354668:
    // 0x354668: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35466c:
    // 0x35466c: 0x10000002  b           . + 4 + (0x2 << 2)
label_354670:
    if (ctx->pc == 0x354670u) {
        ctx->pc = 0x354674u;
        goto label_354674;
    }
    ctx->pc = 0x35466Cu;
    {
        const bool branch_taken_0x35466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35466c) {
            ctx->pc = 0x354678u;
            goto label_354678;
        }
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354678:
    // 0x354678: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354678u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35467c:
    // 0x35467c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35467cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_354680:
    // 0x354680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_354684:
    // 0x354684: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_354688:
    // 0x354688: 0x3e00008  jr          $ra
label_35468c:
    if (ctx->pc == 0x35468Cu) {
        ctx->pc = 0x354690u;
        goto label_fallthrough_0x354688;
    }
    ctx->pc = 0x354688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354688:
    ctx->pc = 0x354690u;
}
