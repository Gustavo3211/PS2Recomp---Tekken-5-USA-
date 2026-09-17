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

// Function: sub_0021DA48
// Address: 0x21da48 - 0x21da80
void sub_0021DA48_0x21da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DA48_0x21da48");
#endif

    ctx->pc = 0x21da48u;

    // 0x21da48: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x21da48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21da4c: 0x2c84001e  sltiu       $a0, $a0, 0x1E
    ctx->pc = 0x21da4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21da50: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21da54: 0x24a59ab0  addiu       $a1, $a1, -0x6550
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941360));
    // 0x21da58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21da5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DA5Cu;
    {
        const bool branch_taken_0x21da5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA5Cu;
        // 0x21da60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da5c) {
            ctx->pc = 0x21DA78u;
            goto label_21da78;
        }
    }
    ctx->pc = 0x21DA64u;
    // 0x21da64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21da68: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21da6c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x21da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21da70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21da74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21da78:
    // 0x21da78: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DA80u;
}
