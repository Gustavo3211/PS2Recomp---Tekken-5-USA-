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

// Function: sub_003408C0
// Address: 0x3408c0 - 0x3408f0
void sub_003408C0_0x3408c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003408C0_0x3408c0");
#endif

    switch (ctx->pc) {
        case 0x3408d4u: goto label_3408d4;
        case 0x3408dcu: goto label_3408dc;
        default: break;
    }

    ctx->pc = 0x3408c0u;

    // 0x3408c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3408c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3408c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3408c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3408c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3408c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3408cc: 0xc0d029a  jal         func_340A68
    ctx->pc = 0x3408CCu;
    SET_GPR_U32(ctx, 31, 0x3408D4u);
    ctx->pc = 0x3408D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408CCu;
    // 0x3408d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A68u, 0x3408CCu, 0x3408D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408D4u;
label_3408d4:
    // 0x3408d4: 0xc0d0320  jal         func_340C80
    ctx->pc = 0x3408D4u;
    SET_GPR_U32(ctx, 31, 0x3408DCu);
    ctx->pc = 0x3408D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408D4u;
    // 0x3408d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340C80u, 0x3408D4u, 0x3408DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408DCu;
label_3408dc:
    // 0x3408dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3408dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3408e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3408e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3408e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3408E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3408E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408E4u;
        // 0x3408e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3408ECu;
    // 0x3408ec: 0x0  nop
    ctx->pc = 0x3408ecu;
    // NOP
    ctx->pc = 0x3408f0u;
}
