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

// Function: sub_0010EA18
// Address: 0x10ea18 - 0x10ead0
void sub_0010EA18_0x10ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA18_0x10ea18");
#endif

    switch (ctx->pc) {
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea78u: goto label_10ea78;
        case 0x10ea90u: goto label_10ea90;
        case 0x10eab8u: goto label_10eab8;
        default: break;
    }

    ctx->pc = 0x10ea18u;

    // 0x10ea18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ea1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ea20: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10EA20u;
    SET_GPR_U32(ctx, 31, 0x10EA28u);
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x10EA20u, 0x10EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA28u;
label_10ea28:
    // 0x10ea28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA28u;
    {
        const bool branch_taken_0x10ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA28u;
        // 0x10ea2c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea28) {
            ctx->pc = 0x10EA38u;
            goto label_10ea38;
        }
    }
    ctx->pc = 0x10EA30u;
    // 0x10ea30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10EA30u;
    {
        const bool branch_taken_0x10ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA30u;
        // 0x10ea34: 0x844210d0  lh          $v0, 0x10D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea30) {
            ctx->pc = 0x10EA58u;
            goto label_10ea58;
        }
    }
    ctx->pc = 0x10EA38u;
label_10ea38:
    // 0x10ea38: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10EA38u;
    SET_GPR_U32(ctx, 31, 0x10EA40u);
    ctx->pc = 0x10EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA38u;
    // 0x10ea3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10EA38u, 0x10EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA40u;
label_10ea40:
    // 0x10ea40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea44: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x10ea48: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x10ea4c: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x10ea50: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10ea54: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x10ea54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_10ea58:
    // 0x10ea58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA5Cu;
        // 0x10ea60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA64u;
    // 0x10ea64: 0x0  nop
    ctx->pc = 0x10ea64u;
    // NOP
label_10ea68:
    // 0x10ea68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ea6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ea70: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10EA70u;
    SET_GPR_U32(ctx, 31, 0x10EA78u);
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x10EA70u, 0x10EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA78u;
label_10ea78:
    // 0x10ea78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA78u;
    {
        const bool branch_taken_0x10ea78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA78u;
        // 0x10ea7c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea78) {
            ctx->pc = 0x10EA88u;
            goto label_10ea88;
        }
    }
    ctx->pc = 0x10EA80u;
    // 0x10ea80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10EA80u;
    {
        const bool branch_taken_0x10ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA80u;
        // 0x10ea84: 0x904210d3  lbu         $v0, 0x10D3($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4307)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea80) {
            ctx->pc = 0x10EAC0u;
            goto label_10eac0;
        }
    }
    ctx->pc = 0x10EA88u;
label_10ea88:
    // 0x10ea88: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10EA88u;
    SET_GPR_U32(ctx, 31, 0x10EA90u);
    ctx->pc = 0x10EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA88u;
    // 0x10ea8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10EA88u, 0x10EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA90u;
label_10ea90:
    // 0x10ea90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea94: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x10ea98: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10ea9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA9Cu;
    {
        const bool branch_taken_0x10ea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA9Cu;
        // 0x10eaa0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea9c) {
            ctx->pc = 0x10EAACu;
            goto label_10eaac;
        }
    }
    ctx->pc = 0x10EAA4u;
    // 0x10eaa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10EAA4u;
    {
        const bool branch_taken_0x10eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAA4u;
        // 0x10eaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaa4) {
            ctx->pc = 0x10EAC0u;
            goto label_10eac0;
        }
    }
    ctx->pc = 0x10EAACu;
label_10eaac:
    // 0x10eaac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eab0: 0xc043dac  jal         func_10F6B0
    ctx->pc = 0x10EAB0u;
    SET_GPR_U32(ctx, 31, 0x10EAB8u);
    ctx->pc = 0x10EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAB0u;
    // 0x10eab4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F6B0u, 0x10EAB0u, 0x10EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAB8u;
label_10eab8:
    // 0x10eab8: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x10eab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10eabc: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_10eac0:
    // 0x10eac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC4u;
        // 0x10eac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EACCu;
    // 0x10eacc: 0x0  nop
    ctx->pc = 0x10eaccu;
    // NOP
    ctx->pc = 0x10ead0u;
}
