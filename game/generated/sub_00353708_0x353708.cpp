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

// Function: sub_00353708
// Address: 0x353708 - 0x353790
void sub_00353708_0x353708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353708_0x353708");
#endif

    switch (ctx->pc) {
        case 0x35372cu: goto label_35372c;
        case 0x353770u: goto label_353770;
        default: break;
    }

    ctx->pc = 0x353708u;

    // 0x353708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35370c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353710: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x353714: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353714u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353718: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353718u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35371c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35371cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353720: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353720u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x353724: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353724u;
    SET_GPR_U32(ctx, 31, 0x35372Cu);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353724u, 0x35372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35372Cu;
label_35372c:
    // 0x35372c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35372Cu;
    {
        const bool branch_taken_0x35372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35372c) {
            ctx->pc = 0x353744u;
            goto label_353744;
        }
    }
    ctx->pc = 0x353734u;
    // 0x353734: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353738: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x35373c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35373Cu;
    {
        const bool branch_taken_0x35373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35373c) {
            ctx->pc = 0x353778u;
            goto label_353778;
        }
    }
    ctx->pc = 0x353744u;
label_353744:
    // 0x353744: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353748: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x35374c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x35374cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x353750: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x353750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x353754: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x353754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x353758: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353758u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35375c: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x35375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353760: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353764: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x353764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353768: 0xc0d5cee  jal         func_3573B8
    ctx->pc = 0x353768u;
    SET_GPR_U32(ctx, 31, 0x353770u);
    ctx->pc = 0x3573B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3573B8u, 0x353768u, 0x353770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353770u;
label_353770:
    // 0x353770: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x353770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x353774: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x353774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_353778:
    // 0x353778: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353778u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35377c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x35377cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353780: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x353780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353784: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x353784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353788: 0x3e00008  jr          $ra
    ctx->pc = 0x353788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353790u;
}
