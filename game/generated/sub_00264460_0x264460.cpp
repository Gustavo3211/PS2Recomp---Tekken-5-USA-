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

// Function: sub_00264460
// Address: 0x264460 - 0x2644a0
void sub_00264460_0x264460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264460_0x264460");
#endif

    ctx->pc = 0x264460u;

    // 0x264460: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x264460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x264464: 0x2403395c  addiu       $v1, $zero, 0x395C
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14684));
    // 0x264468: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x264468u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26446c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26446Cu;
    {
        const bool branch_taken_0x26446c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x264470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26446Cu;
        // 0x264470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26446c) {
            ctx->pc = 0x264480u;
            goto label_264480;
        }
    }
    ctx->pc = 0x264474u;
    // 0x264474: 0x2402395e  addiu       $v0, $zero, 0x395E
    ctx->pc = 0x264474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14686));
    // 0x264478: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264478u;
    {
        const bool branch_taken_0x264478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x264478) {
            ctx->pc = 0x264484u;
            goto label_264484;
        }
    }
    ctx->pc = 0x264480u;
label_264480:
    // 0x264480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264484:
    // 0x264484: 0x3e00008  jr          $ra
    ctx->pc = 0x264484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264484u;
        // 0x264488: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26448Cu;
    // 0x26448c: 0x0  nop
    ctx->pc = 0x26448cu;
    // NOP
    // 0x264490: 0x3e00008  jr          $ra
    ctx->pc = 0x264490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264490u;
        // 0x264494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264498u;
    // 0x264498: 0x3e00008  jr          $ra
    ctx->pc = 0x264498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264498u;
        // 0x26449c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2644A0u;
}
