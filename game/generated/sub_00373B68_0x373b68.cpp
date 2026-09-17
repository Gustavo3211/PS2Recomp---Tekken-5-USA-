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

// Function: sub_00373B68
// Address: 0x373b68 - 0x373b94
void sub_00373B68_0x373b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B68_0x373b68");
#endif

    ctx->pc = 0x373b68u;

    // 0x373b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373b6c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373b70: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373b70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b78: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x373b7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x373b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x373b80: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373b80u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b84: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373b84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x373B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B94u;
}
