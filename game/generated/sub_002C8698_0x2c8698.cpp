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

// Function: sub_002C8698
// Address: 0x2c8698 - 0x2c86d0
void sub_002C8698_0x2c8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8698_0x2c8698");
#endif

    ctx->pc = 0x2c8698u;

    // 0x2c8698: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c869c: 0x8c6283f8  lw          $v0, -0x7C08($v1)
    ctx->pc = 0x2c869cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83F8u));
    // 0x2c86a0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2c86a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c86a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C86A4u;
    {
        const bool branch_taken_0x2c86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86A4u;
        // 0x2c86a8: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86a4) {
            ctx->pc = 0x2C86C0u;
            goto label_2c86c0;
        }
    }
    ctx->pc = 0x2C86ACu;
    // 0x2c86ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c86b0: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2c86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2c86b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C86B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86B4u;
        // 0x2c86b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C86B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C86BCu;
    // 0x2c86bc: 0x0  nop
    ctx->pc = 0x2c86bcu;
    // NOP
label_2c86c0:
    // 0x2c86c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c86c4: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x2c86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x2c86c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86C8u;
        // 0x2c86cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C86C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C86D0u;
}
