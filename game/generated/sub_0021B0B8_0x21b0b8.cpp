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

// Function: sub_0021B0B8
// Address: 0x21b0b8 - 0x21b0e0
void sub_0021B0B8_0x21b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B0B8_0x21b0b8");
#endif

    ctx->pc = 0x21b0b8u;

    // 0x21b0b8: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x21b0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b0c0: 0x28460004  slti        $a2, $v0, 0x4
    ctx->pc = 0x21b0c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21b0c4: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x21b0c4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21b0c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b0cc: 0xac8200e8  sw          $v0, 0xE8($a0)
    ctx->pc = 0x21b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 2));
    // 0x21b0d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D4u;
        // 0x21b0d8: 0xac6500ec  sw          $a1, 0xEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B0DCu;
    // 0x21b0dc: 0x0  nop
    ctx->pc = 0x21b0dcu;
    // NOP
    ctx->pc = 0x21b0e0u;
}
