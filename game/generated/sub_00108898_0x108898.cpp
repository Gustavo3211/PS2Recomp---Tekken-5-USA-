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

// Function: sub_00108898
// Address: 0x108898 - 0x1088d0
void sub_00108898_0x108898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108898_0x108898");
#endif

    ctx->pc = 0x108898u;

    // 0x108898: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10889c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10889cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1088a0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1088a4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1088a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1088a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x1088ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1088b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1088b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1088b4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1088B4u;
    {
        const bool branch_taken_0x1088b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1088b4) {
            ctx->pc = 0x1088C4u;
            goto label_1088c4;
        }
    }
    ctx->pc = 0x1088BCu;
    // 0x1088bc: 0x80420e8  j           func_1083A0
    ctx->pc = 0x1088BCu;
    ctx->pc = 0x1083A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083A0u, 0x1088BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1088C4u;
label_1088c4:
    // 0x1088c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1088C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088CCu;
    // 0x1088cc: 0x0  nop
    ctx->pc = 0x1088ccu;
    // NOP
    ctx->pc = 0x1088d0u;
}
