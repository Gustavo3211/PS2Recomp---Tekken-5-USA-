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

// Function: sub_00247038
// Address: 0x247038 - 0x247068
void sub_00247038_0x247038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247038_0x247038");
#endif

    ctx->pc = 0x247038u;

    // 0x247038: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x247038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24703c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247040: 0x8c648880  lw          $a0, -0x7780($v1)
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x247044: 0x28850012  slti        $a1, $a0, 0x12
    ctx->pc = 0x247044u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x247048: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247048u;
    {
        const bool branch_taken_0x247048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247048u;
        // 0x24704c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247048) {
            ctx->pc = 0x24705Cu;
            goto label_24705c;
        }
    }
    ctx->pc = 0x247050u;
    // 0x247050: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x247054: 0x24420e38  addiu       $v0, $v0, 0xE38
    ctx->pc = 0x247054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3640));
    // 0x247058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24705c:
    // 0x24705c: 0x3e00008  jr          $ra
    ctx->pc = 0x24705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247064u;
    // 0x247064: 0x0  nop
    ctx->pc = 0x247064u;
    // NOP
    ctx->pc = 0x247068u;
}
