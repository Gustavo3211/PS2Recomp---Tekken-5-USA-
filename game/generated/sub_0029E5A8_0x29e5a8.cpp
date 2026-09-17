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

// Function: sub_0029E5A8
// Address: 0x29e5a8 - 0x29e608
void sub_0029E5A8_0x29e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E5A8_0x29e5a8");
#endif

    ctx->pc = 0x29e5a8u;

    // 0x29e5a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29e5ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e5b0: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29e5b4: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29E5B4u;
    {
        const bool branch_taken_0x29e5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29e5b4) {
            ctx->pc = 0x29E5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E5B4u;
            // 0x29e5b8: 0x8f83cad0  lw          $v1, -0x3530($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5F0u;
            goto label_29e5f0;
        }
    }
    ctx->pc = 0x29E5BCu;
    // 0x29e5bc: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x29e5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x29e5c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E5C0u;
    {
        const bool branch_taken_0x29e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5C0u;
        // 0x29e5c4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5c0) {
            ctx->pc = 0x29E5E0u;
            goto label_29e5e0;
        }
    }
    ctx->pc = 0x29E5C8u;
    // 0x29e5c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e5cc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29E5CCu;
    {
        const bool branch_taken_0x29e5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5CCu;
        // 0x29e5d0: 0x8f83cad4  lw          $v1, -0x352C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5cc) {
            ctx->pc = 0x29E5F8u;
            goto label_29e5f8;
        }
    }
    ctx->pc = 0x29E5D4u;
    // 0x29e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5D4u;
        // 0x29e5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5DCu;
    // 0x29e5dc: 0x0  nop
    ctx->pc = 0x29e5dcu;
    // NOP
label_29e5e0:
    // 0x29e5e0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E5E0u;
    {
        const bool branch_taken_0x29e5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5E0u;
        // 0x29e5e4: 0x8f83cad8  lw          $v1, -0x3528($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5e0) {
            ctx->pc = 0x29E600u;
            goto label_29e600;
        }
    }
    ctx->pc = 0x29E5E8u;
    // 0x29e5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5E8u;
        // 0x29e5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5F0u;
label_29e5f0:
    // 0x29e5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F0u;
        // 0x29e5f4: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5F8u;
label_29e5f8:
    // 0x29e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F8u;
        // 0x29e5fc: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E600u;
label_29e600:
    // 0x29e600: 0x3e00008  jr          $ra
    ctx->pc = 0x29E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E600u;
        // 0x29e604: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E608u;
}
