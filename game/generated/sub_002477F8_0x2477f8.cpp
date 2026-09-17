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

// Function: sub_002477F8
// Address: 0x2477f8 - 0x247840
void sub_002477F8_0x2477f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477F8_0x2477f8");
#endif

    ctx->pc = 0x2477f8u;

    // 0x2477f8: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2477fc: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x2477fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x247800: 0x24a56f50  addiu       $a1, $a1, 0x6F50
    ctx->pc = 0x247800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28496));
    // 0x247804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247808: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x247808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x24780c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247810: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x247810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x247814: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x247818: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x247818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x24781c: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x24781cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x247820: 0x8c8600c4  lw          $a2, 0xC4($a0)
    ctx->pc = 0x247820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x247824: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x247824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x247828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24782c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x247830: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x247834: 0x3e00008  jr          $ra
    ctx->pc = 0x247834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247834u;
        // 0x247838: 0xac460038  sw          $a2, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24783Cu;
    // 0x24783c: 0x0  nop
    ctx->pc = 0x24783cu;
    // NOP
    ctx->pc = 0x247840u;
}
