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

// Function: sub_00230860
// Address: 0x230860 - 0x230888
void sub_00230860_0x230860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230860_0x230860");
#endif

    ctx->pc = 0x230860u;

    // 0x230860: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23086c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230870: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230874: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230878: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x230878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23087c: 0xc420d074  lwc1        $f0, -0x2F8C($at)
    ctx->pc = 0x23087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294955124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230880: 0x3e00008  jr          $ra
    ctx->pc = 0x230880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230888u;
}
