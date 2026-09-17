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

// Function: sub_0031A158
// Address: 0x31a158 - 0x31a178
void sub_0031A158_0x31a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A158_0x31a158");
#endif

    switch (ctx->pc) {
        case 0x31a16cu: goto label_31a16c;
        default: break;
    }

    ctx->pc = 0x31a158u;

    // 0x31a158: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31a158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x31a15c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a164: 0xc0c6fb0  jal         func_31BEC0
    ctx->pc = 0x31A164u;
    SET_GPR_U32(ctx, 31, 0x31A16Cu);
    ctx->pc = 0x31A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A164u;
    // 0x31a168: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BEC0u, 0x31A164u, 0x31A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A16Cu;
label_31a16c:
    // 0x31a16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a170: 0x3e00008  jr          $ra
    ctx->pc = 0x31A170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A170u;
        // 0x31a174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A178u;
}
