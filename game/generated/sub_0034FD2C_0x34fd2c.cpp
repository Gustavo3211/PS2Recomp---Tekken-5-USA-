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

// Function: sub_0034FD2C
// Address: 0x34fd2c - 0x34fd4c
void sub_0034FD2C_0x34fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FD2C_0x34fd2c");
#endif

    ctx->pc = 0x34fd2cu;

    // 0x34fd2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fd30: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x34fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x34fd34: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fd34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd38: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fd38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd3c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x34fd3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fd40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x34fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x34FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FD4Cu;
}
