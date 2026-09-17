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

// Function: sub_00337B40
// Address: 0x337b40 - 0x337b80
void sub_00337B40_0x337b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337B40_0x337b40");
#endif

    switch (ctx->pc) {
        case 0x337b54u: goto label_337b54;
        case 0x337b5cu: goto label_337b5c;
        default: break;
    }

    ctx->pc = 0x337b40u;

    // 0x337b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337b48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x337b4c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337B4Cu;
    SET_GPR_U32(ctx, 31, 0x337B54u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337B4Cu, 0x337B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B54u;
label_337b54:
    // 0x337b54: 0xc0cdeb4  jal         func_337AD0
    ctx->pc = 0x337B54u;
    SET_GPR_U32(ctx, 31, 0x337B5Cu);
    ctx->pc = 0x337B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B54u;
    // 0x337b58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AD0u, 0x337B54u, 0x337B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B5Cu;
label_337b5c:
    // 0x337b5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337B5Cu;
    {
        const bool branch_taken_0x337b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B5Cu;
        // 0x337b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b5c) {
            ctx->pc = 0x337B70u;
            goto label_337b70;
        }
    }
    ctx->pc = 0x337B64u;
    // 0x337b64: 0xf  sync
    ctx->pc = 0x337b64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337b68: 0x42000038  ei
    ctx->pc = 0x337b68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337b70:
    // 0x337b70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x337b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337b74: 0x3e00008  jr          $ra
    ctx->pc = 0x337B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B74u;
        // 0x337b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337B7Cu;
    // 0x337b7c: 0x0  nop
    ctx->pc = 0x337b7cu;
    // NOP
    ctx->pc = 0x337b80u;
}
