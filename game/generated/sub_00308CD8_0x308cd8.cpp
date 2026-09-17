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

// Function: sub_00308CD8
// Address: 0x308cd8 - 0x308d00
void sub_00308CD8_0x308cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308CD8_0x308cd8");
#endif

    switch (ctx->pc) {
        case 0x308ce8u: goto label_308ce8;
        default: break;
    }

    ctx->pc = 0x308cd8u;

    // 0x308cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308ce0: 0xc0b6b12  jal         func_2DAC48
    ctx->pc = 0x308CE0u;
    SET_GPR_U32(ctx, 31, 0x308CE8u);
    ctx->pc = 0x2DAC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC48u, 0x308CE0u, 0x308CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CE8u;
label_308ce8:
    // 0x308ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308cec: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x308cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x308cf0: 0xac62ed10  sw          $v0, -0x12F0($v1)
    ctx->pc = 0x308cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1AED10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AED10u, _value); } while (0);
    // 0x308cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x308CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CF4u;
        // 0x308cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308CFCu;
    // 0x308cfc: 0x0  nop
    ctx->pc = 0x308cfcu;
    // NOP
    ctx->pc = 0x308d00u;
}
