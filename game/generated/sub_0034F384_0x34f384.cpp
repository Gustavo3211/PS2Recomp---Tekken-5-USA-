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

// Function: sub_0034F384
// Address: 0x34f384 - 0x34f40c
void sub_0034F384_0x34f384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F384_0x34f384");
#endif

    switch (ctx->pc) {
        case 0x34f384u: goto label_34f384;
        case 0x34f388u: goto label_34f388;
        case 0x34f38cu: goto label_34f38c;
        case 0x34f390u: goto label_34f390;
        case 0x34f394u: goto label_34f394;
        case 0x34f398u: goto label_34f398;
        case 0x34f39cu: goto label_34f39c;
        case 0x34f3a0u: goto label_34f3a0;
        case 0x34f3a4u: goto label_34f3a4;
        case 0x34f3a8u: goto label_34f3a8;
        case 0x34f3acu: goto label_34f3ac;
        case 0x34f3b0u: goto label_34f3b0;
        case 0x34f3b4u: goto label_34f3b4;
        case 0x34f3b8u: goto label_34f3b8;
        case 0x34f3bcu: goto label_34f3bc;
        case 0x34f3c0u: goto label_34f3c0;
        case 0x34f3c4u: goto label_34f3c4;
        case 0x34f3c8u: goto label_34f3c8;
        case 0x34f3ccu: goto label_34f3cc;
        case 0x34f3d0u: goto label_34f3d0;
        case 0x34f3d4u: goto label_34f3d4;
        case 0x34f3d8u: goto label_34f3d8;
        case 0x34f3dcu: goto label_34f3dc;
        case 0x34f3e0u: goto label_34f3e0;
        case 0x34f3e4u: goto label_34f3e4;
        case 0x34f3e8u: goto label_34f3e8;
        case 0x34f3ecu: goto label_34f3ec;
        case 0x34f3f0u: goto label_34f3f0;
        case 0x34f3f4u: goto label_34f3f4;
        case 0x34f3f8u: goto label_34f3f8;
        case 0x34f3fcu: goto label_34f3fc;
        case 0x34f400u: goto label_34f400;
        case 0x34f404u: goto label_34f404;
        case 0x34f408u: goto label_34f408;
        default: break;
    }

    ctx->pc = 0x34f384u;

label_34f384:
    // 0x34f384: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f388:
    // 0x34f388: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f38c:
    // 0x34f38c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f390:
    // 0x34f390: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f390u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f394:
    // 0x34f394: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f398:
    // 0x34f398: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f398u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f39c:
    // 0x34f39c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f3a0:
    // 0x34f3a0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f3a4:
    // 0x34f3a4: 0xc0d3fc6  jal         func_34FF18
label_34f3a8:
    if (ctx->pc == 0x34F3A8u) {
        ctx->pc = 0x34F3ACu;
        goto label_34f3ac;
    }
    ctx->pc = 0x34F3A4u;
    SET_GPR_U32(ctx, 31, 0x34F3ACu);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F3A4u, 0x34F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3ACu;
label_34f3ac:
    // 0x34f3ac: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f3b0:
    // 0x34f3b0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f3b4:
    // 0x34f3b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f3b8:
    if (ctx->pc == 0x34F3B8u) {
        ctx->pc = 0x34F3BCu;
        goto label_34f3bc;
    }
    ctx->pc = 0x34F3B4u;
    {
        const bool branch_taken_0x34f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f3b4) {
            ctx->pc = 0x34F3CCu;
            goto label_34f3cc;
        }
    }
    ctx->pc = 0x34F3BCu;
label_34f3bc:
    // 0x34f3bc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f3c0:
    // 0x34f3c0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f3c4:
    // 0x34f3c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_34f3c8:
    if (ctx->pc == 0x34F3C8u) {
        ctx->pc = 0x34F3CCu;
        goto label_34f3cc;
    }
    ctx->pc = 0x34F3C4u;
    {
        const bool branch_taken_0x34f3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f3c4) {
            ctx->pc = 0x34F3F4u;
            goto label_34f3f4;
        }
    }
    ctx->pc = 0x34F3CCu;
label_34f3cc:
    // 0x34f3cc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f3d0:
    // 0x34f3d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f3d4:
    // 0x34f3d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34f3d8:
    // 0x34f3d8: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f3dc:
    // 0x34f3dc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f3e0:
    // 0x34f3e0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34f3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f3e4:
    // 0x34f3e4: 0x40f809  jalr        $v0
label_34f3e8:
    if (ctx->pc == 0x34F3E8u) {
        ctx->pc = 0x34F3ECu;
        goto label_34f3ec;
    }
    ctx->pc = 0x34F3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F3ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F3E4u, 0x34F3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F3ECu;
label_34f3ec:
    // 0x34f3ec: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f3f0:
    // 0x34f3f0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f3f4:
    // 0x34f3f4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f3f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f3f8:
    // 0x34f3f8: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f3f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f3fc:
    // 0x34f3fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f400:
    // 0x34f400: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f404:
    // 0x34f404: 0x3e00008  jr          $ra
label_34f408:
    if (ctx->pc == 0x34F408u) {
        ctx->pc = 0x34F40Cu;
        goto label_fallthrough_0x34f404;
    }
    ctx->pc = 0x34F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f404:
    ctx->pc = 0x34F40Cu;
}
