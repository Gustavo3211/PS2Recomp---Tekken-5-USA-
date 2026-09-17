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

// Function: sub_00357850
// Address: 0x357850 - 0x3578b8
void sub_00357850_0x357850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357850_0x357850");
#endif

    switch (ctx->pc) {
        case 0x357878u: goto label_357878;
        case 0x35788cu: goto label_35788c;
        case 0x35789cu: goto label_35789c;
        default: break;
    }

    ctx->pc = 0x357850u;

    // 0x357850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357854: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x357854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x357858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x357858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35785c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35785cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357860: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x357860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x357864: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x357864u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x357868: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x357868u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35786c: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x35786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357870: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x357870u;
    SET_GPR_U32(ctx, 31, 0x357878u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x357870u, 0x357878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357878u;
label_357878:
    // 0x357878: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35787c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357880: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x357880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357884: 0xc0d5da2  jal         func_357688
    ctx->pc = 0x357884u;
    SET_GPR_U32(ctx, 31, 0x35788Cu);
    ctx->pc = 0x357688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357688u, 0x357884u, 0x35788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35788Cu;
label_35788c:
    // 0x35788c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35788cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357890: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357894: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357894u;
    SET_GPR_U32(ctx, 31, 0x35789Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357894u, 0x35789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35789Cu;
label_35789c:
    // 0x35789c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3578a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3578a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578a4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3578a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3578a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3578a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3578ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3578acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3578b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3578B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3578B8u;
}
