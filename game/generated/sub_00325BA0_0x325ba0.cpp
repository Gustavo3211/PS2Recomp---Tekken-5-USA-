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

// Function: sub_00325BA0
// Address: 0x325ba0 - 0x325bc8
void sub_00325BA0_0x325ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325BA0_0x325ba0");
#endif

    switch (ctx->pc) {
        case 0x325bb8u: goto label_325bb8;
        default: break;
    }

    ctx->pc = 0x325ba0u;

    // 0x325ba0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x325ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ba4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x325ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x325ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325bb0: 0xc0c9778  jal         func_325DE0
    ctx->pc = 0x325BB0u;
    SET_GPR_U32(ctx, 31, 0x325BB8u);
    ctx->pc = 0x325BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BB0u;
    // 0x325bb4: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DE0u, 0x325BB0u, 0x325BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BB8u;
label_325bb8:
    // 0x325bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x325BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BBCu;
        // 0x325bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325BC4u;
    // 0x325bc4: 0x0  nop
    ctx->pc = 0x325bc4u;
    // NOP
    ctx->pc = 0x325bc8u;
}
