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

// Function: sub_00344A48
// Address: 0x344a48 - 0x344af0
void sub_00344A48_0x344a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344A48_0x344a48");
#endif

    switch (ctx->pc) {
        case 0x344a8cu: goto label_344a8c;
        case 0x344a98u: goto label_344a98;
        case 0x344aa0u: goto label_344aa0;
        case 0x344aa8u: goto label_344aa8;
        case 0x344ab0u: goto label_344ab0;
        case 0x344ab8u: goto label_344ab8;
        case 0x344ac4u: goto label_344ac4;
        case 0x344ad4u: goto label_344ad4;
        default: break;
    }

    ctx->pc = 0x344a48u;

    // 0x344a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x344a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x344a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x344a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x344a5c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x344a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x344a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x344a64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a68: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x344a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x344a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a70: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x344a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x344a74: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x344a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x344a78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x344a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x344a7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x344a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x344a80: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x344a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x344a84: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x344A84u;
    SET_GPR_U32(ctx, 31, 0x344A8Cu);
    ctx->pc = 0x344A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A84u;
    // 0x344a88: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x344A84u, 0x344A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A8Cu;
label_344a8c:
    // 0x344a8c: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x344a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x344a90: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x344A90u;
    SET_GPR_U32(ctx, 31, 0x344A98u);
    ctx->pc = 0x344A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A90u;
    // 0x344a94: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x344A90u, 0x344A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A98u;
label_344a98:
    // 0x344a98: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x344A98u;
    SET_GPR_U32(ctx, 31, 0x344AA0u);
    ctx->pc = 0x344A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A98u;
    // 0x344a9c: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x344A98u, 0x344AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AA0u;
label_344aa0:
    // 0x344aa0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x344AA0u;
    SET_GPR_U32(ctx, 31, 0x344AA8u);
    ctx->pc = 0x344AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AA0u;
    // 0x344aa4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x344AA0u, 0x344AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AA8u;
label_344aa8:
    // 0x344aa8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x344AA8u;
    SET_GPR_U32(ctx, 31, 0x344AB0u);
    ctx->pc = 0x344AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AA8u;
    // 0x344aac: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x344AA8u, 0x344AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AB0u;
label_344ab0:
    // 0x344ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ab4: 0x0  nop
    ctx->pc = 0x344ab4u;
    // NOP
label_344ab8:
    // 0x344ab8: 0x2631005c  addiu       $s1, $s1, 0x5C
    ctx->pc = 0x344ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x344abc: 0xc0d14f2  jal         func_3453C8
    ctx->pc = 0x344ABCu;
    SET_GPR_U32(ctx, 31, 0x344AC4u);
    ctx->pc = 0x344AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344ABCu;
    // 0x344ac0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3453C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3453C8u, 0x344ABCu, 0x344AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AC4u;
label_344ac4:
    // 0x344ac4: 0x641fffc  bgez        $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x344AC4u;
    {
        const bool branch_taken_0x344ac4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x344AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AC4u;
        // 0x344ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ac4) {
            ctx->pc = 0x344AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344ab8;
        }
    }
    ctx->pc = 0x344ACCu;
    // 0x344acc: 0xc0d12ca  jal         func_344B28
    ctx->pc = 0x344ACCu;
    SET_GPR_U32(ctx, 31, 0x344AD4u);
    ctx->pc = 0x344B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344B28u, 0x344ACCu, 0x344AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AD4u;
label_344ad4:
    // 0x344ad4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x344ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344ad8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344adc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x344adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344ae0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x344ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x344AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AE4u;
        // 0x344ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344AECu;
    // 0x344aec: 0x0  nop
    ctx->pc = 0x344aecu;
    // NOP
    ctx->pc = 0x344af0u;
}
