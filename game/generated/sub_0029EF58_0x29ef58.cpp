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

// Function: sub_0029EF58
// Address: 0x29ef58 - 0x29efa8
void sub_0029EF58_0x29ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF58_0x29ef58");
#endif

    switch (ctx->pc) {
        case 0x29ef6cu: goto label_29ef6c;
        case 0x29ef74u: goto label_29ef74;
        case 0x29ef7cu: goto label_29ef7c;
        case 0x29ef84u: goto label_29ef84;
        case 0x29ef8cu: goto label_29ef8c;
        case 0x29ef94u: goto label_29ef94;
        default: break;
    }

    ctx->pc = 0x29ef58u;

    // 0x29ef58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ef5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ef60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29ef64: 0xc0a7c4e  jal         func_29F138
    ctx->pc = 0x29EF64u;
    SET_GPR_U32(ctx, 31, 0x29EF6Cu);
    ctx->pc = 0x29EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF64u;
    // 0x29ef68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F138u, 0x29EF64u, 0x29EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF6Cu;
label_29ef6c:
    // 0x29ef6c: 0xc0a8338  jal         func_2A0CE0
    ctx->pc = 0x29EF6Cu;
    SET_GPR_U32(ctx, 31, 0x29EF74u);
    ctx->pc = 0x29EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF6Cu;
    // 0x29ef70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CE0u, 0x29EF6Cu, 0x29EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF74u;
label_29ef74:
    // 0x29ef74: 0xc0a85d2  jal         func_2A1748
    ctx->pc = 0x29EF74u;
    SET_GPR_U32(ctx, 31, 0x29EF7Cu);
    ctx->pc = 0x29EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF74u;
    // 0x29ef78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1748u, 0x29EF74u, 0x29EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF7Cu;
label_29ef7c:
    // 0x29ef7c: 0xc0a84b2  jal         func_2A12C8
    ctx->pc = 0x29EF7Cu;
    SET_GPR_U32(ctx, 31, 0x29EF84u);
    ctx->pc = 0x29EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF7Cu;
    // 0x29ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12C8u, 0x29EF7Cu, 0x29EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF84u;
label_29ef84:
    // 0x29ef84: 0xc0a7e44  jal         func_29F910
    ctx->pc = 0x29EF84u;
    SET_GPR_U32(ctx, 31, 0x29EF8Cu);
    ctx->pc = 0x29EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF84u;
    // 0x29ef88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F910u, 0x29EF84u, 0x29EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF8Cu;
label_29ef8c:
    // 0x29ef8c: 0xc0a88f6  jal         func_2A23D8
    ctx->pc = 0x29EF8Cu;
    SET_GPR_U32(ctx, 31, 0x29EF94u);
    ctx->pc = 0x29EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF8Cu;
    // 0x29ef90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23D8u, 0x29EF8Cu, 0x29EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF94u;
label_29ef94:
    // 0x29ef94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ef94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ef98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF9Cu;
        // 0x29efa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EFA4u;
    // 0x29efa4: 0x0  nop
    ctx->pc = 0x29efa4u;
    // NOP
    ctx->pc = 0x29efa8u;
}
