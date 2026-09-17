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

// Function: sub_0033C068
// Address: 0x33c068 - 0x33c098
void sub_0033C068_0x33c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C068_0x33c068");
#endif

    switch (ctx->pc) {
        case 0x33c080u: goto label_33c080;
        default: break;
    }

    ctx->pc = 0x33c068u;

    // 0x33c068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c074: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33c078: 0xc0dd828  jal         func_3760A0
    ctx->pc = 0x33C078u;
    SET_GPR_U32(ctx, 31, 0x33C080u);
    ctx->pc = 0x33C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C078u;
    // 0x33c07c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760A0u, 0x33C078u, 0x33C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C080u;
label_33c080:
    // 0x33c080: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33c080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33c084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c08c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C08Cu;
        // 0x33c090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C094u;
    // 0x33c094: 0x0  nop
    ctx->pc = 0x33c094u;
    // NOP
    ctx->pc = 0x33c098u;
}
