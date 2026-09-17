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

// Function: sub_002ED020
// Address: 0x2ed020 - 0x2ed080
void sub_002ED020_0x2ed020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED020_0x2ed020");
#endif

    switch (ctx->pc) {
        case 0x2ed038u: goto label_2ed038;
        case 0x2ed040u: goto label_2ed040;
        case 0x2ed048u: goto label_2ed048;
        case 0x2ed050u: goto label_2ed050;
        case 0x2ed058u: goto label_2ed058;
        case 0x2ed060u: goto label_2ed060;
        case 0x2ed068u: goto label_2ed068;
        case 0x2ed074u: goto label_2ed074;
        default: break;
    }

    ctx->pc = 0x2ed020u;

    // 0x2ed020: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed024: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed028: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed030: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED030u;
    SET_GPR_U32(ctx, 31, 0x2ED038u);
    ctx->pc = 0x2ED034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED030u;
    // 0x2ed034: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED030u, 0x2ED038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED038u;
label_2ed038:
    // 0x2ed038: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x2ED038u;
    SET_GPR_U32(ctx, 31, 0x2ED040u);
    ctx->pc = 0x2ED03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED038u;
    // 0x2ed03c: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x2ED038u, 0x2ED040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED040u;
label_2ed040:
    // 0x2ed040: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x2ED040u;
    SET_GPR_U32(ctx, 31, 0x2ED048u);
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x2ED040u, 0x2ED048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED048u;
label_2ed048:
    // 0x2ed048: 0xc07e710  jal         func_1F9C40
    ctx->pc = 0x2ED048u;
    SET_GPR_U32(ctx, 31, 0x2ED050u);
    ctx->pc = 0x2ED04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED048u;
    // 0x2ed04c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C40u, 0x2ED048u, 0x2ED050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED050u;
label_2ed050:
    // 0x2ed050: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x2ED050u;
    SET_GPR_U32(ctx, 31, 0x2ED058u);
    ctx->pc = 0x2ED054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED050u;
    // 0x2ed054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x2ED050u, 0x2ED058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED058u;
label_2ed058:
    // 0x2ed058: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x2ED058u;
    SET_GPR_U32(ctx, 31, 0x2ED060u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x2ED058u, 0x2ED060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED060u;
label_2ed060:
    // 0x2ed060: 0xc0b6b5a  jal         func_2DAD68
    ctx->pc = 0x2ED060u;
    SET_GPR_U32(ctx, 31, 0x2ED068u);
    ctx->pc = 0x2DAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD68u, 0x2ED060u, 0x2ED068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED068u;
label_2ed068:
    // 0x2ed068: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ed068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ed06c: 0xc0a5e92  jal         func_297A48
    ctx->pc = 0x2ED06Cu;
    SET_GPR_U32(ctx, 31, 0x2ED074u);
    ctx->pc = 0x2ED070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED06Cu;
    // 0x2ed070: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A48u, 0x2ED06Cu, 0x2ED074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED074u;
label_2ed074:
    // 0x2ed074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed078: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED078u;
        // 0x2ed07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED080u;
}
