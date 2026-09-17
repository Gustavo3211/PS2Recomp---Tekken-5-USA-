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

// Function: sub_003724E8
// Address: 0x3724e8 - 0x372590
void sub_003724E8_0x3724e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003724E8_0x3724e8");
#endif

    switch (ctx->pc) {
        case 0x372528u: goto label_372528;
        default: break;
    }

    ctx->pc = 0x3724e8u;

    // 0x3724e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3724E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3724E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3724F0u;
    // 0x3724f0: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x3724f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3724F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3724F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724F4u;
        // 0x3724f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3724F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3724FCu;
    // 0x3724fc: 0x0  nop
    ctx->pc = 0x3724fcu;
    // NOP
    // 0x372500: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x372500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372504: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x372504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x372508: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37250c: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x372510: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x372510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x372514: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x372514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x372518: 0x24e20058  addiu       $v0, $a3, 0x58
    ctx->pc = 0x372518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x37251c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37251cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x372520: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x372520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x372524: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x372524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_372528:
    // 0x372528: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x372528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37252c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37252cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x372530: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x372530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x372534: 0x0  nop
    ctx->pc = 0x372534u;
    // NOP
    // 0x372538: 0x0  nop
    ctx->pc = 0x372538u;
    // NOP
    // 0x37253c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37253Cu;
    {
        const bool branch_taken_0x37253c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x372540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37253Cu;
        // 0x372540: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37253c) {
            ctx->pc = 0x372528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372528;
        }
    }
    ctx->pc = 0x372544u;
    // 0x372544: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x372544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x372548: 0x24e20110  addiu       $v0, $a3, 0x110
    ctx->pc = 0x372548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x37254c: 0x24e60140  addiu       $a2, $a3, 0x140
    ctx->pc = 0x37254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x372550: 0x24e300b8  addiu       $v1, $a3, 0xB8
    ctx->pc = 0x372550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x372554: 0x24840d28  addiu       $a0, $a0, 0xD28
    ctx->pc = 0x372554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3368));
    // 0x372558: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37255c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37255cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x372560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x372560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x372564: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x372564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x372568: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x372568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x37256c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37256cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x372570: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x372570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x372574: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x372574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x372578: 0x3e00008  jr          $ra
    ctx->pc = 0x372578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372578u;
        // 0x37257c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372580u;
    // 0x372580: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x372580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x372584: 0x3e00008  jr          $ra
    ctx->pc = 0x372584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372584u;
        // 0x372588: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37258Cu;
    // 0x37258c: 0x0  nop
    ctx->pc = 0x37258cu;
    // NOP
    ctx->pc = 0x372590u;
}
