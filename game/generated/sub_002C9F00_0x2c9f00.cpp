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

// Function: sub_002C9F00
// Address: 0x2c9f00 - 0x2c9f40
void sub_002C9F00_0x2c9f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F00_0x2c9f00");
#endif

    switch (ctx->pc) {
        case 0x2c9f10u: goto label_2c9f10;
        default: break;
    }

    ctx->pc = 0x2c9f00u;

    // 0x2c9f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9f08: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2C9F08u;
    SET_GPR_U32(ctx, 31, 0x2C9F10u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2C9F08u, 0x2C9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F10u;
label_2c9f10:
    // 0x2c9f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c9f1c: 0x8f85bb18  lw          $a1, -0x44E8($gp)
    ctx->pc = 0x2c9f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9f20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9f24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9F24u;
    {
        const bool branch_taken_0x2c9f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F24u;
        // 0x2c9f28: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f24) {
            ctx->pc = 0x2C9F34u;
            goto label_2c9f34;
        }
    }
    ctx->pc = 0x2C9F2Cu;
    // 0x2c9f2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c9f30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c9f34:
    // 0x2c9f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F38u;
        // 0x2c9f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9F40u;
}
