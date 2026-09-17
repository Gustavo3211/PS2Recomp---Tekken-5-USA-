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

// Function: sub_00293628
// Address: 0x293628 - 0x293658
void sub_00293628_0x293628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293628_0x293628");
#endif

    switch (ctx->pc) {
        case 0x293640u: goto label_293640;
        case 0x293648u: goto label_293648;
        default: break;
    }

    ctx->pc = 0x293628u;

    // 0x293628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29362c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293634: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x293634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x293638: 0xc08b882  jal         func_22E208
    ctx->pc = 0x293638u;
    SET_GPR_U32(ctx, 31, 0x293640u);
    ctx->pc = 0x29363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293638u;
    // 0x29363c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x293638u, 0x293640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293640u;
label_293640:
    // 0x293640: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x293640u;
    SET_GPR_U32(ctx, 31, 0x293648u);
    ctx->pc = 0x293644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293640u;
    // 0x293644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x293640u, 0x293648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293648u;
label_293648:
    // 0x293648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29364c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293650: 0x3e00008  jr          $ra
    ctx->pc = 0x293650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293650u;
        // 0x293654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293658u;
}
