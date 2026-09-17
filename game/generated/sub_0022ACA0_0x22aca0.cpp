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

// Function: sub_0022ACA0
// Address: 0x22aca0 - 0x22ad08
void sub_0022ACA0_0x22aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ACA0_0x22aca0");
#endif

    switch (ctx->pc) {
        case 0x22acc0u: goto label_22acc0;
        case 0x22acf4u: goto label_22acf4;
        default: break;
    }

    ctx->pc = 0x22aca0u;

    // 0x22aca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22aca4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22aca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22acac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22acacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acb0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22acb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22acb8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22ACB8u;
    SET_GPR_U32(ctx, 31, 0x22ACC0u);
    ctx->pc = 0x22ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACB8u;
    // 0x22acbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22ACB8u, 0x22ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACC0u;
label_22acc0:
    // 0x22acc0: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22acc4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22acc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ACC8u;
    {
        const bool branch_taken_0x22acc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACC8u;
        // 0x22accc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acc8) {
            ctx->pc = 0x22ACE0u;
            goto label_22ace0;
        }
    }
    ctx->pc = 0x22ACD0u;
    // 0x22acd0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22acd4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22acd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22ACD8u;
    {
        const bool branch_taken_0x22acd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22acd8) {
            ctx->pc = 0x22ACECu;
            goto label_22acec;
        }
    }
    ctx->pc = 0x22ACE0u;
label_22ace0:
    // 0x22ace0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22ace4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ace8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22acec:
    // 0x22acec: 0xc0b836c  jal         func_2E0DB0
    ctx->pc = 0x22ACECu;
    SET_GPR_U32(ctx, 31, 0x22ACF4u);
    ctx->pc = 0x2E0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DB0u, 0x22ACECu, 0x22ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF4u;
label_22acf4:
    // 0x22acf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22acf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22acf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22acfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACFCu;
        // 0x22ad00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AD04u;
    // 0x22ad04: 0x0  nop
    ctx->pc = 0x22ad04u;
    // NOP
    ctx->pc = 0x22ad08u;
}
