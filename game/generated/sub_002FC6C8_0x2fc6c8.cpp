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

// Function: sub_002FC6C8
// Address: 0x2fc6c8 - 0x2fc6f8
void sub_002FC6C8_0x2fc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC6C8_0x2fc6c8");
#endif

    switch (ctx->pc) {
        case 0x2fc6e8u: goto label_2fc6e8;
        default: break;
    }

    ctx->pc = 0x2fc6c8u;

    // 0x2fc6c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fc6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc6cc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x2fc6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x2fc6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc6d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fc6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc6d8: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x2fc6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
    // 0x2fc6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc6e0: 0xc0bea1c  jal         func_2FA870
    ctx->pc = 0x2FC6E0u;
    SET_GPR_U32(ctx, 31, 0x2FC6E8u);
    ctx->pc = 0x2FC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC6E0u;
    // 0x2fc6e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA870u, 0x2FC6E0u, 0x2FC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6E8u;
label_2fc6e8:
    // 0x2fc6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6ECu;
        // 0x2fc6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6F4u;
    // 0x2fc6f4: 0x0  nop
    ctx->pc = 0x2fc6f4u;
    // NOP
    ctx->pc = 0x2fc6f8u;
}
