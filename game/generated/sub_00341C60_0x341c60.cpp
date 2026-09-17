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

// Function: sub_00341C60
// Address: 0x341c60 - 0x341c90
void sub_00341C60_0x341c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C60_0x341c60");
#endif

    switch (ctx->pc) {
        case 0x341c68u: goto label_341c68;
        default: break;
    }

    ctx->pc = 0x341c60u;

    // 0x341c60: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x341c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x341c64: 0x24420b98  addiu       $v0, $v0, 0xB98
    ctx->pc = 0x341c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
label_341c68:
    // 0x341c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x341c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341c6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341C6Cu;
    {
        const bool branch_taken_0x341c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c6c) {
            ctx->pc = 0x341C84u;
            goto label_341c84;
        }
    }
    ctx->pc = 0x341C74u;
    // 0x341c74: 0x5465fffc  bnel        $v1, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x341C74u;
    {
        const bool branch_taken_0x341c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x341c74) {
            ctx->pc = 0x341C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C74u;
            // 0x341c78: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c68;
        }
    }
    ctx->pc = 0x341C7Cu;
    // 0x341c7c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x341c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x341c80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x341c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_341c84:
    // 0x341c84: 0x3e00008  jr          $ra
    ctx->pc = 0x341C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C84u;
        // 0x341c88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C8Cu;
    // 0x341c8c: 0x0  nop
    ctx->pc = 0x341c8cu;
    // NOP
    ctx->pc = 0x341c90u;
}
