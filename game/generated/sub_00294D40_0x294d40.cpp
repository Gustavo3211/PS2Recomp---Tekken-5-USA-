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

// Function: sub_00294D40
// Address: 0x294d40 - 0x294d78
void sub_00294D40_0x294d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294D40_0x294d40");
#endif

    ctx->pc = 0x294d40u;

    // 0x294d40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294d44: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294d44u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294d48: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x294D48u;
    {
        const bool branch_taken_0x294d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D48u;
        // 0x294d4c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d48) {
            ctx->pc = 0x294D6Cu;
            goto label_294d6c;
        }
    }
    ctx->pc = 0x294D50u;
    // 0x294d50: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x294d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x294d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294D54u;
    {
        const bool branch_taken_0x294d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D54u;
        // 0x294d58: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d54) {
            ctx->pc = 0x294D6Cu;
            goto label_294d6c;
        }
    }
    ctx->pc = 0x294D5Cu;
    // 0x294d5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294d60: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294d64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294d68: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294d6c:
    // 0x294d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x294D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D74u;
    // 0x294d74: 0x0  nop
    ctx->pc = 0x294d74u;
    // NOP
    ctx->pc = 0x294d78u;
}
