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

// Function: sub_00319DEC
// Address: 0x319dec - 0x319e44
void sub_00319DEC_0x319dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319DEC_0x319dec");
#endif

    switch (ctx->pc) {
        case 0x319e2cu: goto label_319e2c;
        default: break;
    }

    ctx->pc = 0x319decu;

    // 0x319dec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319df0: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x319df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x319df4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x319df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x319df8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319df8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319dfc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x319dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x319e00: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x319e00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x319e04: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x319e04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x319e08: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x319e08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x319e0c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x319e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319e10: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x319e10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x319e14: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x319e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319e18: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x319e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319e1c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319e20: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x319e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319e24: 0xc0c65dd  jal         func_319774
    ctx->pc = 0x319E24u;
    SET_GPR_U32(ctx, 31, 0x319E2Cu);
    ctx->pc = 0x319774u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319774u, 0x319E24u, 0x319E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E2Cu;
label_319e2c:
    // 0x319e2c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319e2cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e30: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x319e30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319e34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x319e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x319e38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x319e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x319E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319E44u;
}
