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

// Function: sub_002F6A30
// Address: 0x2f6a30 - 0x2f6a60
void sub_002F6A30_0x2f6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6A30_0x2f6a30");
#endif

    ctx->pc = 0x2f6a30u;

    // 0x2f6a30: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x2f6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x2f6a34: 0x30a50060  andi        $a1, $a1, 0x60
    ctx->pc = 0x2f6a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)96);
    // 0x2f6a38: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6A38u;
    {
        const bool branch_taken_0x2f6a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A38u;
        // 0x2f6a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a38) {
            ctx->pc = 0x2F6A54u;
            goto label_2f6a54;
        }
    }
    ctx->pc = 0x2F6A40u;
    // 0x2f6a40: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A40u;
    {
        const bool branch_taken_0x2f6a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a40) {
            ctx->pc = 0x2F6A54u;
            goto label_2f6a54;
        }
    }
    ctx->pc = 0x2F6A48u;
    // 0x2f6a48: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x2f6a4c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2f6a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2f6a50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f6a54:
    // 0x2f6a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6A5Cu;
    // 0x2f6a5c: 0x0  nop
    ctx->pc = 0x2f6a5cu;
    // NOP
    ctx->pc = 0x2f6a60u;
}
