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

// Function: sub_00340F00
// Address: 0x340f00 - 0x340f28
void sub_00340F00_0x340f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340F00_0x340f00");
#endif

    ctx->pc = 0x340f00u;

    // 0x340f00: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x340f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x340f04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x340f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x340f08: 0x9c43002c  lwu         $v1, 0x2C($v0)
    ctx->pc = 0x340f08u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x340f0c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x340f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x340f10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x340f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x340f14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x340f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x340f18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x340f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x340f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x340F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F1Cu;
        // 0x340f20: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340F24u;
    // 0x340f24: 0x0  nop
    ctx->pc = 0x340f24u;
    // NOP
    ctx->pc = 0x340f28u;
}
