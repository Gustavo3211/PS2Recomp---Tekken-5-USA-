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

// Function: sub_00374030
// Address: 0x374030 - 0x374058
void sub_00374030_0x374030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374030_0x374030");
#endif

    ctx->pc = 0x374030u;

    // 0x374030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374034: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x374034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x374038: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374038u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37403c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374040: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x374040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x374044: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374044u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374048: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x374048u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37404c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37404cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x374050: 0x3e00008  jr          $ra
    ctx->pc = 0x374050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374058u;
}
