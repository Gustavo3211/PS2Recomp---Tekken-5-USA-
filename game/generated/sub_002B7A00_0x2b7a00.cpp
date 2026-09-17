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

// Function: sub_002B7A00
// Address: 0x2b7a00 - 0x2b7a60
void sub_002B7A00_0x2b7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7A00_0x2b7a00");
#endif

    switch (ctx->pc) {
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a28u: goto label_2b7a28;
        default: break;
    }

    ctx->pc = 0x2b7a00u;

    // 0x2b7a00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7a04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7a0c: 0x0  nop
    ctx->pc = 0x2b7a0cu;
    // NOP
label_2b7a10:
    // 0x2b7a10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b7a14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7a18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7A18u;
    {
        const bool branch_taken_0x2b7a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a18) {
            ctx->pc = 0x2B7A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A18u;
            // 0x2b7a1c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7A48u;
            goto label_2b7a48;
        }
    }
    ctx->pc = 0x2B7A20u;
    // 0x2b7a20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b7a24: 0x0  nop
    ctx->pc = 0x2b7a24u;
    // NOP
label_2b7a28:
    // 0x2b7a28: 0x0  nop
    ctx->pc = 0x2b7a28u;
    // NOP
    // 0x2b7a2c: 0x0  nop
    ctx->pc = 0x2b7a2cu;
    // NOP
    // 0x2b7a30: 0x0  nop
    ctx->pc = 0x2b7a30u;
    // NOP
    // 0x2b7a34: 0x0  nop
    ctx->pc = 0x2b7a34u;
    // NOP
    // 0x2b7a38: 0x0  nop
    ctx->pc = 0x2b7a38u;
    // NOP
    // 0x2b7a3c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7A3Cu;
    {
        const bool branch_taken_0x2b7a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a3c) {
            ctx->pc = 0x2B7A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A3Cu;
            // 0x2b7a40: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7a28;
        }
    }
    ctx->pc = 0x2B7A44u;
    // 0x2b7a44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b7a48:
    // 0x2b7a48: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x2b7a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2b7a4c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B7A4Cu;
    {
        const bool branch_taken_0x2b7a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a4c) {
            ctx->pc = 0x2B7A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A4Cu;
            // 0x2b7a50: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7a10;
        }
    }
    ctx->pc = 0x2B7A54u;
    // 0x2b7a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A5Cu;
    // 0x2b7a5c: 0x0  nop
    ctx->pc = 0x2b7a5cu;
    // NOP
    ctx->pc = 0x2b7a60u;
}
