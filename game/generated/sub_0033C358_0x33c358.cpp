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

// Function: sub_0033C358
// Address: 0x33c358 - 0x33c390
void sub_0033C358_0x33c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C358_0x33c358");
#endif

    switch (ctx->pc) {
        case 0x33c378u: goto label_33c378;
        default: break;
    }

    ctx->pc = 0x33c358u;

    // 0x33c358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c368: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x33c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33c36c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33c370: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x33C370u;
    SET_GPR_U32(ctx, 31, 0x33C378u);
    ctx->pc = 0x33C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C370u;
    // 0x33c374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x33C370u, 0x33C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C378u;
label_33c378:
    // 0x33c378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c37c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33c380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c384: 0x3e00008  jr          $ra
    ctx->pc = 0x33C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C384u;
        // 0x33c388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C38Cu;
    // 0x33c38c: 0x0  nop
    ctx->pc = 0x33c38cu;
    // NOP
    ctx->pc = 0x33c390u;
}
