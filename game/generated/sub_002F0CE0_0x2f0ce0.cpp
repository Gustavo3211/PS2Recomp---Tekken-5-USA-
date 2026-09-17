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

// Function: sub_002F0CE0
// Address: 0x2f0ce0 - 0x2f0d38
void sub_002F0CE0_0x2f0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0CE0_0x2f0ce0");
#endif

    switch (ctx->pc) {
        case 0x2f0cf8u: goto label_2f0cf8;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d08u: goto label_2f0d08;
        case 0x2f0d10u: goto label_2f0d10;
        case 0x2f0d18u: goto label_2f0d18;
        case 0x2f0d20u: goto label_2f0d20;
        case 0x2f0d28u: goto label_2f0d28;
        default: break;
    }

    ctx->pc = 0x2f0ce0u;

    // 0x2f0ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0cf0: 0xc0dc746  jal         func_371D18
    ctx->pc = 0x2F0CF0u;
    SET_GPR_U32(ctx, 31, 0x2F0CF8u);
    ctx->pc = 0x2F0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CF0u;
    // 0x2f0cf4: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371D18u, 0x2F0CF0u, 0x2F0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CF8u;
label_2f0cf8:
    // 0x2f0cf8: 0xc0dc74e  jal         func_371D38
    ctx->pc = 0x2F0CF8u;
    SET_GPR_U32(ctx, 31, 0x2F0D00u);
    ctx->pc = 0x2F0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CF8u;
    // 0x2f0cfc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371D38u, 0x2F0CF8u, 0x2F0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D00u;
label_2f0d00:
    // 0x2f0d00: 0xc0dc758  jal         func_371D60
    ctx->pc = 0x2F0D00u;
    SET_GPR_U32(ctx, 31, 0x2F0D08u);
    ctx->pc = 0x2F0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D00u;
    // 0x2f0d04: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371D60u, 0x2F0D00u, 0x2F0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D08u;
label_2f0d08:
    // 0x2f0d08: 0xc0dc762  jal         func_371D88
    ctx->pc = 0x2F0D08u;
    SET_GPR_U32(ctx, 31, 0x2F0D10u);
    ctx->pc = 0x2F0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D08u;
    // 0x2f0d0c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371D88u, 0x2F0D08u, 0x2F0D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D10u;
label_2f0d10:
    // 0x2f0d10: 0xc0dc76c  jal         func_371DB0
    ctx->pc = 0x2F0D10u;
    SET_GPR_U32(ctx, 31, 0x2F0D18u);
    ctx->pc = 0x2F0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D10u;
    // 0x2f0d14: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371DB0u, 0x2F0D10u, 0x2F0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D18u;
label_2f0d18:
    // 0x2f0d18: 0xc0dc774  jal         func_371DD0
    ctx->pc = 0x2F0D18u;
    SET_GPR_U32(ctx, 31, 0x2F0D20u);
    ctx->pc = 0x2F0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D18u;
    // 0x2f0d1c: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371DD0u, 0x2F0D18u, 0x2F0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D20u;
label_2f0d20:
    // 0x2f0d20: 0xc07c356  jal         func_1F0D58
    ctx->pc = 0x2F0D20u;
    SET_GPR_U32(ctx, 31, 0x2F0D28u);
    ctx->pc = 0x1F0D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0D58u, 0x2F0D20u, 0x2F0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D28u;
label_2f0d28:
    // 0x2f0d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D30u;
        // 0x2f0d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0D38u;
}
