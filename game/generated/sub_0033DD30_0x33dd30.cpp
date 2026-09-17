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

// Function: sub_0033DD30
// Address: 0x33dd30 - 0x33dd60
void sub_0033DD30_0x33dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DD30_0x33dd30");
#endif

    switch (ctx->pc) {
        case 0x33dd50u: goto label_33dd50;
        default: break;
    }

    ctx->pc = 0x33dd30u;

    // 0x33dd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33dd34: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x33dd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33dd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33dd3c: 0x94860014  lhu         $a2, 0x14($a0)
    ctx->pc = 0x33dd3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33dd40: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DD40u;
    {
        const bool branch_taken_0x33dd40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x33DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD40u;
        // 0x33dd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd40) {
            ctx->pc = 0x33DD54u;
            goto label_33dd54;
        }
    }
    ctx->pc = 0x33DD48u;
    // 0x33dd48: 0xc0ceef2  jal         func_33BBC8
    ctx->pc = 0x33DD48u;
    SET_GPR_U32(ctx, 31, 0x33DD50u);
    ctx->pc = 0x33DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DD48u;
    // 0x33dd4c: 0x8f84ccd4  lw          $a0, -0x332C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BBC8u, 0x33DD48u, 0x33DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DD50u;
label_33dd50:
    // 0x33dd50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33dd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33dd54:
    // 0x33dd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x33DD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD58u;
        // 0x33dd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DD60u;
}
