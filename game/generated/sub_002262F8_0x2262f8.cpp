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

// Function: sub_002262F8
// Address: 0x2262f8 - 0x226328
void sub_002262F8_0x2262f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002262F8_0x2262f8");
#endif

    switch (ctx->pc) {
        case 0x226308u: goto label_226308;
        case 0x226310u: goto label_226310;
        case 0x226318u: goto label_226318;
        default: break;
    }

    ctx->pc = 0x2262f8u;

    // 0x2262f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2262fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2262fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226300: 0xc089890  jal         func_226240
    ctx->pc = 0x226300u;
    SET_GPR_U32(ctx, 31, 0x226308u);
    ctx->pc = 0x226304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226300u;
    // 0x226304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x226300u, 0x226308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226308u;
label_226308:
    // 0x226308: 0xc089890  jal         func_226240
    ctx->pc = 0x226308u;
    SET_GPR_U32(ctx, 31, 0x226310u);
    ctx->pc = 0x22630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226308u;
    // 0x22630c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x226308u, 0x226310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226310u;
label_226310:
    // 0x226310: 0xc089890  jal         func_226240
    ctx->pc = 0x226310u;
    SET_GPR_U32(ctx, 31, 0x226318u);
    ctx->pc = 0x226314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226310u;
    // 0x226314: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x226310u, 0x226318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226318u;
label_226318:
    // 0x226318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22631c: 0x3e00008  jr          $ra
    ctx->pc = 0x22631Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22631Cu;
        // 0x226320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22631Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226324u;
    // 0x226324: 0x0  nop
    ctx->pc = 0x226324u;
    // NOP
    ctx->pc = 0x226328u;
}
