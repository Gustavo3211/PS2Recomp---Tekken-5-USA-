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

// Function: sub_002565C0
// Address: 0x2565c0 - 0x2565e8
void sub_002565C0_0x2565c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002565C0_0x2565c0");
#endif

    switch (ctx->pc) {
        case 0x2565d8u: goto label_2565d8;
        default: break;
    }

    ctx->pc = 0x2565c0u;

    // 0x2565c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2565c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2565c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2565c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2565c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2565cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2565ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2565d0: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2565D0u;
    SET_GPR_U32(ctx, 31, 0x2565D8u);
    ctx->pc = 0x2565D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565D0u;
    // 0x2565d4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2565D0u, 0x2565D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565D8u;
label_2565d8:
    // 0x2565d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2565d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2565dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2565DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2565E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565DCu;
        // 0x2565e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2565DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2565E4u;
    // 0x2565e4: 0x0  nop
    ctx->pc = 0x2565e4u;
    // NOP
    ctx->pc = 0x2565e8u;
}
