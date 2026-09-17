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

// Function: sub_00276700
// Address: 0x276700 - 0x276728
void sub_00276700_0x276700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276700_0x276700");
#endif

    switch (ctx->pc) {
        case 0x276710u: goto label_276710;
        case 0x276718u: goto label_276718;
        default: break;
    }

    ctx->pc = 0x276700u;

    // 0x276700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276708: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x276708u;
    SET_GPR_U32(ctx, 31, 0x276710u);
    ctx->pc = 0x27670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276708u;
    // 0x27670c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x276708u, 0x276710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276710u;
label_276710:
    // 0x276710: 0xc09da36  jal         func_2768D8
    ctx->pc = 0x276710u;
    SET_GPR_U32(ctx, 31, 0x276718u);
    ctx->pc = 0x2768D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2768D8u, 0x276710u, 0x276718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276718u;
label_276718:
    // 0x276718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27671c: 0x3e00008  jr          $ra
    ctx->pc = 0x27671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27671Cu;
        // 0x276720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27671Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276724u;
    // 0x276724: 0x0  nop
    ctx->pc = 0x276724u;
    // NOP
    ctx->pc = 0x276728u;
}
