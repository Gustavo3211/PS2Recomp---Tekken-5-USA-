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

// Function: sub_003615A0
// Address: 0x3615a0 - 0x3615d0
void sub_003615A0_0x3615a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003615A0_0x3615a0");
#endif

    switch (ctx->pc) {
        case 0x3615b0u: goto label_3615b0;
        case 0x3615b8u: goto label_3615b8;
        case 0x3615c0u: goto label_3615c0;
        default: break;
    }

    ctx->pc = 0x3615a0u;

    // 0x3615a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3615a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3615a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3615a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3615a8: 0xc0d776a  jal         func_35DDA8
    ctx->pc = 0x3615A8u;
    SET_GPR_U32(ctx, 31, 0x3615B0u);
    ctx->pc = 0x35DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDA8u, 0x3615A8u, 0x3615B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615B0u;
label_3615b0:
    // 0x3615b0: 0xc0d8574  jal         func_3615D0
    ctx->pc = 0x3615B0u;
    SET_GPR_U32(ctx, 31, 0x3615B8u);
    ctx->pc = 0x3615B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615B0u;
    // 0x3615b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3615D0u, 0x3615B0u, 0x3615B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615B8u;
label_3615b8:
    // 0x3615b8: 0xc0d92d6  jal         func_364B58
    ctx->pc = 0x3615B8u;
    SET_GPR_U32(ctx, 31, 0x3615C0u);
    ctx->pc = 0x364B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B58u, 0x3615B8u, 0x3615C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615C0u;
label_3615c0:
    // 0x3615c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3615c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3615c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3615c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3615C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3615CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615C8u;
        // 0x3615cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3615C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3615D0u;
}
