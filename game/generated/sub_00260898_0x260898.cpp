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

// Function: sub_00260898
// Address: 0x260898 - 0x2608d8
void sub_00260898_0x260898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260898_0x260898");
#endif

    ctx->pc = 0x260898u;

    // 0x260898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26089c: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x26089cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2608a0: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2608A0u;
    {
        const bool branch_taken_0x2608a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2608A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608A0u;
        // 0x2608a4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608a0) {
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x2608A8u;
    // 0x2608a8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2608A8u;
    {
        const bool branch_taken_0x2608a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2608a8) {
            ctx->pc = 0x2608ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2608A8u;
            // 0x2608ac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2608B8u;
            goto label_2608b8;
        }
    }
    ctx->pc = 0x2608B0u;
    // 0x2608b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2608B0u;
    {
        const bool branch_taken_0x2608b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608B0u;
        // 0x2608b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608b0) {
            ctx->pc = 0x2608C8u;
            goto label_2608c8;
        }
    }
    ctx->pc = 0x2608B8u;
label_2608b8:
    // 0x2608b8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2608B8u;
    {
        const bool branch_taken_0x2608b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2608BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608B8u;
        // 0x2608bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608b8) {
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x2608C0u;
    // 0x2608c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2608c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2608c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2608c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2608c8:
    // 0x2608c8: 0x54a30001  bnel        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2608C8u;
    {
        const bool branch_taken_0x2608c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2608c8) {
            ctx->pc = 0x2608CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2608C8u;
            // 0x2608cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x2608D0u;
label_2608d0:
    // 0x2608d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2608D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2608D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2608D8u;
}
