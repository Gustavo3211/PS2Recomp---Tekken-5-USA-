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

// Function: sub_00291050
// Address: 0x291050 - 0x291090
void sub_00291050_0x291050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291050_0x291050");
#endif

    switch (ctx->pc) {
        case 0x291068u: goto label_291068;
        default: break;
    }

    ctx->pc = 0x291050u;

    // 0x291050: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x291050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x291054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291058: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x291058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x29105c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x29105cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x291060: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x291060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x291064: 0x0  nop
    ctx->pc = 0x291064u;
    // NOP
label_291068:
    // 0x291068: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x291068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29106c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x291070: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x291070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291074: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x291074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x291078: 0x28a30011  slti        $v1, $a1, 0x11
    ctx->pc = 0x291078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x29107c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x29107cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x291080: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x291080u;
    {
        const bool branch_taken_0x291080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291080u;
        // 0x291084: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291080) {
            ctx->pc = 0x291068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291068;
        }
    }
    ctx->pc = 0x291088u;
    // 0x291088: 0x3e00008  jr          $ra
    ctx->pc = 0x291088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291090u;
}
