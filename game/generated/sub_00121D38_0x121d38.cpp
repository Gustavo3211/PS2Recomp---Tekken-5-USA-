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

// Function: sub_00121D38
// Address: 0x121d38 - 0x121d60
void sub_00121D38_0x121d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121D38_0x121d38");
#endif

    ctx->pc = 0x121d38u;

    // 0x121d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121d3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121D3Cu;
    {
        const bool branch_taken_0x121d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D3Cu;
        // 0x121d40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d3c) {
            ctx->pc = 0x121D50u;
            goto label_121d50;
        }
    }
    ctx->pc = 0x121D44u;
    // 0x121d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121d48: 0x8049e8e  j           func_127A38
    ctx->pc = 0x121D48u;
    ctx->pc = 0x121D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D48u;
    // 0x121d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    sub_00127A38_0x127a38(rdram, ctx, runtime); return;
    ctx->pc = 0x121D50u;
label_121d50:
    // 0x121d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121d54: 0x3e00008  jr          $ra
    ctx->pc = 0x121D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D54u;
        // 0x121d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121D5Cu;
    // 0x121d5c: 0x0  nop
    ctx->pc = 0x121d5cu;
    // NOP
    ctx->pc = 0x121d60u;
}
