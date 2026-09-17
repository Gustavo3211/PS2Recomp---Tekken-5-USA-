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

// Function: sub_002D1580
// Address: 0x2d1580 - 0x2d15c0
void sub_002D1580_0x2d1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1580_0x2d1580");
#endif

    switch (ctx->pc) {
        case 0x2d15b0u: goto label_2d15b0;
        default: break;
    }

    ctx->pc = 0x2d1580u;

    // 0x2d1580: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d1584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1588: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2d158c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1590: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1590u;
    {
        const bool branch_taken_0x2d1590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1590u;
        // 0x2d1594: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1590) {
            ctx->pc = 0x2D15A8u;
            goto label_2d15a8;
        }
    }
    ctx->pc = 0x2D1598u;
    // 0x2d1598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d159c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15a0: 0x807c24c  j           func_1F0930
    ctx->pc = 0x2D15A0u;
    ctx->pc = 0x2D15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D15A0u;
    // 0x2d15a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    sub_001F0930_0x1f0930(rdram, ctx, runtime); return;
    ctx->pc = 0x2D15A8u;
label_2d15a8:
    // 0x2d15a8: 0xc0a5048  jal         func_294120
    ctx->pc = 0x2D15A8u;
    SET_GPR_U32(ctx, 31, 0x2D15B0u);
    ctx->pc = 0x294120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294120u, 0x2D15A8u, 0x2D15B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D15B0u;
label_2d15b0:
    // 0x2d15b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d15b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d15b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15B4u;
        // 0x2d15b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D15B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D15BCu;
    // 0x2d15bc: 0x0  nop
    ctx->pc = 0x2d15bcu;
    // NOP
    ctx->pc = 0x2d15c0u;
}
