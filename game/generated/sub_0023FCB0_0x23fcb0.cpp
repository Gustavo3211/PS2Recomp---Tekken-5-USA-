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

// Function: sub_0023FCB0
// Address: 0x23fcb0 - 0x23fd08
void sub_0023FCB0_0x23fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FCB0_0x23fcb0");
#endif

    ctx->pc = 0x23fcb0u;

    // 0x23fcb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23fcb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcb4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fcb8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FCB8u;
    {
        const bool branch_taken_0x23fcb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCB8u;
        // 0x23fcbc: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcb8) {
            ctx->pc = 0x23FCD8u;
            goto label_23fcd8;
        }
    }
    ctx->pc = 0x23FCC0u;
    // 0x23fcc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fcc4: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FCC4u;
    {
        const bool branch_taken_0x23fcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fcc4) {
            ctx->pc = 0x23FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FCC4u;
            // 0x23fcc8: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FCF0u;
            goto label_23fcf0;
        }
    }
    ctx->pc = 0x23FCCCu;
    // 0x23fccc: 0x3e00008  jr          $ra
    ctx->pc = 0x23FCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCCCu;
        // 0x23fcd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FCD4u;
    // 0x23fcd4: 0x0  nop
    ctx->pc = 0x23fcd4u;
    // NOP
label_23fcd8:
    // 0x23fcd8: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23fcdc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23fce0: 0x8c84e84c  lw          $a0, -0x17B4($a0)
    ctx->pc = 0x23fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961228)));
    // 0x23fce4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCE4u;
        // 0x23fce8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FCECu;
    // 0x23fcec: 0x0  nop
    ctx->pc = 0x23fcecu;
    // NOP
label_23fcf0:
    // 0x23fcf0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23fcf4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23fcf8: 0x8c84b734  lw          $a0, -0x48CC($a0)
    ctx->pc = 0x23fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x23fcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x23FCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCFCu;
        // 0x23fd00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FD04u;
    // 0x23fd04: 0x0  nop
    ctx->pc = 0x23fd04u;
    // NOP
    ctx->pc = 0x23fd08u;
}
