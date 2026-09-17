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

// Function: sub_00342A60
// Address: 0x342a60 - 0x342ac0
void sub_00342A60_0x342a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A60_0x342a60");
#endif

    switch (ctx->pc) {
        case 0x342a74u: goto label_342a74;
        case 0x342a7cu: goto label_342a7c;
        case 0x342a84u: goto label_342a84;
        case 0x342a8cu: goto label_342a8c;
        case 0x342a94u: goto label_342a94;
        case 0x342a9cu: goto label_342a9c;
        case 0x342aa4u: goto label_342aa4;
        case 0x342aacu: goto label_342aac;
        default: break;
    }

    ctx->pc = 0x342a60u;

    // 0x342a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342a68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342a6c: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342A6Cu;
    SET_GPR_U32(ctx, 31, 0x342A74u);
    ctx->pc = 0x342A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A6Cu;
    // 0x342a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342A6Cu, 0x342A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A74u;
label_342a74:
    // 0x342a74: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342A74u;
    SET_GPR_U32(ctx, 31, 0x342A7Cu);
    ctx->pc = 0x342A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A74u;
    // 0x342a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342A74u, 0x342A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A7Cu;
label_342a7c:
    // 0x342a7c: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342A7Cu;
    SET_GPR_U32(ctx, 31, 0x342A84u);
    ctx->pc = 0x342A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A7Cu;
    // 0x342a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342A7Cu, 0x342A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A84u;
label_342a84:
    // 0x342a84: 0xc0d094c  jal         func_342530
    ctx->pc = 0x342A84u;
    SET_GPR_U32(ctx, 31, 0x342A8Cu);
    ctx->pc = 0x342A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A84u;
    // 0x342a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x342A84u, 0x342A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A8Cu;
label_342a8c:
    // 0x342a8c: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342A8Cu;
    SET_GPR_U32(ctx, 31, 0x342A94u);
    ctx->pc = 0x342A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A8Cu;
    // 0x342a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342A8Cu, 0x342A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A94u;
label_342a94:
    // 0x342a94: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x342A94u;
    SET_GPR_U32(ctx, 31, 0x342A9Cu);
    ctx->pc = 0x342A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A94u;
    // 0x342a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x342A94u, 0x342A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A9Cu;
label_342a9c:
    // 0x342a9c: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x342A9Cu;
    SET_GPR_U32(ctx, 31, 0x342AA4u);
    ctx->pc = 0x342AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A9Cu;
    // 0x342aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x342A9Cu, 0x342AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AA4u;
label_342aa4:
    // 0x342aa4: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342AA4u;
    SET_GPR_U32(ctx, 31, 0x342AACu);
    ctx->pc = 0x342AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AA4u;
    // 0x342aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342AA4u, 0x342AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AACu;
label_342aac:
    // 0x342aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x342AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AB4u;
        // 0x342ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342ABCu;
    // 0x342abc: 0x0  nop
    ctx->pc = 0x342abcu;
    // NOP
    ctx->pc = 0x342ac0u;
}
