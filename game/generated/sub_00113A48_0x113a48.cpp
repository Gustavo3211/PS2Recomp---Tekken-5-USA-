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

// Function: sub_00113A48
// Address: 0x113a48 - 0x113ab8
void sub_00113A48_0x113a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113A48_0x113a48");
#endif

    switch (ctx->pc) {
        case 0x113a64u: goto label_113a64;
        case 0x113a6cu: goto label_113a6c;
        case 0x113a80u: goto label_113a80;
        case 0x113a9cu: goto label_113a9c;
        default: break;
    }

    ctx->pc = 0x113a48u;

    // 0x113a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113a5c: 0xc044df8  jal         func_1137E0
    ctx->pc = 0x113A5Cu;
    SET_GPR_U32(ctx, 31, 0x113A64u);
    ctx->pc = 0x113A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A5Cu;
    // 0x113a60: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137E0u, 0x113A5Cu, 0x113A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A64u;
label_113a64:
    // 0x113a64: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x113A64u;
    SET_GPR_U32(ctx, 31, 0x113A6Cu);
    ctx->pc = 0x113A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A64u;
    // 0x113a68: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x113A64u, 0x113A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A6Cu;
label_113a6c:
    // 0x113a6c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x113a6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x113a70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113A70u;
    {
        const bool branch_taken_0x113a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A70u;
        // 0x113a74: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a70) {
            ctx->pc = 0x113A88u;
            goto label_113a88;
        }
    }
    ctx->pc = 0x113A78u;
    // 0x113a78: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x113A78u;
    SET_GPR_U32(ctx, 31, 0x113A80u);
    ctx->pc = 0x113A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A78u;
    // 0x113a7c: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x113A78u, 0x113A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A80u;
label_113a80:
    // 0x113a80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113A80u;
    {
        const bool branch_taken_0x113a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A80u;
        // 0x113a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a80) {
            ctx->pc = 0x113AA0u;
            goto label_113aa0;
        }
    }
    ctx->pc = 0x113A88u;
label_113a88:
    // 0x113a88: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x113a88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x113a8c: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x113a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x113a90: 0x8e2411a0  lw          $a0, 0x11A0($s1)
    ctx->pc = 0x113a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    // 0x113a94: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x113A94u;
    SET_GPR_U32(ctx, 31, 0x113A9Cu);
    ctx->pc = 0x113A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A94u;
    // 0x113a98: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x113A94u, 0x113A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A9Cu;
label_113a9c:
    // 0x113a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113aa0:
    // 0x113aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113aa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113aac: 0x3e00008  jr          $ra
    ctx->pc = 0x113AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AACu;
        // 0x113ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113AB4u;
    // 0x113ab4: 0x0  nop
    ctx->pc = 0x113ab4u;
    // NOP
    ctx->pc = 0x113ab8u;
}
