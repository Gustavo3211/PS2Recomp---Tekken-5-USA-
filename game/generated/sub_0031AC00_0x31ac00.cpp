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

// Function: sub_0031AC00
// Address: 0x31ac00 - 0x31ae38
void sub_0031AC00_0x31ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AC00_0x31ac00");
#endif

    switch (ctx->pc) {
        case 0x31ac5cu: goto label_31ac5c;
        case 0x31ac84u: goto label_31ac84;
        case 0x31acacu: goto label_31acac;
        case 0x31acecu: goto label_31acec;
        case 0x31ad0cu: goto label_31ad0c;
        case 0x31ad34u: goto label_31ad34;
        case 0x31ad5cu: goto label_31ad5c;
        case 0x31ad84u: goto label_31ad84;
        case 0x31adc4u: goto label_31adc4;
        case 0x31ade4u: goto label_31ade4;
        case 0x31ae0cu: goto label_31ae0c;
        case 0x31ae34u: goto label_31ae34;
        default: break;
    }

    ctx->pc = 0x31ac00u;

    // 0x31ac00: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x31ac00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31ac04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ac0c: 0x2d420041  sltiu       $v0, $t2, 0x41
    ctx->pc = 0x31ac0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x31ac10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ac14: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x31ac14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31ac1c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x31AC1Cu;
    {
        const bool branch_taken_0x31ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC1Cu;
        // 0x31ac20: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac1c) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AC24u;
    // 0x31ac24: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x31ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31ac28: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31ac2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ac30: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x31ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
    // 0x31ac34: 0x600008  jr          $v1
    ctx->pc = 0x31AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31AC40u: goto label_31ac40;
            case 0x31AC68u: goto label_31ac68;
            case 0x31AC90u: goto label_31ac90;
            case 0x31ACB8u: goto label_31acb8;
            case 0x31AD18u: goto label_31ad18;
            case 0x31AD40u: goto label_31ad40;
            case 0x31AD68u: goto label_31ad68;
            case 0x31AD90u: goto label_31ad90;
            case 0x31ADF0u: goto label_31adf0;
            case 0x31AE18u: goto label_31ae18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AC34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31AC3Cu;
    // 0x31ac3c: 0x0  nop
    ctx->pc = 0x31ac3cu;
    // NOP
label_31ac40:
    // 0x31ac40: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ac40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ac44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ac44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac48: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ac48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ac4c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ac4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac50: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ac50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac54: 0xc0c6d52  jal         func_31B548
    ctx->pc = 0x31AC54u;
    SET_GPR_U32(ctx, 31, 0x31AC5Cu);
    ctx->pc = 0x31AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC54u;
    // 0x31ac58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B548u, 0x31AC54u, 0x31AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC5Cu;
label_31ac5c:
    // 0x31ac5c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x31AC5Cu;
    {
        const bool branch_taken_0x31ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC5Cu;
        // 0x31ac60: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac5c) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AC64u;
    // 0x31ac64: 0x0  nop
    ctx->pc = 0x31ac64u;
    // NOP
label_31ac68:
    // 0x31ac68: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ac6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac70: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ac74: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ac74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac78: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ac78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac7c: 0xc0c6d7a  jal         func_31B5E8
    ctx->pc = 0x31AC7Cu;
    SET_GPR_U32(ctx, 31, 0x31AC84u);
    ctx->pc = 0x31AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC7Cu;
    // 0x31ac80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5E8u, 0x31AC7Cu, 0x31AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC84u;
label_31ac84:
    // 0x31ac84: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x31AC84u;
    {
        const bool branch_taken_0x31ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC84u;
        // 0x31ac88: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac84) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AC8Cu;
    // 0x31ac8c: 0x0  nop
    ctx->pc = 0x31ac8cu;
    // NOP
label_31ac90:
    // 0x31ac90: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ac90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ac94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ac94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac98: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ac98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ac9c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ac9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aca0: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31aca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aca4: 0xc0c6d98  jal         func_31B660
    ctx->pc = 0x31ACA4u;
    SET_GPR_U32(ctx, 31, 0x31ACACu);
    ctx->pc = 0x31ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACA4u;
    // 0x31aca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B660u, 0x31ACA4u, 0x31ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACACu;
label_31acac:
    // 0x31acac: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x31ACACu;
    {
        const bool branch_taken_0x31acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACACu;
        // 0x31acb0: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acac) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31ACB4u;
    // 0x31acb4: 0x0  nop
    ctx->pc = 0x31acb4u;
    // NOP
label_31acb8:
    // 0x31acb8: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x31acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x31acbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31ACBCu;
    {
        const bool branch_taken_0x31acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACBCu;
        // 0x31acc0: 0x3c10001d  lui         $s0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acbc) {
            ctx->pc = 0x31ACD4u;
            goto label_31acd4;
        }
    }
    ctx->pc = 0x31ACC4u;
    // 0x31acc4: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x31acc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31acc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31ACC8u;
    {
        const bool branch_taken_0x31acc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACC8u;
        // 0x31accc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acc8) {
            ctx->pc = 0x31ACF8u;
            goto label_31acf8;
        }
    }
    ctx->pc = 0x31ACD0u;
    // 0x31acd0: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31acd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
label_31acd4:
    // 0x31acd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31acd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31acd8: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31acd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31acdc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31acdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ace0: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ace0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ace4: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31ACE4u;
    SET_GPR_U32(ctx, 31, 0x31ACECu);
    ctx->pc = 0x31ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACE4u;
    // 0x31ace8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31ACE4u, 0x31ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACECu;
label_31acec:
    // 0x31acec: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x31ACECu;
    {
        const bool branch_taken_0x31acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACECu;
        // 0x31acf0: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acec) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31ACF4u;
    // 0x31acf4: 0x0  nop
    ctx->pc = 0x31acf4u;
    // NOP
label_31acf8:
    // 0x31acf8: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31acf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31acfc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31acfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad00: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ad00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad04: 0xc0c6dbe  jal         func_31B6F8
    ctx->pc = 0x31AD04u;
    SET_GPR_U32(ctx, 31, 0x31AD0Cu);
    ctx->pc = 0x31AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD04u;
    // 0x31ad08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B6F8u, 0x31AD04u, 0x31AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD0Cu;
label_31ad0c:
    // 0x31ad0c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x31AD0Cu;
    {
        const bool branch_taken_0x31ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD0Cu;
        // 0x31ad10: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad0c) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AD14u;
    // 0x31ad14: 0x0  nop
    ctx->pc = 0x31ad14u;
    // NOP
label_31ad18:
    // 0x31ad18: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ad1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad20: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ad20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ad24: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ad24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad28: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ad28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad2c: 0xc0c6e54  jal         func_31B950
    ctx->pc = 0x31AD2Cu;
    SET_GPR_U32(ctx, 31, 0x31AD34u);
    ctx->pc = 0x31AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD2Cu;
    // 0x31ad30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B950u, 0x31AD2Cu, 0x31AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD34u;
label_31ad34:
    // 0x31ad34: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31AD34u;
    {
        const bool branch_taken_0x31ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD34u;
        // 0x31ad38: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad34) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AD3Cu;
    // 0x31ad3c: 0x0  nop
    ctx->pc = 0x31ad3cu;
    // NOP
label_31ad40:
    // 0x31ad40: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ad40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ad44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad48: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ad48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ad4c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ad4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad50: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ad50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad54: 0xc0c6e74  jal         func_31B9D0
    ctx->pc = 0x31AD54u;
    SET_GPR_U32(ctx, 31, 0x31AD5Cu);
    ctx->pc = 0x31AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD54u;
    // 0x31ad58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B9D0u, 0x31AD54u, 0x31AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD5Cu;
label_31ad5c:
    // 0x31ad5c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x31AD5Cu;
    {
        const bool branch_taken_0x31ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD5Cu;
        // 0x31ad60: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad5c) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AD64u;
    // 0x31ad64: 0x0  nop
    ctx->pc = 0x31ad64u;
    // NOP
label_31ad68:
    // 0x31ad68: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ad68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ad6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad70: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ad70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ad74: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad78: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ad78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad7c: 0xc0c6e92  jal         func_31BA48
    ctx->pc = 0x31AD7Cu;
    SET_GPR_U32(ctx, 31, 0x31AD84u);
    ctx->pc = 0x31AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD7Cu;
    // 0x31ad80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BA48u, 0x31AD7Cu, 0x31AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD84u;
label_31ad84:
    // 0x31ad84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x31AD84u;
    {
        const bool branch_taken_0x31ad84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD84u;
        // 0x31ad88: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad84) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AD8Cu;
    // 0x31ad8c: 0x0  nop
    ctx->pc = 0x31ad8cu;
    // NOP
label_31ad90:
    // 0x31ad90: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x31ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x31ad94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AD94u;
    {
        const bool branch_taken_0x31ad94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD94u;
        // 0x31ad98: 0x3c10001d  lui         $s0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad94) {
            ctx->pc = 0x31ADACu;
            goto label_31adac;
        }
    }
    ctx->pc = 0x31AD9Cu;
    // 0x31ad9c: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x31ad9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31ada0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31ADA0u;
    {
        const bool branch_taken_0x31ada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA0u;
        // 0x31ada4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ada0) {
            ctx->pc = 0x31ADD0u;
            goto label_31add0;
        }
    }
    ctx->pc = 0x31ADA8u;
    // 0x31ada8: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
label_31adac:
    // 0x31adac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31adacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adb0: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31adb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31adb4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31adb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adb8: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31adb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adbc: 0xc0c6eee  jal         func_31BBB8
    ctx->pc = 0x31ADBCu;
    SET_GPR_U32(ctx, 31, 0x31ADC4u);
    ctx->pc = 0x31ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADBCu;
    // 0x31adc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BBB8u, 0x31ADBCu, 0x31ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADC4u;
label_31adc4:
    // 0x31adc4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31ADC4u;
    {
        const bool branch_taken_0x31adc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADC4u;
        // 0x31adc8: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adc4) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31ADCCu;
    // 0x31adcc: 0x0  nop
    ctx->pc = 0x31adccu;
    // NOP
label_31add0:
    // 0x31add0: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31add0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31add4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31add4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31add8: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31add8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31addc: 0xc0c6eb8  jal         func_31BAE0
    ctx->pc = 0x31ADDCu;
    SET_GPR_U32(ctx, 31, 0x31ADE4u);
    ctx->pc = 0x31ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADDCu;
    // 0x31ade0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BAE0u, 0x31ADDCu, 0x31ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADE4u;
label_31ade4:
    // 0x31ade4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31ADE4u;
    {
        const bool branch_taken_0x31ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADE4u;
        // 0x31ade8: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ade4) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31ADECu;
    // 0x31adec: 0x0  nop
    ctx->pc = 0x31adecu;
    // NOP
label_31adf0:
    // 0x31adf0: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31adf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31adf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adf8: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31adf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31adfc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31adfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae00: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ae00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae04: 0xc0c6f26  jal         func_31BC98
    ctx->pc = 0x31AE04u;
    SET_GPR_U32(ctx, 31, 0x31AE0Cu);
    ctx->pc = 0x31AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE04u;
    // 0x31ae08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BC98u, 0x31AE04u, 0x31AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE0Cu;
label_31ae0c:
    // 0x31ae0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31AE0Cu;
    {
        const bool branch_taken_0x31ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE0Cu;
        // 0x31ae10: 0xaf90c594  sw          $s0, -0x3A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae0c) {
            ctx->pc = 0x31AE38u;
            return;
        }
    }
    ctx->pc = 0x31AE14u;
    // 0x31ae14: 0x0  nop
    ctx->pc = 0x31ae14u;
    // NOP
label_31ae18:
    // 0x31ae18: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31ae18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31ae1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae20: 0x26107780  addiu       $s0, $s0, 0x7780
    ctx->pc = 0x31ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30592));
    // 0x31ae24: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31ae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae28: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31ae28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae2c: 0xc0c6f68  jal         func_31BDA0
    ctx->pc = 0x31AE2Cu;
    SET_GPR_U32(ctx, 31, 0x31AE34u);
    ctx->pc = 0x31AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE2Cu;
    // 0x31ae30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BDA0u, 0x31AE2Cu, 0x31AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE34u;
label_31ae34:
    // 0x31ae34: 0xaf90c594  sw          $s0, -0x3A6C($gp)
    ctx->pc = 0x31ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952340), GPR_U32(ctx, 16));
    ctx->pc = 0x31ae38u;
}
