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

// Function: sub_002DFEC0
// Address: 0x2dfec0 - 0x2dff00
void sub_002DFEC0_0x2dfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFEC0_0x2dfec0");
#endif

    ctx->pc = 0x2dfec0u;

    // 0x2dfec0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2dfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2dfec4: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2dfec8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2dfec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dfecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFECCu;
    {
        const bool branch_taken_0x2dfecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFECCu;
        // 0x2dfed0: 0x24630052  addiu       $v1, $v1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfecc) {
            ctx->pc = 0x2DFEE4u;
            goto label_2dfee4;
        }
    }
    ctx->pc = 0x2DFED4u;
    // 0x2dfed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfed8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2dfed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dfedc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2dfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2dfee0: 0x24630052  addiu       $v1, $v1, 0x52
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
label_2dfee4:
    // 0x2dfee4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2dfee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dfee8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DFEE8u;
    {
        const bool branch_taken_0x2dfee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEE8u;
        // 0x2dfeec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfee8) {
            ctx->pc = 0x2DFEF4u;
            goto label_2dfef4;
        }
    }
    ctx->pc = 0x2DFEF0u;
    // 0x2dfef0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2dfef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2dfef4:
    // 0x2dfef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEF4u;
        // 0x2dfef8: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFEFCu;
    // 0x2dfefc: 0x0  nop
    ctx->pc = 0x2dfefcu;
    // NOP
    ctx->pc = 0x2dff00u;
}
