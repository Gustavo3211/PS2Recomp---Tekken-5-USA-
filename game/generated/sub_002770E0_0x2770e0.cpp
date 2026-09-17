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

// Function: sub_002770E0
// Address: 0x2770e0 - 0x277120
void sub_002770E0_0x2770e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002770E0_0x2770e0");
#endif

    ctx->pc = 0x2770e0u;

    // 0x2770e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2770e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770e4: 0x94a2003c  lhu         $v0, 0x3C($a1)
    ctx->pc = 0x2770e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2770e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2770e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2770ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2770ECu;
    {
        const bool branch_taken_0x2770ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770ECu;
        // 0x2770f0: 0x8f82ca68  lw          $v0, -0x3598($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770ec) {
            ctx->pc = 0x277118u;
            goto label_277118;
        }
    }
    ctx->pc = 0x2770F4u;
    // 0x2770f4: 0x94a4003c  lhu         $a0, 0x3C($a1)
    ctx->pc = 0x2770f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2770f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2770f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2770fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x277100: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x277100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x277104: 0xaca306a0  sw          $v1, 0x6A0($a1)
    ctx->pc = 0x277104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1696), GPR_U32(ctx, 3));
    // 0x277108: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x27710c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277110: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x277110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x277114: 0xaca3069c  sw          $v1, 0x69C($a1)
    ctx->pc = 0x277114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1692), GPR_U32(ctx, 3));
label_277118:
    // 0x277118: 0x3e00008  jr          $ra
    ctx->pc = 0x277118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277120u;
}
