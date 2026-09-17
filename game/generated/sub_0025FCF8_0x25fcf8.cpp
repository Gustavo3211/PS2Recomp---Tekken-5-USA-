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

// Function: sub_0025FCF8
// Address: 0x25fcf8 - 0x25fd50
void sub_0025FCF8_0x25fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCF8_0x25fcf8");
#endif

    switch (ctx->pc) {
        case 0x25fd20u: goto label_25fd20;
        default: break;
    }

    ctx->pc = 0x25fcf8u;

    // 0x25fcf8: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x25fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x25fcfc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x25fd00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25fd04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd08: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x25fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25fd0c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x25fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x25fd10: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25fd14: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x25fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x25fd18: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x25fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x25fd1c: 0x0  nop
    ctx->pc = 0x25fd1cu;
    // NOP
label_25fd20:
    // 0x25fd20: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25fd24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25fd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25fd28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25fd2c: 0x28e30007  slti        $v1, $a3, 0x7
    ctx->pc = 0x25fd2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x25fd30: 0x0  nop
    ctx->pc = 0x25fd30u;
    // NOP
    // 0x25fd34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25FD34u;
    {
        const bool branch_taken_0x25fd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD34u;
        // 0x25fd38: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd34) {
            ctx->pc = 0x25FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fd20;
        }
    }
    ctx->pc = 0x25FD3Cu;
    // 0x25fd3c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25fd40: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x25fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x25fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD44u;
        // 0x25fd48: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD4Cu;
    // 0x25fd4c: 0x0  nop
    ctx->pc = 0x25fd4cu;
    // NOP
    ctx->pc = 0x25fd50u;
}
