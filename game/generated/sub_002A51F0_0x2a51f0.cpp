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

// Function: sub_002A51F0
// Address: 0x2a51f0 - 0x2a5220
void sub_002A51F0_0x2a51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A51F0_0x2a51f0");
#endif

    switch (ctx->pc) {
        case 0x2a5208u: goto label_2a5208;
        default: break;
    }

    ctx->pc = 0x2a51f0u;

    // 0x2a51f0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a51f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a51f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a51f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a51f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a51fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5200: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2A5200u;
    SET_GPR_U32(ctx, 31, 0x2A5208u);
    ctx->pc = 0x2A5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5200u;
    // 0x2a5204: 0x248483c0  addiu       $a0, $a0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2A5200u, 0x2A5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5208u;
label_2a5208:
    // 0x2a5208: 0x2442ffa8  addiu       $v0, $v0, -0x58
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x2a520c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a520cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5210: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2a5210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a5214: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5214u;
        // 0x2a5218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A521Cu;
    // 0x2a521c: 0x0  nop
    ctx->pc = 0x2a521cu;
    // NOP
    ctx->pc = 0x2a5220u;
}
