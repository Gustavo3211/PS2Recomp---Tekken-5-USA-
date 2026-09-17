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

// Function: sub_00331538
// Address: 0x331538 - 0x331568
void sub_00331538_0x331538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331538_0x331538");
#endif

    switch (ctx->pc) {
        case 0x331548u: goto label_331548;
        default: break;
    }

    ctx->pc = 0x331538u;

    // 0x331538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33153c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331540: 0xc0cc55a  jal         func_331568
    ctx->pc = 0x331540u;
    SET_GPR_U32(ctx, 31, 0x331548u);
    ctx->pc = 0x331568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331568u, 0x331540u, 0x331548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331548u;
label_331548:
    // 0x331548: 0xc7819640  lwc1        $f1, -0x69C0($gp)
    ctx->pc = 0x331548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33154c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331550: 0x0  nop
    ctx->pc = 0x331550u;
    // NOP
    // 0x331554: 0x0  nop
    ctx->pc = 0x331554u;
    // NOP
    // 0x331558: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x331558u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x33155c: 0x3e00008  jr          $ra
    ctx->pc = 0x33155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33155Cu;
        // 0x331560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331564u;
    // 0x331564: 0x0  nop
    ctx->pc = 0x331564u;
    // NOP
    ctx->pc = 0x331568u;
}
