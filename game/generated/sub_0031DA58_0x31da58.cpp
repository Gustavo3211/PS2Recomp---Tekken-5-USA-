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

// Function: sub_0031DA58
// Address: 0x31da58 - 0x31da88
void sub_0031DA58_0x31da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA58_0x31da58");
#endif

    switch (ctx->pc) {
        case 0x31da6cu: goto label_31da6c;
        default: break;
    }

    ctx->pc = 0x31da58u;

    // 0x31da58: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31da5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31da5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31da60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31da64: 0xc0c76a2  jal         func_31DA88
    ctx->pc = 0x31DA64u;
    SET_GPR_U32(ctx, 31, 0x31DA6Cu);
    ctx->pc = 0x31DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA64u;
    // 0x31da68: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DA88u, 0x31DA64u, 0x31DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA6Cu;
label_31da6c:
    // 0x31da6c: 0xf  sync
    ctx->pc = 0x31da6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x31da70: 0x42000038  ei
    ctx->pc = 0x31da70u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x31da74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31da78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31da78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA7Cu;
        // 0x31da80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA84u;
    // 0x31da84: 0x0  nop
    ctx->pc = 0x31da84u;
    // NOP
    ctx->pc = 0x31da88u;
}
