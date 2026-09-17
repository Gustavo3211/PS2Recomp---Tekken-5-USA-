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

// Function: sub_002B28C8
// Address: 0x2b28c8 - 0x2b28f0
void sub_002B28C8_0x2b28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B28C8_0x2b28c8");
#endif

    switch (ctx->pc) {
        case 0x2b28e0u: goto label_2b28e0;
        default: break;
    }

    ctx->pc = 0x2b28c8u;

    // 0x2b28c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b28c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b28cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b28ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b28d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b28d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b28d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b28d8: 0xc0ab272  jal         func_2AC9C8
    ctx->pc = 0x2B28D8u;
    SET_GPR_U32(ctx, 31, 0x2B28E0u);
    ctx->pc = 0x2B28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B28D8u;
    // 0x2b28dc: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9C8u, 0x2B28D8u, 0x2B28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28E0u;
label_2b28e0:
    // 0x2b28e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b28e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B28E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28E4u;
        // 0x2b28e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B28E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B28ECu;
    // 0x2b28ec: 0x0  nop
    ctx->pc = 0x2b28ecu;
    // NOP
    ctx->pc = 0x2b28f0u;
}
