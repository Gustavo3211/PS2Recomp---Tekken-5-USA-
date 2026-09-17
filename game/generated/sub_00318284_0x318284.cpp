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

// Function: sub_00318284
// Address: 0x318284 - 0x3182b4
void sub_00318284_0x318284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318284_0x318284");
#endif

    ctx->pc = 0x318284u;

    // 0x318284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x318288: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x318288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x31828c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31828cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318290: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x318290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318294: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x318294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x318298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31829c: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x31829cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x3182a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3182a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182a4: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3182a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3182a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3182a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3182ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3182ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3182ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3182B4u;
}
