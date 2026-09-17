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

// Function: sub_0037419C
// Address: 0x37419c - 0x3741d0
void sub_0037419C_0x37419c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037419C_0x37419c");
#endif

    ctx->pc = 0x37419cu;

    // 0x37419c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37419cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3741a0: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3741a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3741a4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3741a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3741a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3741acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3741b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3741b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3741b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3741b8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3741b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3741bc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3741bcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741c0: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3741c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3741c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3741c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3741c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3741C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3741C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3741D0u;
}
