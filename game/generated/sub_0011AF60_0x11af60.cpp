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

// Function: sub_0011AF60
// Address: 0x11af60 - 0x11b048
void sub_0011AF60_0x11af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AF60_0x11af60");
#endif

    switch (ctx->pc) {
        case 0x11af90u: goto label_11af90;
        case 0x11afa8u: goto label_11afa8;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afb8u: goto label_11afb8;
        case 0x11afc4u: goto label_11afc4;
        case 0x11afd0u: goto label_11afd0;
        case 0x11afd8u: goto label_11afd8;
        case 0x11afe0u: goto label_11afe0;
        case 0x11aff0u: goto label_11aff0;
        case 0x11b004u: goto label_11b004;
        case 0x11b030u: goto label_11b030;
        case 0x11b040u: goto label_11b040;
        default: break;
    }

    ctx->pc = 0x11af60u;

    // 0x11af60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11af64: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11af68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11af6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11af70: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x11af70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11af74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11af78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11af7c: 0x245024f0  addiu       $s0, $v0, 0x24F0
    ctx->pc = 0x11af7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x11af80: 0x8c4424f0  lw          $a0, 0x24F0($v0)
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1324F0u));
    // 0x11af84: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x11af84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x11af88: 0xc046bd4  jal         func_11AF50
    ctx->pc = 0x11AF88u;
    SET_GPR_U32(ctx, 31, 0x11AF90u);
    ctx->pc = 0x11AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF88u;
    // 0x11af8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF50u, 0x11AF88u, 0x11AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF90u;
label_11af90:
    // 0x11af90: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x11af90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x11af94: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x11af94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x11af98: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x11af98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x11af9c: 0x24a52170  addiu       $a1, $a1, 0x2170
    ctx->pc = 0x11af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8560));
    // 0x11afa0: 0xc046bbe  jal         func_11AEF8
    ctx->pc = 0x11AFA0u;
    SET_GPR_U32(ctx, 31, 0x11AFA8u);
    ctx->pc = 0x11AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFA0u;
    // 0x11afa4: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AEF8u, 0x11AFA0u, 0x11AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFA8u;
label_11afa8:
    // 0x11afa8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x11AFA8u;
    SET_GPR_U32(ctx, 31, 0x11AFB0u);
    ctx->pc = 0x11AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFA8u;
    // 0x11afac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x11AFA8u, 0x11AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFB0u;
label_11afb0:
    // 0x11afb0: 0xc043d88  jal         func_10F620
    ctx->pc = 0x11AFB0u;
    SET_GPR_U32(ctx, 31, 0x11AFB8u);
    ctx->pc = 0x11AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFB0u;
    // 0x11afb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x11AFB0u, 0x11AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11afbc: 0xc046bd4  jal         func_11AF50
    ctx->pc = 0x11AFBCu;
    SET_GPR_U32(ctx, 31, 0x11AFC4u);
    ctx->pc = 0x11AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFBCu;
    // 0x11afc0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF50u, 0x11AFBCu, 0x11AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFC4u;
label_11afc4:
    // 0x11afc4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11afc8: 0xc046bd4  jal         func_11AF50
    ctx->pc = 0x11AFC8u;
    SET_GPR_U32(ctx, 31, 0x11AFD0u);
    ctx->pc = 0x11AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFC8u;
    // 0x11afcc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF50u, 0x11AFC8u, 0x11AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFD0u;
label_11afd0:
    // 0x11afd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11afd4: 0x0  nop
    ctx->pc = 0x11afd4u;
    // NOP
label_11afd8:
    // 0x11afd8: 0xc046bd0  jal         func_11AF40
    ctx->pc = 0x11AFD8u;
    SET_GPR_U32(ctx, 31, 0x11AFE0u);
    ctx->pc = 0x11AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFD8u;
    // 0x11afdc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF40u, 0x11AFD8u, 0x11AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFE0u;
label_11afe0:
    // 0x11afe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11afe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11afe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afe8: 0xc046bd4  jal         func_11AF50
    ctx->pc = 0x11AFE8u;
    SET_GPR_U32(ctx, 31, 0x11AFF0u);
    ctx->pc = 0x11AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFE8u;
    // 0x11afec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF50u, 0x11AFE8u, 0x11AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFF0u;
label_11aff0:
    // 0x11aff0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x11aff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11aff4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11AFF4u;
    {
        const bool branch_taken_0x11aff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aff4) {
            ctx->pc = 0x11AFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFF4u;
            // 0x11aff8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11afd8;
        }
    }
    ctx->pc = 0x11AFFCu;
    // 0x11affc: 0xc046bd0  jal         func_11AF40
    ctx->pc = 0x11AFFCu;
    SET_GPR_U32(ctx, 31, 0x11B004u);
    ctx->pc = 0x11B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFFCu;
    // 0x11b000: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF40u, 0x11AFFCu, 0x11B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B004u;
label_11b004:
    // 0x11b004: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11b008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b00c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b018: 0xac6224e8  sw          $v0, 0x24E8($v1)
    ctx->pc = 0x11b018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1324E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1324E8u, _value); } while (0);
    // 0x11b01c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B01Cu;
        // 0x11b020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B024u;
    // 0x11b024: 0x0  nop
    ctx->pc = 0x11b024u;
    // NOP
    // 0x11b028: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x11b02c: 0xc  syscall     0
    ctx->pc = 0x11b02cu;
    ctx->pc = 0x11B030u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b030:
    // 0x11b030: 0x3e00008  jr          $ra
    ctx->pc = 0x11B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B038u;
    // 0x11b038: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x11b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x11b03c: 0xc  syscall     0
    ctx->pc = 0x11b03cu;
    ctx->pc = 0x11B040u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b040:
    // 0x11b040: 0x3e00008  jr          $ra
    ctx->pc = 0x11B040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B048u;
}
