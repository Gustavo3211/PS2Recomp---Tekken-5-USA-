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

// Function: sub_003199E8
// Address: 0x3199e8 - 0x319a14
void sub_003199E8_0x3199e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003199E8_0x3199e8");
#endif

    ctx->pc = 0x3199e8u;

    // 0x3199e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3199e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3199ec: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3199ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3199f0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3199f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3199f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3199f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3199fc: 0xac6244c4  sw          $v0, 0x44C4($v1)
    ctx->pc = 0x3199fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17604), GPR_U32(ctx, 2));
    // 0x319a00: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319a00u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a04: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x319a04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319a08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x319a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x319A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319A14u;
}
