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

// Function: sub_002415B8
// Address: 0x2415b8 - 0x2415d8
void sub_002415B8_0x2415b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002415B8_0x2415b8");
#endif

    switch (ctx->pc) {
        case 0x2415c8u: goto label_2415c8;
        default: break;
    }

    ctx->pc = 0x2415b8u;

    // 0x2415b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2415b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2415bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2415bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2415c0: 0xc090556  jal         func_241558
    ctx->pc = 0x2415C0u;
    SET_GPR_U32(ctx, 31, 0x2415C8u);
    ctx->pc = 0x241558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241558u, 0x2415C0u, 0x2415C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415C8u;
label_2415c8:
    // 0x2415c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2415c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2415cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2415CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2415D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415CCu;
        // 0x2415d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2415CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2415D4u;
    // 0x2415d4: 0x0  nop
    ctx->pc = 0x2415d4u;
    // NOP
    ctx->pc = 0x2415d8u;
}
