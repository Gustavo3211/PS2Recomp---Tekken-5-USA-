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

// Function: sub_0022ADD8
// Address: 0x22add8 - 0x22ae40
void sub_0022ADD8_0x22add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ADD8_0x22add8");
#endif

    switch (ctx->pc) {
        case 0x22adf8u: goto label_22adf8;
        case 0x22ae2cu: goto label_22ae2c;
        default: break;
    }

    ctx->pc = 0x22add8u;

    // 0x22add8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22addc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22addcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22ade0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ade4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ade4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ade8: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22adec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22adf0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22ADF0u;
    SET_GPR_U32(ctx, 31, 0x22ADF8u);
    ctx->pc = 0x22ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADF0u;
    // 0x22adf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22ADF0u, 0x22ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADF8u;
label_22adf8:
    // 0x22adf8: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22adfc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22ae00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AE00u;
    {
        const bool branch_taken_0x22ae00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE00u;
        // 0x22ae04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae00) {
            ctx->pc = 0x22AE18u;
            goto label_22ae18;
        }
    }
    ctx->pc = 0x22AE08u;
    // 0x22ae08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ae0c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22ae10: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AE10u;
    {
        const bool branch_taken_0x22ae10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ae10) {
            ctx->pc = 0x22AE24u;
            goto label_22ae24;
        }
    }
    ctx->pc = 0x22AE18u;
label_22ae18:
    // 0x22ae18: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22ae1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae20: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22ae24:
    // 0x22ae24: 0xc0b82fe  jal         func_2E0BF8
    ctx->pc = 0x22AE24u;
    SET_GPR_U32(ctx, 31, 0x22AE2Cu);
    ctx->pc = 0x2E0BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0BF8u, 0x22AE24u, 0x22AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE2Cu;
label_22ae2c:
    // 0x22ae2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ae2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ae30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE34u;
        // 0x22ae38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AE3Cu;
    // 0x22ae3c: 0x0  nop
    ctx->pc = 0x22ae3cu;
    // NOP
    ctx->pc = 0x22ae40u;
}
