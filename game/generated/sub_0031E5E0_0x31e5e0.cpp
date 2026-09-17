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

// Function: sub_0031E5E0
// Address: 0x31e5e0 - 0x31e600
void sub_0031E5E0_0x31e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E5E0_0x31e5e0");
#endif

    switch (ctx->pc) {
        case 0x31e5f4u: goto label_31e5f4;
        default: break;
    }

    ctx->pc = 0x31e5e0u;

    // 0x31e5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e5e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31e5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e5ec: 0xc0cf1da  jal         func_33C768
    ctx->pc = 0x31E5ECu;
    SET_GPR_U32(ctx, 31, 0x31E5F4u);
    ctx->pc = 0x31E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E5ECu;
    // 0x31e5f0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C768u, 0x31E5ECu, 0x31E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E5F4u;
label_31e5f4:
    // 0x31e5f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5F8u;
        // 0x31e5fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E600u;
}
