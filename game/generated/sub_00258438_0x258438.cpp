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

// Function: sub_00258438
// Address: 0x258438 - 0x258478
void sub_00258438_0x258438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258438_0x258438");
#endif

    switch (ctx->pc) {
        case 0x258448u: goto label_258448;
        default: break;
    }

    ctx->pc = 0x258438u;

    // 0x258438: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x258438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25843c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258440: 0x24460cc0  addiu       $a2, $v0, 0xCC0
    ctx->pc = 0x258440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
    // 0x258444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258448:
    // 0x258448: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x258448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25844c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x25844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258454: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258458: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x258458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25845c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258460: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x258460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x258464: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x258464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x258468: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258468u;
    {
        const bool branch_taken_0x258468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258468u;
        // 0x25846c: 0xac450060  sw          $a1, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258468) {
            ctx->pc = 0x258448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258448;
        }
    }
    ctx->pc = 0x258470u;
    // 0x258470: 0x3e00008  jr          $ra
    ctx->pc = 0x258470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258478u;
}
