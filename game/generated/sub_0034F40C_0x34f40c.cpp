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

// Function: sub_0034F40C
// Address: 0x34f40c - 0x34f494
void sub_0034F40C_0x34f40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F40C_0x34f40c");
#endif

    switch (ctx->pc) {
        case 0x34f40cu: goto label_34f40c;
        case 0x34f410u: goto label_34f410;
        case 0x34f414u: goto label_34f414;
        case 0x34f418u: goto label_34f418;
        case 0x34f41cu: goto label_34f41c;
        case 0x34f420u: goto label_34f420;
        case 0x34f424u: goto label_34f424;
        case 0x34f428u: goto label_34f428;
        case 0x34f42cu: goto label_34f42c;
        case 0x34f430u: goto label_34f430;
        case 0x34f434u: goto label_34f434;
        case 0x34f438u: goto label_34f438;
        case 0x34f43cu: goto label_34f43c;
        case 0x34f440u: goto label_34f440;
        case 0x34f444u: goto label_34f444;
        case 0x34f448u: goto label_34f448;
        case 0x34f44cu: goto label_34f44c;
        case 0x34f450u: goto label_34f450;
        case 0x34f454u: goto label_34f454;
        case 0x34f458u: goto label_34f458;
        case 0x34f45cu: goto label_34f45c;
        case 0x34f460u: goto label_34f460;
        case 0x34f464u: goto label_34f464;
        case 0x34f468u: goto label_34f468;
        case 0x34f46cu: goto label_34f46c;
        case 0x34f470u: goto label_34f470;
        case 0x34f474u: goto label_34f474;
        case 0x34f478u: goto label_34f478;
        case 0x34f47cu: goto label_34f47c;
        case 0x34f480u: goto label_34f480;
        case 0x34f484u: goto label_34f484;
        case 0x34f488u: goto label_34f488;
        case 0x34f48cu: goto label_34f48c;
        case 0x34f490u: goto label_34f490;
        default: break;
    }

    ctx->pc = 0x34f40cu;

label_34f40c:
    // 0x34f40c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f410:
    // 0x34f410: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f414:
    // 0x34f414: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f418:
    // 0x34f418: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f418u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f41c:
    // 0x34f41c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f420:
    // 0x34f420: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f420u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f424:
    // 0x34f424: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f424u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f428:
    // 0x34f428: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34f428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f42c:
    // 0x34f42c: 0xc0d3fc6  jal         func_34FF18
label_34f430:
    if (ctx->pc == 0x34F430u) {
        ctx->pc = 0x34F434u;
        goto label_34f434;
    }
    ctx->pc = 0x34F42Cu;
    SET_GPR_U32(ctx, 31, 0x34F434u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F42Cu, 0x34F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F434u;
label_34f434:
    // 0x34f434: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f438:
    // 0x34f438: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f43c:
    // 0x34f43c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f440:
    if (ctx->pc == 0x34F440u) {
        ctx->pc = 0x34F444u;
        goto label_34f444;
    }
    ctx->pc = 0x34F43Cu;
    {
        const bool branch_taken_0x34f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f43c) {
            ctx->pc = 0x34F454u;
            goto label_34f454;
        }
    }
    ctx->pc = 0x34F444u;
label_34f444:
    // 0x34f444: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f448:
    // 0x34f448: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f44c:
    // 0x34f44c: 0x1000000b  b           . + 4 + (0xB << 2)
label_34f450:
    if (ctx->pc == 0x34F450u) {
        ctx->pc = 0x34F454u;
        goto label_34f454;
    }
    ctx->pc = 0x34F44Cu;
    {
        const bool branch_taken_0x34f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f44c) {
            ctx->pc = 0x34F47Cu;
            goto label_34f47c;
        }
    }
    ctx->pc = 0x34F454u;
label_34f454:
    // 0x34f454: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f458:
    // 0x34f458: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f45c:
    // 0x34f45c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_34f460:
    // 0x34f460: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f464:
    // 0x34f464: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34f464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f468:
    // 0x34f468: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34f468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f46c:
    // 0x34f46c: 0x40f809  jalr        $v0
label_34f470:
    if (ctx->pc == 0x34F470u) {
        ctx->pc = 0x34F474u;
        goto label_34f474;
    }
    ctx->pc = 0x34F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F474u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F46Cu, 0x34F474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F474u;
label_34f474:
    // 0x34f474: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f478:
    // 0x34f478: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f47c:
    // 0x34f47c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f47cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f480:
    // 0x34f480: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f480u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f484:
    // 0x34f484: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f488:
    // 0x34f488: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f48c:
    // 0x34f48c: 0x3e00008  jr          $ra
label_34f490:
    if (ctx->pc == 0x34F490u) {
        ctx->pc = 0x34F494u;
        goto label_fallthrough_0x34f48c;
    }
    ctx->pc = 0x34F48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f48c:
    ctx->pc = 0x34F494u;
}
