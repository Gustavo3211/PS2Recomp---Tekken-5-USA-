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

// Function: sub_0022EB48
// Address: 0x22eb48 - 0x22eb90
void sub_0022EB48_0x22eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB48_0x22eb48");
#endif

    switch (ctx->pc) {
        case 0x22eb80u: goto label_22eb80;
        default: break;
    }

    ctx->pc = 0x22eb48u;

    // 0x22eb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22eb4c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22eb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22eb54: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22eb58: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22EB58u;
    {
        const bool branch_taken_0x22eb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb58) {
            ctx->pc = 0x22EB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EB58u;
            // 0x22eb5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EB84u;
            goto label_22eb84;
        }
    }
    ctx->pc = 0x22EB60u;
    // 0x22eb60: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22eb64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EB64u;
    {
        const bool branch_taken_0x22eb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB64u;
        // 0x22eb68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb64) {
            ctx->pc = 0x22EB80u;
            goto label_22eb80;
        }
    }
    ctx->pc = 0x22EB6Cu;
    // 0x22eb6c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x22eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22eb70: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22eb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22eb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb78: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x22EB78u;
    SET_GPR_U32(ctx, 31, 0x22EB80u);
    ctx->pc = 0x22EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB78u;
    // 0x22eb7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x22EB78u, 0x22EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB80u;
label_22eb80:
    // 0x22eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb84:
    // 0x22eb84: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB84u;
        // 0x22eb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EB8Cu;
    // 0x22eb8c: 0x0  nop
    ctx->pc = 0x22eb8cu;
    // NOP
    ctx->pc = 0x22eb90u;
}
