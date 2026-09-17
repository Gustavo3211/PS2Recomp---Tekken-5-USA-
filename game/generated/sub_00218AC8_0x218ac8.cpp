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

// Function: sub_00218AC8
// Address: 0x218ac8 - 0x218ae8
void sub_00218AC8_0x218ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218AC8_0x218ac8");
#endif

    ctx->pc = 0x218ac8u;

    // 0x218ac8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x218ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218acc: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x218accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x218ad0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x218ad0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x218ad4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x218ad8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x218adc: 0x2421bf88  addiu       $at, $at, -0x4078
    ctx->pc = 0x218adcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294950792));
    // 0x218ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x218AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AE8u;
}
