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

// Function: sub_00499B20
// Address: 0x499b20 - 0x499b68
void sub_00499B20_0x499b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499B20_0x499b20");
#endif

    ctx->pc = 0x499b20u;

    // 0x499b20: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x499b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x499b24: 0x24450b58  addiu       $a1, $v0, 0xB58
    ctx->pc = 0x499b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x499b28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B58u));
    // 0x499b2c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499b30: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x499b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499b34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x499B34u;
    {
        const bool branch_taken_0x499b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B34u;
        // 0x499b38: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b34) {
            ctx->pc = 0x499B58u;
            goto label_499b58;
        }
    }
    ctx->pc = 0x499B3Cu;
    // 0x499b3c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x499b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x499b40: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x499b40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499b44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499b48: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x499b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499b4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499b50: 0x3e00008  jr          $ra
    ctx->pc = 0x499B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B50u;
        // 0x499b54: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499B58u;
label_499b58:
    // 0x499b58: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x499b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x499b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x499B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B5Cu;
        // 0x499b60: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499B64u;
    // 0x499b64: 0x0  nop
    ctx->pc = 0x499b64u;
    // NOP
    ctx->pc = 0x499b68u;
}
