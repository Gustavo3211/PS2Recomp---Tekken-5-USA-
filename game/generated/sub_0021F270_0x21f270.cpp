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

// Function: sub_0021F270
// Address: 0x21f270 - 0x21f2b0
void sub_0021F270_0x21f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F270_0x21f270");
#endif

    switch (ctx->pc) {
        case 0x21f280u: goto label_21f280;
        case 0x21f298u: goto label_21f298;
        case 0x21f2a0u: goto label_21f2a0;
        default: break;
    }

    ctx->pc = 0x21f270u;

    // 0x21f270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f278: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x21F278u;
    SET_GPR_U32(ctx, 31, 0x21F280u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x21F278u, 0x21F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F280u;
label_21f280:
    // 0x21f280: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F280u;
    {
        const bool branch_taken_0x21f280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F280u;
        // 0x21f284: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f280) {
            ctx->pc = 0x21F2A4u;
            goto label_21f2a4;
        }
    }
    ctx->pc = 0x21F288u;
    // 0x21f288: 0x8f84c94c  lw          $a0, -0x36B4($gp)
    ctx->pc = 0x21f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953292)));
    // 0x21f28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f290: 0xc087c14  jal         func_21F050
    ctx->pc = 0x21F290u;
    SET_GPR_U32(ctx, 31, 0x21F298u);
    ctx->pc = 0x21F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F290u;
    // 0x21f294: 0xaf82c950  sw          $v0, -0x36B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F050u, 0x21F290u, 0x21F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F298u;
label_21f298:
    // 0x21f298: 0xc087c4c  jal         func_21F130
    ctx->pc = 0x21F298u;
    SET_GPR_U32(ctx, 31, 0x21F2A0u);
    ctx->pc = 0x21F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F298u;
    // 0x21f29c: 0x8f84c948  lw          $a0, -0x36B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F130u, 0x21F298u, 0x21F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2A0u;
label_21f2a0:
    // 0x21f2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f2a4:
    // 0x21f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2A4u;
        // 0x21f2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F2ACu;
    // 0x21f2ac: 0x0  nop
    ctx->pc = 0x21f2acu;
    // NOP
    ctx->pc = 0x21f2b0u;
}
