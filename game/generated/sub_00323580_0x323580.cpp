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

// Function: sub_00323580
// Address: 0x323580 - 0x3235f0
void sub_00323580_0x323580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323580_0x323580");
#endif

    switch (ctx->pc) {
        case 0x3235a4u: goto label_3235a4;
        case 0x3235c8u: goto label_3235c8;
        case 0x3235d0u: goto label_3235d0;
        case 0x3235d8u: goto label_3235d8;
        case 0x3235e0u: goto label_3235e0;
        default: break;
    }

    ctx->pc = 0x323580u;

    // 0x323580: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x323580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x323584: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x323588: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x323588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x32358c: 0x24c68390  addiu       $a2, $a2, -0x7C70
    ctx->pc = 0x32358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935440));
    // 0x323590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323594: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x323594u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x323598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32359c: 0xc0cbed4  jal         func_32FB50
    ctx->pc = 0x32359Cu;
    SET_GPR_U32(ctx, 31, 0x3235A4u);
    ctx->pc = 0x3235A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32359Cu;
    // 0x3235a0: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB50u, 0x32359Cu, 0x3235A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235A4u;
label_3235a4:
    // 0x3235a4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3235a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x3235a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3235a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3235ac: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3235acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x3235b0: 0x2442eb00  addiu       $v0, $v0, -0x1500
    ctx->pc = 0x3235b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961920));
    // 0x3235b4: 0x24c6cb00  addiu       $a2, $a2, -0x3500
    ctx->pc = 0x3235b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953728));
    // 0x3235b8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x3235b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3235bc: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x3235bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x3235c0: 0xc0cbe94  jal         func_32FA50
    ctx->pc = 0x3235C0u;
    SET_GPR_U32(ctx, 31, 0x3235C8u);
    ctx->pc = 0x3235C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235C0u;
    // 0x3235c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FA50u, 0x3235C0u, 0x3235C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235C8u;
label_3235c8:
    // 0x3235c8: 0xc0c938c  jal         func_324E30
    ctx->pc = 0x3235C8u;
    SET_GPR_U32(ctx, 31, 0x3235D0u);
    ctx->pc = 0x324E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E30u, 0x3235C8u, 0x3235D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235D0u;
label_3235d0:
    // 0x3235d0: 0xc0c9608  jal         func_325820
    ctx->pc = 0x3235D0u;
    SET_GPR_U32(ctx, 31, 0x3235D8u);
    ctx->pc = 0x325820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325820u, 0x3235D0u, 0x3235D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235D8u;
label_3235d8:
    // 0x3235d8: 0xc0c963e  jal         func_3258F8
    ctx->pc = 0x3235D8u;
    SET_GPR_U32(ctx, 31, 0x3235E0u);
    ctx->pc = 0x3235DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235D8u;
    // 0x3235dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258F8u, 0x3235D8u, 0x3235E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235E0u;
label_3235e0:
    // 0x3235e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3235e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3235e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3235E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3235E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235E4u;
        // 0x3235e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3235E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3235ECu;
    // 0x3235ec: 0x0  nop
    ctx->pc = 0x3235ecu;
    // NOP
    ctx->pc = 0x3235f0u;
}
