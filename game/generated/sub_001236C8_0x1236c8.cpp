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

// Function: sub_001236C8
// Address: 0x1236c8 - 0x123718
void sub_001236C8_0x1236c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001236C8_0x1236c8");
#endif

    switch (ctx->pc) {
        case 0x1236e8u: goto label_1236e8;
        case 0x1236f8u: goto label_1236f8;
        case 0x123704u: goto label_123704;
        default: break;
    }

    ctx->pc = 0x1236c8u;

    // 0x1236c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1236cc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1236ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1236d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1236d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1236d4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1236d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1236d8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1236d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1236dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1236dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1236e0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1236E0u;
    SET_GPR_U32(ctx, 31, 0x1236E8u);
    ctx->pc = 0x1236E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236E0u;
    // 0x1236e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1236E0u, 0x1236E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236E8u;
label_1236e8:
    // 0x1236e8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1236ec: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1236f0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1236F0u;
    SET_GPR_U32(ctx, 31, 0x1236F8u);
    ctx->pc = 0x1236F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236F0u;
    // 0x1236f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1236F0u, 0x1236F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236F8u;
label_1236f8:
    // 0x1236f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1236f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236fc: 0xc049cd4  jal         func_127350
    ctx->pc = 0x1236FCu;
    SET_GPR_U32(ctx, 31, 0x123704u);
    ctx->pc = 0x123700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236FCu;
    // 0x123700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127350u, 0x1236FCu, 0x123704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123704u;
label_123704:
    // 0x123704: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x123704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123708: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x123708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12370c: 0x3e00008  jr          $ra
    ctx->pc = 0x12370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12370Cu;
        // 0x123710: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123714u;
    // 0x123714: 0x0  nop
    ctx->pc = 0x123714u;
    // NOP
    ctx->pc = 0x123718u;
}
