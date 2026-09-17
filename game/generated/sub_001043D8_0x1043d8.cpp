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

// Function: sub_001043D8
// Address: 0x1043d8 - 0x104420
void sub_001043D8_0x1043d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001043D8_0x1043d8");
#endif

    switch (ctx->pc) {
        case 0x10440cu: goto label_10440c;
        default: break;
    }

    ctx->pc = 0x1043d8u;

    // 0x1043d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1043D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043D8u;
        // 0x1043dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1043D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1043E0u;
    // 0x1043e0: 0x24c30013  addiu       $v1, $a2, 0x13
    ctx->pc = 0x1043e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x1043e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1043e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1043ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1043ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1043f0: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x1043f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x1043f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1043f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1043f8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1043f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1043fc: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1043fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104400: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x104404: 0xc040e6e  jal         func_1039B8
    ctx->pc = 0x104404u;
    SET_GPR_U32(ctx, 31, 0x10440Cu);
    ctx->pc = 0x104408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104404u;
    // 0x104408: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1039B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039B8u, 0x104404u, 0x10440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10440Cu;
label_10440c:
    // 0x10440c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104414: 0x3e00008  jr          $ra
    ctx->pc = 0x104414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104414u;
        // 0x104418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10441Cu;
    // 0x10441c: 0x0  nop
    ctx->pc = 0x10441cu;
    // NOP
    ctx->pc = 0x104420u;
}
