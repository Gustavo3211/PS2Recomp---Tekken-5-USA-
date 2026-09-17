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

// Function: sub_0048BD00
// Address: 0x48bd00 - 0x48bd68
void sub_0048BD00_0x48bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BD00_0x48bd00");
#endif

    switch (ctx->pc) {
        case 0x48bd10u: goto label_48bd10;
        case 0x48bd18u: goto label_48bd18;
        case 0x48bd20u: goto label_48bd20;
        case 0x48bd28u: goto label_48bd28;
        case 0x48bd30u: goto label_48bd30;
        case 0x48bd38u: goto label_48bd38;
        case 0x48bd40u: goto label_48bd40;
        case 0x48bd48u: goto label_48bd48;
        case 0x48bd58u: goto label_48bd58;
        default: break;
    }

    ctx->pc = 0x48bd00u;

    // 0x48bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48bd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bd08: 0xc124034  jal         func_4900D0
    ctx->pc = 0x48BD08u;
    SET_GPR_U32(ctx, 31, 0x48BD10u);
    ctx->pc = 0x4900D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4900D0u, 0x48BD08u, 0x48BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD10u;
label_48bd10:
    // 0x48bd10: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x48BD10u;
    SET_GPR_U32(ctx, 31, 0x48BD18u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x48BD10u, 0x48BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD18u;
label_48bd18:
    // 0x48bd18: 0xc124642  jal         func_491908
    ctx->pc = 0x48BD18u;
    SET_GPR_U32(ctx, 31, 0x48BD20u);
    ctx->pc = 0x491908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491908u, 0x48BD18u, 0x48BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD20u;
label_48bd20:
    // 0x48bd20: 0xc128048  jal         func_4A0120
    ctx->pc = 0x48BD20u;
    SET_GPR_U32(ctx, 31, 0x48BD28u);
    ctx->pc = 0x4A0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0120u, 0x48BD20u, 0x48BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD28u;
label_48bd28:
    // 0x48bd28: 0xc126c98  jal         func_49B260
    ctx->pc = 0x48BD28u;
    SET_GPR_U32(ctx, 31, 0x48BD30u);
    ctx->pc = 0x49B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B260u, 0x48BD28u, 0x48BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD30u;
label_48bd30:
    // 0x48bd30: 0xc125e26  jal         func_497898
    ctx->pc = 0x48BD30u;
    SET_GPR_U32(ctx, 31, 0x48BD38u);
    ctx->pc = 0x497898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497898u, 0x48BD30u, 0x48BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD38u;
label_48bd38:
    // 0x48bd38: 0xc12977e  jal         func_4A5DF8
    ctx->pc = 0x48BD38u;
    SET_GPR_U32(ctx, 31, 0x48BD40u);
    ctx->pc = 0x4A5DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DF8u, 0x48BD38u, 0x48BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD40u;
label_48bd40:
    // 0x48bd40: 0xc12bd48  jal         func_4AF520
    ctx->pc = 0x48BD40u;
    SET_GPR_U32(ctx, 31, 0x48BD48u);
    ctx->pc = 0x4AF520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF520u, 0x48BD40u, 0x48BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD48u;
label_48bd48:
    // 0x48bd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bd4c: 0x81292b2  j           func_4A4AC8
    ctx->pc = 0x48BD4Cu;
    ctx->pc = 0x48BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BD4Cu;
    // 0x48bd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4AC8u;
    sub_004A4AC8_0x4a4ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x48BD54u;
    // 0x48bd54: 0x0  nop
    ctx->pc = 0x48bd54u;
    // NOP
label_48bd58:
    // 0x48bd58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48bd5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48bd60: 0x3e00008  jr          $ra
    ctx->pc = 0x48BD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD60u;
        // 0x48bd64: 0xa462d696  sh          $v0, -0x296A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956694), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BD68u;
}
