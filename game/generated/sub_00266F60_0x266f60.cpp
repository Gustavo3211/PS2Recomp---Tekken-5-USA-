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

// Function: sub_00266F60
// Address: 0x266f60 - 0x266fc0
void sub_00266F60_0x266f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266F60_0x266f60");
#endif

    ctx->pc = 0x266f60u;

    // 0x266f60: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x266f64: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x266f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x266f68: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x266f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x266f6c: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x266f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x266f70: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x266F70u;
    {
        const bool branch_taken_0x266f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x266F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F70u;
        // 0x266f74: 0x28620111  slti        $v0, $v1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)273) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f70) {
            ctx->pc = 0x266FACu;
            goto label_266fac;
        }
    }
    ctx->pc = 0x266F78u;
    // 0x266f78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266F78u;
    {
        const bool branch_taken_0x266f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F78u;
        // 0x266f7c: 0x286267d3  slti        $v0, $v1, 0x67D3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26579) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f78) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266F80u;
    // 0x266f80: 0x2402010d  addiu       $v0, $zero, 0x10D
    ctx->pc = 0x266f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    // 0x266f84: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266F84u;
    {
        const bool branch_taken_0x266f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f84) {
            ctx->pc = 0x266FACu;
            goto label_266fac;
        }
    }
    ctx->pc = 0x266F8Cu;
    // 0x266f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x266F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F8Cu;
        // 0x266f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F94u;
    // 0x266f94: 0x0  nop
    ctx->pc = 0x266f94u;
    // NOP
label_266f98:
    // 0x266f98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266F98u;
    {
        const bool branch_taken_0x266f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F98u;
        // 0x266f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f98) {
            ctx->pc = 0x266FB8u;
            goto label_266fb8;
        }
    }
    ctx->pc = 0x266FA0u;
    // 0x266fa0: 0x286267d1  slti        $v0, $v1, 0x67D1
    ctx->pc = 0x266fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26577) ? 1 : 0);
    // 0x266fa4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x266FA4u;
    {
        const bool branch_taken_0x266fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266fa4) {
            ctx->pc = 0x266FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266FA4u;
            // 0x266fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266FB8u;
            goto label_266fb8;
        }
    }
    ctx->pc = 0x266FACu;
label_266fac:
    // 0x266fac: 0x3e00008  jr          $ra
    ctx->pc = 0x266FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FACu;
        // 0x266fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266FB4u;
    // 0x266fb4: 0x0  nop
    ctx->pc = 0x266fb4u;
    // NOP
label_266fb8:
    // 0x266fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x266FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266FC0u;
}
