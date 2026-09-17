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

// Function: sub_0021F2B0
// Address: 0x21f2b0 - 0x21f2f8
void sub_0021F2B0_0x21f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F2B0_0x21f2b0");
#endif

    switch (ctx->pc) {
        case 0x21f2c0u: goto label_21f2c0;
        case 0x21f2e0u: goto label_21f2e0;
        case 0x21f2e8u: goto label_21f2e8;
        default: break;
    }

    ctx->pc = 0x21f2b0u;

    // 0x21f2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f2b8: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x21F2B8u;
    SET_GPR_U32(ctx, 31, 0x21F2C0u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x21F2B8u, 0x21F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2C0u;
label_21f2c0:
    // 0x21f2c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21F2C0u;
    {
        const bool branch_taken_0x21f2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C0u;
        // 0x21f2c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2c0) {
            ctx->pc = 0x21F2ECu;
            goto label_21f2ec;
        }
    }
    ctx->pc = 0x21F2C8u;
    // 0x21f2c8: 0x8f82c950  lw          $v0, -0x36B0($gp)
    ctx->pc = 0x21f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953296)));
    // 0x21f2cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F2CCu;
    {
        const bool branch_taken_0x21f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f2cc) {
            ctx->pc = 0x21F2ECu;
            goto label_21f2ec;
        }
    }
    ctx->pc = 0x21F2D4u;
    // 0x21f2d4: 0x8f84c94c  lw          $a0, -0x36B4($gp)
    ctx->pc = 0x21f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953292)));
    // 0x21f2d8: 0xc087c22  jal         func_21F088
    ctx->pc = 0x21F2D8u;
    SET_GPR_U32(ctx, 31, 0x21F2E0u);
    ctx->pc = 0x21F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2D8u;
    // 0x21f2dc: 0xaf80c950  sw          $zero, -0x36B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F088u, 0x21F2D8u, 0x21F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2E0u;
label_21f2e0:
    // 0x21f2e0: 0xc087c5c  jal         func_21F170
    ctx->pc = 0x21F2E0u;
    SET_GPR_U32(ctx, 31, 0x21F2E8u);
    ctx->pc = 0x21F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2E0u;
    // 0x21f2e4: 0x8f84c948  lw          $a0, -0x36B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F170u, 0x21F2E0u, 0x21F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2E8u;
label_21f2e8:
    // 0x21f2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f2ec:
    // 0x21f2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21F2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2ECu;
        // 0x21f2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F2F4u;
    // 0x21f2f4: 0x0  nop
    ctx->pc = 0x21f2f4u;
    // NOP
    ctx->pc = 0x21f2f8u;
}
