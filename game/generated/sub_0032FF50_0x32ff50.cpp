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

// Function: sub_0032FF50
// Address: 0x32ff50 - 0x330000
void sub_0032FF50_0x32ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FF50_0x32ff50");
#endif

    switch (ctx->pc) {
        case 0x32ff50u: goto label_32ff50;
        case 0x32ff54u: goto label_32ff54;
        case 0x32ff58u: goto label_32ff58;
        case 0x32ff5cu: goto label_32ff5c;
        case 0x32ff60u: goto label_32ff60;
        case 0x32ff64u: goto label_32ff64;
        case 0x32ff68u: goto label_32ff68;
        case 0x32ff6cu: goto label_32ff6c;
        case 0x32ff70u: goto label_32ff70;
        case 0x32ff74u: goto label_32ff74;
        case 0x32ff78u: goto label_32ff78;
        case 0x32ff7cu: goto label_32ff7c;
        case 0x32ff80u: goto label_32ff80;
        case 0x32ff84u: goto label_32ff84;
        case 0x32ff88u: goto label_32ff88;
        case 0x32ff8cu: goto label_32ff8c;
        case 0x32ff90u: goto label_32ff90;
        case 0x32ff94u: goto label_32ff94;
        case 0x32ff98u: goto label_32ff98;
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffa4u: goto label_32ffa4;
        case 0x32ffa8u: goto label_32ffa8;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffb4u: goto label_32ffb4;
        case 0x32ffb8u: goto label_32ffb8;
        case 0x32ffbcu: goto label_32ffbc;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffc4u: goto label_32ffc4;
        case 0x32ffc8u: goto label_32ffc8;
        case 0x32ffccu: goto label_32ffcc;
        case 0x32ffd0u: goto label_32ffd0;
        case 0x32ffd4u: goto label_32ffd4;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x32ffdcu: goto label_32ffdc;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32ffe4u: goto label_32ffe4;
        case 0x32ffe8u: goto label_32ffe8;
        case 0x32ffecu: goto label_32ffec;
        case 0x32fff0u: goto label_32fff0;
        case 0x32fff4u: goto label_32fff4;
        case 0x32fff8u: goto label_32fff8;
        case 0x32fffcu: goto label_32fffc;
        default: break;
    }

    ctx->pc = 0x32ff50u;

label_32ff50:
    // 0x32ff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32ff54:
    // 0x32ff54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32ff58:
    // 0x32ff58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32ff5c:
    // 0x32ff5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32ff60:
    // 0x32ff60: 0xc0c8864  jal         func_322190
label_32ff64:
    if (ctx->pc == 0x32FF64u) {
        ctx->pc = 0x32FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF60u;
        // 0x32ff64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF68u;
        goto label_32ff68;
    }
    ctx->pc = 0x32FF60u;
    SET_GPR_U32(ctx, 31, 0x32FF68u);
    ctx->pc = 0x32FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF60u;
    // 0x32ff64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32FF60u, 0x32FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF68u;
label_32ff68:
    // 0x32ff68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ff68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ff6c:
    // 0x32ff6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ff70:
    // 0x32ff70: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x32ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_32ff74:
    // 0x32ff74: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32ff74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff78:
    // 0x32ff78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ff7c:
    // 0x32ff7c: 0x40f809  jalr        $v0
label_32ff80:
    if (ctx->pc == 0x32FF80u) {
        ctx->pc = 0x32FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF7Cu;
        // 0x32ff80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF84u;
        goto label_32ff84;
    }
    ctx->pc = 0x32FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF84u);
        ctx->pc = 0x32FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF7Cu;
        // 0x32ff80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF7Cu, 0x32FF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF84u;
label_32ff84:
    // 0x32ff84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ff88:
    // 0x32ff88: 0xc0ce74c  jal         func_339D30
label_32ff8c:
    if (ctx->pc == 0x32FF8Cu) {
        ctx->pc = 0x32FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF88u;
        // 0x32ff8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF90u;
        goto label_32ff90;
    }
    ctx->pc = 0x32FF88u;
    SET_GPR_U32(ctx, 31, 0x32FF90u);
    ctx->pc = 0x32FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF88u;
    // 0x32ff8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x32FF88u, 0x32FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF90u;
label_32ff90:
    // 0x32ff90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ff94:
    // 0x32ff94: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x32ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_32ff98:
    // 0x32ff98: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32ff98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff9c:
    // 0x32ff9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ffa0:
    // 0x32ffa0: 0x40f809  jalr        $v0
label_32ffa4:
    if (ctx->pc == 0x32FFA4u) {
        ctx->pc = 0x32FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFA0u;
        // 0x32ffa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFA8u;
        goto label_32ffa8;
    }
    ctx->pc = 0x32FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FFA8u);
        ctx->pc = 0x32FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFA0u;
        // 0x32ffa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FFA0u, 0x32FFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FFA8u;
label_32ffa8:
    // 0x32ffa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ffa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ffac:
    // 0x32ffac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ffacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32ffb0:
    // 0x32ffb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ffb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32ffb4:
    // 0x32ffb4: 0x3e00008  jr          $ra
label_32ffb8:
    if (ctx->pc == 0x32FFB8u) {
        ctx->pc = 0x32FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB4u;
        // 0x32ffb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFBCu;
        goto label_32ffbc;
    }
    ctx->pc = 0x32FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB4u;
        // 0x32ffb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FFBCu;
label_32ffbc:
    // 0x32ffbc: 0x0  nop
    ctx->pc = 0x32ffbcu;
    // NOP
label_32ffc0:
    // 0x32ffc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32ffc4:
    // 0x32ffc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32ffc8:
    // 0x32ffc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ffc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ffcc:
    // 0x32ffcc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32ffd0:
    // 0x32ffd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32ffd4:
    // 0x32ffd4: 0xc0c8864  jal         func_322190
label_32ffd8:
    if (ctx->pc == 0x32FFD8u) {
        ctx->pc = 0x32FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFD4u;
        // 0x32ffd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFDCu;
        goto label_32ffdc;
    }
    ctx->pc = 0x32FFD4u;
    SET_GPR_U32(ctx, 31, 0x32FFDCu);
    ctx->pc = 0x32FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFD4u;
    // 0x32ffd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32FFD4u, 0x32FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFDCu;
label_32ffdc:
    // 0x32ffdc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x32ffdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ffe0:
    // 0x32ffe0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32ffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32ffe4:
    // 0x32ffe4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x32ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_32ffe8:
    // 0x32ffe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ffec:
    // 0x32ffec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fff0:
    // 0x32fff0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x32fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_32fff4:
    // 0x32fff4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32fff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32fff8:
    // 0x32fff8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32fffc:
    // 0x32fffc: 0x40f809  jalr        $v0
    ctx->pc = 0x32FFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330004u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FFFCu, 0x330004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330004u;
}
