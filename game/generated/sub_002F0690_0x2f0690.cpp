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

// Function: sub_002F0690
// Address: 0x2f0690 - 0x2f06d0
void sub_002F0690_0x2f0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0690_0x2f0690");
#endif

    switch (ctx->pc) {
        case 0x2f06b4u: goto label_2f06b4;
        default: break;
    }

    ctx->pc = 0x2f0690u;

    // 0x2f0690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f069c: 0x24065780  addiu       $a2, $zero, 0x5780
    ctx->pc = 0x2f069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    // 0x2f06a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f06a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f06a4: 0x244557a0  addiu       $a1, $v0, 0x57A0
    ctx->pc = 0x2f06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22432));
    // 0x2f06a8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2f06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2f06ac: 0xc04a100  jal         func_128400
    ctx->pc = 0x2F06ACu;
    SET_GPR_U32(ctx, 31, 0x2F06B4u);
    ctx->pc = 0x2F06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06ACu;
    // 0x2f06b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x2F06ACu, 0x2F06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06B4u;
label_2f06b4:
    // 0x2f06b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f06b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f06b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f06b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f06bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2f06bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2f06c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f06c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f06c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06C4u;
        // 0x2f06c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F06C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F06CCu;
    // 0x2f06cc: 0x0  nop
    ctx->pc = 0x2f06ccu;
    // NOP
    ctx->pc = 0x2f06d0u;
}
