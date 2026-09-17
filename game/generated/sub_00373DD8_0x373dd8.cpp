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

// Function: sub_00373DD8
// Address: 0x373dd8 - 0x373e04
void sub_00373DD8_0x373dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373DD8_0x373dd8");
#endif

    ctx->pc = 0x373dd8u;

    // 0x373dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373ddc: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373de0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373de0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373de4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x373de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373de8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x373de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373dec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x373decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x373df0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373df0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373df4: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373df4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373df8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x373DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373E04u;
}
