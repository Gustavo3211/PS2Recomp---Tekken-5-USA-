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

// Function: sub_002DAC90
// Address: 0x2dac90 - 0x2dacd8
void sub_002DAC90_0x2dac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAC90_0x2dac90");
#endif

    switch (ctx->pc) {
        case 0x2dacb8u: goto label_2dacb8;
        default: break;
    }

    ctx->pc = 0x2dac90u;

    // 0x2dac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dac94: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2dac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2dac98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dac9c: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2dac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2daca0: 0x2610c780  addiu       $s0, $s0, -0x3880
    ctx->pc = 0x2daca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952832));
    // 0x2daca4: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x2daca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x2daca8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2daca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dacacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dacb0: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2DACB0u;
    SET_GPR_U32(ctx, 31, 0x2DACB8u);
    ctx->pc = 0x2DACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACB0u;
    // 0x2dacb4: 0x2406009f  addiu       $a2, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2DACB0u, 0x2DACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACB8u;
label_2dacb8:
    // 0x2dacb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dacbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dacbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dacc0: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x2dacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
    // 0x2dacc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dacc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacc8: 0xaf90bbd0  sw          $s0, -0x4430($gp)
    ctx->pc = 0x2dacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 16));
    // 0x2daccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dacccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dacd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACD0u;
        // 0x2dacd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DACD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DACD8u;
}
