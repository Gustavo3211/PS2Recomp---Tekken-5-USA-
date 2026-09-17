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

// Function: sub_003738D8
// Address: 0x3738d8 - 0x373908
void sub_003738D8_0x3738d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003738D8_0x3738d8");
#endif

    ctx->pc = 0x3738d8u;

    // 0x3738d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3738d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3738dc: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3738dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3738e0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3738e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3738e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3738e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3738ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3738ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3738f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3738f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3738f4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3738f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738f8: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3738f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3738fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3738fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373900: 0x3e00008  jr          $ra
    ctx->pc = 0x373900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373908u;
}
