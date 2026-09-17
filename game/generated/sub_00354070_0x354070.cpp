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

// Function: sub_00354070
// Address: 0x354070 - 0x354094
void sub_00354070_0x354070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354070_0x354070");
#endif

    ctx->pc = 0x354070u;

    // 0x354070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354074: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x354074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x354078: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354078u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35407c: 0x2782cbf0  addiu       $v0, $gp, -0x3410
    ctx->pc = 0x35407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953968));
    // 0x354080: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354080u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354084: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x354084u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35408c: 0x3e00008  jr          $ra
    ctx->pc = 0x35408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354094u;
}
