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

// Function: sub_0023AAD0
// Address: 0x23aad0 - 0x23ab08
void sub_0023AAD0_0x23aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAD0_0x23aad0");
#endif

    ctx->pc = 0x23aad0u;

    // 0x23aad0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23AAD0u;
    {
        const bool branch_taken_0x23aad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAD0u;
        // 0x23aad4: 0x3c022004  lui         $v0, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8196 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aad0) {
            ctx->pc = 0x23AAFCu;
            goto label_23aafc;
        }
    }
    ctx->pc = 0x23AAD8u;
    // 0x23aad8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23aadc: 0x34420612  ori         $v0, $v0, 0x612
    ctx->pc = 0x23aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1554);
    // 0x23aae0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AAE0u;
    {
        const bool branch_taken_0x23aae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23aae0) {
            ctx->pc = 0x23AAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AAE0u;
            // 0x23aae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AAFCu;
            goto label_23aafc;
        }
    }
    ctx->pc = 0x23AAE8u;
    // 0x23aae8: 0x3c02f8ac  lui         $v0, 0xF8AC
    ctx->pc = 0x23aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63660 << 16));
    // 0x23aaec: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x23aaf0: 0x34420739  ori         $v0, $v0, 0x739
    ctx->pc = 0x23aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1849);
    // 0x23aaf4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23AAF4u;
    {
        const bool branch_taken_0x23aaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23aaf4) {
            ctx->pc = 0x23AAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AAF4u;
            // 0x23aaf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AAFCu;
            goto label_23aafc;
        }
    }
    ctx->pc = 0x23AAFCu;
label_23aafc:
    // 0x23aafc: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAFCu;
        // 0x23ab00: 0xaf85a918  sw          $a1, -0x56E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB04u;
    // 0x23ab04: 0x0  nop
    ctx->pc = 0x23ab04u;
    // NOP
    ctx->pc = 0x23ab08u;
}
