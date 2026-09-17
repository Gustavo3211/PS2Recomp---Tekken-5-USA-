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

// Function: sub_002989D8
// Address: 0x2989d8 - 0x298a10
void sub_002989D8_0x2989d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002989D8_0x2989d8");
#endif

    switch (ctx->pc) {
        case 0x2989e0u: goto label_2989e0;
        default: break;
    }

    ctx->pc = 0x2989d8u;

    // 0x2989d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2989d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989dc: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x2989dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2989e0:
    // 0x2989e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2989e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2989e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2989e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2989e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2989ec: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2989ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2989f0: 0x0  nop
    ctx->pc = 0x2989f0u;
    // NOP
    // 0x2989f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2989F4u;
    {
        const bool branch_taken_0x2989f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2989F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989F4u;
        // 0x2989f8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989f4) {
            ctx->pc = 0x2989E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2989e0;
        }
    }
    ctx->pc = 0x2989FCu;
    // 0x2989fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2989fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x298a00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x298a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x298a04: 0x3e00008  jr          $ra
    ctx->pc = 0x298A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A04u;
        // 0x298a08: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298A0Cu;
    // 0x298a0c: 0x0  nop
    ctx->pc = 0x298a0cu;
    // NOP
    ctx->pc = 0x298a10u;
}
