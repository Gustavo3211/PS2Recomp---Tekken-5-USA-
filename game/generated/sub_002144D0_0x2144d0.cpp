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

// Function: sub_002144D0
// Address: 0x2144d0 - 0x214508
void sub_002144D0_0x2144d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002144D0_0x2144d0");
#endif

    switch (ctx->pc) {
        case 0x2144e4u: goto label_2144e4;
        case 0x2144f4u: goto label_2144f4;
        default: break;
    }

    ctx->pc = 0x2144d0u;

    // 0x2144d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2144d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2144d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2144d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2144d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2144d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2144dc: 0xc085142  jal         func_214508
    ctx->pc = 0x2144DCu;
    SET_GPR_U32(ctx, 31, 0x2144E4u);
    ctx->pc = 0x2144E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144DCu;
    // 0x2144e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214508u, 0x2144DCu, 0x2144E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144E4u;
label_2144e4:
    // 0x2144e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2144e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144e8: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2144ec: 0xc085148  jal         func_214520
    ctx->pc = 0x2144ECu;
    SET_GPR_U32(ctx, 31, 0x2144F4u);
    ctx->pc = 0x2144F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144ECu;
    // 0x2144f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214520u, 0x2144ECu, 0x2144F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144F4u;
label_2144f4:
    // 0x2144f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2144f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2144f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2144fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2144FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144FCu;
        // 0x214500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2144FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214504u;
    // 0x214504: 0x0  nop
    ctx->pc = 0x214504u;
    // NOP
    ctx->pc = 0x214508u;
}
