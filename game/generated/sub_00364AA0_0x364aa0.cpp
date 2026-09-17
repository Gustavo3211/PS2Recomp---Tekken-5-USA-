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

// Function: sub_00364AA0
// Address: 0x364aa0 - 0x364ae0
void sub_00364AA0_0x364aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364AA0_0x364aa0");
#endif

    ctx->pc = 0x364aa0u;

    // 0x364aa0: 0x8f83c818  lw          $v1, -0x37E8($gp)
    ctx->pc = 0x364aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x364aa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364aa8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x364aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364aac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x364aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364ab4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x364ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x364ab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364AB8u;
    {
        const bool branch_taken_0x364ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364AB8u;
        // 0x364abc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ab8) {
            ctx->pc = 0x364AD0u;
            goto label_364ad0;
        }
    }
    ctx->pc = 0x364AC0u;
    // 0x364ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364ac4: 0x80d91ca  j           func_364728
    ctx->pc = 0x364AC4u;
    ctx->pc = 0x364AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AC4u;
    // 0x364ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364728u, 0x364AC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x364ACCu;
    // 0x364acc: 0x0  nop
    ctx->pc = 0x364accu;
    // NOP
label_364ad0:
    // 0x364ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x364AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364AD4u;
        // 0x364ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364ADCu;
    // 0x364adc: 0x0  nop
    ctx->pc = 0x364adcu;
    // NOP
    ctx->pc = 0x364ae0u;
}
