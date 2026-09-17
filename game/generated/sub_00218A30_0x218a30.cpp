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

// Function: sub_00218A30
// Address: 0x218a30 - 0x218a80
void sub_00218A30_0x218a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218A30_0x218a30");
#endif

    switch (ctx->pc) {
        case 0x218a48u: goto label_218a48;
        case 0x218a50u: goto label_218a50;
        case 0x218a70u: goto label_218a70;
        default: break;
    }

    ctx->pc = 0x218a30u;

    // 0x218a30: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x218a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x218a34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218a40: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x218A40u;
    SET_GPR_U32(ctx, 31, 0x218A48u);
    ctx->pc = 0x218A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A40u;
    // 0x218a44: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x218A40u, 0x218A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A48u;
label_218a48:
    // 0x218a48: 0xc0b77d0  jal         func_2DDF40
    ctx->pc = 0x218A48u;
    SET_GPR_U32(ctx, 31, 0x218A50u);
    ctx->pc = 0x218A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A48u;
    // 0x218a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF40u, 0x218A48u, 0x218A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A50u;
label_218a50:
    // 0x218a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218A50u;
    {
        const bool branch_taken_0x218a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A50u;
        // 0x218a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a50) {
            ctx->pc = 0x218A68u;
            goto label_218a68;
        }
    }
    ctx->pc = 0x218A58u;
    // 0x218a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218a5c: 0x807c24c  j           func_1F0930
    ctx->pc = 0x218A5Cu;
    ctx->pc = 0x218A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A5Cu;
    // 0x218a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    sub_001F0930_0x1f0930(rdram, ctx, runtime); return;
    ctx->pc = 0x218A64u;
    // 0x218a64: 0x0  nop
    ctx->pc = 0x218a64u;
    // NOP
label_218a68:
    // 0x218a68: 0xc07c22a  jal         func_1F08A8
    ctx->pc = 0x218A68u;
    SET_GPR_U32(ctx, 31, 0x218A70u);
    ctx->pc = 0x218A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A68u;
    // 0x218a6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08A8u, 0x218A68u, 0x218A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A70u;
label_218a70:
    // 0x218a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218a74: 0x3e00008  jr          $ra
    ctx->pc = 0x218A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A74u;
        // 0x218a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218A7Cu;
    // 0x218a7c: 0x0  nop
    ctx->pc = 0x218a7cu;
    // NOP
    ctx->pc = 0x218a80u;
}
