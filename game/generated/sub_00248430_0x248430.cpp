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

// Function: sub_00248430
// Address: 0x248430 - 0x248460
void sub_00248430_0x248430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248430_0x248430");
#endif

    switch (ctx->pc) {
        case 0x248450u: goto label_248450;
        default: break;
    }

    ctx->pc = 0x248430u;

    // 0x248430: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x248434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248438: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x248438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x24843c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248444: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x248444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x166FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FFCu, _value); } while (0);
    // 0x248448: 0xc09288a  jal         func_24A228
    ctx->pc = 0x248448u;
    SET_GPR_U32(ctx, 31, 0x248450u);
    ctx->pc = 0x24844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248448u;
    // 0x24844c: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A228u, 0x248448u, 0x248450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248450u;
label_248450:
    // 0x248450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248454: 0x3e00008  jr          $ra
    ctx->pc = 0x248454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248454u;
        // 0x248458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24845Cu;
    // 0x24845c: 0x0  nop
    ctx->pc = 0x24845cu;
    // NOP
    ctx->pc = 0x248460u;
}
