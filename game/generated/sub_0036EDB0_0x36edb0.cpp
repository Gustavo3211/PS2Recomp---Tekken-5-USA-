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

// Function: sub_0036EDB0
// Address: 0x36edb0 - 0x36eeb8
void sub_0036EDB0_0x36edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EDB0_0x36edb0");
#endif

    switch (ctx->pc) {
        case 0x36edd4u: goto label_36edd4;
        case 0x36edecu: goto label_36edec;
        default: break;
    }

    ctx->pc = 0x36edb0u;

    // 0x36edb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36edb4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36edb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36edb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36edbc: 0x24507240  addiu       $s0, $v0, 0x7240
    ctx->pc = 0x36edbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29248));
    // 0x36edc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7240u));
    // 0x36edc4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EDC4u;
    {
        const bool branch_taken_0x36edc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDC4u;
        // 0x36edc8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36edc4) {
            ctx->pc = 0x36EDECu;
            goto label_36edec;
        }
    }
    ctx->pc = 0x36EDCCu;
    // 0x36edcc: 0xc0db8ca  jal         func_36E328
    ctx->pc = 0x36EDCCu;
    SET_GPR_U32(ctx, 31, 0x36EDD4u);
    ctx->pc = 0x36E328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E328u, 0x36EDCCu, 0x36EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDD4u;
label_36edd4:
    // 0x36edd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36edd8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36edd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36eddc: 0x24a5fcc8  addiu       $a1, $a1, -0x338
    ctx->pc = 0x36eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966472));
    // 0x36ede0: 0x24c671b0  addiu       $a2, $a2, 0x71B0
    ctx->pc = 0x36ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29104));
    // 0x36ede4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36EDE4u;
    SET_GPR_U32(ctx, 31, 0x36EDECu);
    ctx->pc = 0x36EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EDE4u;
    // 0x36ede8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36EDE4u, 0x36EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDECu;
label_36edec:
    // 0x36edec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36edecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36edf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36edf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36edf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36edf8: 0x3e00008  jr          $ra
    ctx->pc = 0x36EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDF8u;
        // 0x36edfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE00u;
    // 0x36ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE00u;
        // 0x36ee04: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE08u;
    // 0x36ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE08u;
        // 0x36ee0c: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE10u;
    // 0x36ee10: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x36ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x36ee14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ee18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EE18u;
    {
        const bool branch_taken_0x36ee18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE18u;
        // 0x36ee1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee18) {
            ctx->pc = 0x36EE30u;
            goto label_36ee30;
        }
    }
    ctx->pc = 0x36EE20u;
    // 0x36ee20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36ee24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ee28: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EE28u;
    {
        const bool branch_taken_0x36ee28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36ee28) {
            ctx->pc = 0x36EE3Cu;
            goto label_36ee3c;
        }
    }
    ctx->pc = 0x36EE30u;
label_36ee30:
    // 0x36ee30: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36ee34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ee34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36ee3c:
    // 0x36ee3c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE3Cu;
        // 0x36ee40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE44u;
    // 0x36ee44: 0x0  nop
    ctx->pc = 0x36ee44u;
    // NOP
    // 0x36ee48: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x36ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x36ee4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ee50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EE50u;
    {
        const bool branch_taken_0x36ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE50u;
        // 0x36ee54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee50) {
            ctx->pc = 0x36EE68u;
            goto label_36ee68;
        }
    }
    ctx->pc = 0x36EE58u;
    // 0x36ee58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36ee5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ee60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EE60u;
    {
        const bool branch_taken_0x36ee60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36ee60) {
            ctx->pc = 0x36EE74u;
            goto label_36ee74;
        }
    }
    ctx->pc = 0x36EE68u;
label_36ee68:
    // 0x36ee68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36ee6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36ee74:
    // 0x36ee74: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE74u;
        // 0x36ee78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE7Cu;
    // 0x36ee7c: 0x0  nop
    ctx->pc = 0x36ee7cu;
    // NOP
    // 0x36ee80: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x36ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x36ee84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ee88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EE88u;
    {
        const bool branch_taken_0x36ee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE88u;
        // 0x36ee8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee88) {
            ctx->pc = 0x36EEA0u;
            goto label_36eea0;
        }
    }
    ctx->pc = 0x36EE90u;
    // 0x36ee90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36ee94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ee98: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EE98u;
    {
        const bool branch_taken_0x36ee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36ee98) {
            ctx->pc = 0x36EEACu;
            goto label_36eeac;
        }
    }
    ctx->pc = 0x36EEA0u;
label_36eea0:
    // 0x36eea0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36eea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36eea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eea8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36eeac:
    // 0x36eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x36EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEACu;
        // 0x36eeb0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EEB4u;
    // 0x36eeb4: 0x0  nop
    ctx->pc = 0x36eeb4u;
    // NOP
    ctx->pc = 0x36eeb8u;
}
