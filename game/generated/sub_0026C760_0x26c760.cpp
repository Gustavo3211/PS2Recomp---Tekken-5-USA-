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

// Function: sub_0026C760
// Address: 0x26c760 - 0x26c7c0
void sub_0026C760_0x26c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C760_0x26c760");
#endif

    ctx->pc = 0x26c760u;

    // 0x26c760: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x26c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c768: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c76c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26c76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26c770: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C770u;
    {
        const bool branch_taken_0x26c770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C770u;
        // 0x26c774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c770) {
            ctx->pc = 0x26C780u;
            goto label_26c780;
        }
    }
    ctx->pc = 0x26C778u;
    // 0x26c778: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26c778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26c77c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c77cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c780:
    // 0x26c780: 0x3e00008  jr          $ra
    ctx->pc = 0x26C780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C780u;
        // 0x26c784: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C788u;
    // 0x26c788: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x26c788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c78c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26c790: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c798: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C798u;
    {
        const bool branch_taken_0x26c798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C798u;
        // 0x26c79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c798) {
            ctx->pc = 0x26C7B4u;
            goto label_26c7b4;
        }
    }
    ctx->pc = 0x26C7A0u;
    // 0x26c7a0: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26c7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26c7a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C7A4u;
    {
        const bool branch_taken_0x26c7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c7a4) {
            ctx->pc = 0x26C7B4u;
            goto label_26c7b4;
        }
    }
    ctx->pc = 0x26C7ACu;
    // 0x26c7ac: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26c7acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26c7b0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c7b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c7b4:
    // 0x26c7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B4u;
        // 0x26c7b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C7BCu;
    // 0x26c7bc: 0x0  nop
    ctx->pc = 0x26c7bcu;
    // NOP
    ctx->pc = 0x26c7c0u;
}
