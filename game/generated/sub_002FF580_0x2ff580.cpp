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

// Function: sub_002FF580
// Address: 0x2ff580 - 0x2ff5a8
void sub_002FF580_0x2ff580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF580_0x2ff580");
#endif

    switch (ctx->pc) {
        case 0x2ff598u: goto label_2ff598;
        default: break;
    }

    ctx->pc = 0x2ff580u;

    // 0x2ff580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff584: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ff584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff588: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x2ff588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2ff58c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff590: 0xc0b2bda  jal         func_2CAF68
    ctx->pc = 0x2FF590u;
    SET_GPR_U32(ctx, 31, 0x2FF598u);
    ctx->pc = 0x2FF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF590u;
    // 0x2ff594: 0x24840084  addiu       $a0, $a0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF68u, 0x2FF590u, 0x2FF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF598u;
label_2ff598:
    // 0x2ff598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A0u;
        // 0x2ff5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF5A8u;
}
