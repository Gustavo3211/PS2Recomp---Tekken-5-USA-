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

// Function: sub_00210D68
// Address: 0x210d68 - 0x210d90
void sub_00210D68_0x210d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D68_0x210d68");
#endif

    ctx->pc = 0x210d68u;

    // 0x210d68: 0x90820203  lbu         $v0, 0x203($a0)
    ctx->pc = 0x210d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 515)));
    // 0x210d6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210D6Cu;
    {
        const bool branch_taken_0x210d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D6Cu;
        // 0x210d70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d6c) {
            ctx->pc = 0x210D80u;
            goto label_210d80;
        }
    }
    ctx->pc = 0x210D74u;
    // 0x210d74: 0x90a20203  lbu         $v0, 0x203($a1)
    ctx->pc = 0x210d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 515)));
    // 0x210d78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x210D78u;
    {
        const bool branch_taken_0x210d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d78) {
            ctx->pc = 0x210D84u;
            goto label_210d84;
        }
    }
    ctx->pc = 0x210D80u;
label_210d80:
    // 0x210d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210d84:
    // 0x210d84: 0x3e00008  jr          $ra
    ctx->pc = 0x210D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D84u;
        // 0x210d88: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D8Cu;
    // 0x210d8c: 0x0  nop
    ctx->pc = 0x210d8cu;
    // NOP
    ctx->pc = 0x210d90u;
}
