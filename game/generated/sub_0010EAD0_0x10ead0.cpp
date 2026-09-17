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

// Function: sub_0010EAD0
// Address: 0x10ead0 - 0x10eba0
void sub_0010EAD0_0x10ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EAD0_0x10ead0");
#endif

    switch (ctx->pc) {
        case 0x10eae0u: goto label_10eae0;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb38u: goto label_10eb38;
        case 0x10eb48u: goto label_10eb48;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb88u: goto label_10eb88;
        default: break;
    }

    ctx->pc = 0x10ead0u;

    // 0x10ead0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ead4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ead8: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10EAD8u;
    SET_GPR_U32(ctx, 31, 0x10EAE0u);
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x10EAD8u, 0x10EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAE0u;
label_10eae0:
    // 0x10eae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EAE0u;
    {
        const bool branch_taken_0x10eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAE0u;
        // 0x10eae4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eae0) {
            ctx->pc = 0x10EAF0u;
            goto label_10eaf0;
        }
    }
    ctx->pc = 0x10EAE8u;
    // 0x10eae8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EAE8u;
    {
        const bool branch_taken_0x10eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAE8u;
        // 0x10eaec: 0x904210d6  lbu         $v0, 0x10D6($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4310)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eae8) {
            ctx->pc = 0x10EB2Cu;
            goto label_10eb2c;
        }
    }
    ctx->pc = 0x10EAF0u;
label_10eaf0:
    // 0x10eaf0: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10EAF0u;
    SET_GPR_U32(ctx, 31, 0x10EAF8u);
    ctx->pc = 0x10EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAF0u;
    // 0x10eaf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10EAF0u, 0x10EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAF8u;
label_10eaf8:
    // 0x10eaf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eafc: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x10eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x10eb00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10eb04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB04u;
    {
        const bool branch_taken_0x10eb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB04u;
        // 0x10eb08: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb04) {
            ctx->pc = 0x10EB14u;
            goto label_10eb14;
        }
    }
    ctx->pc = 0x10EB0Cu;
    // 0x10eb0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10EB0Cu;
    {
        const bool branch_taken_0x10eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB0Cu;
        // 0x10eb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb0c) {
            ctx->pc = 0x10EB2Cu;
            goto label_10eb2c;
        }
    }
    ctx->pc = 0x10EB14u;
label_10eb14:
    // 0x10eb14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eb18: 0xc043dac  jal         func_10F6B0
    ctx->pc = 0x10EB18u;
    SET_GPR_U32(ctx, 31, 0x10EB20u);
    ctx->pc = 0x10EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB18u;
    // 0x10eb1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F6B0u, 0x10EB18u, 0x10EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB20u;
label_10eb20:
    // 0x10eb20: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x10eb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10eb24: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x10eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x10eb28: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10eb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10eb2c:
    // 0x10eb2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB30u;
        // 0x10eb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB38u;
label_10eb38:
    // 0x10eb38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10eb3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10eb40: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10EB40u;
    SET_GPR_U32(ctx, 31, 0x10EB48u);
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x10EB40u, 0x10EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB48u;
label_10eb48:
    // 0x10eb48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB48u;
    {
        const bool branch_taken_0x10eb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB48u;
        // 0x10eb4c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb48) {
            ctx->pc = 0x10EB58u;
            goto label_10eb58;
        }
    }
    ctx->pc = 0x10EB50u;
    // 0x10eb50: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EB50u;
    {
        const bool branch_taken_0x10eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB50u;
        // 0x10eb54: 0x904210d7  lbu         $v0, 0x10D7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4311)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb50) {
            ctx->pc = 0x10EB94u;
            goto label_10eb94;
        }
    }
    ctx->pc = 0x10EB58u;
label_10eb58:
    // 0x10eb58: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10EB58u;
    SET_GPR_U32(ctx, 31, 0x10EB60u);
    ctx->pc = 0x10EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB58u;
    // 0x10eb5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10EB58u, 0x10EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB60u;
label_10eb60:
    // 0x10eb60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb64: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x10eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x10eb68: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10eb6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB6Cu;
    {
        const bool branch_taken_0x10eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB6Cu;
        // 0x10eb70: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb6c) {
            ctx->pc = 0x10EB7Cu;
            goto label_10eb7c;
        }
    }
    ctx->pc = 0x10EB74u;
    // 0x10eb74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10EB74u;
    {
        const bool branch_taken_0x10eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB74u;
        // 0x10eb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb74) {
            ctx->pc = 0x10EB94u;
            goto label_10eb94;
        }
    }
    ctx->pc = 0x10EB7Cu;
label_10eb7c:
    // 0x10eb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eb80: 0xc043dac  jal         func_10F6B0
    ctx->pc = 0x10EB80u;
    SET_GPR_U32(ctx, 31, 0x10EB88u);
    ctx->pc = 0x10EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB80u;
    // 0x10eb84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F6B0u, 0x10EB80u, 0x10EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB88u;
label_10eb88:
    // 0x10eb88: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x10eb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10eb8c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x10eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x10eb90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10eb94:
    // 0x10eb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb98: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB98u;
        // 0x10eb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EBA0u;
}
