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

// Function: sub_002D0A30
// Address: 0x2d0a30 - 0x2d0af8
void sub_002D0A30_0x2d0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0A30_0x2d0a30");
#endif

    switch (ctx->pc) {
        case 0x2d0a48u: goto label_2d0a48;
        case 0x2d0a50u: goto label_2d0a50;
        case 0x2d0a5cu: goto label_2d0a5c;
        case 0x2d0aa8u: goto label_2d0aa8;
        case 0x2d0abcu: goto label_2d0abc;
        case 0x2d0ac8u: goto label_2d0ac8;
        case 0x2d0ae4u: goto label_2d0ae4;
        default: break;
    }

    ctx->pc = 0x2d0a30u;

    // 0x2d0a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a38: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d0a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d0a3c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d0a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d0a40: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x2D0A40u;
    SET_GPR_U32(ctx, 31, 0x2D0A48u);
    ctx->pc = 0x2D0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A40u;
    // 0x2d0a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x2D0A40u, 0x2D0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A48u;
label_2d0a48:
    // 0x2d0a48: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x2D0A48u;
    SET_GPR_U32(ctx, 31, 0x2D0A50u);
    ctx->pc = 0x2D0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A48u;
    // 0x2d0a4c: 0x3c100018  lui         $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x2D0A48u, 0x2D0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A50u;
label_2d0a50:
    // 0x2d0a50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d0a54: 0xc043c8c  jal         func_10F230
    ctx->pc = 0x2D0A54u;
    SET_GPR_U32(ctx, 31, 0x2D0A5Cu);
    ctx->pc = 0x2D0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A54u;
    // 0x2d0a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x2D0A54u, 0x2D0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A5Cu;
label_2d0a5c:
    // 0x2d0a5c: 0xaf80cb2c  sw          $zero, -0x34D4($gp)
    ctx->pc = 0x2d0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953772), GPR_U32(ctx, 0));
    // 0x2d0a60: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x2d0a64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d0a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d0a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0a6c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d0a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d0a70: 0x26108e40  addiu       $s0, $s0, -0x71C0
    ctx->pc = 0x2d0a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938176));
    // 0x2d0a74: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x2d0a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x2d0a78: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x2d0a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x2d0a7c: 0x24a58870  addiu       $a1, $a1, -0x7790
    ctx->pc = 0x2d0a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936688));
    // 0x2d0a80: 0x244209a8  addiu       $v0, $v0, 0x9A8
    ctx->pc = 0x2d0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2472));
    // 0x2d0a84: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2d0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2d0a88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d0a8c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d0a90: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x2d0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x2d0a94: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x2d0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x2d0a98: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2d0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x2d0a9c: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x2d0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x2d0aa0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x2D0AA0u;
    SET_GPR_U32(ctx, 31, 0x2D0AA8u);
    ctx->pc = 0x2D0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0AA0u;
    // 0x2d0aa4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x2D0AA0u, 0x2D0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AA8u;
label_2d0aa8:
    // 0x2d0aa8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d0aac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ab0: 0x8c65d600  lw          $a1, -0x2A00($v1)
    ctx->pc = 0x2d0ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3BD600u));
    // 0x2d0ab4: 0xc046922  jal         func_11A488
    ctx->pc = 0x2D0AB4u;
    SET_GPR_U32(ctx, 31, 0x2D0ABCu);
    ctx->pc = 0x2D0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0AB4u;
    // 0x2d0ab8: 0xaf82cb30  sw          $v0, -0x34D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953776), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A488u, 0x2D0AB4u, 0x2D0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0ABCu;
label_2d0abc:
    // 0x2d0abc: 0xfe021808  sd          $v0, 0x1808($s0)
    ctx->pc = 0x2d0abcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 6152), GPR_U64(ctx, 2));
    // 0x2d0ac0: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x2D0AC0u;
    SET_GPR_U32(ctx, 31, 0x2D0AC8u);
    ctx->pc = 0x2D0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0AC0u;
    // 0x2d0ac4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x2D0AC0u, 0x2D0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AC8u;
label_2d0ac8:
    // 0x2d0ac8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d0acc: 0x2484eb98  addiu       $a0, $a0, -0x1468
    ctx->pc = 0x2d0accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962072));
    // 0x2d0ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d0ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ad4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0AD4u;
    {
        const bool branch_taken_0x2d0ad4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AD4u;
        // 0x2d0ad8: 0xae021800  sw          $v0, 0x1800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ad4) {
            ctx->pc = 0x2D0AE4u;
            goto label_2d0ae4;
        }
    }
    ctx->pc = 0x2D0ADCu;
    // 0x2d0adc: 0xc044794  jal         func_111E50
    ctx->pc = 0x2D0ADCu;
    SET_GPR_U32(ctx, 31, 0x2D0AE4u);
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x2D0ADCu, 0x2D0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AE4u;
label_2d0ae4:
    // 0x2d0ae4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d0ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0ae8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d0ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0aec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AECu;
        // 0x2d0af0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0AF4u;
    // 0x2d0af4: 0x0  nop
    ctx->pc = 0x2d0af4u;
    // NOP
    ctx->pc = 0x2d0af8u;
}
