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

// Function: sub_002D1CA0
// Address: 0x2d1ca0 - 0x2d1cf8
void sub_002D1CA0_0x2d1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1CA0_0x2d1ca0");
#endif

    switch (ctx->pc) {
        case 0x2d1cccu: goto label_2d1ccc;
        default: break;
    }

    ctx->pc = 0x2d1ca0u;

    // 0x2d1ca0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d1ca4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1ca8: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x2d1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2d1cac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d1cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d1cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1cb4: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2d1cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2d1cb8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1CB8u;
    {
        const bool branch_taken_0x2d1cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CB8u;
        // 0x2d1cbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cb8) {
            ctx->pc = 0x2D1CE8u;
            goto label_2d1ce8;
        }
    }
    ctx->pc = 0x2D1CC0u;
    // 0x2d1cc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d1cc4: 0xc0a1386  jal         func_284E18
    ctx->pc = 0x2D1CC4u;
    SET_GPR_U32(ctx, 31, 0x2D1CCCu);
    ctx->pc = 0x2D1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CC4u;
    // 0x2d1cc8: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E18u, 0x2D1CC4u, 0x2D1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CCCu;
label_2d1ccc:
    // 0x2d1ccc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d1cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cd4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1CD4u;
    {
        const bool branch_taken_0x2d1cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CD4u;
        // 0x2d1cd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cd4) {
            ctx->pc = 0x2D1CE4u;
            goto label_2d1ce4;
        }
    }
    ctx->pc = 0x2D1CDCu;
    // 0x2d1cdc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1CDCu;
    {
        const bool branch_taken_0x2d1cdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CDCu;
        // 0x2d1ce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cdc) {
            ctx->pc = 0x2D1CECu;
            goto label_2d1cec;
        }
    }
    ctx->pc = 0x2D1CE4u;
label_2d1ce4:
    // 0x2d1ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ce8:
    // 0x2d1ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1cec:
    // 0x2d1cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CECu;
        // 0x2d1cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1CF4u;
    // 0x2d1cf4: 0x0  nop
    ctx->pc = 0x2d1cf4u;
    // NOP
    ctx->pc = 0x2d1cf8u;
}
