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

// Function: sub_003738A0
// Address: 0x3738a0 - 0x3738d8
void sub_003738A0_0x3738a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003738A0_0x3738a0");
#endif

    ctx->pc = 0x3738a0u;

    // 0x3738a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3738a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3738a4: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3738a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3738a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3738a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3738acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738b0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3738b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3738b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3738b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3738b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3738bc: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x3738bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x3738c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3738c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3738c4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3738c4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738c8: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3738c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3738cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3738ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3738d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3738D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3738D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3738D8u;
}
