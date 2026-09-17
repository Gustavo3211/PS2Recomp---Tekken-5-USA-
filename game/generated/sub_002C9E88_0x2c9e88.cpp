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

// Function: sub_002C9E88
// Address: 0x2c9e88 - 0x2c9ec0
void sub_002C9E88_0x2c9e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E88_0x2c9e88");
#endif

    switch (ctx->pc) {
        case 0x2c9e98u: goto label_2c9e98;
        default: break;
    }

    ctx->pc = 0x2c9e88u;

    // 0x2c9e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9e90: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2C9E90u;
    SET_GPR_U32(ctx, 31, 0x2C9E98u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2C9E90u, 0x2C9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E98u;
label_2c9e98:
    // 0x2c9e98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ea0: 0x8f84bb18  lw          $a0, -0x44E8($gp)
    ctx->pc = 0x2c9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9ea4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c9ea8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9EA8u;
    {
        const bool branch_taken_0x2c9ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EA8u;
        // 0x2c9eac: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ea8) {
            ctx->pc = 0x2C9EB4u;
            goto label_2c9eb4;
        }
    }
    ctx->pc = 0x2C9EB0u;
    // 0x2c9eb0: 0x906201ae  lbu         $v0, 0x1AE($v1)
    ctx->pc = 0x2c9eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 430)));
label_2c9eb4:
    // 0x2c9eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EB8u;
        // 0x2c9ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9EC0u;
}
