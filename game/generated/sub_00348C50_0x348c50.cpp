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

// Function: sub_00348C50
// Address: 0x348c50 - 0x348ca8
void sub_00348C50_0x348c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348C50_0x348c50");
#endif

    ctx->pc = 0x348c50u;

    // 0x348c50: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x348c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x348c54: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348C54u;
    {
        const bool branch_taken_0x348c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x348C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C54u;
        // 0x348c58: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c54) {
            ctx->pc = 0x348C68u;
            goto label_348c68;
        }
    }
    ctx->pc = 0x348C5Cu;
    // 0x348c5c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x348c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x348c60: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348C60u;
    {
        const bool branch_taken_0x348c60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x348C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C60u;
        // 0x348c64: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c60) {
            ctx->pc = 0x348C78u;
            goto label_348c78;
        }
    }
    ctx->pc = 0x348C68u;
label_348c68:
    // 0x348c68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348c6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348c70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x348c74: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x348c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_348c78:
    // 0x348c78: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348C78u;
    {
        const bool branch_taken_0x348c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x348C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C78u;
        // 0x348c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c78) {
            ctx->pc = 0x348C90u;
            goto label_348c90;
        }
    }
    ctx->pc = 0x348C80u;
    // 0x348c80: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x348c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x348c84: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348C84u;
    {
        const bool branch_taken_0x348c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x348c84) {
            ctx->pc = 0x348C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348C84u;
            // 0x348c88: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348C94u;
            goto label_348c94;
        }
    }
    ctx->pc = 0x348C8Cu;
    // 0x348c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348c90:
    // 0x348c90: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x348c90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_348c94:
    // 0x348c94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x348c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348c98: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x348c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x348c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x348C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C9Cu;
        // 0x348ca0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348CA4u;
    // 0x348ca4: 0x0  nop
    ctx->pc = 0x348ca4u;
    // NOP
    ctx->pc = 0x348ca8u;
}
