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

// Function: sub_003742DC
// Address: 0x3742dc - 0x37433c
void sub_003742DC_0x3742dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003742DC_0x3742dc");
#endif

    switch (ctx->pc) {
        case 0x374308u: goto label_374308;
        case 0x374320u: goto label_374320;
        default: break;
    }

    ctx->pc = 0x3742dcu;

    // 0x3742dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3742dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3742e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3742e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3742e4: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x3742e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x3742e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3742e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3742ec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3742ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742f0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3742f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3742f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3742f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742f8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3742f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3742fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3742fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374300: 0xc0dd0e0  jal         func_374380
    ctx->pc = 0x374300u;
    SET_GPR_U32(ctx, 31, 0x374308u);
    ctx->pc = 0x374380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374380u, 0x374300u, 0x374308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374308u;
label_374308:
    // 0x374308: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x374308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x37430c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37430Cu;
    {
        const bool branch_taken_0x37430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37430c) {
            ctx->pc = 0x374320u;
            goto label_374320;
        }
    }
    ctx->pc = 0x374314u;
    // 0x374314: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x374314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374318: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x374318u;
    SET_GPR_U32(ctx, 31, 0x374320u);
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x374318u, 0x374320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374320u;
label_374320:
    // 0x374320: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374320u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374324: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x374324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374328: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x374328u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37432c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x374330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374334: 0x3e00008  jr          $ra
    ctx->pc = 0x374334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37433Cu;
}
