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

// Function: sub_00241648
// Address: 0x241648 - 0x241688
void sub_00241648_0x241648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241648_0x241648");
#endif

    switch (ctx->pc) {
        case 0x241678u: goto label_241678;
        default: break;
    }

    ctx->pc = 0x241648u;

    // 0x241648: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x241648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24164c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24164cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241650: 0x8c433b2c  lw          $v1, 0x3B2C($v0)
    ctx->pc = 0x241650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x163B2Cu));
    // 0x241654: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x241654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x241658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24165c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24165Cu;
    {
        const bool branch_taken_0x24165c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24165Cu;
        // 0x241660: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24165c) {
            ctx->pc = 0x241678u;
            goto label_241678;
        }
    }
    ctx->pc = 0x241664u;
    // 0x241664: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x241668: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241668u;
    {
        const bool branch_taken_0x241668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241668u;
        // 0x24166c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241668) {
            ctx->pc = 0x241678u;
            goto label_241678;
        }
    }
    ctx->pc = 0x241670u;
    // 0x241670: 0xc092984  jal         func_24A610
    ctx->pc = 0x241670u;
    SET_GPR_U32(ctx, 31, 0x241678u);
    ctx->pc = 0x24A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A610u, 0x241670u, 0x241678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241678u;
label_241678:
    // 0x241678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24167c: 0x3e00008  jr          $ra
    ctx->pc = 0x24167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24167Cu;
        // 0x241680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241684u;
    // 0x241684: 0x0  nop
    ctx->pc = 0x241684u;
    // NOP
    ctx->pc = 0x241688u;
}
