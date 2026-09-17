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

// Function: sub_002466B0
// Address: 0x2466b0 - 0x2466d8
void sub_002466B0_0x2466b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002466B0_0x2466b0");
#endif

    switch (ctx->pc) {
        case 0x2466c0u: goto label_2466c0;
        default: break;
    }

    ctx->pc = 0x2466b0u;

    // 0x2466b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2466b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2466b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2466b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2466b8: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x2466B8u;
    SET_GPR_U32(ctx, 31, 0x2466C0u);
    ctx->pc = 0x2466BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466B8u;
    // 0x2466bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x2466B8u, 0x2466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466C0u;
label_2466c0:
    // 0x2466c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2466c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466c4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2466C4u;
    {
        const bool branch_taken_0x2466c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2466c4) {
            ctx->pc = 0x2466C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2466C4u;
            // 0x2466c8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2466CCu;
            goto label_2466cc;
        }
    }
    ctx->pc = 0x2466CCu;
label_2466cc:
    // 0x2466cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2466ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2466d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2466D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466D0u;
        // 0x2466d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2466D8u;
}
