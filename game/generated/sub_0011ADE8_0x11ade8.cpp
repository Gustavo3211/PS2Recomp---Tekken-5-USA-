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

// Function: sub_0011ADE8
// Address: 0x11ade8 - 0x11aef8
void sub_0011ADE8_0x11ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ADE8_0x11ade8");
#endif

    switch (ctx->pc) {
        case 0x11ae00u: goto label_11ae00;
        case 0x11ae10u: goto label_11ae10;
        case 0x11ae40u: goto label_11ae40;
        case 0x11ae4cu: goto label_11ae4c;
        case 0x11ae58u: goto label_11ae58;
        case 0x11ae70u: goto label_11ae70;
        case 0x11aec8u: goto label_11aec8;
        case 0x11aee0u: goto label_11aee0;
        default: break;
    }

    ctx->pc = 0x11ade8u;

    // 0x11ade8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11adec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11adecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11adf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11adf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11adf8: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x11ADF8u;
    SET_GPR_U32(ctx, 31, 0x11AE00u);
    ctx->pc = 0x11ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADF8u;
    // 0x11adfc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x11ADF8u, 0x11AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE00u;
label_11ae00:
    // 0x11ae00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE04u;
        // 0x11ae08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE0Cu;
    // 0x11ae0c: 0x0  nop
    ctx->pc = 0x11ae0cu;
    // NOP
label_11ae10:
    // 0x11ae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ae14: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11ae18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ae1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ae20: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x11ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
    // 0x11ae24: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x11ae24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
    // 0x11ae28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ae28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae2c: 0xac5124a0  sw          $s1, 0x24A0($v0)
    ctx->pc = 0x11ae2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1324A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1324A0u, _value); } while (0);
    // 0x11ae30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ae30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ae38: 0xc043c14  jal         func_10F050
    ctx->pc = 0x11AE38u;
    SET_GPR_U32(ctx, 31, 0x11AE40u);
    ctx->pc = 0x11AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE38u;
    // 0x11ae3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x11AE38u, 0x11AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE40u;
label_11ae40:
    // 0x11ae40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae44: 0xc043c14  jal         func_10F050
    ctx->pc = 0x11AE44u;
    SET_GPR_U32(ctx, 31, 0x11AE4Cu);
    ctx->pc = 0x11AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE44u;
    // 0x11ae48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x11AE44u, 0x11AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE4Cu;
label_11ae4c:
    // 0x11ae4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ae4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae50: 0xc043c14  jal         func_10F050
    ctx->pc = 0x11AE50u;
    SET_GPR_U32(ctx, 31, 0x11AE58u);
    ctx->pc = 0x11AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE50u;
    // 0x11ae54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x11AE50u, 0x11AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE58u;
label_11ae58:
    // 0x11ae58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11ae58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ae60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ae60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ae64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ae64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ae68: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE68u;
        // 0x11ae6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE70u;
label_11ae70:
    // 0x11ae70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11ae70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ae74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ae78: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x11ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ae7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ae80: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x11ae80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x11ae84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AE84u;
    {
        const bool branch_taken_0x11ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE84u;
        // 0x11ae88: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae84) {
            ctx->pc = 0x11AE98u;
            goto label_11ae98;
        }
    }
    ctx->pc = 0x11AE8Cu;
    // 0x11ae8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11ae90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11AE90u;
    {
        const bool branch_taken_0x11ae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE90u;
        // 0x11ae94: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae90) {
            ctx->pc = 0x11AEE4u;
            goto label_11aee4;
        }
    }
    ctx->pc = 0x11AE98u;
label_11ae98:
    // 0x11ae98: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11ae9c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x11ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11aea0: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x11aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
    // 0x11aea4: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x11aea4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11aea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11aeac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x11aeacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11aeb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AEB0u;
    {
        const bool branch_taken_0x11aeb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEB0u;
        // 0x11aeb4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb0) {
            ctx->pc = 0x11AED0u;
            goto label_11aed0;
        }
    }
    ctx->pc = 0x11AEB8u;
    // 0x11aeb8: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11aebc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aec0: 0xc043c14  jal         func_10F050
    ctx->pc = 0x11AEC0u;
    SET_GPR_U32(ctx, 31, 0x11AEC8u);
    ctx->pc = 0x11AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEC0u;
    // 0x11aec4: 0x24a5b580  addiu       $a1, $a1, -0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x11AEC0u, 0x11AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEC8u;
label_11aec8:
    // 0x11aec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11AEC8u;
    {
        const bool branch_taken_0x11aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEC8u;
        // 0x11aecc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aec8) {
            ctx->pc = 0x11AEE4u;
            goto label_11aee4;
        }
    }
    ctx->pc = 0x11AED0u;
label_11aed0:
    // 0x11aed0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11aed4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aed8: 0xc043c18  jal         func_10F060
    ctx->pc = 0x11AED8u;
    SET_GPR_U32(ctx, 31, 0x11AEE0u);
    ctx->pc = 0x11AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AED8u;
    // 0x11aedc: 0x24a5b580  addiu       $a1, $a1, -0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F060u, 0x11AED8u, 0x11AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEE0u;
label_11aee0:
    // 0x11aee0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11aee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11aee4:
    // 0x11aee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aeec: 0x3e00008  jr          $ra
    ctx->pc = 0x11AEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEECu;
        // 0x11aef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AEF4u;
    // 0x11aef4: 0x0  nop
    ctx->pc = 0x11aef4u;
    // NOP
    ctx->pc = 0x11aef8u;
}
