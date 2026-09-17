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

// Function: sub_002E9748
// Address: 0x2e9748 - 0x2e9780
void sub_002E9748_0x2e9748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9748_0x2e9748");
#endif

    switch (ctx->pc) {
        case 0x2e9760u: goto label_2e9760;
        case 0x2e976cu: goto label_2e976c;
        default: break;
    }

    ctx->pc = 0x2e9748u;

    // 0x2e9748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e974c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9754: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e9758: 0xc0ba5e0  jal         func_2E9780
    ctx->pc = 0x2E9758u;
    SET_GPR_U32(ctx, 31, 0x2E9760u);
    ctx->pc = 0x2E975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9758u;
    // 0x2e975c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9780u, 0x2E9758u, 0x2E9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9760u;
label_2e9760:
    // 0x2e9760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9764: 0xc0ba61e  jal         func_2E9878
    ctx->pc = 0x2E9764u;
    SET_GPR_U32(ctx, 31, 0x2E976Cu);
    ctx->pc = 0x2E9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9764u;
    // 0x2e9768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9878u, 0x2E9764u, 0x2E976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E976Cu;
label_2e976c:
    // 0x2e976c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e976cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e9770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9774: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9774u;
        // 0x2e9778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E977Cu;
    // 0x2e977c: 0x0  nop
    ctx->pc = 0x2e977cu;
    // NOP
    ctx->pc = 0x2e9780u;
}
