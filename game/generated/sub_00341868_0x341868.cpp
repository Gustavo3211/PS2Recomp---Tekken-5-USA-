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

// Function: sub_00341868
// Address: 0x341868 - 0x341898
void sub_00341868_0x341868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341868_0x341868");
#endif

    ctx->pc = 0x341868u;

    // 0x341868: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x341868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x34186c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x341870: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x341874: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x341874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x341878: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x341878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x34187c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x341880: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x341880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x341884: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x341884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x341888: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x341888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x34188c: 0x3e00008  jr          $ra
    ctx->pc = 0x34188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34188Cu;
        // 0x341890: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341894u;
    // 0x341894: 0x0  nop
    ctx->pc = 0x341894u;
    // NOP
    ctx->pc = 0x341898u;
}
