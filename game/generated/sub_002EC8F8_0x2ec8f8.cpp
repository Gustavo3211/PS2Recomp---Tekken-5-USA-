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

// Function: sub_002EC8F8
// Address: 0x2ec8f8 - 0x2ec920
void sub_002EC8F8_0x2ec8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC8F8_0x2ec8f8");
#endif

    switch (ctx->pc) {
        case 0x2ec908u: goto label_2ec908;
        case 0x2ec914u: goto label_2ec914;
        default: break;
    }

    ctx->pc = 0x2ec8f8u;

    // 0x2ec8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec900: 0xc0bbf56  jal         func_2EFD58
    ctx->pc = 0x2EC900u;
    SET_GPR_U32(ctx, 31, 0x2EC908u);
    ctx->pc = 0x2EFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD58u, 0x2EC900u, 0x2EC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC908u;
label_2ec908:
    // 0x2ec908: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2ec908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ec90c: 0xc092472  jal         func_2491C8
    ctx->pc = 0x2EC90Cu;
    SET_GPR_U32(ctx, 31, 0x2EC914u);
    ctx->pc = 0x2EC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC90Cu;
    // 0x2ec910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491C8u, 0x2EC90Cu, 0x2EC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC914u;
label_2ec914:
    // 0x2ec914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec918: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC918u;
        // 0x2ec91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC920u;
}
