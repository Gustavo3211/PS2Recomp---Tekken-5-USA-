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

// Function: sub_00342868
// Address: 0x342868 - 0x3428b8
void sub_00342868_0x342868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342868_0x342868");
#endif

    switch (ctx->pc) {
        case 0x34287cu: goto label_34287c;
        case 0x342884u: goto label_342884;
        case 0x34288cu: goto label_34288c;
        case 0x342894u: goto label_342894;
        case 0x34289cu: goto label_34289c;
        case 0x3428a4u: goto label_3428a4;
        default: break;
    }

    ctx->pc = 0x342868u;

    // 0x342868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34286c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34286cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342874: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342874u;
    SET_GPR_U32(ctx, 31, 0x34287Cu);
    ctx->pc = 0x342878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342874u;
    // 0x342878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342874u, 0x34287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34287Cu;
label_34287c:
    // 0x34287c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34287Cu;
    SET_GPR_U32(ctx, 31, 0x342884u);
    ctx->pc = 0x342880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34287Cu;
    // 0x342880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34287Cu, 0x342884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342884u;
label_342884:
    // 0x342884: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342884u;
    SET_GPR_U32(ctx, 31, 0x34288Cu);
    ctx->pc = 0x342888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342884u;
    // 0x342888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342884u, 0x34288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34288Cu;
label_34288c:
    // 0x34288c: 0xc0d094c  jal         func_342530
    ctx->pc = 0x34288Cu;
    SET_GPR_U32(ctx, 31, 0x342894u);
    ctx->pc = 0x342890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34288Cu;
    // 0x342890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x34288Cu, 0x342894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342894u;
label_342894:
    // 0x342894: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342894u;
    SET_GPR_U32(ctx, 31, 0x34289Cu);
    ctx->pc = 0x342898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342894u;
    // 0x342898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342894u, 0x34289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34289Cu;
label_34289c:
    // 0x34289c: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x34289Cu;
    SET_GPR_U32(ctx, 31, 0x3428A4u);
    ctx->pc = 0x3428A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34289Cu;
    // 0x3428a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x34289Cu, 0x3428A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428A4u;
label_3428a4:
    // 0x3428a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3428a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3428a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3428a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3428ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3428ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3428B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428ACu;
        // 0x3428b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3428B4u;
    // 0x3428b4: 0x0  nop
    ctx->pc = 0x3428b4u;
    // NOP
    ctx->pc = 0x3428b8u;
}
