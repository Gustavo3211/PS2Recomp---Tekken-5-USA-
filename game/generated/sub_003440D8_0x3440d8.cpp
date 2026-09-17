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

// Function: sub_003440D8
// Address: 0x3440d8 - 0x344100
void sub_003440D8_0x3440d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003440D8_0x3440d8");
#endif

    switch (ctx->pc) {
        case 0x3440e8u: goto label_3440e8;
        default: break;
    }

    ctx->pc = 0x3440d8u;

    // 0x3440d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3440d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3440dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3440dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3440e0: 0xc0d1040  jal         func_344100
    ctx->pc = 0x3440E0u;
    SET_GPR_U32(ctx, 31, 0x3440E8u);
    ctx->pc = 0x344100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344100u, 0x3440E0u, 0x3440E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3440E8u;
label_3440e8:
    // 0x3440e8: 0xc7819658  lwc1        $f1, -0x69A8($gp)
    ctx->pc = 0x3440e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3440ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3440ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3440f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3440f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3440f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3440F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3440F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440F4u;
        // 0x3440f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3440F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3440FCu;
    // 0x3440fc: 0x0  nop
    ctx->pc = 0x3440fcu;
    // NOP
    ctx->pc = 0x344100u;
}
