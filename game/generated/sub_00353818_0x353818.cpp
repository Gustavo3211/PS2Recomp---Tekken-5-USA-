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

// Function: sub_00353818
// Address: 0x353818 - 0x353890
void sub_00353818_0x353818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353818_0x353818");
#endif

    switch (ctx->pc) {
        case 0x353834u: goto label_353834;
        case 0x353870u: goto label_353870;
        default: break;
    }

    ctx->pc = 0x353818u;

    // 0x353818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35381c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353820: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353824: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353824u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353828: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35382c: 0xc0d5025  jal         func_354094
    ctx->pc = 0x35382Cu;
    SET_GPR_U32(ctx, 31, 0x353834u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x35382Cu, 0x353834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353834u;
label_353834:
    // 0x353834: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353834u;
    {
        const bool branch_taken_0x353834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353834) {
            ctx->pc = 0x35384Cu;
            goto label_35384c;
        }
    }
    ctx->pc = 0x35383Cu;
    // 0x35383c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353840: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353844: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x353844u;
    {
        const bool branch_taken_0x353844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353844) {
            ctx->pc = 0x353878u;
            goto label_353878;
        }
    }
    ctx->pc = 0x35384Cu;
label_35384c:
    // 0x35384c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353850: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x353854: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353858: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35385c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x353860: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353864: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353868: 0xc0d5e2e  jal         func_3578B8
    ctx->pc = 0x353868u;
    SET_GPR_U32(ctx, 31, 0x353870u);
    ctx->pc = 0x3578B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578B8u, 0x353868u, 0x353870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353870u;
label_353870:
    // 0x353870: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x353874: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353878:
    // 0x353878: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353878u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35387c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35387cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353880: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353884: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353888: 0x3e00008  jr          $ra
    ctx->pc = 0x353888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353890u;
}
