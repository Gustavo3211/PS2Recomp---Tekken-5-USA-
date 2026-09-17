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

// Function: sub_00298A88
// Address: 0x298a88 - 0x298ac8
void sub_00298A88_0x298a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A88_0x298a88");
#endif

    ctx->pc = 0x298a88u;

    // 0x298a88: 0x24a4ffec  addiu       $a0, $a1, -0x14
    ctx->pc = 0x298a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x298a8c: 0x28a60003  slti        $a2, $a1, 0x3
    ctx->pc = 0x298a8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298a90: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298A90u;
    {
        const bool branch_taken_0x298a90 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x298A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A90u;
        // 0x298a94: 0x2c830003  sltiu       $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a90) {
            ctx->pc = 0x298AA0u;
            goto label_298aa0;
        }
    }
    ctx->pc = 0x298A98u;
    // 0x298a98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298A98u;
    {
        const bool branch_taken_0x298a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A98u;
        // 0x298a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a98) {
            ctx->pc = 0x298AB0u;
            goto label_298ab0;
        }
    }
    ctx->pc = 0x298AA0u;
label_298aa0:
    // 0x298aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298aa4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x298aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x298aa8: 0x46280a  movz        $a1, $v0, $a2
    ctx->pc = 0x298aa8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x298aac: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x298aacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_298ab0:
    // 0x298ab0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x298ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x298ab4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298abc: 0x3e00008  jr          $ra
    ctx->pc = 0x298ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298ABCu;
        // 0x298ac0: 0x8c42c618  lw          $v0, -0x39E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952472)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298AC4u;
    // 0x298ac4: 0x0  nop
    ctx->pc = 0x298ac4u;
    // NOP
    ctx->pc = 0x298ac8u;
}
