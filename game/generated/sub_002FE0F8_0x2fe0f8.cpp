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

// Function: sub_002FE0F8
// Address: 0x2fe0f8 - 0x2fe128
void sub_002FE0F8_0x2fe0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE0F8_0x2fe0f8");
#endif

    ctx->pc = 0x2fe0f8u;

    // 0x2fe0f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fe0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0fc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE0FCu;
    {
        const bool branch_taken_0x2fe0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0FCu;
        // 0x2fe100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0fc) {
            ctx->pc = 0x2FE11Cu;
            goto label_2fe11c;
        }
    }
    ctx->pc = 0x2FE104u;
    // 0x2fe104: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x2fe104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fe108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe10c: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x2fe10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x2fe110: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x2fe110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2fe114: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x2fe114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x2fe118: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x2fe118u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
label_2fe11c:
    // 0x2fe11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE124u;
    // 0x2fe124: 0x0  nop
    ctx->pc = 0x2fe124u;
    // NOP
    ctx->pc = 0x2fe128u;
}
