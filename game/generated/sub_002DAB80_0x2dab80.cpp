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

// Function: sub_002DAB80
// Address: 0x2dab80 - 0x2daba8
void sub_002DAB80_0x2dab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB80_0x2dab80");
#endif

    switch (ctx->pc) {
        case 0x2dab90u: goto label_2dab90;
        default: break;
    }

    ctx->pc = 0x2dab80u;

    // 0x2dab80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dab84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dab88: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2DAB88u;
    SET_GPR_U32(ctx, 31, 0x2DAB90u);
    ctx->pc = 0x2DAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB88u;
    // 0x2dab8c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2DAB88u, 0x2DAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB90u;
label_2dab90:
    // 0x2dab90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dab94: 0xaf80bbd0  sw          $zero, -0x4430($gp)
    ctx->pc = 0x2dab94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 0));
    // 0x2dab98: 0xaf80bbdc  sw          $zero, -0x4424($gp)
    ctx->pc = 0x2dab98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 0));
    // 0x2dab9c: 0xaf80bbd4  sw          $zero, -0x442C($gp)
    ctx->pc = 0x2dab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949844), GPR_U32(ctx, 0));
    // 0x2daba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABA0u;
        // 0x2daba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DABA8u;
}
