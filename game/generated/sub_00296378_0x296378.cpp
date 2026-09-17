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

// Function: sub_00296378
// Address: 0x296378 - 0x2963a8
void sub_00296378_0x296378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296378_0x296378");
#endif

    switch (ctx->pc) {
        case 0x296390u: goto label_296390;
        case 0x296398u: goto label_296398;
        default: break;
    }

    ctx->pc = 0x296378u;

    // 0x296378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29637c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296384: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296388: 0xc08b882  jal         func_22E208
    ctx->pc = 0x296388u;
    SET_GPR_U32(ctx, 31, 0x296390u);
    ctx->pc = 0x29638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296388u;
    // 0x29638c: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x296388u, 0x296390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296390u;
label_296390:
    // 0x296390: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x296390u;
    SET_GPR_U32(ctx, 31, 0x296398u);
    ctx->pc = 0x296394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296390u;
    // 0x296394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x296390u, 0x296398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296398u;
label_296398:
    // 0x296398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29639c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29639cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2963a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2963A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2963A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963A0u;
        // 0x2963a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2963A8u;
}
