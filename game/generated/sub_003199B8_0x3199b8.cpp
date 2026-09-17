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

// Function: sub_003199B8
// Address: 0x3199b8 - 0x3199e8
void sub_003199B8_0x3199b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003199B8_0x3199b8");
#endif

    ctx->pc = 0x3199b8u;

    // 0x3199b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3199b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3199bc: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3199bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3199c0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3199c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3199c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3199c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3199cc: 0xac6244c0  sw          $v0, 0x44C0($v1)
    ctx->pc = 0x3199ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17600), GPR_U32(ctx, 2));
    // 0x3199d0: 0xac6044c4  sw          $zero, 0x44C4($v1)
    ctx->pc = 0x3199d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17604), GPR_U32(ctx, 0));
    // 0x3199d4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3199d4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199d8: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3199d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3199dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3199dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3199e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3199E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3199E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3199E8u;
}
