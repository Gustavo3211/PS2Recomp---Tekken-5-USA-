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

// Function: sub_0033E678
// Address: 0x33e678 - 0x33e698
void sub_0033E678_0x33e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E678_0x33e678");
#endif

    ctx->pc = 0x33e678u;

    // 0x33e678: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x33e678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x33e67c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E67Cu;
    {
        const bool branch_taken_0x33e67c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E67Cu;
        // 0x33e680: 0x2482000c  addiu       $v0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e67c) {
            ctx->pc = 0x33E690u;
            goto label_33e690;
        }
    }
    ctx->pc = 0x33E684u;
    // 0x33e684: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x33e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x33e688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e68c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_33e690:
    // 0x33e690: 0x3e00008  jr          $ra
    ctx->pc = 0x33E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E698u;
}
