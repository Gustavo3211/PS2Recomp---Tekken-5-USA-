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

// Function: sub_0029E4F8
// Address: 0x29e4f8 - 0x29e558
void sub_0029E4F8_0x29e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E4F8_0x29e4f8");
#endif

    ctx->pc = 0x29e4f8u;

    // 0x29e4f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29e4fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e500: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x29e500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29e504: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29E504u;
    {
        const bool branch_taken_0x29e504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29e504) {
            ctx->pc = 0x29E508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E504u;
            // 0x29e508: 0x8f83cad0  lw          $v1, -0x3530($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E540u;
            goto label_29e540;
        }
    }
    ctx->pc = 0x29E50Cu;
    // 0x29e50c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x29e50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x29e510: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E510u;
    {
        const bool branch_taken_0x29e510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E510u;
        // 0x29e514: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e510) {
            ctx->pc = 0x29E530u;
            goto label_29e530;
        }
    }
    ctx->pc = 0x29E518u;
    // 0x29e518: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e51c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29E51Cu;
    {
        const bool branch_taken_0x29e51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E51Cu;
        // 0x29e520: 0x8f83cad4  lw          $v1, -0x352C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e51c) {
            ctx->pc = 0x29E548u;
            goto label_29e548;
        }
    }
    ctx->pc = 0x29E524u;
    // 0x29e524: 0x3e00008  jr          $ra
    ctx->pc = 0x29E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E524u;
        // 0x29e528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E52Cu;
    // 0x29e52c: 0x0  nop
    ctx->pc = 0x29e52cu;
    // NOP
label_29e530:
    // 0x29e530: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E530u;
    {
        const bool branch_taken_0x29e530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E530u;
        // 0x29e534: 0x8f83cad8  lw          $v1, -0x3528($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e530) {
            ctx->pc = 0x29E550u;
            goto label_29e550;
        }
    }
    ctx->pc = 0x29E538u;
    // 0x29e538: 0x3e00008  jr          $ra
    ctx->pc = 0x29E538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E538u;
        // 0x29e53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E540u;
label_29e540:
    // 0x29e540: 0x3e00008  jr          $ra
    ctx->pc = 0x29E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E540u;
        // 0x29e544: 0x8c62015c  lw          $v0, 0x15C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E548u;
label_29e548:
    // 0x29e548: 0x3e00008  jr          $ra
    ctx->pc = 0x29E548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E548u;
        // 0x29e54c: 0x8c62015c  lw          $v0, 0x15C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E550u;
label_29e550:
    // 0x29e550: 0x3e00008  jr          $ra
    ctx->pc = 0x29E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E550u;
        // 0x29e554: 0x8c62015c  lw          $v0, 0x15C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E558u;
}
