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

// Function: sub_0028ABC8
// Address: 0x28abc8 - 0x28abf8
void sub_0028ABC8_0x28abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ABC8_0x28abc8");
#endif

    switch (ctx->pc) {
        case 0x28abe0u: goto label_28abe0;
        case 0x28abe8u: goto label_28abe8;
        default: break;
    }

    ctx->pc = 0x28abc8u;

    // 0x28abc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28abcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28abd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28abd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28abd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28abd8: 0xc08b882  jal         func_22E208
    ctx->pc = 0x28ABD8u;
    SET_GPR_U32(ctx, 31, 0x28ABE0u);
    ctx->pc = 0x28ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABD8u;
    // 0x28abdc: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x28ABD8u, 0x28ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABE0u;
label_28abe0:
    // 0x28abe0: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x28ABE0u;
    SET_GPR_U32(ctx, 31, 0x28ABE8u);
    ctx->pc = 0x28ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABE0u;
    // 0x28abe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x28ABE0u, 0x28ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABE8u;
label_28abe8:
    // 0x28abe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28abe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28abec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28abecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x28ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF0u;
        // 0x28abf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABF8u;
}
