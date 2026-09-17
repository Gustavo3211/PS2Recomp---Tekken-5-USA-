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

// Function: sub_0024A018
// Address: 0x24a018 - 0x24a040
void sub_0024A018_0x24a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A018_0x24a018");
#endif

    ctx->pc = 0x24a018u;

    // 0x24a018: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A018u;
    {
        const bool branch_taken_0x24a018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A018u;
        // 0x24a01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a018) {
            ctx->pc = 0x24A038u;
            goto label_24a038;
        }
    }
    ctx->pc = 0x24A020u;
    // 0x24a020: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24a024: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A024u;
    {
        const bool branch_taken_0x24a024 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x24A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A024u;
        // 0x24a028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a024) {
            ctx->pc = 0x24A038u;
            goto label_24a038;
        }
    }
    ctx->pc = 0x24A02Cu;
    // 0x24a02c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x24a02cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a034: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x24a034u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_24a038:
    // 0x24a038: 0x3e00008  jr          $ra
    ctx->pc = 0x24A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A040u;
}
