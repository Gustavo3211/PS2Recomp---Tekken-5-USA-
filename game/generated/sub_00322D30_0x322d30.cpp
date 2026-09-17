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

// Function: sub_00322D30
// Address: 0x322d30 - 0x322d80
void sub_00322D30_0x322d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322D30_0x322d30");
#endif

    switch (ctx->pc) {
        case 0x322d74u: goto label_322d74;
        default: break;
    }

    ctx->pc = 0x322d30u;

    // 0x322d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322d38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x322d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x322d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x322d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322d40: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x322D40u;
    {
        const bool branch_taken_0x322d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D40u;
        // 0x322d44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d40) {
            ctx->pc = 0x322D68u;
            goto label_322d68;
        }
    }
    ctx->pc = 0x322D48u;
    // 0x322d48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x322d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322d4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322d50: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x322d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x322d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322D54u;
    {
        const bool branch_taken_0x322d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D54u;
        // 0x322d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d54) {
            ctx->pc = 0x322D68u;
            goto label_322d68;
        }
    }
    ctx->pc = 0x322D5Cu;
    // 0x322d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x322D5Cu;
    {
        const bool branch_taken_0x322d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d5c) {
            ctx->pc = 0x322D6Cu;
            goto label_322d6c;
        }
    }
    ctx->pc = 0x322D64u;
    // 0x322d64: 0x0  nop
    ctx->pc = 0x322d64u;
    // NOP
label_322d68:
    // 0x322d68: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x322d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_322d6c:
    // 0x322d6c: 0xc0c9602  jal         func_325808
    ctx->pc = 0x322D6Cu;
    SET_GPR_U32(ctx, 31, 0x322D74u);
    ctx->pc = 0x322D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D6Cu;
    // 0x322d70: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325808u, 0x322D6Cu, 0x322D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D74u;
label_322d74:
    // 0x322d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322d78: 0x3e00008  jr          $ra
    ctx->pc = 0x322D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D78u;
        // 0x322d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322D80u;
}
