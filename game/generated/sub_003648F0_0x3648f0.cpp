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

// Function: sub_003648F0
// Address: 0x3648f0 - 0x364938
void sub_003648F0_0x3648f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003648F0_0x3648f0");
#endif

    ctx->pc = 0x3648f0u;

    // 0x3648f0: 0x8f87c818  lw          $a3, -0x37E8($gp)
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x3648f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3648f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3648f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3648f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3648fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3648fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364900: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x364900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364904: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x364904u;
    {
        const bool branch_taken_0x364904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x364908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364904u;
        // 0x364908: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364904) {
            ctx->pc = 0x36492Cu;
            goto label_36492c;
        }
    }
    ctx->pc = 0x36490Cu;
    // 0x36490c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x364910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x364910u;
    {
        const bool branch_taken_0x364910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364910u;
        // 0x364914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364910) {
            ctx->pc = 0x364928u;
            goto label_364928;
        }
    }
    ctx->pc = 0x364918u;
    // 0x364918: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x364918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36491c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364920: 0x80d918e  j           func_364638
    ctx->pc = 0x364920u;
    ctx->pc = 0x364924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364920u;
    // 0x364924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364638u, 0x364920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x364928u;
label_364928:
    // 0x364928: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x364928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_36492c:
    // 0x36492c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364930: 0x3e00008  jr          $ra
    ctx->pc = 0x364930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364930u;
        // 0x364934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364938u;
}
