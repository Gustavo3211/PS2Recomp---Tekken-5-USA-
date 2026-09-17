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

// Function: sub_0023D060
// Address: 0x23d060 - 0x23d0a8
void sub_0023D060_0x23d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D060_0x23d060");
#endif

    ctx->pc = 0x23d060u;

    // 0x23d060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d064: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x23d064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23d068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d06c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d074: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x23d074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x23d078: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23d078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23d07c: 0x8ca5f39c  lw          $a1, -0xC64($a1)
    ctx->pc = 0x23d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964124)));
    // 0x23d080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d084: 0x8097d0a  j           func_25F428
    ctx->pc = 0x23D084u;
    ctx->pc = 0x23D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D084u;
    // 0x23d088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    sub_0025F428_0x25f428(rdram, ctx, runtime); return;
    ctx->pc = 0x23D08Cu;
    // 0x23d08c: 0x0  nop
    ctx->pc = 0x23d08cu;
    // NOP
    // 0x23d090: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x23d094: 0x84850096  lh          $a1, 0x96($a0)
    ctx->pc = 0x23d094u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x23d098: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x23d098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x23d09c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0A0u;
        // 0x23d0a4: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D0A8u;
}
