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

// Function: sub_00224A00
// Address: 0x224a00 - 0x224a28
void sub_00224A00_0x224a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A00_0x224a00");
#endif

    ctx->pc = 0x224a00u;

    // 0x224a00: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x224a04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224a0c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x224a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x224a10: 0x24216110  addiu       $at, $at, 0x6110
    ctx->pc = 0x224a10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 24848));
    // 0x224a14: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x224a18: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x224a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x224a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x224A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224A24u;
    // 0x224a24: 0x0  nop
    ctx->pc = 0x224a24u;
    // NOP
    ctx->pc = 0x224a28u;
}
