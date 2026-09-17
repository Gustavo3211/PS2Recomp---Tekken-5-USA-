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

// Function: sub_0028E9F0
// Address: 0x28e9f0 - 0x28ea20
void sub_0028E9F0_0x28e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E9F0_0x28e9f0");
#endif

    switch (ctx->pc) {
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea10u: goto label_28ea10;
        default: break;
    }

    ctx->pc = 0x28e9f0u;

    // 0x28e9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28ea00: 0xc08b882  jal         func_22E208
    ctx->pc = 0x28EA00u;
    SET_GPR_U32(ctx, 31, 0x28EA08u);
    ctx->pc = 0x28EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA00u;
    // 0x28ea04: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x28EA00u, 0x28EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA08u;
label_28ea08:
    // 0x28ea08: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x28EA08u;
    SET_GPR_U32(ctx, 31, 0x28EA10u);
    ctx->pc = 0x28EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA08u;
    // 0x28ea0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x28EA08u, 0x28EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA10u;
label_28ea10:
    // 0x28ea10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA18u;
        // 0x28ea1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA20u;
}
