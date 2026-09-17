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

// Function: sub_00352344
// Address: 0x352344 - 0x352400
void sub_00352344_0x352344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352344_0x352344");
#endif

    switch (ctx->pc) {
        case 0x352344u: goto label_352344;
        case 0x352348u: goto label_352348;
        case 0x35234cu: goto label_35234c;
        case 0x352350u: goto label_352350;
        case 0x352354u: goto label_352354;
        case 0x352358u: goto label_352358;
        case 0x35235cu: goto label_35235c;
        case 0x352360u: goto label_352360;
        case 0x352364u: goto label_352364;
        case 0x352368u: goto label_352368;
        case 0x35236cu: goto label_35236c;
        case 0x352370u: goto label_352370;
        case 0x352374u: goto label_352374;
        case 0x352378u: goto label_352378;
        case 0x35237cu: goto label_35237c;
        case 0x352380u: goto label_352380;
        case 0x352384u: goto label_352384;
        case 0x352388u: goto label_352388;
        case 0x35238cu: goto label_35238c;
        case 0x352390u: goto label_352390;
        case 0x352394u: goto label_352394;
        case 0x352398u: goto label_352398;
        case 0x35239cu: goto label_35239c;
        case 0x3523a0u: goto label_3523a0;
        case 0x3523a4u: goto label_3523a4;
        case 0x3523a8u: goto label_3523a8;
        case 0x3523acu: goto label_3523ac;
        case 0x3523b0u: goto label_3523b0;
        case 0x3523b4u: goto label_3523b4;
        case 0x3523b8u: goto label_3523b8;
        case 0x3523bcu: goto label_3523bc;
        case 0x3523c0u: goto label_3523c0;
        case 0x3523c4u: goto label_3523c4;
        case 0x3523c8u: goto label_3523c8;
        case 0x3523ccu: goto label_3523cc;
        case 0x3523d0u: goto label_3523d0;
        case 0x3523d4u: goto label_3523d4;
        case 0x3523d8u: goto label_3523d8;
        case 0x3523dcu: goto label_3523dc;
        case 0x3523e0u: goto label_3523e0;
        case 0x3523e4u: goto label_3523e4;
        case 0x3523e8u: goto label_3523e8;
        case 0x3523ecu: goto label_3523ec;
        case 0x3523f0u: goto label_3523f0;
        case 0x3523f4u: goto label_3523f4;
        case 0x3523f8u: goto label_3523f8;
        case 0x3523fcu: goto label_3523fc;
        default: break;
    }

    ctx->pc = 0x352344u;

label_352344:
    // 0x352344: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352348:
    // 0x352348: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_35234c:
    // 0x35234c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352350:
    // 0x352350: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352354:
    // 0x352354: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352354u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352358:
    // 0x352358: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35235c:
    // 0x35235c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35235cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352360:
    // 0x352360: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352364:
    // 0x352364: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352368:
    // 0x352368: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35236c:
    // 0x35236c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352370:
    // 0x352370: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352374:
    // 0x352374: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352378:
    // 0x352378: 0xc0d300f  jal         func_34C03C
label_35237c:
    if (ctx->pc == 0x35237Cu) {
        ctx->pc = 0x352380u;
        goto label_352380;
    }
    ctx->pc = 0x352378u;
    SET_GPR_U32(ctx, 31, 0x352380u);
    ctx->pc = 0x34C03Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C03Cu, 0x352378u, 0x352380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352380u;
label_352380:
    // 0x352380: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352384:
    // 0x352384: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352388:
    // 0x352388: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_35238c:
    // 0x35238c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352390:
    if (ctx->pc == 0x352390u) {
        ctx->pc = 0x352394u;
        goto label_352394;
    }
    ctx->pc = 0x35238Cu;
    {
        const bool branch_taken_0x35238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35238c) {
            ctx->pc = 0x3523E4u;
            goto label_3523e4;
        }
    }
    ctx->pc = 0x352394u;
label_352394:
    // 0x352394: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352398:
    // 0x352398: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35239c:
    // 0x35239c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x35239cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3523a0:
    // 0x3523a0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3523a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3523a4:
    // 0x3523a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3523a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3523a8:
    // 0x3523a8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3523a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3523ac:
    // 0x3523ac: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x3523acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3523b0:
    // 0x3523b0: 0x40f809  jalr        $v0
label_3523b4:
    if (ctx->pc == 0x3523B4u) {
        ctx->pc = 0x3523B8u;
        goto label_3523b8;
    }
    ctx->pc = 0x3523B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3523B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3523B0u, 0x3523B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3523B8u;
label_3523b8:
    // 0x3523b8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3523b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3523bc:
    // 0x3523bc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3523bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3523c0:
    // 0x3523c0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3523c4:
    if (ctx->pc == 0x3523C4u) {
        ctx->pc = 0x3523C8u;
        goto label_3523c8;
    }
    ctx->pc = 0x3523C0u;
    {
        const bool branch_taken_0x3523c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3523c0) {
            ctx->pc = 0x3523E4u;
            goto label_3523e4;
        }
    }
    ctx->pc = 0x3523C8u;
label_3523c8:
    // 0x3523c8: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3523c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3523cc:
    // 0x3523cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3523ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3523d0:
    // 0x3523d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3523d4:
    if (ctx->pc == 0x3523D4u) {
        ctx->pc = 0x3523D8u;
        goto label_3523d8;
    }
    ctx->pc = 0x3523D0u;
    {
        const bool branch_taken_0x3523d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3523d0) {
            ctx->pc = 0x3523E4u;
            goto label_3523e4;
        }
    }
    ctx->pc = 0x3523D8u;
label_3523d8:
    // 0x3523d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3523d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3523dc:
    // 0x3523dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3523e0:
    if (ctx->pc == 0x3523E0u) {
        ctx->pc = 0x3523E4u;
        goto label_3523e4;
    }
    ctx->pc = 0x3523DCu;
    {
        const bool branch_taken_0x3523dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3523dc) {
            ctx->pc = 0x3523E8u;
            goto label_3523e8;
        }
    }
    ctx->pc = 0x3523E4u;
label_3523e4:
    // 0x3523e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3523e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3523e8:
    // 0x3523e8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3523e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3523ec:
    // 0x3523ec: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3523ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3523f0:
    // 0x3523f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3523f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3523f4:
    // 0x3523f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3523f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3523f8:
    // 0x3523f8: 0x3e00008  jr          $ra
label_3523fc:
    if (ctx->pc == 0x3523FCu) {
        ctx->pc = 0x352400u;
        goto label_fallthrough_0x3523f8;
    }
    ctx->pc = 0x3523F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3523F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3523f8:
    ctx->pc = 0x352400u;
}
