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

// Function: sub_00294E90
// Address: 0x294e90 - 0x294ec8
void sub_00294E90_0x294e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E90_0x294e90");
#endif

    ctx->pc = 0x294e90u;

    // 0x294e90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294e94: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294e94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294e98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x294E98u;
    {
        const bool branch_taken_0x294e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E98u;
        // 0x294e9c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e98) {
            ctx->pc = 0x294EBCu;
            goto label_294ebc;
        }
    }
    ctx->pc = 0x294EA0u;
    // 0x294ea0: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x294ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x294ea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294EA4u;
    {
        const bool branch_taken_0x294ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EA4u;
        // 0x294ea8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ea4) {
            ctx->pc = 0x294EBCu;
            goto label_294ebc;
        }
    }
    ctx->pc = 0x294EACu;
    // 0x294eac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294eb0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294eb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294eb8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294ebc:
    // 0x294ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x294EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294EC4u;
    // 0x294ec4: 0x0  nop
    ctx->pc = 0x294ec4u;
    // NOP
    ctx->pc = 0x294ec8u;
}
