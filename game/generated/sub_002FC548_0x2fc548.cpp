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

// Function: sub_002FC548
// Address: 0x2fc548 - 0x2fc580
void sub_002FC548_0x2fc548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC548_0x2fc548");
#endif

    ctx->pc = 0x2fc548u;

    // 0x2fc548: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2fc548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fc54c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC54Cu;
    {
        const bool branch_taken_0x2fc54c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC54Cu;
        // 0x2fc550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc54c) {
            ctx->pc = 0x2FC574u;
            goto label_2fc574;
        }
    }
    ctx->pc = 0x2FC554u;
    // 0x2fc554: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2fc554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fc558: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2fc558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fc55c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC55Cu;
    {
        const bool branch_taken_0x2fc55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc55c) {
            ctx->pc = 0x2FC574u;
            goto label_2fc574;
        }
    }
    ctx->pc = 0x2FC564u;
    // 0x2fc564: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC564u;
    {
        const bool branch_taken_0x2fc564 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2fc564) {
            ctx->pc = 0x2FC574u;
            goto label_2fc574;
        }
    }
    ctx->pc = 0x2FC56Cu;
    // 0x2fc56c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x2fc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2fc570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2fc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2fc574:
    // 0x2fc574: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC57Cu;
    // 0x2fc57c: 0x0  nop
    ctx->pc = 0x2fc57cu;
    // NOP
    ctx->pc = 0x2fc580u;
}
