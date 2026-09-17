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

// Function: sub_003429B0
// Address: 0x3429b0 - 0x342a08
void sub_003429B0_0x3429b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003429B0_0x3429b0");
#endif

    switch (ctx->pc) {
        case 0x3429c4u: goto label_3429c4;
        case 0x3429ccu: goto label_3429cc;
        case 0x3429d4u: goto label_3429d4;
        case 0x3429dcu: goto label_3429dc;
        case 0x3429e4u: goto label_3429e4;
        case 0x3429ecu: goto label_3429ec;
        case 0x3429f4u: goto label_3429f4;
        default: break;
    }

    ctx->pc = 0x3429b0u;

    // 0x3429b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3429b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3429b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3429b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3429b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3429b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3429bc: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x3429BCu;
    SET_GPR_U32(ctx, 31, 0x3429C4u);
    ctx->pc = 0x3429C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429BCu;
    // 0x3429c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x3429BCu, 0x3429C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429C4u;
label_3429c4:
    // 0x3429c4: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3429C4u;
    SET_GPR_U32(ctx, 31, 0x3429CCu);
    ctx->pc = 0x3429C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429C4u;
    // 0x3429c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3429C4u, 0x3429CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429CCu;
label_3429cc:
    // 0x3429cc: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x3429CCu;
    SET_GPR_U32(ctx, 31, 0x3429D4u);
    ctx->pc = 0x3429D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429CCu;
    // 0x3429d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x3429CCu, 0x3429D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429D4u;
label_3429d4:
    // 0x3429d4: 0xc0d0958  jal         func_342560
    ctx->pc = 0x3429D4u;
    SET_GPR_U32(ctx, 31, 0x3429DCu);
    ctx->pc = 0x3429D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429D4u;
    // 0x3429d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x3429D4u, 0x3429DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429DCu;
label_3429dc:
    // 0x3429dc: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x3429DCu;
    SET_GPR_U32(ctx, 31, 0x3429E4u);
    ctx->pc = 0x3429E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429DCu;
    // 0x3429e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x3429DCu, 0x3429E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429E4u;
label_3429e4:
    // 0x3429e4: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x3429E4u;
    SET_GPR_U32(ctx, 31, 0x3429ECu);
    ctx->pc = 0x3429E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429E4u;
    // 0x3429e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x3429E4u, 0x3429ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429ECu;
label_3429ec:
    // 0x3429ec: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x3429ECu;
    SET_GPR_U32(ctx, 31, 0x3429F4u);
    ctx->pc = 0x3429F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3429ECu;
    // 0x3429f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x3429ECu, 0x3429F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429F4u;
label_3429f4:
    // 0x3429f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3429f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3429f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3429f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3429fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3429FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429FCu;
        // 0x342a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A04u;
    // 0x342a04: 0x0  nop
    ctx->pc = 0x342a04u;
    // NOP
    ctx->pc = 0x342a08u;
}
