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

// Function: sub_001F0A60
// Address: 0x1f0a60 - 0x1f0ab8
void sub_001F0A60_0x1f0a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0A60_0x1f0a60");
#endif

    switch (ctx->pc) {
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a94u: goto label_1f0a94;
        default: break;
    }

    ctx->pc = 0x1f0a60u;

    // 0x1f0a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0a68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f0a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f0a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0a7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f0a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f0a80: 0xc07c26e  jal         func_1F09B8
    ctx->pc = 0x1F0A80u;
    SET_GPR_U32(ctx, 31, 0x1F0A88u);
    ctx->pc = 0x1F0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A80u;
    // 0x1f0a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F09B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F09B8u, 0x1F0A80u, 0x1F0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A88u;
label_1f0a88:
    // 0x1f0a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a8c: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x1F0A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A94u);
    ctx->pc = 0x1F0A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A8Cu;
    // 0x1f0a90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0A8u, 0x1F0A8Cu, 0x1F0A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A94u;
label_1f0a94:
    // 0x1f0a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f0a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0aa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f0aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0aac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f0aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0ab0: 0x808fee8  j           func_23FBA0
    ctx->pc = 0x1F0AB0u;
    ctx->pc = 0x1F0AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AB0u;
    // 0x1f0ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FBA0u, 0x1F0AB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F0AB8u;
}
