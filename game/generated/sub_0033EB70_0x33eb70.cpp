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

// Function: sub_0033EB70
// Address: 0x33eb70 - 0x33ebc8
void sub_0033EB70_0x33eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EB70_0x33eb70");
#endif

    ctx->pc = 0x33eb70u;

    // 0x33eb70: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x33eb70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33eb74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eb78: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33EB78u;
    {
        const bool branch_taken_0x33eb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33eb78) {
            ctx->pc = 0x33EB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EB78u;
            // 0x33eb7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EBA8u;
            goto label_33eba8;
        }
    }
    ctx->pc = 0x33EB80u;
    // 0x33eb80: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33EB80u;
    {
        const bool branch_taken_0x33eb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB80u;
        // 0x33eb84: 0x410bc  dsll32      $v0, $a0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb80) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EB88u;
    // 0x33eb88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33eb8c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33EB8Cu;
    {
        const bool branch_taken_0x33eb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB8Cu;
        // 0x33eb90: 0x410bc  dsll32      $v0, $a0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb8c) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EB94u;
    // 0x33eb94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x33eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33eb98: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EB98u;
    {
        const bool branch_taken_0x33eb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB98u;
        // 0x33eb9c: 0x410bc  dsll32      $v0, $a0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb98) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EBA0u;
    // 0x33eba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33EBA0u;
    {
        const bool branch_taken_0x33eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eba0) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EBA8u;
label_33eba8:
    // 0x33eba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebac: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x33ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_33ebb0:
    // 0x33ebb0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x33ebb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33ebb4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x33ebb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x33ebb8: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x33ebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x33ebbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBC0u;
        // 0x33ebc4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBC8u;
}
