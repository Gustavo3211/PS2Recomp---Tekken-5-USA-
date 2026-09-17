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

// Function: sub_0027B188
// Address: 0x27b188 - 0x27b1c8
void sub_0027B188_0x27b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B188_0x27b188");
#endif

    ctx->pc = 0x27b188u;

    // 0x27b188: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B188u;
    {
        const bool branch_taken_0x27b188 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B188u;
        // 0x27b18c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b188) {
            ctx->pc = 0x27B194u;
            goto label_27b194;
        }
    }
    ctx->pc = 0x27B190u;
    // 0x27b190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b194:
    // 0x27b194: 0x3e00008  jr          $ra
    ctx->pc = 0x27B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B194u;
        // 0x27b198: 0xaf82aeb4  sw          $v0, -0x514C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B19Cu;
    // 0x27b19c: 0x0  nop
    ctx->pc = 0x27b19cu;
    // NOP
    // 0x27b1a0: 0x8f82aeb4  lw          $v0, -0x514C($gp)
    ctx->pc = 0x27b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946484)));
    // 0x27b1a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27b1a8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B1A8u;
    {
        const bool branch_taken_0x27b1a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1A8u;
        // 0x27b1ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1a8) {
            ctx->pc = 0x27B1C0u;
            goto label_27b1c0;
        }
    }
    ctx->pc = 0x27B1B0u;
    // 0x27b1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1B4u;
        // 0x27b1b8: 0xaf82aeb4  sw          $v0, -0x514C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1BCu;
    // 0x27b1bc: 0x0  nop
    ctx->pc = 0x27b1bcu;
    // NOP
label_27b1c0:
    // 0x27b1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1C0u;
        // 0x27b1c4: 0xaf83aeb4  sw          $v1, -0x514C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1C8u;
}
