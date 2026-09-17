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

// Function: sub_00101668
// Address: 0x101668 - 0x1016a0
void sub_00101668_0x101668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101668_0x101668");
#endif

    ctx->pc = 0x101668u;

    // 0x101668: 0x3c02014e  lui         $v0, 0x14E
    ctx->pc = 0x101668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)334 << 16));
    // 0x10166c: 0x3e00008  jr          $ra
    ctx->pc = 0x10166Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10166Cu;
        // 0x101670: 0x2442d0c0  addiu       $v0, $v0, -0x2F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10166Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101674u;
    // 0x101674: 0x0  nop
    ctx->pc = 0x101674u;
    // NOP
    // 0x101678: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x101678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10167c: 0x3e00008  jr          $ra
    ctx->pc = 0x10167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10167Cu;
        // 0x101680: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101684u;
    // 0x101684: 0x0  nop
    ctx->pc = 0x101684u;
    // NOP
    // 0x101688: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10168c: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x10168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x101690: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x101694: 0x34210b40  ori         $at, $at, 0xB40
    ctx->pc = 0x101694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2880);
    // 0x101698: 0x3e00008  jr          $ra
    ctx->pc = 0x101698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101698u;
        // 0x10169c: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016A0u;
}
