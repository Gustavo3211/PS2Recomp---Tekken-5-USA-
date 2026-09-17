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

// Function: sub_003216F0
// Address: 0x3216f0 - 0x321748
void sub_003216F0_0x3216f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003216F0_0x3216f0");
#endif

    switch (ctx->pc) {
        case 0x321704u: goto label_321704;
        case 0x32170cu: goto label_32170c;
        case 0x321714u: goto label_321714;
        case 0x32171cu: goto label_32171c;
        case 0x321724u: goto label_321724;
        case 0x32172cu: goto label_32172c;
        case 0x321734u: goto label_321734;
        default: break;
    }

    ctx->pc = 0x3216f0u;

    // 0x3216f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3216f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3216f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3216f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3216f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3216f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3216fc: 0xc0c8de6  jal         func_323798
    ctx->pc = 0x3216FCu;
    SET_GPR_U32(ctx, 31, 0x321704u);
    ctx->pc = 0x321700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216FCu;
    // 0x321700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323798u, 0x3216FCu, 0x321704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321704u;
label_321704:
    // 0x321704: 0xc0cb062  jal         func_32C188
    ctx->pc = 0x321704u;
    SET_GPR_U32(ctx, 31, 0x32170Cu);
    ctx->pc = 0x321708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321704u;
    // 0x321708: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C188u, 0x321704u, 0x32170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32170Cu;
label_32170c:
    // 0x32170c: 0xc0cf01a  jal         func_33C068
    ctx->pc = 0x32170Cu;
    SET_GPR_U32(ctx, 31, 0x321714u);
    ctx->pc = 0x321710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32170Cu;
    // 0x321710: 0x260409c0  addiu       $a0, $s0, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C068u, 0x32170Cu, 0x321714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321714u;
label_321714:
    // 0x321714: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x321714u;
    SET_GPR_U32(ctx, 31, 0x32171Cu);
    ctx->pc = 0x321718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321714u;
    // 0x321718: 0x26040a00  addiu       $a0, $s0, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C390u, 0x321714u, 0x32171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32171Cu;
label_32171c:
    // 0x32171c: 0xc0cf136  jal         func_33C4D8
    ctx->pc = 0x32171Cu;
    SET_GPR_U32(ctx, 31, 0x321724u);
    ctx->pc = 0x321720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32171Cu;
    // 0x321720: 0x26041280  addiu       $a0, $s0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C4D8u, 0x32171Cu, 0x321724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321724u;
label_321724:
    // 0x321724: 0xc0cf1ba  jal         func_33C6E8
    ctx->pc = 0x321724u;
    SET_GPR_U32(ctx, 31, 0x32172Cu);
    ctx->pc = 0x321728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321724u;
    // 0x321728: 0x260412c0  addiu       $a0, $s0, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C6E8u, 0x321724u, 0x32172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32172Cu;
label_32172c:
    // 0x32172c: 0xc0ce8a6  jal         func_33A298
    ctx->pc = 0x32172Cu;
    SET_GPR_U32(ctx, 31, 0x321734u);
    ctx->pc = 0x321730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32172Cu;
    // 0x321730: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A298u, 0x32172Cu, 0x321734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321734u;
label_321734:
    // 0x321734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32173c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321740: 0x3e00008  jr          $ra
    ctx->pc = 0x321740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321740u;
        // 0x321744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321748u;
}
