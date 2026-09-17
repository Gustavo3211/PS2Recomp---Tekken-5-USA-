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

// Function: sub_0029B1A0
// Address: 0x29b1a0 - 0x29b1d8
void sub_0029B1A0_0x29b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B1A0_0x29b1a0");
#endif

    switch (ctx->pc) {
        case 0x29b1b4u: goto label_29b1b4;
        case 0x29b1bcu: goto label_29b1bc;
        case 0x29b1c4u: goto label_29b1c4;
        default: break;
    }

    ctx->pc = 0x29b1a0u;

    // 0x29b1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29b1ac: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x29B1ACu;
    SET_GPR_U32(ctx, 31, 0x29B1B4u);
    ctx->pc = 0x29B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1ACu;
    // 0x29b1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x29B1ACu, 0x29B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1B4u;
label_29b1b4:
    // 0x29b1b4: 0xc08b882  jal         func_22E208
    ctx->pc = 0x29B1B4u;
    SET_GPR_U32(ctx, 31, 0x29B1BCu);
    ctx->pc = 0x29B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1B4u;
    // 0x29b1b8: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x29B1B4u, 0x29B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1BCu;
label_29b1bc:
    // 0x29b1bc: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x29B1BCu;
    SET_GPR_U32(ctx, 31, 0x29B1C4u);
    ctx->pc = 0x29B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1BCu;
    // 0x29b1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x29B1BCu, 0x29B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1C4u;
label_29b1c4:
    // 0x29b1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b1c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29b1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1CCu;
        // 0x29b1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B1D4u;
    // 0x29b1d4: 0x0  nop
    ctx->pc = 0x29b1d4u;
    // NOP
    ctx->pc = 0x29b1d8u;
}
