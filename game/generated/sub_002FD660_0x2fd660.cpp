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

// Function: sub_002FD660
// Address: 0x2fd660 - 0x2fd688
void sub_002FD660_0x2fd660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD660_0x2fd660");
#endif

    ctx->pc = 0x2fd660u;

    // 0x2fd660: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD660u;
    {
        const bool branch_taken_0x2fd660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD660u;
        // 0x2fd664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd660) {
            ctx->pc = 0x2FD680u;
            goto label_2fd680;
        }
    }
    ctx->pc = 0x2FD668u;
    // 0x2fd668: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2fd668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2fd66c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2fd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fd670: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FD670u;
    {
        const bool branch_taken_0x2fd670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd670) {
            ctx->pc = 0x2FD674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD670u;
            // 0x2fd674: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD678u;
            goto label_2fd678;
        }
    }
    ctx->pc = 0x2FD678u;
label_2fd678:
    // 0x2fd678: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2fd678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2fd67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd680:
    // 0x2fd680: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD688u;
}
