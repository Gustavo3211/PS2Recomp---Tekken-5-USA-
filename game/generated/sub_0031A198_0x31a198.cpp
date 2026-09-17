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

// Function: sub_0031A198
// Address: 0x31a198 - 0x31a1c0
void sub_0031A198_0x31a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A198_0x31a198");
#endif

    switch (ctx->pc) {
        case 0x31a1b0u: goto label_31a1b0;
        default: break;
    }

    ctx->pc = 0x31a198u;

    // 0x31a198: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31a198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a19c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x31a1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a1a8: 0xc0c701c  jal         func_31C070
    ctx->pc = 0x31A1A8u;
    SET_GPR_U32(ctx, 31, 0x31A1B0u);
    ctx->pc = 0x31A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1A8u;
    // 0x31a1ac: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C070u, 0x31A1A8u, 0x31A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1B0u;
label_31a1b0:
    // 0x31a1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1B4u;
        // 0x31a1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A1BCu;
    // 0x31a1bc: 0x0  nop
    ctx->pc = 0x31a1bcu;
    // NOP
    ctx->pc = 0x31a1c0u;
}
