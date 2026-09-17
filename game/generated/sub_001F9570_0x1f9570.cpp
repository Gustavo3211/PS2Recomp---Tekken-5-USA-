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

// Function: sub_001F9570
// Address: 0x1f9570 - 0x1f95b0
void sub_001F9570_0x1f9570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9570_0x1f9570");
#endif

    switch (ctx->pc) {
        case 0x1f9588u: goto label_1f9588;
        case 0x1f9590u: goto label_1f9590;
        case 0x1f959cu: goto label_1f959c;
        default: break;
    }

    ctx->pc = 0x1f9570u;

    // 0x1f9570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9578: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1f9578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1f957c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9580: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9580u;
    SET_GPR_U32(ctx, 31, 0x1F9588u);
    ctx->pc = 0x1F9584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9580u;
    // 0x1f9584: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9580u, 0x1F9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9588u;
label_1f9588:
    // 0x1f9588: 0xc07e6b4  jal         func_1F9AD0
    ctx->pc = 0x1F9588u;
    SET_GPR_U32(ctx, 31, 0x1F9590u);
    ctx->pc = 0x1F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AD0u, 0x1F9588u, 0x1F9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9590u;
label_1f9590:
    // 0x1f9590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9594: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1F9594u;
    SET_GPR_U32(ctx, 31, 0x1F959Cu);
    ctx->pc = 0x1F9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9594u;
    // 0x1f9598: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1F9594u, 0x1F959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F959Cu;
label_1f959c:
    // 0x1f959c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f959cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f95a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f95a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f95a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F95A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95A4u;
        // 0x1f95a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F95A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F95ACu;
    // 0x1f95ac: 0x0  nop
    ctx->pc = 0x1f95acu;
    // NOP
    ctx->pc = 0x1f95b0u;
}
