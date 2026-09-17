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

// Function: sub_003648A8
// Address: 0x3648a8 - 0x3648f0
void sub_003648A8_0x3648a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003648A8_0x3648a8");
#endif

    ctx->pc = 0x3648a8u;

    // 0x3648a8: 0x8f83c818  lw          $v1, -0x37E8($gp)
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x3648ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3648b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3648b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3648b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3648b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648b8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3648B8u;
    {
        const bool branch_taken_0x3648b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3648BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3648B8u;
        // 0x3648bc: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3648b8) {
            ctx->pc = 0x3648E4u;
            goto label_3648e4;
        }
    }
    ctx->pc = 0x3648C0u;
    // 0x3648c0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3648c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3648c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3648C4u;
    {
        const bool branch_taken_0x3648c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3648C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3648C4u;
        // 0x3648c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3648c4) {
            ctx->pc = 0x3648E0u;
            goto label_3648e0;
        }
    }
    ctx->pc = 0x3648CCu;
    // 0x3648cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3648ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3648d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648d4: 0x80d918e  j           func_364638
    ctx->pc = 0x3648D4u;
    ctx->pc = 0x3648D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648D4u;
    // 0x3648d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364638u, 0x3648D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3648DCu;
    // 0x3648dc: 0x0  nop
    ctx->pc = 0x3648dcu;
    // NOP
label_3648e0:
    // 0x3648e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3648e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3648e4:
    // 0x3648e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3648e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3648e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3648E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3648ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3648E8u;
        // 0x3648ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3648E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3648F0u;
}
