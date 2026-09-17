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

// Function: sub_002077A8
// Address: 0x2077a8 - 0x2077e0
void sub_002077A8_0x2077a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002077A8_0x2077a8");
#endif

    switch (ctx->pc) {
        case 0x2077b8u: goto label_2077b8;
        default: break;
    }

    ctx->pc = 0x2077a8u;

    // 0x2077a8: 0xa4800222  sh          $zero, 0x222($a0)
    ctx->pc = 0x2077a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x2077ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077b0: 0xac8001e0  sw          $zero, 0x1E0($a0)
    ctx->pc = 0x2077b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 0));
    // 0x2077b4: 0xa48002a0  sh          $zero, 0x2A0($a0)
    ctx->pc = 0x2077b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 672), (uint16_t)GPR_U32(ctx, 0));
label_2077b8:
    // 0x2077b8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2077bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2077c0: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x2077c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2077c4: 0x0  nop
    ctx->pc = 0x2077c4u;
    // NOP
    // 0x2077c8: 0x0  nop
    ctx->pc = 0x2077c8u;
    // NOP
    // 0x2077cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2077CCu;
    {
        const bool branch_taken_0x2077cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077CCu;
        // 0x2077d0: 0xa0600210  sb          $zero, 0x210($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077cc) {
            ctx->pc = 0x2077B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2077b8;
        }
    }
    ctx->pc = 0x2077D4u;
    // 0x2077d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2077D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077D4u;
        // 0x2077d8: 0xa080020a  sb          $zero, 0x20A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 522), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077DCu;
    // 0x2077dc: 0x0  nop
    ctx->pc = 0x2077dcu;
    // NOP
    ctx->pc = 0x2077e0u;
}
