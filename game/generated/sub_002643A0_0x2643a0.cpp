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

// Function: sub_002643A0
// Address: 0x2643a0 - 0x2643c0
void sub_002643A0_0x2643a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002643A0_0x2643a0");
#endif

    ctx->pc = 0x2643a0u;

    // 0x2643a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2643a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2643a4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2643a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2643a8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x2643a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2643ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2643ACu;
    {
        const bool branch_taken_0x2643ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643ac) {
            ctx->pc = 0x2643B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643ACu;
            // 0x2643b0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2643B4u;
            goto label_2643b4;
        }
    }
    ctx->pc = 0x2643B4u;
label_2643b4:
    // 0x2643b4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2643b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2643b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2643B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2643BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643B8u;
        // 0x2643bc: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2643B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2643C0u;
}
