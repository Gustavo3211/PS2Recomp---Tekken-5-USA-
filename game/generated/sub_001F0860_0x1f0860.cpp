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

// Function: sub_001F0860
// Address: 0x1f0860 - 0x1f08a8
void sub_001F0860_0x1f0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0860_0x1f0860");
#endif

    switch (ctx->pc) {
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0894u: goto label_1f0894;
        default: break;
    }

    ctx->pc = 0x1f0860u;

    // 0x1f0860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0868: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f0868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f086c: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x1F086Cu;
    SET_GPR_U32(ctx, 31, 0x1F0874u);
    ctx->pc = 0x1F0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F086Cu;
    // 0x1f0870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x1F086Cu, 0x1F0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0874u;
label_1f0874:
    // 0x1f0874: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1f0874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1f0878: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f087c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F087Cu;
    SET_GPR_U32(ctx, 31, 0x1F0884u);
    ctx->pc = 0x1F0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F087Cu;
    // 0x1f0880: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F087Cu, 0x1F0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0884u;
label_1f0884:
    // 0x1f0884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0888: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1f0888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1f088c: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x1F088Cu;
    SET_GPR_U32(ctx, 31, 0x1F0894u);
    ctx->pc = 0x1F0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F088Cu;
    // 0x1f0890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x1F088Cu, 0x1F0894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0894u;
label_1f0894:
    // 0x1f0894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f089c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F089Cu;
        // 0x1f08a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F08A4u;
    // 0x1f08a4: 0x0  nop
    ctx->pc = 0x1f08a4u;
    // NOP
    ctx->pc = 0x1f08a8u;
}
