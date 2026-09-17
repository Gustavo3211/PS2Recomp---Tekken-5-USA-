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

// Function: sub_00220388
// Address: 0x220388 - 0x2203b0
void sub_00220388_0x220388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220388_0x220388");
#endif

    ctx->pc = 0x220388u;

    // 0x220388: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x220388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x22038c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x22038cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x220390: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220390u;
    {
        const bool branch_taken_0x220390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220390u;
        // 0x220394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220390) {
            ctx->pc = 0x2203A4u;
            goto label_2203a4;
        }
    }
    ctx->pc = 0x220398u;
    // 0x220398: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22039c: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x22039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x2203a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2203a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2203a4:
    // 0x2203a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2203A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2203A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2203ACu;
    // 0x2203ac: 0x0  nop
    ctx->pc = 0x2203acu;
    // NOP
    ctx->pc = 0x2203b0u;
}
