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

// Function: sub_0011AEF8
// Address: 0x11aef8 - 0x11af40
void sub_0011AEF8_0x11aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AEF8_0x11aef8");
#endif

    switch (ctx->pc) {
        case 0x11af00u: goto label_11af00;
        case 0x11af08u: goto label_11af08;
        case 0x11af18u: goto label_11af18;
        default: break;
    }

    ctx->pc = 0x11aef8u;

    // 0x11aef8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x11aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x11aefc: 0xc  syscall     0
    ctx->pc = 0x11aefcu;
    ctx->pc = 0x11AF00u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11af00:
    // 0x11af00: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF08u;
label_11af08:
    // 0x11af08: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x11af0c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x11AF0Cu;
    {
        const bool branch_taken_0x11af0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF0Cu;
        // 0x11af10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af0c) {
            ctx->pc = 0x11AF38u;
            goto label_11af38;
        }
    }
    ctx->pc = 0x11AF14u;
    // 0x11af14: 0x0  nop
    ctx->pc = 0x11af14u;
    // NOP
label_11af18:
    // 0x11af18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11af1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11af20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11af24: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x11af24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11af28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11af28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11af2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11af30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11AF30u;
    {
        const bool branch_taken_0x11af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11af30) {
            ctx->pc = 0x11AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af18;
        }
    }
    ctx->pc = 0x11AF38u;
label_11af38:
    // 0x11af38: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF38u;
        // 0x11af3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF40u;
}
