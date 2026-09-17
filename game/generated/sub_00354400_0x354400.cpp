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

// Function: sub_00354400
// Address: 0x354400 - 0x35449c
void sub_00354400_0x354400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354400_0x354400");
#endif

    switch (ctx->pc) {
        case 0x354400u: goto label_354400;
        case 0x354404u: goto label_354404;
        case 0x354408u: goto label_354408;
        case 0x35440cu: goto label_35440c;
        case 0x354410u: goto label_354410;
        case 0x354414u: goto label_354414;
        case 0x354418u: goto label_354418;
        case 0x35441cu: goto label_35441c;
        case 0x354420u: goto label_354420;
        case 0x354424u: goto label_354424;
        case 0x354428u: goto label_354428;
        case 0x35442cu: goto label_35442c;
        case 0x354430u: goto label_354430;
        case 0x354434u: goto label_354434;
        case 0x354438u: goto label_354438;
        case 0x35443cu: goto label_35443c;
        case 0x354440u: goto label_354440;
        case 0x354444u: goto label_354444;
        case 0x354448u: goto label_354448;
        case 0x35444cu: goto label_35444c;
        case 0x354450u: goto label_354450;
        case 0x354454u: goto label_354454;
        case 0x354458u: goto label_354458;
        case 0x35445cu: goto label_35445c;
        case 0x354460u: goto label_354460;
        case 0x354464u: goto label_354464;
        case 0x354468u: goto label_354468;
        case 0x35446cu: goto label_35446c;
        case 0x354470u: goto label_354470;
        case 0x354474u: goto label_354474;
        case 0x354478u: goto label_354478;
        case 0x35447cu: goto label_35447c;
        case 0x354480u: goto label_354480;
        case 0x354484u: goto label_354484;
        case 0x354488u: goto label_354488;
        case 0x35448cu: goto label_35448c;
        case 0x354490u: goto label_354490;
        case 0x354494u: goto label_354494;
        case 0x354498u: goto label_354498;
        default: break;
    }

    ctx->pc = 0x354400u;

label_354400:
    // 0x354400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_354404:
    // 0x354404: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x354404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_354408:
    // 0x354408: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x354408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_35440c:
    // 0x35440c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35440cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354410:
    // 0x354410: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354410u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_354414:
    // 0x354414: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x354414u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_354418:
    // 0x354418: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x354418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_35441c:
    // 0x35441c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354420:
    if (ctx->pc == 0x354420u) {
        ctx->pc = 0x354424u;
        goto label_354424;
    }
    ctx->pc = 0x35441Cu;
    {
        const bool branch_taken_0x35441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35441c) {
            ctx->pc = 0x354434u;
            goto label_354434;
        }
    }
    ctx->pc = 0x354424u;
label_354424:
    // 0x354424: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x354424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_354428:
    // 0x354428: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x354428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
label_35442c:
    // 0x35442c: 0x10000015  b           . + 4 + (0x15 << 2)
label_354430:
    if (ctx->pc == 0x354430u) {
        ctx->pc = 0x354434u;
        goto label_354434;
    }
    ctx->pc = 0x35442Cu;
    {
        const bool branch_taken_0x35442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35442c) {
            ctx->pc = 0x354484u;
            goto label_354484;
        }
    }
    ctx->pc = 0x354434u;
label_354434:
    // 0x354434: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354438:
    // 0x354438: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35443c:
    // 0x35443c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354440:
    // 0x354440: 0xc0d521a  jal         func_354868
label_354444:
    if (ctx->pc == 0x354444u) {
        ctx->pc = 0x354448u;
        goto label_354448;
    }
    ctx->pc = 0x354440u;
    SET_GPR_U32(ctx, 31, 0x354448u);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x354440u, 0x354448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354448u;
label_354448:
    // 0x354448: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x354448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_35444c:
    // 0x35444c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x35444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354450:
    // 0x354450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354454:
    if (ctx->pc == 0x354454u) {
        ctx->pc = 0x354458u;
        goto label_354458;
    }
    ctx->pc = 0x354450u;
    {
        const bool branch_taken_0x354450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354450) {
            ctx->pc = 0x354468u;
            goto label_354468;
        }
    }
    ctx->pc = 0x354458u;
label_354458:
    // 0x354458: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x354458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_35445c:
    // 0x35445c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_354460:
    // 0x354460: 0x10000008  b           . + 4 + (0x8 << 2)
label_354464:
    if (ctx->pc == 0x354464u) {
        ctx->pc = 0x354468u;
        goto label_354468;
    }
    ctx->pc = 0x354460u;
    {
        const bool branch_taken_0x354460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354460) {
            ctx->pc = 0x354484u;
            goto label_354484;
        }
    }
    ctx->pc = 0x354468u;
label_354468:
    // 0x354468: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_35446c:
    // 0x35446c: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x35446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354470:
    // 0x354470: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x354470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_354474:
    // 0x354474: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x354474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_354478:
    // 0x354478: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x354478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35447c:
    // 0x35447c: 0x40f809  jalr        $v0
label_354480:
    if (ctx->pc == 0x354480u) {
        ctx->pc = 0x354484u;
        goto label_354484;
    }
    ctx->pc = 0x35447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35447Cu, 0x354484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354484u;
label_354484:
    // 0x354484: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354484u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_354488:
    // 0x354488: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x354488u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35448c:
    // 0x35448c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_354490:
    // 0x354490: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x354490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_354494:
    // 0x354494: 0x3e00008  jr          $ra
label_354498:
    if (ctx->pc == 0x354498u) {
        ctx->pc = 0x35449Cu;
        goto label_fallthrough_0x354494;
    }
    ctx->pc = 0x354494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354494:
    ctx->pc = 0x35449Cu;
}
