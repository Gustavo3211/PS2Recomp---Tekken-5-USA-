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

// Function: sub_002A29B8
// Address: 0x2a29b8 - 0x2a29d8
void sub_002A29B8_0x2a29b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A29B8_0x2a29b8");
#endif

    switch (ctx->pc) {
        case 0x2a29ccu: goto label_2a29cc;
        default: break;
    }

    ctx->pc = 0x2a29b8u;

    // 0x2a29b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a29b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a29bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a29c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a29c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a29c4: 0xc0a8a38  jal         func_2A28E0
    ctx->pc = 0x2A29C4u;
    SET_GPR_U32(ctx, 31, 0x2A29CCu);
    ctx->pc = 0x2A29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29C4u;
    // 0x2a29c8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28E0u, 0x2A29C4u, 0x2A29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29CCu;
label_2a29cc:
    // 0x2a29cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a29ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a29d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A29D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29D0u;
        // 0x2a29d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A29D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A29D8u;
}
