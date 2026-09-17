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

// Function: sub_00225C00
// Address: 0x225c00 - 0x225c30
void sub_00225C00_0x225c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C00_0x225c00");
#endif

    ctx->pc = 0x225c00u;

    // 0x225c00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x225c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225c04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225c08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225c0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225c10: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x225c14: 0x242161b0  addiu       $at, $at, 0x61B0
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25008));
    // 0x225c18: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x225c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x225c1c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x225c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x225c20: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x225c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x225c24: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x225c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x225c28: 0x3e00008  jr          $ra
    ctx->pc = 0x225C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C28u;
        // 0x225c2c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C30u;
}
