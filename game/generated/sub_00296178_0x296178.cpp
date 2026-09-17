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

// Function: sub_00296178
// Address: 0x296178 - 0x2961b0
void sub_00296178_0x296178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296178_0x296178");
#endif

    switch (ctx->pc) {
        case 0x296190u: goto label_296190;
        case 0x296198u: goto label_296198;
        case 0x2961a0u: goto label_2961a0;
        default: break;
    }

    ctx->pc = 0x296178u;

    // 0x296178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29617c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296184: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296188: 0xc08b882  jal         func_22E208
    ctx->pc = 0x296188u;
    SET_GPR_U32(ctx, 31, 0x296190u);
    ctx->pc = 0x29618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296188u;
    // 0x29618c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x296188u, 0x296190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296190u;
label_296190:
    // 0x296190: 0xc08b882  jal         func_22E208
    ctx->pc = 0x296190u;
    SET_GPR_U32(ctx, 31, 0x296198u);
    ctx->pc = 0x296194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296190u;
    // 0x296194: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x296190u, 0x296198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296198u;
label_296198:
    // 0x296198: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x296198u;
    SET_GPR_U32(ctx, 31, 0x2961A0u);
    ctx->pc = 0x29619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296198u;
    // 0x29619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x296198u, 0x2961A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961A0u;
label_2961a0:
    // 0x2961a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2961a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2961a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2961a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2961a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2961A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961A8u;
        // 0x2961ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961B0u;
}
