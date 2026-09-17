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

// Function: sub_002624D0
// Address: 0x2624d0 - 0x262510
void sub_002624D0_0x2624d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002624D0_0x2624d0");
#endif

    ctx->pc = 0x2624d0u;

    // 0x2624d0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2624d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2624d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2624d8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2624d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2624dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2624DCu;
    {
        const bool branch_taken_0x2624dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624DCu;
        // 0x2624e0: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624dc) {
            ctx->pc = 0x262504u;
            goto label_262504;
        }
    }
    ctx->pc = 0x2624E4u;
    // 0x2624e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2624e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2624e8: 0xa4680006  sh          $t0, 0x6($v1)
    ctx->pc = 0x2624e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x2624ec: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2624ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2624f0: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x2624f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2624f4: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x2624f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2624f8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2624f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2624fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262500: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x262500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_262504:
    // 0x262504: 0x3e00008  jr          $ra
    ctx->pc = 0x262504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26250Cu;
    // 0x26250c: 0x0  nop
    ctx->pc = 0x26250cu;
    // NOP
    ctx->pc = 0x262510u;
}
