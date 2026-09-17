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

// Function: sub_00339DA0
// Address: 0x339da0 - 0x339ddc
void sub_00339DA0_0x339da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339DA0_0x339da0");
#endif

    ctx->pc = 0x339da0u;

    // 0x339da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339da4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x339da8: 0x2c83003b  sltiu       $v1, $a0, 0x3B
    ctx->pc = 0x339da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x339dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339db0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x339DB0u;
    {
        const bool branch_taken_0x339db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DB0u;
        // 0x339db4: 0x2445ec80  addiu       $a1, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339db0) {
            ctx->pc = 0x339DDCu;
            return;
        }
    }
    ctx->pc = 0x339DB8u;
    // 0x339db8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x339db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x339dbc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x339dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x339dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339dc4: 0x8c633580  lw          $v1, 0x3580($v1)
    ctx->pc = 0x339dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13696)));
    // 0x339dc8: 0x600008  jr          $v1
    ctx->pc = 0x339DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x339DD0u: goto label_339dd0;
            case 0x339DD8u: goto label_339dd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x339DD0u;
label_339dd0:
    // 0x339dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339DD0u;
    {
        const bool branch_taken_0x339dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DD0u;
        // 0x339dd4: 0x24a501bc  addiu       $a1, $a1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339dd0) {
            ctx->pc = 0x339DDCu;
            return;
        }
    }
    ctx->pc = 0x339DD8u;
label_339dd8:
    // 0x339dd8: 0x24a501c8  addiu       $a1, $a1, 0x1C8
    ctx->pc = 0x339dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 456));
    ctx->pc = 0x339ddcu;
}
