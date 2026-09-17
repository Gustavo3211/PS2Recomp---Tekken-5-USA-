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

// Function: sub_002FCBA0
// Address: 0x2fcba0 - 0x2fcbd8
void sub_002FCBA0_0x2fcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCBA0_0x2fcba0");
#endif

    switch (ctx->pc) {
        case 0x2fcbc8u: goto label_2fcbc8;
        default: break;
    }

    ctx->pc = 0x2fcba0u;

    // 0x2fcba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fcba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fcba4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fcba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fcba8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCBA8u;
    {
        const bool branch_taken_0x2fcba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBA8u;
        // 0x2fcbac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcba8) {
            ctx->pc = 0x2FCBC8u;
            goto label_2fcbc8;
        }
    }
    ctx->pc = 0x2FCBB0u;
    // 0x2fcbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcbb4: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCBB4u;
    {
        const bool branch_taken_0x2fcbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fcbb4) {
            ctx->pc = 0x2FCBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCBB4u;
            // 0x2fcbb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCBCCu;
            goto label_2fcbcc;
        }
    }
    ctx->pc = 0x2FCBBCu;
    // 0x2fcbbc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x2fcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x2fcbc0: 0xc0be9fe  jal         func_2FA7F8
    ctx->pc = 0x2FCBC0u;
    SET_GPR_U32(ctx, 31, 0x2FCBC8u);
    ctx->pc = 0x2FCBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBC0u;
    // 0x2fcbc4: 0x2484ec00  addiu       $a0, $a0, -0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA7F8u, 0x2FCBC0u, 0x2FCBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBC8u;
label_2fcbc8:
    // 0x2fcbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fcbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcbcc:
    // 0x2fcbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBCCu;
        // 0x2fcbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCBD4u;
    // 0x2fcbd4: 0x0  nop
    ctx->pc = 0x2fcbd4u;
    // NOP
    ctx->pc = 0x2fcbd8u;
}
