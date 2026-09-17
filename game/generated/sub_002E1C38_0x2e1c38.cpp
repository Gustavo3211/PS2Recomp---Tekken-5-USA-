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

// Function: sub_002E1C38
// Address: 0x2e1c38 - 0x2e1c70
void sub_002E1C38_0x2e1c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C38_0x2e1c38");
#endif

    switch (ctx->pc) {
        case 0x2e1c50u: goto label_2e1c50;
        case 0x2e1c58u: goto label_2e1c58;
        case 0x2e1c60u: goto label_2e1c60;
        default: break;
    }

    ctx->pc = 0x2e1c38u;

    // 0x2e1c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1c40: 0x24900054  addiu       $s0, $a0, 0x54
    ctx->pc = 0x2e1c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2e1c44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1c48: 0xc0c1104  jal         func_304410
    ctx->pc = 0x2E1C48u;
    SET_GPR_U32(ctx, 31, 0x2E1C50u);
    ctx->pc = 0x2E1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C48u;
    // 0x2e1c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304410u, 0x2E1C48u, 0x2E1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C50u;
label_2e1c50:
    // 0x2e1c50: 0xc0c1086  jal         func_304218
    ctx->pc = 0x2E1C50u;
    SET_GPR_U32(ctx, 31, 0x2E1C58u);
    ctx->pc = 0x2E1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C50u;
    // 0x2e1c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304218u, 0x2E1C50u, 0x2E1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C58u;
label_2e1c58:
    // 0x2e1c58: 0xc0c1094  jal         func_304250
    ctx->pc = 0x2E1C58u;
    SET_GPR_U32(ctx, 31, 0x2E1C60u);
    ctx->pc = 0x2E1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C58u;
    // 0x2e1c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304250u, 0x2E1C58u, 0x2E1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C60u;
label_2e1c60:
    // 0x2e1c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1c64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1c68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C68u;
        // 0x2e1c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1C70u;
}
