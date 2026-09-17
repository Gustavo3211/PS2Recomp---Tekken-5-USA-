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

// Function: sub_0024AFA8
// Address: 0x24afa8 - 0x24afc8
void sub_0024AFA8_0x24afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AFA8_0x24afa8");
#endif

    switch (ctx->pc) {
        case 0x24afb8u: goto label_24afb8;
        default: break;
    }

    ctx->pc = 0x24afa8u;

    // 0x24afa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24afac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24afb0: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x24AFB0u;
    SET_GPR_U32(ctx, 31, 0x24AFB8u);
    ctx->pc = 0x24AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFB0u;
    // 0x24afb4: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x24AFB0u, 0x24AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFB8u;
label_24afb8:
    // 0x24afb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24afbc: 0x3e00008  jr          $ra
    ctx->pc = 0x24AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFBCu;
        // 0x24afc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AFC4u;
    // 0x24afc4: 0x0  nop
    ctx->pc = 0x24afc4u;
    // NOP
    ctx->pc = 0x24afc8u;
}
