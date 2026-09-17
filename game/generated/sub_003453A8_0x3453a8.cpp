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

// Function: sub_003453A8
// Address: 0x3453a8 - 0x3453c8
void sub_003453A8_0x3453a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003453A8_0x3453a8");
#endif

    switch (ctx->pc) {
        case 0x3453b8u: goto label_3453b8;
        default: break;
    }

    ctx->pc = 0x3453a8u;

    // 0x3453a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3453a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3453ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3453acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3453b0: 0xc0d12d2  jal         func_344B48
    ctx->pc = 0x3453B0u;
    SET_GPR_U32(ctx, 31, 0x3453B8u);
    ctx->pc = 0x3453B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453B0u;
    // 0x3453b4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344B48u, 0x3453B0u, 0x3453B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453B8u;
label_3453b8:
    // 0x3453b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3453b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3453bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3453BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3453C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453BCu;
        // 0x3453c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3453C4u;
    // 0x3453c4: 0x0  nop
    ctx->pc = 0x3453c4u;
    // NOP
    ctx->pc = 0x3453c8u;
}
