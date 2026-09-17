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

// Function: sub_003315F8
// Address: 0x3315f8 - 0x331618
void sub_003315F8_0x3315f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003315F8_0x3315f8");
#endif

    switch (ctx->pc) {
        case 0x33160cu: goto label_33160c;
        default: break;
    }

    ctx->pc = 0x3315f8u;

    // 0x3315f8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3315f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3315fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3315fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331604: 0xc0cc65c  jal         func_331970
    ctx->pc = 0x331604u;
    SET_GPR_U32(ctx, 31, 0x33160Cu);
    ctx->pc = 0x331608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331604u;
    // 0x331608: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331970u, 0x331604u, 0x33160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33160Cu;
label_33160c:
    // 0x33160c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331610: 0x3e00008  jr          $ra
    ctx->pc = 0x331610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331610u;
        // 0x331614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331618u;
}
