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

// Function: sub_00239D10
// Address: 0x239d10 - 0x239db0
void sub_00239D10_0x239d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239D10_0x239d10");
#endif

    ctx->pc = 0x239d10u;

    // 0x239d10: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x239D10u;
    {
        const bool branch_taken_0x239d10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x239D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D10u;
        // 0x239d14: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d10) {
            ctx->pc = 0x239D48u;
            goto label_239d48;
        }
    }
    ctx->pc = 0x239D18u;
    // 0x239d18: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x239d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x239d1c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x239d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x239d20: 0x8cc6aac0  lw          $a2, -0x5540($a2)
    ctx->pc = 0x239d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294945472)));
    // 0x239d24: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x239d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x239d28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x239D28u;
    {
        const bool branch_taken_0x239d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D28u;
        // 0x239d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d28) {
            ctx->pc = 0x239D48u;
            goto label_239d48;
        }
    }
    ctx->pc = 0x239D30u;
    // 0x239d30: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239D30u;
    {
        const bool branch_taken_0x239d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x239D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D30u;
        // 0x239d34: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d30) {
            ctx->pc = 0x239D78u;
            goto label_239d78;
        }
    }
    ctx->pc = 0x239D38u;
    // 0x239d38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D38u;
    {
        const bool branch_taken_0x239d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d38) {
            ctx->pc = 0x239D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D38u;
            // 0x239d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D50u;
            goto label_239d50;
        }
    }
    ctx->pc = 0x239D40u;
    // 0x239d40: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x239D40u;
    {
        const bool branch_taken_0x239d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d40) {
            ctx->pc = 0x239D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D40u;
            // 0x239d44: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D60u;
            goto label_239d60;
        }
    }
    ctx->pc = 0x239D48u;
label_239d48:
    // 0x239d48: 0x3e00008  jr          $ra
    ctx->pc = 0x239D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D50u;
label_239d50:
    // 0x239d50: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x239D50u;
    {
        const bool branch_taken_0x239d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x239d50) {
            ctx->pc = 0x239D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D50u;
            // 0x239d54: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D90u;
            goto label_239d90;
        }
    }
    ctx->pc = 0x239D58u;
    // 0x239d58: 0x3e00008  jr          $ra
    ctx->pc = 0x239D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D60u;
label_239d60:
    // 0x239d60: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239d64: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x239d68: 0xac25d710  sw          $a1, -0x28F0($at)
    ctx->pc = 0x239d68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 5));
    // 0x239d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x239D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D74u;
    // 0x239d74: 0x0  nop
    ctx->pc = 0x239d74u;
    // NOP
label_239d78:
    // 0x239d78: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x239d7c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239d80: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x239d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x239d84: 0xac25d720  sw          $a1, -0x28E0($at)
    ctx->pc = 0x239d84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956832), GPR_U32(ctx, 5));
    // 0x239d88: 0x3e00008  jr          $ra
    ctx->pc = 0x239D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D90u;
label_239d90:
    // 0x239d90: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x239d94: 0x2442d710  addiu       $v0, $v0, -0x28F0
    ctx->pc = 0x239d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
    // 0x239d98: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x239d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239d9c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x239d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239da0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x239da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x239da4: 0x3e00008  jr          $ra
    ctx->pc = 0x239DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DA4u;
        // 0x239da8: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239DACu;
    // 0x239dac: 0x0  nop
    ctx->pc = 0x239dacu;
    // NOP
    ctx->pc = 0x239db0u;
}
