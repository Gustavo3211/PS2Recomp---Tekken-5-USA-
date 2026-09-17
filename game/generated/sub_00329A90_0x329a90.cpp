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

// Function: sub_00329A90
// Address: 0x329a90 - 0x329ac8
void sub_00329A90_0x329a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329A90_0x329a90");
#endif

    switch (ctx->pc) {
        case 0x329abcu: goto label_329abc;
        default: break;
    }

    ctx->pc = 0x329a90u;

    // 0x329a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x329a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x329a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x329a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329aa0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x329aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x329aa4: 0x0  nop
    ctx->pc = 0x329aa4u;
    // NOP
    // 0x329aa8: 0x0  nop
    ctx->pc = 0x329aa8u;
    // NOP
    // 0x329aac: 0x46006343  div.s       $f13, $f12, $f0
    ctx->pc = 0x329aacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[0];
    // 0x329ab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x329ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x329ab4: 0xc0ca6b2  jal         func_329AC8
    ctx->pc = 0x329AB4u;
    SET_GPR_U32(ctx, 31, 0x329ABCu);
    ctx->pc = 0x329AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AC8u, 0x329AB4u, 0x329ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329ABCu;
label_329abc:
    // 0x329abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x329AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AC0u;
        // 0x329ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329AC8u;
}
