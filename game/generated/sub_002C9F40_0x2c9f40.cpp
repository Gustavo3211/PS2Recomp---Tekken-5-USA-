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

// Function: sub_002C9F40
// Address: 0x2c9f40 - 0x2c9f78
void sub_002C9F40_0x2c9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F40_0x2c9f40");
#endif

    switch (ctx->pc) {
        case 0x2c9f50u: goto label_2c9f50;
        default: break;
    }

    ctx->pc = 0x2c9f40u;

    // 0x2c9f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9f48: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2C9F48u;
    SET_GPR_U32(ctx, 31, 0x2C9F50u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2C9F48u, 0x2C9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F50u;
label_2c9f50:
    // 0x2c9f50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9f50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f58: 0x8f84bb18  lw          $a0, -0x44E8($gp)
    ctx->pc = 0x2c9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c9f60: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9F60u;
    {
        const bool branch_taken_0x2c9f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F60u;
        // 0x2c9f64: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f60) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F68u;
    // 0x2c9f68: 0x8c6201a8  lw          $v0, 0x1A8($v1)
    ctx->pc = 0x2c9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
label_2c9f6c:
    // 0x2c9f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F70u;
        // 0x2c9f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9F78u;
}
