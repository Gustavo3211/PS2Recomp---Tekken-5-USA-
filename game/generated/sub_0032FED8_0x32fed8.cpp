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

// Function: sub_0032FED8
// Address: 0x32fed8 - 0x32ff50
void sub_0032FED8_0x32fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FED8_0x32fed8");
#endif

    switch (ctx->pc) {
        case 0x32fed8u: goto label_32fed8;
        case 0x32fedcu: goto label_32fedc;
        case 0x32fee0u: goto label_32fee0;
        case 0x32fee4u: goto label_32fee4;
        case 0x32fee8u: goto label_32fee8;
        case 0x32feecu: goto label_32feec;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef4u: goto label_32fef4;
        case 0x32fef8u: goto label_32fef8;
        case 0x32fefcu: goto label_32fefc;
        case 0x32ff00u: goto label_32ff00;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff08u: goto label_32ff08;
        case 0x32ff0cu: goto label_32ff0c;
        case 0x32ff10u: goto label_32ff10;
        case 0x32ff14u: goto label_32ff14;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff1cu: goto label_32ff1c;
        case 0x32ff20u: goto label_32ff20;
        case 0x32ff24u: goto label_32ff24;
        case 0x32ff28u: goto label_32ff28;
        case 0x32ff2cu: goto label_32ff2c;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff34u: goto label_32ff34;
        case 0x32ff38u: goto label_32ff38;
        case 0x32ff3cu: goto label_32ff3c;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff44u: goto label_32ff44;
        case 0x32ff48u: goto label_32ff48;
        case 0x32ff4cu: goto label_32ff4c;
        default: break;
    }

    ctx->pc = 0x32fed8u;

label_32fed8:
    // 0x32fed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32fedc:
    // 0x32fedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32fee0:
    // 0x32fee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32fee4:
    // 0x32fee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32fee8:
    // 0x32fee8: 0xc0c8864  jal         func_322190
label_32feec:
    if (ctx->pc == 0x32FEECu) {
        ctx->pc = 0x32FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEE8u;
        // 0x32feec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FEF0u;
        goto label_32fef0;
    }
    ctx->pc = 0x32FEE8u;
    SET_GPR_U32(ctx, 31, 0x32FEF0u);
    ctx->pc = 0x32FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEE8u;
    // 0x32feec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32FEE8u, 0x32FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEF0u;
label_32fef0:
    // 0x32fef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32fef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32fef4:
    // 0x32fef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32fef8:
    // 0x32fef8: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x32fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_32fefc:
    // 0x32fefc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32fefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff00:
    // 0x32ff00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ff04:
    // 0x32ff04: 0x40f809  jalr        $v0
label_32ff08:
    if (ctx->pc == 0x32FF08u) {
        ctx->pc = 0x32FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF04u;
        // 0x32ff08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF0Cu;
        goto label_32ff0c;
    }
    ctx->pc = 0x32FF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF0Cu);
        ctx->pc = 0x32FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF04u;
        // 0x32ff08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF04u, 0x32FF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF0Cu;
label_32ff0c:
    // 0x32ff0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ff10:
    // 0x32ff10: 0xc0ce730  jal         func_339CC0
label_32ff14:
    if (ctx->pc == 0x32FF14u) {
        ctx->pc = 0x32FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF10u;
        // 0x32ff14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF18u;
        goto label_32ff18;
    }
    ctx->pc = 0x32FF10u;
    SET_GPR_U32(ctx, 31, 0x32FF18u);
    ctx->pc = 0x32FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF10u;
    // 0x32ff14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339CC0u, 0x32FF10u, 0x32FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF18u;
label_32ff18:
    // 0x32ff18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ff1c:
    // 0x32ff1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32ff1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ff20:
    // 0x32ff20: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x32ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_32ff24:
    // 0x32ff24: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32ff24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff28:
    // 0x32ff28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ff2c:
    // 0x32ff2c: 0x40f809  jalr        $v0
label_32ff30:
    if (ctx->pc == 0x32FF30u) {
        ctx->pc = 0x32FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF2Cu;
        // 0x32ff30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF34u;
        goto label_32ff34;
    }
    ctx->pc = 0x32FF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF34u);
        ctx->pc = 0x32FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF2Cu;
        // 0x32ff30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF2Cu, 0x32FF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF34u;
label_32ff34:
    // 0x32ff34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32ff34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ff38:
    // 0x32ff38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ff38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ff3c:
    // 0x32ff3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ff3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32ff40:
    // 0x32ff40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32ff44:
    // 0x32ff44: 0x3e00008  jr          $ra
label_32ff48:
    if (ctx->pc == 0x32FF48u) {
        ctx->pc = 0x32FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF44u;
        // 0x32ff48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF4Cu;
        goto label_32ff4c;
    }
    ctx->pc = 0x32FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF44u;
        // 0x32ff48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FF4Cu;
label_32ff4c:
    // 0x32ff4c: 0x0  nop
    ctx->pc = 0x32ff4cu;
    // NOP
    ctx->pc = 0x32ff50u;
}
