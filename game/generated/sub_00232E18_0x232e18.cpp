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

// Function: sub_00232E18
// Address: 0x232e18 - 0x232e80
void sub_00232E18_0x232e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E18_0x232e18");
#endif

    ctx->pc = 0x232e18u;

    // 0x232e18: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x232e1c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x232E1Cu;
    {
        const bool branch_taken_0x232e1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x232E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E1Cu;
        // 0x232e20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e1c) {
            ctx->pc = 0x232E48u;
            goto label_232e48;
        }
    }
    ctx->pc = 0x232E24u;
    // 0x232e24: 0x84a20148  lh          $v0, 0x148($a1)
    ctx->pc = 0x232e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x232e28: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232E28u;
    {
        const bool branch_taken_0x232e28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x232e28) {
            ctx->pc = 0x232E48u;
            goto label_232e48;
        }
    }
    ctx->pc = 0x232E30u;
    // 0x232e30: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x232e34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232E34u;
    {
        const bool branch_taken_0x232e34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x232e34) {
            ctx->pc = 0x232E48u;
            goto label_232e48;
        }
    }
    ctx->pc = 0x232E3Cu;
    // 0x232e3c: 0x84c20148  lh          $v0, 0x148($a2)
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x232e40: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232E40u;
    {
        const bool branch_taken_0x232e40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x232e40) {
            ctx->pc = 0x232E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232E40u;
            // 0x232e44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232E74u;
            goto label_232e74;
        }
    }
    ctx->pc = 0x232E48u;
label_232e48:
    // 0x232e48: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x232E48u;
    {
        const bool branch_taken_0x232e48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x232e48) {
            ctx->pc = 0x232E74u;
            goto label_232e74;
        }
    }
    ctx->pc = 0x232E50u;
    // 0x232e50: 0x84a20148  lh          $v0, 0x148($a1)
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x232e54: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232E54u;
    {
        const bool branch_taken_0x232e54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232e54) {
            ctx->pc = 0x232E74u;
            goto label_232e74;
        }
    }
    ctx->pc = 0x232E5Cu;
    // 0x232e5c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x232e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x232e60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232E60u;
    {
        const bool branch_taken_0x232e60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232e60) {
            ctx->pc = 0x232E74u;
            goto label_232e74;
        }
    }
    ctx->pc = 0x232E68u;
    // 0x232e68: 0x84c20148  lh          $v0, 0x148($a2)
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x232e6c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x232E6Cu;
    {
        const bool branch_taken_0x232e6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x232e6c) {
            ctx->pc = 0x232E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232E6Cu;
            // 0x232e70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232E74u;
            goto label_232e74;
        }
    }
    ctx->pc = 0x232E74u;
label_232e74:
    // 0x232e74: 0x3e00008  jr          $ra
    ctx->pc = 0x232E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E74u;
        // 0x232e78: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E7Cu;
    // 0x232e7c: 0x0  nop
    ctx->pc = 0x232e7cu;
    // NOP
    ctx->pc = 0x232e80u;
}
