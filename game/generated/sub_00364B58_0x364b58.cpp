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

// Function: sub_00364B58
// Address: 0x364b58 - 0x364b90
void sub_00364B58_0x364b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364B58_0x364b58");
#endif

    ctx->pc = 0x364b58u;

    // 0x364b58: 0x8f83c818  lw          $v1, -0x37E8($gp)
    ctx->pc = 0x364b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x364b5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364b64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x364b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x364b68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364B68u;
    {
        const bool branch_taken_0x364b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B68u;
        // 0x364b6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b68) {
            ctx->pc = 0x364B80u;
            goto label_364b80;
        }
    }
    ctx->pc = 0x364B70u;
    // 0x364b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364b74: 0x80d916c  j           func_3645B0
    ctx->pc = 0x364B74u;
    ctx->pc = 0x364B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B74u;
    // 0x364b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3645B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3645B0u, 0x364B74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x364B7Cu;
    // 0x364b7c: 0x0  nop
    ctx->pc = 0x364b7cu;
    // NOP
label_364b80:
    // 0x364b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364b84: 0x3e00008  jr          $ra
    ctx->pc = 0x364B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B84u;
        // 0x364b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364B8Cu;
    // 0x364b8c: 0x0  nop
    ctx->pc = 0x364b8cu;
    // NOP
    ctx->pc = 0x364b90u;
}
