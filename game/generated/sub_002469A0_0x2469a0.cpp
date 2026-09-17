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

// Function: sub_002469A0
// Address: 0x2469a0 - 0x2469d0
void sub_002469A0_0x2469a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002469A0_0x2469a0");
#endif

    ctx->pc = 0x2469a0u;

    // 0x2469a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2469a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2469a4: 0x2c850021  sltiu       $a1, $a0, 0x21
    ctx->pc = 0x2469a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x2469a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2469a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469ac: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2469ACu;
    {
        const bool branch_taken_0x2469ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469ACu;
        // 0x2469b0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469ac) {
            ctx->pc = 0x2469C4u;
            goto label_2469c4;
        }
    }
    ctx->pc = 0x2469B4u;
    // 0x2469b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2469b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2469b8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x2469b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x2469bc: 0x24210b80  addiu       $at, $at, 0xB80
    ctx->pc = 0x2469bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2944));
    // 0x2469c0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2469c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2469c4:
    // 0x2469c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2469C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2469C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2469CCu;
    // 0x2469cc: 0x0  nop
    ctx->pc = 0x2469ccu;
    // NOP
    ctx->pc = 0x2469d0u;
}
