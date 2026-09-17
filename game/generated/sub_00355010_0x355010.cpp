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

// Function: sub_00355010
// Address: 0x355010 - 0x355034
void sub_00355010_0x355010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355010_0x355010");
#endif

    ctx->pc = 0x355010u;

    // 0x355010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355014: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x355014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x355018: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355018u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35501c: 0xaf80c730  sw          $zero, -0x38D0($gp)
    ctx->pc = 0x35501cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952752), GPR_U32(ctx, 0));
    // 0x355020: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355020u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355024: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x355024u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355028: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x355028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35502c: 0x3e00008  jr          $ra
    ctx->pc = 0x35502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35502Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355034u;
}
