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

// Function: sub_002F20E8
// Address: 0x2f20e8 - 0x2f2120
void sub_002F20E8_0x2f20e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F20E8_0x2f20e8");
#endif

    switch (ctx->pc) {
        case 0x2f2110u: goto label_2f2110;
        default: break;
    }

    ctx->pc = 0x2f20e8u;

    // 0x2f20e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f20e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f20ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f20f0: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x2f20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2f20f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F20F4u;
    {
        const bool branch_taken_0x2f20f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20F4u;
        // 0x2f20f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20f4) {
            ctx->pc = 0x2F2108u;
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F20FCu;
    // 0x2f20fc: 0x80bc848  j           func_2F2120
    ctx->pc = 0x2F20FCu;
    ctx->pc = 0x2F2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20FCu;
    // 0x2f2100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2120u;
    sub_002F2120_0x2f2120(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2104u;
    // 0x2f2104: 0x0  nop
    ctx->pc = 0x2f2104u;
    // NOP
label_2f2108:
    // 0x2f2108: 0xc0bcb5e  jal         func_2F2D78
    ctx->pc = 0x2F2108u;
    SET_GPR_U32(ctx, 31, 0x2F2110u);
    ctx->pc = 0x2F2D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2D78u, 0x2F2108u, 0x2F2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2110u;
label_2f2110:
    // 0x2f2110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f2110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2114: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2114u;
        // 0x2f2118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F211Cu;
    // 0x2f211c: 0x0  nop
    ctx->pc = 0x2f211cu;
    // NOP
    ctx->pc = 0x2f2120u;
}
