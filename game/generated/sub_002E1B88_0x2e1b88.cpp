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

// Function: sub_002E1B88
// Address: 0x2e1b88 - 0x2e1bc0
void sub_002E1B88_0x2e1b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1B88_0x2e1b88");
#endif

    switch (ctx->pc) {
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1ba8u: goto label_2e1ba8;
        default: break;
    }

    ctx->pc = 0x2e1b88u;

    // 0x2e1b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1b90: 0x24900054  addiu       $s0, $a0, 0x54
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2e1b94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1b98: 0xc0c10d2  jal         func_304348
    ctx->pc = 0x2E1B98u;
    SET_GPR_U32(ctx, 31, 0x2E1BA0u);
    ctx->pc = 0x2E1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B98u;
    // 0x2e1b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304348u, 0x2E1B98u, 0x2E1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA0u;
label_2e1ba0:
    // 0x2e1ba0: 0xc0c1108  jal         func_304420
    ctx->pc = 0x2E1BA0u;
    SET_GPR_U32(ctx, 31, 0x2E1BA8u);
    ctx->pc = 0x2E1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BA0u;
    // 0x2e1ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304420u, 0x2E1BA0u, 0x2E1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA8u;
label_2e1ba8:
    // 0x2e1ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1bb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BB4u;
        // 0x2e1bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1BBCu;
    // 0x2e1bbc: 0x0  nop
    ctx->pc = 0x2e1bbcu;
    // NOP
    ctx->pc = 0x2e1bc0u;
}
