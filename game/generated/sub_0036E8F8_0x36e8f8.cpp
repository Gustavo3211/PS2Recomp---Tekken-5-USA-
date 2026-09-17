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

// Function: sub_0036E8F8
// Address: 0x36e8f8 - 0x36e930
void sub_0036E8F8_0x36e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E8F8_0x36e8f8");
#endif

    ctx->pc = 0x36e8f8u;

    // 0x36e8f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e8fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e900: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36e904: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36e904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36e908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e90c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E90Cu;
    {
        const bool branch_taken_0x36e90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E90Cu;
        // 0x36e910: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e90c) {
            ctx->pc = 0x36E920u;
            goto label_36e920;
        }
    }
    ctx->pc = 0x36E914u;
    // 0x36e914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e918: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36E918u;
    ctx->pc = 0x36E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E918u;
    // 0x36e91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36E920u;
label_36e920:
    // 0x36e920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e924: 0x3e00008  jr          $ra
    ctx->pc = 0x36E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E924u;
        // 0x36e928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E92Cu;
    // 0x36e92c: 0x0  nop
    ctx->pc = 0x36e92cu;
    // NOP
    ctx->pc = 0x36e930u;
}
