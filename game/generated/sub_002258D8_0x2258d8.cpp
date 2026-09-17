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

// Function: sub_002258D8
// Address: 0x2258d8 - 0x225938
void sub_002258D8_0x2258d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002258D8_0x2258d8");
#endif

    ctx->pc = 0x2258d8u;

    // 0x2258d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2258dc: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2258e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2258e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2258e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258e8: 0x250861b0  addiu       $t0, $t0, 0x61B0
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25008));
    // 0x2258ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2258ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2258f0: 0x485021  addu        $t2, $v0, $t0
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2258f4: 0x24090097  addiu       $t1, $zero, 0x97
    ctx->pc = 0x2258f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x2258f8: 0x8d430024  lw          $v1, 0x24($t2)
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2258fc: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x2258fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
    // 0x225900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225904: 0xad45000c  sw          $a1, 0xC($t2)
    ctx->pc = 0x225904u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 5));
    // 0x225908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22590c: 0xad460014  sw          $a2, 0x14($t2)
    ctx->pc = 0x22590cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 6));
    // 0x225910: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225914: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x225914u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
    // 0x225918: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225918u;
    {
        const bool branch_taken_0x225918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x22591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225918u;
        // 0x22591c: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225918) {
            ctx->pc = 0x225928u;
            goto label_225928;
        }
    }
    ctx->pc = 0x225920u;
    // 0x225920: 0x3e00008  jr          $ra
    ctx->pc = 0x225920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225920u;
        // 0x225924: 0xad470030  sw          $a3, 0x30($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225928u;
label_225928:
    // 0x225928: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x225928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22592c: 0x3e00008  jr          $ra
    ctx->pc = 0x22592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22592Cu;
        // 0x225930: 0xad420030  sw          $v0, 0x30($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225934u;
    // 0x225934: 0x0  nop
    ctx->pc = 0x225934u;
    // NOP
    ctx->pc = 0x225938u;
}
