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

// Function: sub_0029E4A8
// Address: 0x29e4a8 - 0x29e4f8
void sub_0029E4A8_0x29e4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E4A8_0x29e4a8");
#endif

    ctx->pc = 0x29e4a8u;

    // 0x29e4a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29e4ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e4b0: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29e4b4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29E4B4u;
    {
        const bool branch_taken_0x29e4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4B4u;
        // 0x29e4b8: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4b4) {
            ctx->pc = 0x29E4E8u;
            goto label_29e4e8;
        }
    }
    ctx->pc = 0x29E4BCu;
    // 0x29e4bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E4BCu;
    {
        const bool branch_taken_0x29e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4BCu;
        // 0x29e4c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4bc) {
            ctx->pc = 0x29E4D8u;
            goto label_29e4d8;
        }
    }
    ctx->pc = 0x29E4C4u;
    // 0x29e4c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e4c8: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E4C8u;
    {
        const bool branch_taken_0x29e4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e4c8) {
            ctx->pc = 0x29E4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E4C8u;
            // 0x29e4cc: 0x8f83cad4  lw          $v1, -0x352C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E4ECu;
            goto label_29e4ec;
        }
    }
    ctx->pc = 0x29E4D0u;
    // 0x29e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4D8u;
label_29e4d8:
    // 0x29e4d8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E4D8u;
    {
        const bool branch_taken_0x29e4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D8u;
        // 0x29e4dc: 0x8f83cad8  lw          $v1, -0x3528($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d8) {
            ctx->pc = 0x29E4ECu;
            goto label_29e4ec;
        }
    }
    ctx->pc = 0x29E4E0u;
    // 0x29e4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4E8u;
label_29e4e8:
    // 0x29e4e8: 0x8f83cad0  lw          $v1, -0x3530($gp)
    ctx->pc = 0x29e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953680)));
label_29e4ec:
    // 0x29e4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4F0u;
        // 0x29e4f4: 0xac620164  sw          $v0, 0x164($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4F8u;
}
