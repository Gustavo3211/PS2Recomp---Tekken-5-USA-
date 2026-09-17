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

// Function: sub_0029DD10
// Address: 0x29dd10 - 0x29dd40
void sub_0029DD10_0x29dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DD10_0x29dd10");
#endif

    switch (ctx->pc) {
        case 0x29dd24u: goto label_29dd24;
        case 0x29dd2cu: goto label_29dd2c;
        default: break;
    }

    ctx->pc = 0x29dd10u;

    // 0x29dd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29dd14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dd18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29dd1c: 0xc0a7750  jal         func_29DD40
    ctx->pc = 0x29DD1Cu;
    SET_GPR_U32(ctx, 31, 0x29DD24u);
    ctx->pc = 0x29DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD1Cu;
    // 0x29dd20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD40u, 0x29DD1Cu, 0x29DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD24u;
label_29dd24:
    // 0x29dd24: 0xc0a7842  jal         func_29E108
    ctx->pc = 0x29DD24u;
    SET_GPR_U32(ctx, 31, 0x29DD2Cu);
    ctx->pc = 0x29DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD24u;
    // 0x29dd28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E108u, 0x29DD24u, 0x29DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD2Cu;
label_29dd2c:
    // 0x29dd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dd30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29dd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29dd34: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD34u;
        // 0x29dd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DD3Cu;
    // 0x29dd3c: 0x0  nop
    ctx->pc = 0x29dd3cu;
    // NOP
    ctx->pc = 0x29dd40u;
}
