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

// Function: sub_00373B00
// Address: 0x373b00 - 0x373b28
void sub_00373B00_0x373b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B00_0x373b00");
#endif

    ctx->pc = 0x373b00u;

    // 0x373b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373b04: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373b08: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373b08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b10: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x373b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x373b14: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373b14u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b18: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373b18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373b20: 0x3e00008  jr          $ra
    ctx->pc = 0x373B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B28u;
}
