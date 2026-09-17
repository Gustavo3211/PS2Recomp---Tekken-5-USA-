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

// Function: sub_00369F10
// Address: 0x369f10 - 0x369f68
void sub_00369F10_0x369f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369F10_0x369f10");
#endif

    switch (ctx->pc) {
        case 0x369f38u: goto label_369f38;
        default: break;
    }

    ctx->pc = 0x369f10u;

    // 0x369f10: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x369f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369f14: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x369f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x369f18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x369f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x369f1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x369f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x369f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369f24: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x369f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x369f28: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x369F28u;
    {
        const bool branch_taken_0x369f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x369F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F28u;
        // 0x369f2c: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f28) {
            ctx->pc = 0x369F5Cu;
            goto label_369f5c;
        }
    }
    ctx->pc = 0x369F30u;
    // 0x369f30: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x369f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x369f34: 0x0  nop
    ctx->pc = 0x369f34u;
    // NOP
label_369f38:
    // 0x369f38: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x369f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x369f3c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x369f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x369f40: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x369f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x369f44: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x369f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x369f48: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x369f48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x369f4c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x369f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x369f50: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x369f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x369f54: 0x54a2fff8  bnel        $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x369F54u;
    {
        const bool branch_taken_0x369f54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x369f54) {
            ctx->pc = 0x369F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369F54u;
            // 0x369f58: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369f38;
        }
    }
    ctx->pc = 0x369F5Cu;
label_369f5c:
    // 0x369f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x369F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369F64u;
    // 0x369f64: 0x0  nop
    ctx->pc = 0x369f64u;
    // NOP
    ctx->pc = 0x369f68u;
}
