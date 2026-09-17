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

// Function: sub_00305138
// Address: 0x305138 - 0x305158
void sub_00305138_0x305138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305138_0x305138");
#endif

    switch (ctx->pc) {
        case 0x305148u: goto label_305148;
        default: break;
    }

    ctx->pc = 0x305138u;

    // 0x305138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30513c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305140: 0xc0bff8e  jal         func_2FFE38
    ctx->pc = 0x305140u;
    SET_GPR_U32(ctx, 31, 0x305148u);
    ctx->pc = 0x305144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305140u;
    // 0x305144: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFE38u, 0x305140u, 0x305148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305148u;
label_305148:
    // 0x305148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30514c: 0x3e00008  jr          $ra
    ctx->pc = 0x30514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30514Cu;
        // 0x305150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305154u;
    // 0x305154: 0x0  nop
    ctx->pc = 0x305154u;
    // NOP
    ctx->pc = 0x305158u;
}
