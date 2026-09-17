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

// Function: sub_00100D28
// Address: 0x100d28 - 0x100d58
void sub_00100D28_0x100d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100D28_0x100d28");
#endif

    switch (ctx->pc) {
        case 0x100d3cu: goto label_100d3c;
        case 0x100d48u: goto label_100d48;
        default: break;
    }

    ctx->pc = 0x100d28u;

    // 0x100d28: 0x3c0400e4  lui         $a0, 0xE4
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)228 << 16));
    // 0x100d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100d34: 0xc0405a8  jal         func_1016A0
    ctx->pc = 0x100D34u;
    SET_GPR_U32(ctx, 31, 0x100D3Cu);
    ctx->pc = 0x100D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D34u;
    // 0x100d38: 0x2484af00  addiu       $a0, $a0, -0x5100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1016A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1016A0u, 0x100D34u, 0x100D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D3Cu;
label_100d3c:
    // 0x100d3c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x100d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x100d40: 0xc040240  jal         func_100900
    ctx->pc = 0x100D40u;
    SET_GPR_U32(ctx, 31, 0x100D48u);
    ctx->pc = 0x100D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D40u;
    // 0x100d44: 0x24848b40  addiu       $a0, $a0, -0x74C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100900u, 0x100D40u, 0x100D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D48u;
label_100d48:
    // 0x100d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x100D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D4Cu;
        // 0x100d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100D54u;
    // 0x100d54: 0x0  nop
    ctx->pc = 0x100d54u;
    // NOP
    ctx->pc = 0x100d58u;
}
