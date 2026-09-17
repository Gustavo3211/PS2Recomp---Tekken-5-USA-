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

// Function: sub_00111F80
// Address: 0x111f80 - 0x111fc8
void sub_00111F80_0x111f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F80_0x111f80");
#endif

    ctx->pc = 0x111f80u;

    // 0x111f80: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x111f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x111f84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x111f88: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x111f8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111f90: 0x3e00008  jr          $ra
    ctx->pc = 0x111F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F90u;
        // 0x111f94: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F98u;
    // 0x111f98: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x111f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x111f9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x111fa0: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x111fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x111fa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111fa8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x111fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fac: 0x3e00008  jr          $ra
    ctx->pc = 0x111FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FACu;
        // 0x111fb0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111FB4u;
    // 0x111fb4: 0x0  nop
    ctx->pc = 0x111fb4u;
    // NOP
    // 0x111fb8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x111fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x111fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x111FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FBCu;
        // 0x111fc0: 0x24428898  addiu       $v0, $v0, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111FC4u;
    // 0x111fc4: 0x0  nop
    ctx->pc = 0x111fc4u;
    // NOP
    ctx->pc = 0x111fc8u;
}
