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

// Function: sub_002A49D0
// Address: 0x2a49d0 - 0x2a4a00
void sub_002A49D0_0x2a49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A49D0_0x2a49d0");
#endif

    switch (ctx->pc) {
        case 0x2a49e8u: goto label_2a49e8;
        case 0x2a49f0u: goto label_2a49f0;
        default: break;
    }

    ctx->pc = 0x2a49d0u;

    // 0x2a49d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a49d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a49d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a49d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a49dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a49e0: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A49E0u;
    SET_GPR_U32(ctx, 31, 0x2A49E8u);
    ctx->pc = 0x2A49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49E0u;
    // 0x2a49e4: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A49E0u, 0x2A49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49E8u;
label_2a49e8:
    // 0x2a49e8: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2A49E8u;
    SET_GPR_U32(ctx, 31, 0x2A49F0u);
    ctx->pc = 0x2A49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49E8u;
    // 0x2a49ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2A49E8u, 0x2A49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F0u;
label_2a49f0:
    // 0x2a49f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a49f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a49f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a49f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a49f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A49F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49F8u;
        // 0x2a49fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A49F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4A00u;
}
