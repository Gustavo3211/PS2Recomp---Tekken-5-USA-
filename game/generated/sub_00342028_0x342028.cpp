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

// Function: sub_00342028
// Address: 0x342028 - 0x342060
void sub_00342028_0x342028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342028_0x342028");
#endif

    ctx->pc = 0x342028u;

    // 0x342028: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34202c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x34202cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x342030: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x342030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x342034: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x342034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x342038: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x342038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x34203c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x34203cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x342040: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x342040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x342044: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x342044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x342048: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x342048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34204c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x34204cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x342050: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x342050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x342054: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x342054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x342058: 0x3e00008  jr          $ra
    ctx->pc = 0x342058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342058u;
        // 0x34205c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342060u;
}
