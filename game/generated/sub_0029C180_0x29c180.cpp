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

// Function: sub_0029C180
// Address: 0x29c180 - 0x29c1b0
void sub_0029C180_0x29c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C180_0x29c180");
#endif

    switch (ctx->pc) {
        case 0x29c194u: goto label_29c194;
        case 0x29c19cu: goto label_29c19c;
        default: break;
    }

    ctx->pc = 0x29c180u;

    // 0x29c180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29c18c: 0xc0a706c  jal         func_29C1B0
    ctx->pc = 0x29C18Cu;
    SET_GPR_U32(ctx, 31, 0x29C194u);
    ctx->pc = 0x29C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C18Cu;
    // 0x29c190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C1B0u, 0x29C18Cu, 0x29C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C194u;
label_29c194:
    // 0x29c194: 0xc0a71a0  jal         func_29C680
    ctx->pc = 0x29C194u;
    SET_GPR_U32(ctx, 31, 0x29C19Cu);
    ctx->pc = 0x29C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C194u;
    // 0x29c198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C680u, 0x29C194u, 0x29C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C19Cu;
label_29c19c:
    // 0x29c19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c1a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1A4u;
        // 0x29c1a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C1ACu;
    // 0x29c1ac: 0x0  nop
    ctx->pc = 0x29c1acu;
    // NOP
    ctx->pc = 0x29c1b0u;
}
