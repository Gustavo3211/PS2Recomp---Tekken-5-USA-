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

// Function: sub_00499D18
// Address: 0x499d18 - 0x499d60
void sub_00499D18_0x499d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499D18_0x499d18");
#endif

    ctx->pc = 0x499d18u;

    // 0x499d18: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x499d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x499d1c: 0x24450b58  addiu       $a1, $v0, 0xB58
    ctx->pc = 0x499d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x499d20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B58u));
    // 0x499d24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499d28: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x499d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x499D2Cu;
    {
        const bool branch_taken_0x499d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D2Cu;
        // 0x499d30: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d2c) {
            ctx->pc = 0x499D40u;
            goto label_499d40;
        }
    }
    ctx->pc = 0x499D34u;
    // 0x499d34: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x499d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x499d38: 0x3e00008  jr          $ra
    ctx->pc = 0x499D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D38u;
        // 0x499d3c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499D40u;
label_499d40:
    // 0x499d40: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x499d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x499d44: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x499d44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499d48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499d4c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x499d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499d54: 0x3e00008  jr          $ra
    ctx->pc = 0x499D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D54u;
        // 0x499d58: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499D5Cu;
    // 0x499d5c: 0x0  nop
    ctx->pc = 0x499d5cu;
    // NOP
    ctx->pc = 0x499d60u;
}
