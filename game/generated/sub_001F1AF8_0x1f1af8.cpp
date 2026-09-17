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

// Function: sub_001F1AF8
// Address: 0x1f1af8 - 0x1f1b30
void sub_001F1AF8_0x1f1af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1AF8_0x1f1af8");
#endif

    ctx->pc = 0x1f1af8u;

    // 0x1f1af8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f1af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1afc: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1f1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1f1b00: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1f1b04: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1f1b04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f1b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1b0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f1b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1b10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1B10u;
    {
        const bool branch_taken_0x1f1b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B10u;
        // 0x1f1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b10) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1B18u;
    // 0x1f1b18: 0x90a30205  lbu         $v1, 0x205($a1)
    ctx->pc = 0x1f1b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 517)));
    // 0x1f1b1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1B1Cu;
    {
        const bool branch_taken_0x1f1b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B1Cu;
        // 0x1f1b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b1c) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1B24u;
    // 0x1f1b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1b28:
    // 0x1f1b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B30u;
}
