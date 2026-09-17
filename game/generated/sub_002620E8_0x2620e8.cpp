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

// Function: sub_002620E8
// Address: 0x2620e8 - 0x262110
void sub_002620E8_0x2620e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002620E8_0x2620e8");
#endif

    switch (ctx->pc) {
        case 0x262100u: goto label_262100;
        default: break;
    }

    ctx->pc = 0x2620e8u;

    // 0x2620e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2620e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620ec: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2620f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2620f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2620f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2620f8: 0xc098b1e  jal         func_262C78
    ctx->pc = 0x2620F8u;
    SET_GPR_U32(ctx, 31, 0x262100u);
    ctx->pc = 0x2620FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620F8u;
    // 0x2620fc: 0x2484ec30  addiu       $a0, $a0, -0x13D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C78u, 0x2620F8u, 0x262100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262100u;
label_262100:
    // 0x262100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262104: 0x3e00008  jr          $ra
    ctx->pc = 0x262104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262104u;
        // 0x262108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26210Cu;
    // 0x26210c: 0x0  nop
    ctx->pc = 0x26210cu;
    // NOP
    ctx->pc = 0x262110u;
}
