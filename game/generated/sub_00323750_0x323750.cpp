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

// Function: sub_00323750
// Address: 0x323750 - 0x323778
void sub_00323750_0x323750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323750_0x323750");
#endif

    switch (ctx->pc) {
        case 0x323768u: goto label_323768;
        default: break;
    }

    ctx->pc = 0x323750u;

    // 0x323750: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x323750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323754: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32375c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323760: 0xc0c9054  jal         func_324150
    ctx->pc = 0x323760u;
    SET_GPR_U32(ctx, 31, 0x323768u);
    ctx->pc = 0x323764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323760u;
    // 0x323764: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324150u, 0x323760u, 0x323768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323768u;
label_323768:
    // 0x323768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32376c: 0x3e00008  jr          $ra
    ctx->pc = 0x32376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32376Cu;
        // 0x323770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323774u;
    // 0x323774: 0x0  nop
    ctx->pc = 0x323774u;
    // NOP
    ctx->pc = 0x323778u;
}
