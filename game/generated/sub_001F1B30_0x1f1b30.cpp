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

// Function: sub_001F1B30
// Address: 0x1f1b30 - 0x1f1b90
void sub_001F1B30_0x1f1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B30_0x1f1b30");
#endif

    ctx->pc = 0x1f1b30u;

    // 0x1f1b30: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1f1b34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f1b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b38: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1f1b3c: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1f1b3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f1b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1b44: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f1b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1b48: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1B48u;
    {
        const bool branch_taken_0x1f1b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B48u;
        // 0x1f1b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b48) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B50u;
    // 0x1f1b50: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x1f1b54: 0x84c30096  lh          $v1, 0x96($a2)
    ctx->pc = 0x1f1b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x1f1b58: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1f1b58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f1b5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1b60: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f1b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1b64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1B64u;
    {
        const bool branch_taken_0x1f1b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B64u;
        // 0x1f1b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b64) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B6Cu;
    // 0x1f1b6c: 0x90a20205  lbu         $v0, 0x205($a1)
    ctx->pc = 0x1f1b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 517)));
    // 0x1f1b70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1B70u;
    {
        const bool branch_taken_0x1f1b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B70u;
        // 0x1f1b74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b70) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B78u;
    // 0x1f1b78: 0x90c30205  lbu         $v1, 0x205($a2)
    ctx->pc = 0x1f1b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 517)));
    // 0x1f1b7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1B7Cu;
    {
        const bool branch_taken_0x1f1b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B7Cu;
        // 0x1f1b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b7c) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B84u;
    // 0x1f1b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1b88:
    // 0x1f1b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B90u;
}
