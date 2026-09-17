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

// Function: sub_00323798
// Address: 0x323798 - 0x3237b8
void sub_00323798_0x323798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323798_0x323798");
#endif

    switch (ctx->pc) {
        case 0x3237acu: goto label_3237ac;
        default: break;
    }

    ctx->pc = 0x323798u;

    // 0x323798: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32379c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32379cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3237a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3237a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3237a4: 0xc0c90a2  jal         func_324288
    ctx->pc = 0x3237A4u;
    SET_GPR_U32(ctx, 31, 0x3237ACu);
    ctx->pc = 0x3237A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237A4u;
    // 0x3237a8: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324288u, 0x3237A4u, 0x3237ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237ACu;
label_3237ac:
    // 0x3237ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3237acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3237b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3237B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237B0u;
        // 0x3237b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3237B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3237B8u;
}
