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

// Function: sub_002728A0
// Address: 0x2728a0 - 0x2728d0
void sub_002728A0_0x2728a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728A0_0x2728a0");
#endif

    ctx->pc = 0x2728a0u;

    // 0x2728a0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2728a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2728a4: 0x94830328  lhu         $v1, 0x328($a0)
    ctx->pc = 0x2728a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x2728a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2728A8u;
    {
        const bool branch_taken_0x2728a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728A8u;
        // 0x2728ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728a8) {
            ctx->pc = 0x2728BCu;
            goto label_2728bc;
        }
    }
    ctx->pc = 0x2728B0u;
    // 0x2728b0: 0x24020707  addiu       $v0, $zero, 0x707
    ctx->pc = 0x2728b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x2728b4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2728B4u;
    {
        const bool branch_taken_0x2728b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2728b4) {
            ctx->pc = 0x2728B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728B4u;
            // 0x2728b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2728C8u;
            goto label_2728c8;
        }
    }
    ctx->pc = 0x2728BCu;
label_2728bc:
    // 0x2728bc: 0x8c8202a0  lw          $v0, 0x2A0($a0)
    ctx->pc = 0x2728bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x2728c0: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2728C0u;
    {
        const bool branch_taken_0x2728c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2728c0) {
            ctx->pc = 0x2728C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728C0u;
            // 0x2728c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2728C8u;
            goto label_2728c8;
        }
    }
    ctx->pc = 0x2728C8u;
label_2728c8:
    // 0x2728c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2728C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2728CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728C8u;
        // 0x2728cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2728C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2728D0u;
}
