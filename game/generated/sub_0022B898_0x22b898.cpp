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

// Function: sub_0022B898
// Address: 0x22b898 - 0x22b8d8
void sub_0022B898_0x22b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B898_0x22b898");
#endif

    switch (ctx->pc) {
        case 0x22b8a8u: goto label_22b8a8;
        default: break;
    }

    ctx->pc = 0x22b898u;

    // 0x22b898: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22b89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b8a0: 0x2446dc38  addiu       $a2, $v0, -0x23C8
    ctx->pc = 0x22b8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958136));
    // 0x22b8a4: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x22b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_22b8a8:
    // 0x22b8a8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x22b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22b8ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22b8b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22b8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b8b8: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x22b8b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b8bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22b8c0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x22b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x22b8c4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B8C4u;
    {
        const bool branch_taken_0x22b8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8C4u;
        // 0x22b8c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8c4) {
            ctx->pc = 0x22B8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b8a8;
        }
    }
    ctx->pc = 0x22B8CCu;
    // 0x22b8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x22B8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B8D4u;
    // 0x22b8d4: 0x0  nop
    ctx->pc = 0x22b8d4u;
    // NOP
    ctx->pc = 0x22b8d8u;
}
