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

// Function: sub_003306B0
// Address: 0x3306b0 - 0x3306d8
void sub_003306B0_0x3306b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003306B0_0x3306b0");
#endif

    ctx->pc = 0x3306b0u;

    // 0x3306b0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3306B0u;
    {
        const bool branch_taken_0x3306b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306B0u;
        // 0x3306b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306b0) {
            ctx->pc = 0x3306CCu;
            goto label_3306cc;
        }
    }
    ctx->pc = 0x3306B8u;
    // 0x3306b8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3306b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3306bc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3306bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x3306c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3306c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3306c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3306c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3306c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3306c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3306cc:
    // 0x3306cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3306CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3306CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3306D4u;
    // 0x3306d4: 0x0  nop
    ctx->pc = 0x3306d4u;
    // NOP
    ctx->pc = 0x3306d8u;
}
