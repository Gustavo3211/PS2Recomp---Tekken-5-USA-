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

// Function: sub_00372F00
// Address: 0x372f00 - 0x373080
void sub_00372F00_0x372f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372F00_0x372f00");
#endif

    switch (ctx->pc) {
        case 0x372f28u: goto label_372f28;
        default: break;
    }

    ctx->pc = 0x372f00u;

    // 0x372f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372f08: 0x2790cc98  addiu       $s0, $gp, -0x3368
    ctx->pc = 0x372f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954136));
    // 0x372f0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x372f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x372f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372F14u;
    {
        const bool branch_taken_0x372f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F14u;
        // 0x372f18: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f14) {
            ctx->pc = 0x372F28u;
            goto label_372f28;
        }
    }
    ctx->pc = 0x372F1Cu;
    // 0x372f1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372f20: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x372F20u;
    SET_GPR_U32(ctx, 31, 0x372F28u);
    ctx->pc = 0x372F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F20u;
    // 0x372f24: 0x24a51bd8  addiu       $a1, $a1, 0x1BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x372F20u, 0x372F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F28u;
label_372f28:
    // 0x372f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372f30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372f34: 0x3e00008  jr          $ra
    ctx->pc = 0x372F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F34u;
        // 0x372f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F3Cu;
    // 0x372f3c: 0x0  nop
    ctx->pc = 0x372f3cu;
    // NOP
    // 0x372f40: 0x3e00008  jr          $ra
    ctx->pc = 0x372F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F40u;
        // 0x372f44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F48u;
    // 0x372f48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x372f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372f4c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x372F4Cu;
    {
        const bool branch_taken_0x372f4c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x372F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F4Cu;
        // 0x372f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f4c) {
            ctx->pc = 0x372F58u;
            goto label_372f58;
        }
    }
    ctx->pc = 0x372F54u;
    // 0x372f54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x372f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_372f58:
    // 0x372f58: 0x3e00008  jr          $ra
    ctx->pc = 0x372F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F60u;
    // 0x372f60: 0x3e00008  jr          $ra
    ctx->pc = 0x372F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F60u;
        // 0x372f64: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F68u;
    // 0x372f68: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x372f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x372f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x372F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F6Cu;
        // 0x372f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F74u;
    // 0x372f74: 0x0  nop
    ctx->pc = 0x372f74u;
    // NOP
    // 0x372f78: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x372f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x372f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x372F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F7Cu;
        // 0x372f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F84u;
    // 0x372f84: 0x0  nop
    ctx->pc = 0x372f84u;
    // NOP
    // 0x372f88: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x372f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x372f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x372F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F8Cu;
        // 0x372f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F94u;
    // 0x372f94: 0x0  nop
    ctx->pc = 0x372f94u;
    // NOP
    // 0x372f98: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x372f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x372f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x372F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F9Cu;
        // 0x372fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FA4u;
    // 0x372fa4: 0x0  nop
    ctx->pc = 0x372fa4u;
    // NOP
    // 0x372fa8: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x372fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x372fac: 0x3e00008  jr          $ra
    ctx->pc = 0x372FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FACu;
        // 0x372fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FB4u;
    // 0x372fb4: 0x0  nop
    ctx->pc = 0x372fb4u;
    // NOP
    // 0x372fb8: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x372fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x372fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x372FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FBCu;
        // 0x372fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FC4u;
    // 0x372fc4: 0x0  nop
    ctx->pc = 0x372fc4u;
    // NOP
    // 0x372fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x372FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FC8u;
        // 0x372fcc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FD0u;
    // 0x372fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x372FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FD0u;
        // 0x372fd4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FD8u;
    // 0x372fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x372FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FD8u;
        // 0x372fdc: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FE0u;
    // 0x372fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x372FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FE0u;
        // 0x372fe4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FE8u;
    // 0x372fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x372FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FE8u;
        // 0x372fec: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FF0u;
    // 0x372ff0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x372ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x372ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x372FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FF4u;
        // 0x372ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FFCu;
    // 0x372ffc: 0x0  nop
    ctx->pc = 0x372ffcu;
    // NOP
    // 0x373000: 0x3e00008  jr          $ra
    ctx->pc = 0x373000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373000u;
        // 0x373004: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373008u;
    // 0x373008: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373008u;
    {
        const bool branch_taken_0x373008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373008u;
        // 0x37300c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373008) {
            ctx->pc = 0x373020u;
            goto label_373020;
        }
    }
    ctx->pc = 0x373010u;
    // 0x373010: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x373010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x373014: 0x3e00008  jr          $ra
    ctx->pc = 0x373014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373014u;
        // 0x373018: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37301Cu;
    // 0x37301c: 0x0  nop
    ctx->pc = 0x37301cu;
    // NOP
label_373020:
    // 0x373020: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x373020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x373024: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x373024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x373028: 0x3e00008  jr          $ra
    ctx->pc = 0x373028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373028u;
        // 0x37302c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373030u;
    // 0x373030: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x373030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x373034: 0x3e00008  jr          $ra
    ctx->pc = 0x373034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373034u;
        // 0x373038: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37303Cu;
    // 0x37303c: 0x0  nop
    ctx->pc = 0x37303cu;
    // NOP
    // 0x373040: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373040u;
    {
        const bool branch_taken_0x373040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x373044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373040u;
        // 0x373044: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373040) {
            ctx->pc = 0x373058u;
            goto label_373058;
        }
    }
    ctx->pc = 0x373048u;
    // 0x373048: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x373048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37304c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x373050: 0x3e00008  jr          $ra
    ctx->pc = 0x373050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373050u;
        // 0x373054: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373058u;
label_373058:
    // 0x373058: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x373058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37305c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x37305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x373060: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x373060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x373064: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x373064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x373068: 0x3e00008  jr          $ra
    ctx->pc = 0x373068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373068u;
        // 0x37306c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373070u;
    // 0x373070: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x373070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x373074: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x373074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x373078: 0x3e00008  jr          $ra
    ctx->pc = 0x373078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373078u;
        // 0x37307c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373080u;
}
