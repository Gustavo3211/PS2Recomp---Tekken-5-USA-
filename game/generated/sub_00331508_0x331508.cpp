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

// Function: sub_00331508
// Address: 0x331508 - 0x331538
void sub_00331508_0x331508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331508_0x331508");
#endif

    switch (ctx->pc) {
        case 0x331518u: goto label_331518;
        default: break;
    }

    ctx->pc = 0x331508u;

    // 0x331508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33150c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33150cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331510: 0xc0cc55a  jal         func_331568
    ctx->pc = 0x331510u;
    SET_GPR_U32(ctx, 31, 0x331518u);
    ctx->pc = 0x331568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331568u, 0x331510u, 0x331518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331518u;
label_331518:
    // 0x331518: 0xc781963c  lwc1        $f1, -0x69C4($gp)
    ctx->pc = 0x331518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33151c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331520: 0x0  nop
    ctx->pc = 0x331520u;
    // NOP
    // 0x331524: 0x0  nop
    ctx->pc = 0x331524u;
    // NOP
    // 0x331528: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x331528u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x33152c: 0x3e00008  jr          $ra
    ctx->pc = 0x33152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33152Cu;
        // 0x331530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331534u;
    // 0x331534: 0x0  nop
    ctx->pc = 0x331534u;
    // NOP
    ctx->pc = 0x331538u;
}
