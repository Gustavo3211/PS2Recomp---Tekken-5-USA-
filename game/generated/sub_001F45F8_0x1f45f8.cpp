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

// Function: sub_001F45F8
// Address: 0x1f45f8 - 0x1f4628
void sub_001F45F8_0x1f45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F45F8_0x1f45f8");
#endif

    switch (ctx->pc) {
        case 0x1f4600u: goto label_1f4600;
        default: break;
    }

    ctx->pc = 0x1f45f8u;

    // 0x1f45f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f45f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45fc: 0x0  nop
    ctx->pc = 0x1f45fcu;
    // NOP
label_1f4600:
    // 0x1f4600: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f4604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f4608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f460c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1f460cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f4610: 0x0  nop
    ctx->pc = 0x1f4610u;
    // NOP
    // 0x1f4614: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F4614u;
    {
        const bool branch_taken_0x1f4614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4614u;
        // 0x1f4618: 0xac400130  sw          $zero, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4614) {
            ctx->pc = 0x1F4600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4600;
        }
    }
    ctx->pc = 0x1F461Cu;
    // 0x1f461c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F461Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4624u;
    // 0x1f4624: 0x0  nop
    ctx->pc = 0x1f4624u;
    // NOP
    ctx->pc = 0x1f4628u;
}
