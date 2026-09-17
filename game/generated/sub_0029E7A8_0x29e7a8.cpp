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

// Function: sub_0029E7A8
// Address: 0x29e7a8 - 0x29e7e0
void sub_0029E7A8_0x29e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E7A8_0x29e7a8");
#endif

    switch (ctx->pc) {
        case 0x29e7b0u: goto label_29e7b0;
        default: break;
    }

    ctx->pc = 0x29e7a8u;

    // 0x29e7a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7ac: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_29e7b0:
    // 0x29e7b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29e7b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29e7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e7b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E7BCu;
    {
        const bool branch_taken_0x29e7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7BCu;
        // 0x29e7c0: 0x28c50021  slti        $a1, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7bc) {
            ctx->pc = 0x29E7D8u;
            goto label_29e7d8;
        }
    }
    ctx->pc = 0x29E7C4u;
    // 0x29e7c4: 0x0  nop
    ctx->pc = 0x29e7c4u;
    // NOP
    // 0x29e7c8: 0x0  nop
    ctx->pc = 0x29e7c8u;
    // NOP
    // 0x29e7cc: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29E7CCu;
    {
        const bool branch_taken_0x29e7cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e7cc) {
            ctx->pc = 0x29E7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E7CCu;
            // 0x29e7d0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e7b0;
        }
    }
    ctx->pc = 0x29E7D4u;
    // 0x29e7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e7d8:
    // 0x29e7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E7E0u;
}
