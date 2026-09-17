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

// Function: sub_0023A000
// Address: 0x23a000 - 0x23a020
void sub_0023A000_0x23a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A000_0x23a000");
#endif

    ctx->pc = 0x23a000u;

    // 0x23a000: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x23a000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a004: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x23a004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x23a008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A008u;
    {
        const bool branch_taken_0x23a008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a008) {
            ctx->pc = 0x23A018u;
            goto label_23a018;
        }
    }
    ctx->pc = 0x23A010u;
    // 0x23a010: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x23a010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x23a014: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x23a014u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
label_23a018:
    // 0x23a018: 0x3e00008  jr          $ra
    ctx->pc = 0x23A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A020u;
}
