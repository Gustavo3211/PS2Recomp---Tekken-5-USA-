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

// Function: sub_0048D868
// Address: 0x48d868 - 0x48d8a0
void sub_0048D868_0x48d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D868_0x48d868");
#endif

    ctx->pc = 0x48d868u;

    // 0x48d868: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x48d868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x48d86c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x48d86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48d870: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x48d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48d874: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48d874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d878: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x48d878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48d87c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48D87Cu;
    {
        const bool branch_taken_0x48d87c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x48d87c) {
            ctx->pc = 0x48D894u;
            goto label_48d894;
        }
    }
    ctx->pc = 0x48D884u;
    // 0x48d884: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x48d884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48d888: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d88c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48d890: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x48d890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_48d894:
    // 0x48d894: 0x3e00008  jr          $ra
    ctx->pc = 0x48D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D894u;
        // 0x48d898: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D89Cu;
    // 0x48d89c: 0x0  nop
    ctx->pc = 0x48d89cu;
    // NOP
    ctx->pc = 0x48d8a0u;
}
