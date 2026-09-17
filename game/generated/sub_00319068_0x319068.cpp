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

// Function: sub_00319068
// Address: 0x319068 - 0x319098
void sub_00319068_0x319068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319068_0x319068");
#endif

    ctx->pc = 0x319068u;

    // 0x319068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31906c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x31906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319070: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319074: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x319074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319078: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x319078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x31907c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319080: 0xac6241a4  sw          $v0, 0x41A4($v1)
    ctx->pc = 0x319080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16804), GPR_U32(ctx, 2));
    // 0x319084: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319084u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319088: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319088u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31908c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31908cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319090: 0x3e00008  jr          $ra
    ctx->pc = 0x319090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319098u;
}
